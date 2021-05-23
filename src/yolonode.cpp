//
// Created by mzc on 3/11/21.
//
//
// Created by mzc on 2021/3/5.
//
#include "chrono"
#include "functional"
#include "memory"
#include "string"
#include "rclcpp/rclcpp.hpp"
#include "include.h"
#include "detector/detector.h"
#include "sensor_msgs/msg/camera_info.hpp"
#include "sensor_msgs/msg/image.hpp"
#include "geometry_msgs/msg/pose_array.hpp"
#include "detect_mot/msg/detection2d.hpp"
#include "detect_mot/msg/objects.hpp"
#include "cv_bridge/cv_bridge.h"
using namespace std::chrono_literals;
std::string weight="/home/mzc/code/ROS/dev_ws/src/detect_mot/engine/";//模型路径
std::string classname_path="/home/mzc/code/ROS/dev_ws/src/detect_mot/engine/road.names";//类别名路径
cv::VideoCapture capture_front,capture_back;
Detector detector2d;
class YoloNode : public rclcpp::Node{
private:
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<detect_mot::msg::Objects>::SharedPtr publisher_msg;
    rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr publisher_imgf,publisher_imgb;
//    rclcpp::Subscription<geometry_msgs::msg::PoseArray>::SharedPtr sub_frame;
        int countb=0,countf=0;
    cv::Mat front_mat,back_mat,front_detect,back_detect;
    rclcpp::Clock clock;
    void timer_callback()
    {
//        RCLCPP_INFO(this->get_logger(),"time_callback!");
//        std::cout<<"time_callback"<<std::endl;
        detect_mot::msg::Objects message;
        sensor_msgs::msg::Image img_f,img_b;
        message.back_header.frame_id="empty";
        message.front_header.frame_id="empty";
//        while (!capture_front.read(front_mat));
        if(capture_front.read(front_mat)){
            img_f.header.stamp=clock.now();
            img_f.header.frame_id="map";
            countf++;
//            std::cout<<"Yolo_time_sec="<< message.header.stamp.sec<<std::endl;
//            std::cout<<"Yolo_time_nsec="<< message.header.stamp.nanosec<<std::endl;
            if (countf==1){
                message.front_header.stamp=clock.now();
                message.front_header.frame_id="f_camera";
                cv::flip(front_mat,front_mat,1);
                front_detect=detector2d.Detection(front_mat);
//                countf=0;
                cv_bridge::CvImage( img_f.header,"bgr8",front_detect).toImageMsg(img_f);
                publisher_imgf->publish(img_f);
            }
            countf=countf%2;
        }
        if(capture_back.read(back_mat)){
            img_b.header.stamp=clock.now();
            img_b.header.frame_id="map";
            countb++;
            if (countb==2){
                message.back_header.stamp=clock.now();
                message.back_header.frame_id="b_camera";
                cv::flip(back_mat,back_mat,1);
                back_detect=detector2d.Detection(back_mat);
//                countb=0;
                cv_bridge::CvImage( img_b.header,"bgr8",back_mat).toImageMsg(img_b);
                publisher_imgf->publish(img_b);
            }
            countb=countb%3;

        }
        auto objectsf=detector2d.ReportObjects();
        for(auto obj:objectsf){
            detect_mot::msg::Detection2d object;
            object.classname=obj.name;
            object.classid=obj.classID;
            object.bbox={obj.area.x,obj.area.y,obj.area.width,obj.area.height};
            RCLCPP_INFO(this->get_logger(),"objects:"+object.classname+" {"+std::to_string(obj.area.x)+","+std::to_string(obj.area.y)+","+std::to_string(obj.area.width)+","+std::to_string(obj.area.height)+"}");
            message.objects_front.push_back(object);
        }
        auto objectsb=detector2d.ReportObjects();
        for(auto obj:objectsb){
            detect_mot::msg::Detection2d object;
            object.classname=obj.name;
            object.classid=obj.classID;
            object.bbox={obj.area.x,obj.area.y,obj.area.width,obj.area.height};
            message.objects_back.push_back(object);
        }
        publisher_msg->publish(message);
    }
//    void topic_callback_frame(geometry_msgs::msg::PoseArray::SharedPtr msg){
//        RCLCPP_INFO(this->get_logger(),"frame callback!");
//    }
public:
    YoloNode() : Node("yolo")
    {
        capture_front.open(2);
        if(capture_front.isOpened() == true)
            RCLCPP_INFO(this->get_logger(),"camera_front is opened!");
//            std::cout<<"isOpenedf:"<<std::endl ;
        else
            RCLCPP_INFO(this->get_logger(),"camera_front is NOT opened!");
//            std::cout<<"Not Openedf:"<<std::endl ;
        capture_back.open(0)  ;
        if(capture_back.isOpened() == true)
            RCLCPP_INFO(this->get_logger(),"camera_back is opened!");
        else
            RCLCPP_INFO(this->get_logger(),"camera_back is NOT opened!");
        capture_front.set(cv::CAP_PROP_FPS,30);
        capture_front.set(cv::CAP_PROP_FOURCC,cv::CAP_IMAGES);
        capture_front.set(cv::CAP_PROP_FRAME_WIDTH,Img_width);
        capture_front.set(cv::CAP_PROP_FRAME_HEIGHT,Img_height);
        capture_back.set(cv::CAP_PROP_FPS,30);
        capture_back.set(cv::CAP_PROP_FOURCC,cv::CAP_IMAGES);
        capture_back.set(cv::CAP_PROP_FRAME_WIDTH,Img_width);
        capture_back.set(cv::CAP_PROP_FRAME_HEIGHT,Img_width);
        publisher_msg= this->create_publisher<detect_mot::msg::Objects>("/results_yolo", 1);
        publisher_imgf= this->create_publisher<sensor_msgs::msg::Image>("/front_detect_img",1);
        publisher_imgb= this->create_publisher<sensor_msgs::msg::Image>("/back_detect_img",1);
//        sub_frame = this->create_subscription<geometry_msgs::msg::PoseArray>("/ph/core/track",1,std::bind((&YoloNode::topic_callback_frame),this,std::placeholders::_1));
        timer_ = this->create_wall_timer(10ms, std::bind(&YoloNode::timer_callback, this));
        detector2d=Detector(weight,classname_path);
    }
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<YoloNode>());
    rclcpp::shutdown();
    detector2d.destory();
    return 0;
}
