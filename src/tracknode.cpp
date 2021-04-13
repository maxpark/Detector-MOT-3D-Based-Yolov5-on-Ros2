//
// Created by mzc on 2021/3/29.
//
#include "chrono"
#include "functional"
#include "memory"
#include "string"
#include "rclcpp/rclcpp.hpp"
#include "include.h"
#include "cluster/cluster.h"
#include "geometry_msgs/msg/pose_array.hpp"
#include "geometry_msgs/msg/pose.hpp"
#include "detect_mot/msg/frame.hpp"
#include "detect_mot/msg/track.hpp"
#include "std_msgs/msg/int32.hpp"
#include "detect_mot/msg/detection2d.hpp"
#include "detect_mot/msg/objects.hpp"
#include "pcl/point_cloud.h"
#include "transformer/transformer.h"
#include "cv_bridge/cv_bridge.h"
#include "proto/track_frame.pb.h"
#include "tracker/tracker.h"
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>
using namespace std::chrono_literals;
cv::Mat A(StateNum,StateNum,CV_32FC1,cv::Scalar(0)),H(MeasureNum,StateNum,CV_32FC1,cv::Scalar(0)),Q(StateNum,StateNum,CV_32FC1,cv::Scalar(0)),R(MeasureNum,MeasureNum,CV_32FC1,cv::Scalar(0)),P(StateNum,StateNum,CV_32FC1,cv::Scalar(0));
class TrackNode : public rclcpp::Node {
private:
    rclcpp::TimerBase::SharedPtr timer_publish;
    rclcpp::Subscription<detect_mot::msg::Frame>::SharedPtr subscription_objects;
    rclcpp::Subscription<std_msgs::msg::Int32>::SharedPtr subscription_socket;
    rclcpp::Publisher<geometry_msgs::msg::PoseArray>::SharedPtr publisher_frame;
    Tracker tracker_f,tracker_b;
    rclcpp::Clock clock;
    std::vector<Detection> objects,objects_kf;//3D目标
    std_msgs::msg::Header frame_header;
    int front_back=0,fd=0;//前后相机标志位 socketfd;
    bool  init= false,measure_update=false,fd_set= false;
    long long frame_time=0,last_frame_time=0;

    void topic_callback_objects(const detect_mot::msg::Frame::SharedPtr msg){
   frame_header=msg->header;
   long long temp=(long long int)(frame_header.stamp.sec)*1000;
//        std::cout<<"temp:"<<temp<<std::endl;
    frame_time=temp+frame_header.stamp.nanosec;
   for(auto obj:msg->front_camera){
       Detection det;
       det.classname=obj.classname;
       det.ClassID=obj.classid;
       det.Information_3D=obj.information3d;
       det.Bbox=cv::Rect{obj.bbox.at(0),obj.bbox.at(1),obj.bbox.at(2),obj.bbox.at(3)};
       det.p.x=obj.position.x, det.p.y=obj.position.y, det.p.z=obj.position.z;
       det.s.l=obj.size.x,det.s.w=obj.size.y,det.s.h=obj.size.z;
       objects.push_back(det);
   }
    measure_update= true;
    if (!init&&objects.size()>0){
        tracker_f.trackinit(objects);
        init = true;
        last_frame_time=frame_time;
        return;
    }
    time_callback();
}
//10hz 跟踪
void time_callback(){
        auto time_f=std::clock();
        geometry_msgs::msg::PoseArray frame;
        //此处补上header
        frame.header.frame_id="track_frame";
        frame.header.stamp=frame_header.stamp;//取RGBD数据时间
        if (init==false){
            return;
        }
        float dt;
        dt=(float)(frame_time-last_frame_time)/1000.0;
        last_frame_time=frame_time;
//        std::cout<<"dt="<<dt<<std::endl;
//            auto start=std::clock();
        if (measure_update){
            tracker_f.predict(dt);
            tracker_f.update(objects);
            measure_update= false;
            objects.clear();
        }
//        else{
//            tracker_f.update(objects_kf);
//            objects_kf.clear();
//        }
//            auto end=std::clock();
//            cout<<"time-track= "<<(float)(end-start)/CLOCKS_PER_SEC*1000<<endl;
//        auto tracks=tracker_f.show_tracks();
        auto reports=tracker_f.report_tracks();
        RCLCPP_INFO(this->get_logger(),"frame_time:"+std::to_string(frame_time));
        for (auto trc:reports){
            geometry_msgs::msg::Pose track;
            Detection det_kf;
            RCLCPP_INFO(this->get_logger(),"Object_results:"+trc.classname+(trc.Information_3D ? " 3D ID:":" 2D ID:")+std::to_string(trc.ID)+",age:"+std::to_string(trc.age)+" p:("
                                           +std::to_string(trc.position.x)+","+std::to_string(trc.position.y)+","+std::to_string(trc.position.z)+") s:("+std::to_string(trc.size.x)+","+std::to_string(trc.size.y)+","+std::to_string(trc.size.z)
                                           +" v:("+std::to_string(trc.velocity.x)+","+std::to_string(trc.velocity.y)+","+std::to_string(trc.velocity.z)+")"
                                           +" pe:("+std::to_string(trc.position_e.x)+","+std::to_string(trc.position_e.y)+","+std::to_string(trc.position_e.z)+") "
                                           +" ve:("+std::to_string(trc.velocity_e.x)+","+std::to_string(trc.velocity_e.y)+","+std::to_string(trc.velocity_e.z)+")"
                                           +") bbox:{"+std::to_string(trc.bbox.x)+","+std::to_string(trc.bbox.y)+","+std::to_string(trc.bbox.width)+","+std::to_string(trc.bbox.height)+"}");
//            det_kf.classname=trc.classname;det_kf.ClassID=trc.classID;det_kf.Information_3D=trc.Information_3D;det_kf.Bbox=trc.bbox;
//            det_kf.p.x=trc.position.x, det_kf.p.y=trc.position.y, det_kf.p.z=trc.position.z;
//            det_kf.s.l=trc.size.x,det_kf.s.w=trc.size.y,det_kf.s.h=trc.size.z;
//            objects_kf.push_back(det_kf);
            if (trc.Information_3D== false)
                continue;//只是用3D信息的track发布
            track.position.x=trc.ID*front_back;track.position.y=trc.position.x;track.position.z=trc.position.y;
            track.orientation.x=trc.velocity.x;track.orientation.y=trc.velocity.y;track.orientation.z=trc.size.x;track.orientation.w=trc.size.y;
            frame.poses.push_back(track);
        }
//        if (fd_set)//不同进程之间无法调用同一个socket
//            send_frame(frame);
        publisher_frame->publish(frame);//发布frame
        auto time_b=std::clock();
        RCLCPP_INFO(this->get_logger(),"Time of track:"+std::to_string((float)(time_b-time_f)/CLOCKS_PER_SEC*1000));
    }
    void set_kalman_matrix(cv::Mat &A,cv::Mat &H,cv::Mat &P,cv::Mat &Q,cv::Mat &R){
        for (int i = 0; i < A.rows; ++i) {
            for (int j = 0; j < A.cols; ++j) {
                if (i==j)
                    A.at<float>(i,j)=1.0;
                if (i<StateNum/2){
                    if (StateNum-j+i==7)
                        A.at<float>(i,j)=0.0333;//根据时间间隔设置 30FPS
                }
            }
        }
        for (int i = 0; i < H.rows; ++i) {
            for (int j = 0; j < H.cols; ++j) {
                if (i==j)
                    H.at<float>(i,j)=1.0;
            }
        }
        setIdentity(Q, cv::Scalar::all(1e-2));            //系统噪声方差矩阵Q
        setIdentity(R, cv::Scalar::all(1e-3));        //测量噪声方差矩阵R
        setIdentity(P, cv::Scalar::all(.1));                  //后验错误估计协方差矩阵P

//        for (int i = 0; i < P.rows; ++i) {
//            for (int j = 0; j < P.cols; ++j) {
//                std::cout<<P.at<float>(i,j)<<" ";
//            }
//            std::cout<<std::endl;
//        }

    }


public:
    TrackNode() : Node("track"){
        set_kalman_matrix(A,H,P,Q,R);
        tracker_f=Tracker(A,H,P,Q,R,0.9,2,2);
        publisher_frame = this->create_publisher<geometry_msgs::msg::PoseArray>("/ph/core/track", 1);
        subscription_objects=this->create_subscription<detect_mot::msg::Frame>("/objects",1,std::bind((&TrackNode::topic_callback_objects),this,std::placeholders::_1));
//        timer_publish=this->create_wall_timer(50ms,std::bind(&TrackNode::time_callback,this));
    }

};


int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<TrackNode>());
    rclcpp::shutdown();
    return 0;
}
