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
    rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr publisher_img;
    cv::Mat front_mat,back_mat,front_detect,back_detect;
    rclcpp::Clock clock;
    void timer_callback()
    {
//        RCLCPP_INFO(this->get_logger(),"time_callback!");
//        std::cout<<"time_callback"<<std::endl;
        detect_mot::msg::Objects message;
        sensor_msgs::msg::Image img_f;
        img_f.header.stamp=clock.now();
        img_f.header.frame_id="map";
//        while (!capture_front.read(front_mat));
        if(capture_front.read(front_mat)){
            message.header.stamp=clock.now();
//            std::cout<<"Yolo_time_sec="<< message.header.stamp.sec<<std::endl;
//            std::cout<<"Yolo_time_nsec="<< message.header.stamp.nanosec<<std::endl;

            message.header.frame_id="Objects_2d";
//            std::cout<<"front:"<<front_mat.size<<std::endl;
            cv::flip(front_mat,front_mat,1);
            front_detect=detector2d.Detection(front_mat);
        }
        cv_bridge::CvImage( img_f.header,"bgr8",front_detect).toImageMsg(img_f);
        publisher_img->publish(img_f);
//        whil1e (!capture_back.read(back_mat));
//        if(capture_back.read(back_mat)){
//            std::cout<<"back:"<<back_mat.size<<std::endl;
////            detector2d.Detection(back_mat);
//        }
        auto objects=detector2d.ReportObjects();
        for(auto obj:objects){
            detect_mot::msg::Detection2d object;
            object.classname=obj.name;
            object.classid=obj.classID;
            object.bbox={obj.area.x,obj.area.y,obj.area.width,obj.area.height};
            RCLCPP_INFO(this->get_logger(),"objects:"+object.classname+" {"+std::to_string(obj.area.x)+","+std::to_string(obj.area.y)+","+std::to_string(obj.area.width)+","+std::to_string(obj.area.height)+"}");
            message.objects_front.push_back(object);
        }
//        detector2d.Detection(back_mat);
//        auto objects_1=detector2d.ReportObjects();
//        for(auto obj:objects_1){
//            detect_mot::msg::Detection2d object;
//            object.classname=obj.name;
//            object.classid=obj.classID;
//            object.bbox={obj.area.x,obj.area.y,obj.area.width,obj.area.height};
//            message.objects_back.push_back(object);
//        }
        publisher_msg->publish(message);
    }
public:
    YoloNode() : Node("yolo")
    {
        capture_front.open(0);
        if(capture_front.isOpened() == true)
            RCLCPP_INFO(this->get_logger(),"camera_front is opened!");
//            std::cout<<"isOpenedf:"<<std::endl ;
        else
            RCLCPP_INFO(this->get_logger(),"camera_front is NOT opened!");
//            std::cout<<"Not Openedf:"<<std::endl ;
//        capture_back.open(1)  ;
//        if(capture_back.isOpened() == true)
//            std::cout<<"isOpenedb:"<<std::endl ;
//        else
//            std::cout<<"Not Openedb:"<<std::endl ;
        capture_front.set(cv::CAP_PROP_FPS,30);
        capture_front.set(cv::CAP_PROP_FOURCC,cv::CAP_IMAGES);
        capture_front.set(cv::CAP_PROP_FRAME_WIDTH,640);
        capture_front.set(cv::CAP_PROP_FRAME_HEIGHT,360);
//        capture_back.set(cv::CAP_PROP_FPS,10);
//        capture_back.set(cv::CAP_PROP_FOURCC,cv::CAP_IMAGES);
//        capture_back.set(cv::CAP_PROP_FRAME_WIDTH,1280);
//        capture_back.set(cv::CAP_PROP_FRAME_HEIGHT,720);
        publisher_msg= this->create_publisher<detect_mot::msg::Objects>("/results_yolo", 1);
        publisher_img= this->create_publisher<sensor_msgs::msg::Image>("/front_detect_img",1);
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
