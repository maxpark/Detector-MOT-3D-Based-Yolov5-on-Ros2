//
// Created by mzc on 2021/2/18.
//
#include "tracker/tracker.h"
#include "transformer/transformer.h"
Tracker::Tracker(cv::Mat a,cv::Mat h,cv::Mat p,cv::Mat q,cv::Mat r,float max_iou,int birth,int death) {
    trackIdNow=0;
    max_Iou=max_iou;
    max_age=100;
    birth_period=birth;
    death_period=death;
    A=a;Q=q;H=h;R=r;P=p;
}
Tracker::Tracker(){
}
void Tracker::new_track(track &tr) {
    tr.age=1;
    tr.lost3D=0;
    tr.Nomatched=0;
    tr.ID=trackIdNow;
//    tr.Information_3D= false;
    tr.enable= false;
    tr.kf=Kalmanf(StateNum,MeasureNum);
    tr.kf.KalmanFilterSetup(A,H,P,Q,R);
    tr.kf.Kalmaninitstate({tr.p.x,tr.p.y,tr.p.z,(float )tr.Bbox.x,(float )tr.Bbox.y,(float )tr.Bbox.width,(float )tr.Bbox.height
                                  ,tr.v.vx,tr.v.vy,tr.v.vz,tr.ve.vx,tr.ve.vy,tr.ve.vz,tr.ve.vz});
//    if (trackIdNow==3)
//    tr.trace.push_back(cv::Point3f (tr.p.x,tr.p.y,tr.p.z));
    tracks.insert(std::pair<int,track>(trackIdNow,tr));
    track_filter.insert(std::pair<int,std::vector<Position>>(trackIdNow,{tr.p}));
    trackIdNow++;
}
void Tracker::trackinit(std::vector<Detection> &detections){
    for (auto detection:detections){
        track temp;
        temp.Information_3D=detection.Information_3D;
        temp.p=detection.p;temp.s=detection.s;
        temp.v={0.0,0.0,0.0};
        temp.Bbox=detection.Bbox;
        temp.ve={0.0,0.0,0.0};
        temp.ClassID=detection.ClassID;
        new_track(temp);
    }
}
void Tracker::predict(float dt) {
    kalman_output.clear();
    for (auto track:tracks) {
//        track.second.kf.KalmanSetTransitionMatrix(dt);
        auto predict=track.second.kf.Kalmanprediction();
//        if (track.second.enable)
        kalman_output.insert(std::pair<int,std::array<float,StateNum>>(track.first,predict));
    }
}
void Tracker::update(std::vector<Detection> &detections){
    std::vector<int> dIds;
    std::vector<int> tIds;
    for(auto track:tracks){
//        if (track.second.enable)
        tIds.push_back(track.first);
    }
    Matcher3D matcher3d;
    auto cost_matrix=matcher3d.Iou_cost_2D(kalman_output,detections,tracks);
    if (cost_matrix.empty())//??????track???0??????????????????????????????bug
        cout<<"cost martix empty!"<<std::endl;
    else
        matcher3d.Matching(dIds);
    for (int i = 0; i < detections.size(); ++i){
        //detection?????? ???????????????????????????trace ??????????????????
        int det_idx=i;
        int trackID;
        auto iter=std::find(dIds.begin(),dIds.end(),i);
        if(iter>=dIds.end()){
//            std::cout<<"new--"<<tracks.size()<<std::endl;
            //????????????????????????trace??????
            track temp;
            trackID=trackIdNow;
            temp.p=detections.at(det_idx).p;
            temp.s=detections.at(det_idx).s;
            temp.ve={0.0,0.0,0.0};
            temp.v={0,0,0};
            temp.Bbox=detections.at(det_idx).Bbox;//debug ??????????????? kf???bug
            temp.ClassID=detections.at(det_idx).ClassID;
            new_track(temp);//????????????trace
//            tracks.at(trackID).enable= false;
//            dIds.erase(dIds.begin()+trackindx);
//            tIds.push_back(trackID);
        }
            //DEC????????????trace???????????????????????????
        else {
//            std::cout<<"matcherd"<<std::endl;
            int trackindx=iter-dIds.begin();//dec?????????tarck??????
            trackID=tIds.at(trackindx);
            //??????????????? ???????????? ??????
            tracks.at(trackID).p={kalman_output.at(trackID).at(0),kalman_output.at(trackID).at(1),kalman_output.at(trackID).at(2)};
            tracks.at(trackID).Bbox={(int )kalman_output.at(trackID).at(3),(int)kalman_output.at(trackID).at(4),
                                     (int)kalman_output.at(trackID).at(5),(int )kalman_output.at(trackID).at(6)};
            tracks.at(trackID).v={kalman_output.at(trackID).at(7),kalman_output.at(trackID).at(8),kalman_output.at(trackID).at(9)};
            //???????????????????????? ??????????????? 0-1
            if (tracks.at(trackID).enable){
                tracks.at(trackID).ve={kalman_output.at(trackID).at(10),kalman_output.at(trackID).at(11),
                                       std::min(std::abs(kalman_output.at(trackID).at(12)),abs(kalman_output.at(trackID).at(13)))==
                                       std::abs(kalman_output.at(trackID).at(12)) ? kalman_output.at(trackID).at(12)/kalman_output.at(trackID).at(5): kalman_output.at(trackID).at(13)/kalman_output.at(trackID).at(6)};
//                tracks.at(trackID).ve={(float )(tracks.at(trackID).ve.vz>0 ? 1.0:-1.0),(float )(-tracks.at(trackID).ve.vx>0 ? 1.0:-1.0),(float )(-tracks.at(trackID).ve.vy>0 ? 1.0:-1.0)};
            }
            else{
                tracks.at(trackID).ve={0,0,0};
            }
//            tracks.at(trackID).Bbox=detections.at(det_idx).Bbox;
            tracks.at(trackID).ClassID=detections.at(det_idx).ClassID;
            tracks.at(trackID).classname=detections.at(det_idx).classname+std::to_string(trackID);
            if (tracks.at(trackID).Information_3D){
                if (!detections.at(det_idx).Information_3D){
                    if (tracks.at(trackID).lost3D>death_period){//3D ??????2D tracker ????????????????????? ??????3????????????3D??????
                        tracks.at(trackID).trace.clear();//????????????
                        tracks.at(trackID).kf.Kalmaninitstate({0,0,0,(float )detections.at(det_idx).Bbox.x,(float )detections.at(det_idx).Bbox.y,(float )detections.at(det_idx).Bbox.width,(float )detections.at(det_idx).Bbox.height
                                                                      ,0,0,0,tracks.at(trackID).ve.vx,tracks.at(trackID).ve.vy,tracks.at(trackID).ve.vz,tracks.at(trackID).ve.vz});
                        tracks.at(trackID).kf.Kalmanprediction();//????????????????????????
                    }else{
                        //???3D?????????2D
                        tracks.at(trackID).lost3D++;
                    }

                } else{
                    //???????????????3D??????????????????
//                        if (update_filter(trackID, detections.at(det_idx).p)== false){
//                            tracks.at(trackID).lost3D++;
//                            if (tracks.at(trackID).lost3D>death_period)
//                                tracks.at(trackID).Information_3D= false;//???????????????2D
//                        }
//                        else{
                            tracks.at(trackID).lost3D=0;
                            tracks.at(trackID).s    =   detections.at(det_idx).s;
                            tracks.at(trackID).viz=detections.at(det_idx).viz;
                            tracks.at(trackID).points=detections.at(det_idx).points;
                            tracks.at(trackID).trace.push_back(cv::Point3f (tracks.at(trackID).p.x,tracks.at(trackID).p.y,tracks.at(trackID).p.z));
//                        }
                }
            } else{
                if (detections.at(det_idx).Information_3D){//???2D?????????3D
//                    if (update_filter(trackID, detections.at(det_idx).p)== false){
//                        tracks.at(trackID).lost3D++;
//                        detections.at(det_idx).Information_3D= false;//????????????3D
//                    } else{
//                        Velocity vinit={track_filter.at(trackID).at(2).x-track_filter.at(trackID).at(1).x,track_filter.at(trackID).at(2).y-track_filter.at(trackID).at(1).y,track_filter.at(trackID).at(2).z-track_filter.at(trackID).at(1).z};
//                        std::cout<<"vint:x"<<vinit.vx<<std::endl;
                        tracks.at(trackID).lost3D=0;
                        tracks.at(trackID).s    =   detections.at(det_idx).s;
                        tracks.at(trackID).p    =   detections.at(det_idx).p;
                        tracks.at(trackID).v    = {0,0,0};
                        tracks.at(trackID).viz=detections.at(det_idx).viz;
                        tracks.at(trackID).points=detections.at(det_idx).points;
                        tracks.at(trackID).trace.push_back(cv::Point3f (detections.at(det_idx).p.x,detections.at(det_idx).p.y,detections.at(det_idx).p.z));//?????????????????????????????????????????????
                        tracks.at(trackID).kf.Kalmaninitstate({detections.at(det_idx).p.x,detections.at(det_idx).p.y,detections.at(det_idx).p.z,(float )detections.at(det_idx).Bbox.x,(float )detections.at(det_idx).Bbox.y,(float )detections.at(det_idx).Bbox.width,(float )detections.at(det_idx).Bbox.height
                                                                      ,0,0,0,tracks.at(trackID).ve.vx,tracks.at(trackID).ve.vy,tracks.at(trackID).ve.vz,tracks.at(trackID).ve.vz});
//                    }
//                    tracks.at(trackID).kf.Kalmanprediction();//???????????????????????? ??????3D?????????
                }
            }
            //?????????????????????
            tracks.at(trackID).pe={(kalman_output.at(trackID).at(3)+kalman_output.at(trackID).at(5)/2-Img_height/2)/Img_height/2,(kalman_output.at(trackID).at(4)+kalman_output.at(trackID).at(6)/2-Img_width/2)/Img_width/2,1.0};
        }
    }
    for (int i = 0; i < tIds.size(); ++i){
        //trace??????---??????trace ??????????????????trace???????????? update
        int det_idx = -1;
        if (dIds.size()>0)
            det_idx = dIds[i];
        int trackID = tIds[i];
//        std::cout<<"detid"<<det_idx<<std::endl;
        tracks.at(trackID).age++;//??????????????????age
        if (det_idx<0||cost_matrix[i][det_idx] > max_Iou) {//????????????
//            std::cout <<trackID<<":nomatched:"<<std::endl;//<<cost_matrix[i][det_idx]
            tracks.at(trackID).Nomatched++;//???????????????
            if (tracks.at(trackID).Nomatched >= death_period){
                //????????????????????????track
                remove_track(trackID);
                continue;
//                cout<<"Track:"<<tIds.size()<<" Det:"<<dIds.size()<<endl;
//                tIds.erase(std::find(tIds.begin(),tIds.end(),trackID));//??????tIds???index???????????? //SB!!!
            }
            else{//????????????????????????????????? ???????????? ????????????????????????
                Detection det;//??????????????????DET
                det.p={tracks.at(trackID).p.x+tracks.at(trackID).v.vx,tracks.at(trackID).p.y+tracks.at(trackID).v.vy,tracks.at(trackID).p.z+tracks.at(trackID).v.vz};//{kalman_output.at(trackID).at(0),kalman_output.at(trackID).at(1),kalman_output.at(trackID).at(2)};
                det.Bbox={(int)kalman_output.at(trackID).at(3),(int)kalman_output.at(trackID).at(4)
                        ,(int)kalman_output.at(trackID).at(5),(int )kalman_output.at(trackID).at(6)};
//                cout<<trackID<<":"<<det.Bbox.x<<" "<<det.Bbox.x<<" "<<det.Bbox.width<<" "<<det.Bbox.height<<endl;
                tracks.at(trackID).kf.kalmanUpdate(
                        {det.p.x, det.p.y, det.p.z,
                         (float )det.Bbox.x,(float )det.Bbox.y,(float )det.Bbox.width,(float )det.Bbox.height});
            }
        }
        else {
            //trace??????
            tracks.at(trackID).Nomatched = 0;//???????????????
            //??????tracks?????????
            detections.at(det_idx).ID = trackID;
            //????????????
//            if (detections.at(det_idx).Information_3D== false&&tracks.at(trackID).Information_3D){//??????????????????3D???????????????
//                detections.at(det_idx).p={kalman_output.at(trackID).at(0),kalman_output.at(trackID).at(1),kalman_output.at(trackID).at(2)};
//                std::cout<<"NO 3D Again"<<trackID<<" "<<kalman_output.at(trackID).at(0)<<" "<<kalman_output.at(trackID).at(1)<<" "<<kalman_output.at(trackID).at(2)<<std::endl;
//            }
            if (detections.at(det_idx).Information_3D!=tracks.at(trackID).Information_3D){
                //2D-3D??????????????????????????????
                if (tracks.at(trackID).Information_3D&&tracks.at(trackID).lost3D<death_period){
                    detections.at(det_idx).p={tracks.at(trackID).p.x,tracks.at(trackID).p.y,tracks.at(trackID).p.z};
                }
                else{
                    tracks.at(trackID).Information_3D=detections.at(det_idx).Information_3D;
                    continue;
                }
            }
//            if (detections.at(det_idx).Information_3D&&tracks.at(trackID).lost3D>0)// lost3D ????????????????????????
//                detections.at(det_idx).p={tracks.at(trackID).p.x,tracks.at(trackID).p.y,tracks.at(trackID).p.z};
            tracks.at(trackID).kf.kalmanUpdate(
                    {detections.at(det_idx).p.x, detections.at(det_idx).p.y, detections.at(det_idx).p.z,
                     (float )detections.at(det_idx).Bbox.x,(float )detections.at(det_idx).Bbox.y,(float )detections.at(det_idx).Bbox.width,(float )detections.at(det_idx).Bbox.height});
        }
        check_state(trackID);
    }
//    std::cout<<"track list over"<<std::endl;
}
//?????????????????????
bool  Tracker::update_filter(int id,Position & update){
    std::cout<<"update_f"<<std::endl;
    track_filter.at(id).push_back(update);
    auto trc=track_filter.at(id);
    float d0,d1,d2,T=0.2;
    bool f0= false,f1= false,f2= false;
    if (trc.size()<3)
        {
            return false;
        } else{
            d0= sqrt((trc.at(1).x-trc.at(0).x)*(trc.at(1).x-trc.at(0).x)+ (trc.at(1).y-trc.at(0).y)*(trc.at(1).y-trc.at(0).y));
            std::cout<<"d0"<<d0<<" ";
            d1= sqrt((trc.at(2).x-trc.at(1).x)*(trc.at(2).x-trc.at(1).x)+ (trc.at(2).y-trc.at(1).y)*(trc.at(2).y-trc.at(1).y));
            std::cout<<"d1"<<d1<<" ";
            d2= sqrt((trc.at(2).x-trc.at(0).x)*(trc.at(2).x-trc.at(0).x)+ (trc.at(2).y-trc.at(0).y)*(trc.at(2).y-trc.at(0).y));
            std::cout<<"d2"<<d2<<" ";
    }
    if (d1>T&&d2>T) f2= false;
    if (d0>T&&d2>T) f0= false;
    if (d0>T&&d1>T) f1= false;
    if (d0>T&&d1>T&&d2>T) return false;
    if (!f1){
        track_filter.at(id).at(1)={(trc.at(0).x+trc.at(2).x)/2,(trc.at(0).y+trc.at(2).y)/2,(trc.at(0).z+trc.at(2).z)/2};
    }
    if (!f2){
        track_filter.at(id).at(2)={2*trc.at(1).x-trc.at(0).x,2*trc.at(1).y-trc.at(0).y,2*trc.at(1).z-trc.at(0).z};
//        update=track_filter.at(id).at(2);
        std::cout<<"update"<<track_filter.at(id).at(2).x<<" "<<track_filter.at(id).at(2).y<<" "<<track_filter.at(id).at(2).z<<std::endl;
    }
    track_filter.at(id).erase(track_filter.at(id).begin());
    return true;
}

void Tracker::remove_track(int trackId){
    tracks.erase(trackId);
    track_filter.erase(trackId);
}
std::vector<Track_report> Tracker::report_tracks(){
    std::vector<Track_report> reports;
    for (auto track:tracks){
        if (track.second.enable){
            Track_report report;
            report.ID=track.second.ID;
            report.classID=track.second.ClassID;
            report.age=track.second.age;
            report.Information_3D=track.second.Information_3D;
            report.bbox=track.second.Bbox;
            report.trace=track.second.trace;
            report.position={track.second.p.x,track.second.p.y,track.second.p.z};
            report.velocity={track.second.v.vx,track.second.v.vy,track.second.v.vz};
            report.size={track.second.s.l,track.second.s.w,track.second.s.h};
            report.position_e={track.second.pe.z,-track.second.pe.x,-track.second.pe.y};
            report.velocity_e={track.second.ve.vz,-track.second.ve.vx,-track.second.ve.vy};
//            report.pointcloudptr.reset(new pcl::PointXYZ);
            for(auto point:track.second.points){
                cv::Point3f p;
                p={point.x,point.y,point.z};
                report.pointcloud.push_back(p);
//                report.pointcloudptr->points.push_back({point.x,point.y,point.z});
            }
            reports.push_back(report);
        }
    }
    return reports;
}
std::map<int,track> Tracker::show_tracks(){
    auto results=tracks;
    for (auto track:tracks){
        if (track.second.enable){
            std::cout<<track.second.classname<<(track.second.Information_3D ? "_3D ":"_2D ")<<" "<<" Age"<<track.second.age<<" pos:"<<track.second.p.x<<" "<<track.second.p.y<<" "
                     <<track.second.p.z<<" size:"<<track.second.s.l<<" "<<track.second.s.w<<" "<<track.second.s.h<<" velocity:"<<track.second.v.vx
                     <<" "<<track.second.v.vy<<" "<<track.second.v.vz<<" Rect:"<<track.second.Bbox<<" "<<"speed_pix:"<<track.second.ve.vx<<" "<<track.second.ve.vy<<" "<<track.second.ve.vz<<std::endl;
        } else
            results.erase(track.first);
    }
    return  results;
}
void Tracker::check_state(int trackId) {
    if (tracks.at(trackId).age>=birth_period){
        tracks.at(trackId).enable= true;
    } else{
        tracks.at(trackId).enable= false;
    }
}

