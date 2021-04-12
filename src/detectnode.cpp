//
// Created by mzc on 2021/3/5.
//
#include "chrono"
#include "functional"
#include "memory"
#include "string"
#include "rclcpp/rclcpp.hpp"
#include "include.h"
#include "matcher/matcher.h"
#include "detector/detector.h"
#include "cluster/cluster.h"
#include "sensor_msgs/msg/image.h"
#include "sensor_msgs/msg/point_cloud2.h"
#include "geometry_msgs/msg/pose_array.hpp"
#include "geometry_msgs/msg/pose.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "detect_mot/msg/detection2d.hpp"
#include "detect_mot/msg/objects.hpp"
#include "detect_mot/msg/frame.hpp"
#include "detect_mot/msg/track.hpp"
#include "pcl/point_cloud.h"
#include "pcl_conversions/pcl_conversions.h"
#include "transformer/transformer.h"
#include "cv_bridge/cv_bridge.h"


Eigen::Transform<float, 3, 2, 0> TR;
class DetectNode : public rclcpp::Node{
private:
    rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr publisher_rebuild_img;
    rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr publisher_objectscloud;
    rclcpp::Publisher<detect_mot::msg::Frame>::SharedPtr publisher_objects;

    rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr subscription_depth;
    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr subscription_pose;
    rclcpp::Subscription<detect_mot::msg::Objects>::SharedPtr subscription_yolo;
    rclcpp::Clock clock;
    std_msgs::msg::Header frame_header;
    long long msecs;//时间差值
    bool pose_init=false;
    std::map<int,Oneclass> clusterdb_res;
    std::map<long long,std::vector<Object>> detection_front_vec,detection_back_vec;
    std::vector<long long> time_queue;
    std::vector<Detection> objects;//3D目标
    Eigen::Isometry3d F_out,B_out;
    Eigen::Vector4d F_in,B_in;
    cv::Size img_size;
    cv::Mat rebuild_mat;
    void topic_callback_pose(const geometry_msgs::msg::PoseStamped::SharedPtr poseStamped){
       //有关雷达定位数据处理
//        RCLCPP_INFO(this->get_logger(),"Pose_callback");
//        secs=poseStamped->header.stamp.sec-clock.now().seconds();
//        std::cout<<"orign_secs="<<clock.now().seconds()<<std::endl;
        long long int temp=(long long int)poseStamped->header.stamp.sec*1000;
//        std::cout<<"temp1:"<<temp<<std::endl;
       msecs=temp+poseStamped->header.stamp.nanosec-clock.now().nanoseconds()/1000000;
        RCLCPP_INFO(this->get_logger(),"time_gap_ses="+std::to_string(msecs));
        auto pose= poseStamped->pose;
//        std::cout<<"Pose_callback"<<std::endl;
        Eigen::Vector3f  ea(0.0,0.0,std::asin(pose.orientation.x));
       Eigen::Matrix3f rotation_matrix ;
       rotation_matrix = Eigen::AngleAxisf(ea[0], Eigen::Vector3f::UnitZ()) *
                         Eigen::AngleAxisf(ea[1], Eigen::Vector3f::UnitY()) *
                         Eigen::AngleAxisf(ea[2], Eigen::Vector3f::UnitX());
       Eigen::Vector3f t(pose.position.x,pose.position.y,pose.position.z);
        RCLCPP_INFO(this->get_logger(),"Pose:x "+std::to_string(t(0))+",y "+std::to_string(t(1))+",er "+std::to_string(ea(2)));
        TR = Eigen::Transform<float, 3, Eigen::Affine>::Identity();//TR是一个全局变量 不依赖Ros2
       TR.rotate(rotation_matrix);TR.pretranslate(t);//位姿变换
       pose_init== true;
    }
    void topic_callback_yolo(const detect_mot::msg::Objects::SharedPtr yolo_objects){
        //将本地时钟同步到311D上
        std::vector<Object> detection_front,detection_back;
        long long sec_tmp=yolo_objects->header.stamp.sec;
    long long nsec_tmp=yolo_objects->header.stamp.nanosec;
//std::cout<<"sec_tmp:"<<sec_tmp<<endl;
//        std::cout<<"nsec_tmp:"<<nsec_tmp<<endl;
        long long yolo_time=sec_tmp*1000+nsec_tmp/1000000+msecs;
//        std::cout<<"yolo_time:"<<yolo_time<<std::endl;
//        RCLCPP_INFO(this->get_logger(),"Yolo_callback");
//        std::cout<<"Yolo_callback!"<<std::endl;
        time_queue.push_back(yolo_time);
//        std::cout<<"time-depth:"<<time_depth<<std::endl;

        detection_front.clear();
        for (auto obj:yolo_objects->objects_front){
            Object ob;
            ob.classID=obj.classid;
            ob.name=obj.classname;
            ob.area=cv::Rect {obj.bbox.at(0),obj.bbox.at(1),obj.bbox.at(2),obj.bbox.at(3)};
            RCLCPP_INFO(this->get_logger(),"detect_front:"+ob.name+" {"+std::to_string(ob.area.x)+","+std::to_string(ob.area.y)+std::to_string(ob.area.width)+","+std::to_string(ob.area.height)+"}");
            detection_front.push_back(ob);
        }
        detection_back.clear();
        for (auto obj:yolo_objects->objects_back){
            Object ob;
            ob.classID=obj.classid;
            ob.name=obj.classname;
            ob.area=cv::Rect {obj.bbox.at(0),obj.bbox.at(1),obj.bbox.at(2),obj.bbox.at(3)};
            detection_back.push_back(ob);
        }
        detection_front_vec.insert(std::make_pair(yolo_time,detection_front));
        if (detection_front_vec.size()>10){
            detection_front_vec.erase(time_queue.at(0));
            time_queue.erase(time_queue.begin());
        }
    }
    void topic_callback_depth(const sensor_msgs::msg::PointCloud2::SharedPtr msg)
    {
        auto time_af=std::clock();
        auto time_fclu=std::clock();
//        std::cout<<"sec:"<<msg->header.stamp.sec<<"nsec"<<msg->header.stamp.nanosec<<std::endl;
        long long temp=(long long int)(msg->header.stamp.sec)*1000;
//        std::cout<<"temp:"<<temp<<std::endl;
        long long time_depth=temp+msg->header.stamp.nanosec;
//        RCLCPP_INFO(this->get_logger(),"depth_time_all:"+std::to_string(time_depth));
        pcl::PointCloud<pcl::PointXYZI>::Ptr pointcloud(new pcl::PointCloud<pcl::PointXYZI>);
        //解析深度相机数据
//        RCLCPP_INFO(this->get_logger(),"Depth_callback");
//        std::cout<<"Depth_callback!"<<std::endl;
        pcl::fromROSMsg(*msg, *pointcloud);
//        std::cout<<"Points of size:"<<pointcloud->points.size()<<std::endl;
        rebuild_mat=cv::Mat::zeros(img_size.height,img_size.width,CV_8UC(1));//重建聚类图
        for(auto point:pointcloud->points) {
//            pcl::transformPoint(point,TR);//转到世界坐标系
            auto Pix = PointConvertToPix(point, F_in, F_out);//Pix属于像平面
//            std::cout<<"point="<<Pix.x()<<" "<<Pix.y()<<" "<<Pix.z()<<std::endl;
            Eigen::Vector2i pix = {static_cast<int>(Pix.x()), static_cast<int>(Pix.y())};//pix转为 像素坐标
            if (Pix.x() > 0 && Pix.x() < img_size.width && Pix.y() > 0 && Pix.y() < img_size.height &&Pix.z() > 0)//像素区域内
                rebuild_mat.at<uint8_t>(pix.y(), pix.x()) = 255;
            }
        sensor_msgs::msg::Image img_rb;
        img_rb.header.stamp=clock.now();
        img_rb.header.frame_id="map";
        cv_bridge::CvImage( img_rb.header,"mono8",rebuild_mat).toImageMsg(img_rb);
        publisher_rebuild_img->publish(img_rb);
//        std::cout<<"cloud:"<<pointcloud->points.size()<<std::endl;
        auto clusterDB=DBSCAN(F_in,F_out);
        clusterDB.DBSCAN_Cluster(pointcloud,img_size);
        clusterdb_res=clusterDB.ReportClusteredResults();
//        std::cout<<"SIZE_DB="<<clusterdb_res.size()<<std::endl;
//        std::cout<<"Cluster_db_size:"<<cluster_.size()<<std::endl;
        auto time_bclu=std::clock();
        RCLCPP_INFO(this->get_logger(),"Time of Cluster:"+std::to_string((float)(time_bclu-time_fclu)/CLOCKS_PER_SEC*1000));
        long long frame_time=-1,min_gap,yolotime=0;
        min_gap=100;
        if (time_queue.size()<1)
            return;
        for(auto time_yolo:time_queue){
            if(std::abs(time_yolo-time_depth)<min_gap){
                min_gap=std::abs(time_yolo-time_depth);
                frame_time=time_depth;
                yolotime=time_yolo;
            }
        }
        if (frame_time<0||pose_init){
            RCLCPP_INFO(this->get_logger(),"dont find yolo time");
            return;
        }
//        RCLCPP_INFO(this->get_logger(),"Clusterdb_size"+std::to_string(clusterdb_res.size()));
        RCLCPP_INFO(this->get_logger(),"Time matched RGBD_time="+std::to_string(frame_time)+"--Color--time="+std::to_string(yolotime));
        frame_header.stamp.sec=frame_time/1000;
        frame_header.stamp.nanosec=frame_time%1000;
        Detector3D(yolotime);//取最近时间的Depth信息3D匹配
        //发布Detect结果
        detect_mot::msg::Frame detect_msg;
        detect_msg.header=frame_header;
        for(auto det:objects) {
            detect_mot::msg::Track obj;
            obj.classid=det.ClassID;
            obj.classname=det.classname;
            obj.information3d=det.Information_3D;
            obj.size.x=det.s.l;obj.size.y=det.s.w;obj.size.z=det.s.h;
            obj.position.x=det.p.x;obj.position.y=det.p.y;obj.position.z=det.p.z;
            obj.bbox={det.Bbox.x,det.Bbox.y,det.Bbox.width,det.Bbox.height};
            detect_msg.front_camera.push_back(obj);
        }
        publisher_objects->publish(detect_msg);
        auto time_ab=std::clock();
        RCLCPP_INFO(this->get_logger(),"Time of detect3d:"+std::to_string((float)(time_ab-time_af)/CLOCKS_PER_SEC*1000));
    }
    void Reclustering(pcl::PointCloud<pcl::PointXYZI>::Ptr pPntCloud,cv::Rect ro,cv::Rect rc,int classID,std::vector<pcl::PointXYZI> &objectpoints) {
        auto clusterKM = KMeans(F_in,F_out);
        clusterKM.SetK(3);
        clusterKM.SetInputCloud(pPntCloud,ro,rc);
        auto pointclouds = clusterKM.Cluster();
        for (auto p:pointclouds.at(0)) {
            pcl::PointXYZI pI;
            pI.x = p.pnt.x;
            pI.y = p.pnt.y;
            pI.z = p.pnt.z;
            pI.intensity = classID;
            objectpoints.push_back(pI);
        }
    }
    void Detector3D(long long frame_time){
        std::map<std::array<int,2>,float> result;
        objects.clear();
//        for (auto def:detection_front_vec){
//            std::cout<<def.first<<std::endl;
//        }
//        std::cout<<"frame_time:"<<frame_time<<endl;
        auto detect_front=detection_front_vec.at(frame_time);
        RCLCPP_INFO(this->get_logger(),"frame_time_in:"+std::to_string(frame_time));
        if (clusterdb_res.size()>0){
            std::cout<<"detect_size:"<<detect_front.size();
            Matcher matcher(clusterdb_res,detect_front);
            result=matcher.BoxIouMatch();
            RCLCPP_INFO(this->get_logger(),"size of match="+std::to_string(result.size())+"size of clusterdb=="+std::to_string(clusterdb_res.size())+"size of detect=="+std::to_string(detect_front.size()));
//            std::cout<<"Finshed Matcher:"<<result.size()<<std::endl;
        } else{
            result.clear();
        }
        pcl::PointCloud<pcl::PointXYZI>::Ptr pointobjects(new pcl::PointCloud<pcl::PointXYZI>);
        for (auto res:result) {
            Detection object;
            //获取当前object信息
            object.ClassID=detect_front.at(res.first.at(0)).classID;
            object.classname=detect_front.at(res.first.at(0)).name;
            object.Bbox=detect_front.at(res.first.at(0)).area;
            object.Information_3D= false;
            if (abs(res.second) < IOU_Threshold_min) {//匹配失败
                RCLCPP_INFO(this->get_logger(),"3D_detect_failed-iou="+std::to_string(res.second));
//                cout<<"3D_detect_failed"<<endl;
                object.Information_3D= false;
            }
            //首次聚类完成匹配 取中心点为质心
            if (abs(res.second) > IOU_Threshold_max ||
                abs(res.second) > (IOU_Threshold_min + IOU_Threshold_max) / 2 && res.second < 0){
                for (auto p:clusterdb_res.at(res.first.at(1)).ponits3d->points) {
                    p.intensity = detect_front.at(res.first.at(0)).classID + 1;
                    object.points.push_back(p);
                }
                RCLCPP_INFO(this->get_logger(),"ONCE_3D_detect-iou="+std::to_string(res.second));
//                cout<<"ONCE_3D_detect"<<endl;
            }else if (abs(res.second) < IOU_Threshold_max && abs(res.second) > IOU_Threshold_min){
                //半监督聚类提升效果
                //此时中心店应取聚类簇中心点
//                cout<<"TWICE_3D_detect"<<endl;
                Reclustering(clusterdb_res.at(res.first.at(1)).ponits3d,detect_front.at(res.first.at(0)).area, clusterdb_res.at(res.first.at(1)).images,detect_front.at(res.first.at(0)).classID+1,object.points);
                RCLCPP_INFO(this->get_logger(),"TWICE_3D_detect-iou="+std::to_string(res.second));
            }
            if (object.points.size()>5)//少于n个点认为是干扰 无效
                object.Information_3D=true;
            objects.push_back(object);
        }
        for (auto &object:objects){
            middata m{ -100000,-100000,100000,100000,100000,100000,0,0,0};
            for (auto &p:object.points){
                pointobjects->points.push_back(p);
                if (Pose_trans)
                    p=pcl::transformPoint(p,TR);//结合机器人位姿 转到世界坐标系
                if (m.max_x<p.x) m.max_x=p.x;
                if (m.max_y<p.y) m.max_y=p.y;
                if (m.max_z<p.z) m.max_z=p.z;
                if (m.min_x>p.x) m.min_x=p.x;
                if (m.min_y>p.y) m.min_y=p.y;
                if (m.min_z>p.z) m.min_z=p.z;
                m.sum_x+=p.x; m.sum_y+=p.y; m.sum_z+=p.z;
            }
            if (object.Information_3D== true){
//                std::cout<<"Detection3d"<<std::endl;
                object.p={m.sum_x/object.points.size(),m.sum_y/object.points.size(),m.sum_z/object.points.size()};
                object.s={m.max_x-m.min_x,m.max_y-m.min_y,m.max_y-m.min_y};
                object.viz=m;
//                std::cout<<"p="<<object.p.x<<object.p.y<<object.p.z<<std::endl;
            } else{
//                std::cout<<"Detection2d"<<std::endl;
                object.p={0.0,0.0,0.0}; object.s={0.0,0.0,0.0};
            }
            RCLCPP_INFO(this->get_logger(),"Object_results:"+object.classname+(object.Information_3D ? " 3D ":" 2D ")+" p:("
                                           +std::to_string(object.p.x)+","+std::to_string(object.p.y)+","+std::to_string(object.p.z)+") s:("+std::to_string(object.s.l)+","+std::to_string(object.s.w)+","+std::to_string(object.s.h)
                                           +") bbox:{"+std::to_string(object.Bbox.x)+","+std::to_string(object.Bbox.y)+","+std::to_string(object.Bbox.width)+","+std::to_string(object.Bbox.height)+"}");
        }
        sensor_msgs::msg::PointCloud2 objects_clouds;
        pcl::toROSMsg(*pointobjects,objects_clouds);
        objects_clouds.header.frame_id="map";
        objects_clouds.header.stamp=now();
        publisher_objectscloud->publish(objects_clouds);
    }
public:
    DetectNode() : Node("detect")
    {
        publisher_objectscloud = this->create_publisher<sensor_msgs::msg::PointCloud2>("/pointscloud_objects", 1);
        subscription_yolo = this->create_subscription<detect_mot::msg::Objects>("/results_yolo",2,std::bind(&DetectNode::topic_callback_yolo, this,std::placeholders::_1));
        subscription_depth = this->create_subscription<sensor_msgs::msg::PointCloud2>("/pointscloud_rgbd",2,std::bind(&DetectNode::topic_callback_depth, this,std::placeholders::_1));
        subscription_pose= this->create_subscription<geometry_msgs::msg::PoseStamped>("/ph/core/pose",1,std::bind((&DetectNode::topic_callback_pose),this,std::placeholders::_1));
        publisher_rebuild_img= this->create_publisher<sensor_msgs::msg::Image>("/ph/core/rebuildimg",1);
        publisher_objects= this->create_publisher<detect_mot::msg::Frame>("/objects",1);
        std::vector<double> f_ins,f_rot,f_tra,b_ins,b_rot,b_tra;
        this->declare_parameter("front_ins",std::vector<double>{0.0,0.0,0.0});
        this->declare_parameter("front_rot",std::vector<double>{0.253,0.0,0.950});
        this->declare_parameter("front_tra",std::vector<double>{500.2527835897041,716.1117740787954,499.7620978089695,379.9548440735398});
        if(this->get_parameter<std::vector<double>>("front_ins",f_ins))
            RCLCPP_INFO(this->get_logger(),"parameters set ok");
        this->get_parameter<std::vector<double>>("front_rot",f_rot);
        this->get_parameter<std::vector<double>>("front_tra",f_tra);
        Eigen::Vector3d F_rot,F_tra;
//        F_rot={f_rot.at(0),f_rot.at(1),f_rot.at(2)};// 旋转//0.0,0,0
//        F_tra= {f_tra.at(0),f_tra.at(1),f_tra.at(2)};// 位置//0.253,0.0,0.950
        F_rot={0.0,0,0};
        F_tra={0.253,0.0,0.950};

        std::cout<<"reparam_Ftra:"<<F_tra<<std::endl;
        std::cout<<"reparam_Frot:"<<F_rot<<std::endl;
        F_out=getTFMatrix(F_rot,F_tra);
//        F_in={f_ins.at(0),f_ins.at(1),f_ins.at(2),f_ins.at(3)};//{500.2527835897041,716.1117740787954,499.7620978089695,379.9548440735398}
        F_in={254.387,252.435,299.55,177.92};//F_in={500.2527835897041,716.1117740787954,600.0,285.0};
        std::cout<<"reparam_Fin:"<<F_in<<std::endl;
        this->declare_parameter("back_ins",std::vector<double>{0.0,0,0});
        this->declare_parameter("back_rot",std::vector<double>{0.253,0.0,0.950});
        this->declare_parameter("back_tra",std::vector<double>{588.096505105656,660.3054628802164,589.2663187406049,375.4730364531033});
        this->get_parameter<std::vector<double>>("back_ins",b_ins);
        this->get_parameter<std::vector<double>>("back_rot",b_rot);
        this->get_parameter<std::vector<double>>("back_tra",b_tra);
        Eigen::Vector3d B_rot,B_tra;
//        B_rot={b_rot.at(0),b_rot.at(1),b_rot.at(2)};//旋转  //0.0,0,0
//        B_tra={b_tra.at(0),b_tra.at(1),b_tra.at(2)};//位置 //0.221,0.01,0.960
        B_rot={0.0,0,0};
        B_tra={0.253,0.0,0.950};
        std::cout<<"reparam_Btra:"<<B_tra<<std::endl;
        std::cout<<"reparam_Brot:"<<B_rot<<std::endl;
        B_out=getTFMatrix(B_rot,B_tra);
//        B_in={b_ins.at(0),b_ins.at(1),b_ins.at(2),b_ins.at(3)};//{588.096505105656,660.3054628802164,589.2663187406049,375.4730364531033}
        B_in={588.096505105656,660.3054628802164,589.2663187406049,375.4730364531033};//{588.096505105656,660.3054628802164,589.2663187406049,375.4730364531033}
        std::cout<<"reparam_Fin:"<<F_in<<std::endl;
        img_size={640,360};
    }

};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<DetectNode>());
    rclcpp::shutdown();
    return 0;
}
