//
// Created by mzc on 3/16/21.
//
#include "chrono"
#include "functional"
#include "memory"
#include "string"
#include "rclcpp/rclcpp.hpp"
#include "rcutils/logging.h"
#include "std_msgs/msg/string.hpp"
#include "include.h"
#include "sensor_msgs/msg/point_cloud2.h"
#include "geometry_msgs/msg/pose_array.hpp"
#include "geometry_msgs/msg/pose.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "geometry_msgs/msg/vector3.hpp"
#include "std_msgs/msg/byte_multi_array.hpp"
#include "std_msgs/msg/int32.hpp"
#include "pcl/point_cloud.h"
#include "pcl_conversions/pcl_conversions.h"
#include "transformer/transformer.h"
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>
#include "proto/track_frame.pb.h"
using namespace std::chrono_literals;
int socket_fd,fd;
class SocketNode : public rclcpp::Node{
private:
    rclcpp::TimerBase::SharedPtr timer_1,timer_2,timer_3;
    rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr publisher_rgbd;
    rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr publisher_socket;
    rclcpp::Subscription<geometry_msgs::msg::PoseArray>::SharedPtr sub_frame;
    rclcpp::Clock clock;
    Eigen::Vector4d U_in;
    Eigen::Isometry3d U_out;
    std_msgs::msg::Header header_points;
    bool data_flag=false,track_flag=false;
    char rev_rgbd_data[50880],time_data[8];
    cv::Mat depth_mat;
//    std::map<long long ,long> time_vec;
    void timer_callback()//定时器更新depth buffer 10ms
    {
//        auto tim=std::clock();
//        std::cout<<"time-t="<<tim<<std::endl;
        long long time_mat;
//        RCLCPP_INFO(this->get_logger(),"---time_call_back_socketnode---");
        int time_size=recv(fd, time_data, 8,MSG_WAITALL);
        if(time_size>0){
            memcpy(&time_mat, time_data, sizeof(long long));
            RCLCPP_INFO(this->get_logger(),"time_transform---"+std::to_string(time_mat));
//            header_points.stamp.sec=time_mat/1000;
            header_points.stamp.sec=time_mat/1000;
            header_points.stamp.nanosec=time_mat%1000;
//            time_vec[time_mat]=tim;
        }
//        if (time_vec.size()>100)
//            time_vec.erase(time_vec.begin());
        int size = recv(fd, rev_rgbd_data, 50880,MSG_WAITALL);
        if (size>0){
            RCLCPP_INFO(this->get_logger(),"--data-recive---");
//                std::cout<<"SIZE:"<<size<<std::endl;
//                std::cout<<"Recv_data:"<<rev_rgbd_data[100]<<rev_rgbd_data[1000]<<rev_rgbd_data[10000]<<rev_rgbd_data[20000]<<rev_rgbd_data[30000]<<std::endl;
//            char rgbd_data[50880],time_data[8];
            depth_mat = cv::Mat(cv::Size(212, 120), CV_16UC1);
//            std::strncpy(rgbd_data,rev_rgbd_data, 50880);
//            std::strncpy(time_data,rev_rgbd_data+50879, 8);
            memcpy((char*)depth_mat.data,(char*)rev_rgbd_data,  212 * 120 * 2);
//            time_mat=std::atof(time_data);
//            std::cout<<"sample-data--:"<<rev_rgbd_data[10]<<rev_rgbd_data[100]<<rgbd_data[1000]<<rev_rgbd_data[20000]<<" Time:"<<rev_rgbd_data[50880]<<rev_rgbd_data[50881]<<rev_rgbd_data[50882]<<rev_rgbd_data[50883]<<std::endl;

//                std::cout<<"Mat:"<<depth_mat.rows<<"-"<<depth_mat.cols<<std::endl;
//                std::cout<<"Data:"<<depth_mat.at<uint16_t>(60,106)<<std::endl;
//                RCLCPP_INFO(this->get_logger(),"mid_data:"+std::to_string(depth_mat.at<uint16_t>(60,106)));
            data_flag= true;
            send_message();
//                processRGBD(copy_data,depth_mat);//解析为深度图
//                send_message();
//                cout<<"time-remat= "<<(float)(time_b-time_f)/CLOCKS_PER_SEC*1000<<endl;
                //发送fd 到 tracknode
//                RCLCPP_INFO(this->get_logger(),"socket fd=:"+std::to_string(fd));
//                std_msgs::msg::Int32 socket_msg ;
//                socket_msg.data=fd;
//                publisher_socket->publish(socket_msg);
        }
    }
//    void send_track(){
//        if (track_flag== false)
//        {
//            RCLCPP_INFO(this->get_logger(),"-----No track!---------");
//            return;
//        }
//        else{
//            track_flag= false;
//            RCLCPP_INFO(this->get_logger(),"-----send_frame---------");
//        }
//        RCLCPP_INFO(this->get_logger(),"nums of person:"+std::to_string(track_frame.person_size()));
////        std::cout<<"nums of person:"<<track_frame.person_size()<<std::endl;
//        for(auto p:track_frame.person()){
//            RCLCPP_INFO(this->get_logger(),"Person---px:"+std::to_string(p.px())+",py"+std::to_string(p.py())+",sx"+std::to_string(p.sx())+",sy"+std::to_string(p.sy())+",vx"+std::to_string(p.vx())+",vy"+std::to_string(p.vy()));
////            std::cout<<"Person_v="<<p.vx()<<":"<<p.vy()<<std::endl;
//        }
//        std::string data;
//        track_frame.SerializeToString(&data);
////        char bts[data.length()];
////        sprintf(bts, "%s", data.c_str());
////        char* array = new char[size_array];
////        track_frame.SerializeToArray(array, size_array);
//        auto size=send(fd, data.c_str(),data.length(), 0);
////        RCLCPP_INFO(this->get_logger(),"size of senddata:"+std::to_string(size));
//    }
    void send_message(){
        if (data_flag== false)
            return;
        else
            data_flag= false;
//        RCLCPP_INFO(this->get_logger(),"---send_pointcloud---");
        auto time_f=std::clock();
        double t1 = (double)cv::getTickCount();
        cv::Mat masku(depth_mat.size(), CV_8UC1, cv::Scalar(0));//腐蚀
        auto cloud = ConvertDepthToPointCLoud(depth_mat, masku, U_in, U_out);//深度图转化为点云并且转为机器人坐标系
        pcl::PointCloud<pcl::PointXYZI>::Ptr pointcloud(new pcl::PointCloud<pcl::PointXYZI>);
        for (int i = 0; i < cloud.rows; ++i) {//逐个像素转化为点云数据
            for (int j = 0; j < cloud.cols; ++j) {
                pcl::PointXYZI point;
                point.x = cloud.at<cv::Vec3f>(i, j)(0);
                point.y = cloud.at<cv::Vec3f>(i, j)(1);
                point.z = cloud.at<cv::Vec3f>(i, j)(2);
                point.intensity = 0;//坐标相机点标记为0
                if (masku.at<uint8_t>(i, j) == 255)
                    pointcloud->points.push_back(point);
            }
        }
        RCLCPP_INFO(this->get_logger(),"Points size:"+std::to_string(pointcloud->points.size()));
//        std::cout<<"Points_nums:"<<pointcloud->points.size()<<"Sample_data"<<pointcloud->points.at(pointcloud->points.size()/2)<<std::endl;
        sensor_msgs::msg::PointCloud2 msg;
        pcl::toROSMsg(*pointcloud,msg);
        msg.header.frame_id="map";
        msg.header.stamp=header_points.stamp;
//        std::cout<<"sec:"<<msg.header.stamp.sec<<std::endl;
//        std::cout<<"nanosec:"<<msg.header.stamp.nanosec<<std::endl;
        publisher_rgbd->publish(msg);
        auto time_b=std::clock();
        double t2 = (double)cv::getTickCount();
        auto t = t2 - t1;
        t = t*1000.0 / cv::getTickFrequency();
        RCLCPP_INFO(this->get_logger(),"Time of remat:sys_get:"+std::to_string((float)(time_b-time_f)/CLOCKS_PER_SEC*1000)+"cv:"+std::to_string(t));
    }
//    void processRGBD(const unsigned char* address,cv::Mat &dmat) {
//        if (address == nullptr) return;
//        std::shared_ptr<costmap::RGBD_INFO> rgbd_info = std::make_shared<costmap::RGBD_INFO>();
//        rgbd_info->timestamp.secs = *((uint32_t*)address);
//        rgbd_info->timestamp.nsecs = *(((uint32_t*)address) + 1);
//        rgbd_info->scale_ = *((float*)address+2);
//        rgbd_info->width_ = *((uint32_t*)address+3);
//        rgbd_info->height_ = *((uint32_t*)address+4);
////        std::cout<<"Width:"<<rgbd_info->width_<<"Height:"<<rgbd_info->height_<<std::endl;
//        rgbd_info->ppx_ = *((float*)address+5);
//        rgbd_info->ppy_ = *((float*)address+6);
//        rgbd_info->fx_ = *((float*)address+7);
//        rgbd_info->fy_ = *((float*)address+8);
//        rgbd_info->model_ = *((uint32_t*)address+9);
//        rgbd_info->coeffs_[0] = *((float*)address+10);
//        rgbd_info->coeffs_[1] = *((float*)address+11);
//        rgbd_info->coeffs_[2] = *((float*)address+12);
//        rgbd_info->coeffs_[3] = *((float*)address+13);
//        rgbd_info->coeffs_[4] = *((float*)address+14);
//        uint32_t serial_num_size = *((uint32_t*)address+15);
//        std::string serial_num((char*)((uint32_t*)address+16),serial_num_size);
//        rgbd_info->serial_num_ = serial_num;
//        char* depth_data = (char*)((uint32_t*)address + 16) + serial_num_size;
//        dmat = cv::Mat(cv::Size(rgbd_info->width_, rgbd_info->height_), CV_16UC1, (short*)depth_data);
//        U_in={rgbd_info->fx_,rgbd_info->fy_,rgbd_info->ppx_,rgbd_info->ppy_};
//        std::cout<<U_in<<std::endl;
//    }
    void topic_callback_frame(geometry_msgs::msg::PoseArray::SharedPtr msg){
//        std::cout<<"send_frame"<<std::endl;
        long long time_frame;
        probf::TrackFrame track_frame;
//        auto tim=std::clock();
//        std::cout<<"frame-t:"<<tim<<std::endl;
        time_frame=(long long)(msg->header.stamp.sec)*1000+(long long)(msg->header.stamp.nanosec);
//        long long Time_gap=0;
//        for (auto t:time_vec){
//            if (t.first==time_frame)
//               Time_gap=tim-t.second;
//        }
        RCLCPP_INFO(this->get_logger(),"time_frame="+std::to_string(time_frame));//
        track_frame.set_id((msg->header.stamp.sec%10)*1000+msg->header.stamp.nanosec);
        track_frame.set_sec(msg->header.stamp.sec);
        track_frame.set_nsec(msg->header.stamp.nanosec);
        for (auto pose:msg->poses) {
            probf::Person* person=track_frame.add_person();
            person->set_px(pose.position.y);
            person->set_py(pose.position.z);
            person->set_vx(pose.orientation.x);
            person->set_vy(pose.orientation.y);
            person->set_sx(pose.orientation.z);
            person->set_sy(pose.orientation.w);
        }
        RCLCPP_INFO(this->get_logger(),"nums of person:"+std::to_string(track_frame.person_size()));
//        std::cout<<"nums of person:"<<track_frame.person_size()<<std::endl;
        for(auto p:track_frame.person()){
            RCLCPP_INFO(this->get_logger(),"Person---px:"+std::to_string(p.px())+",py"+std::to_string(p.py())+",sx"+std::to_string(p.sx())+",sy"+std::to_string(p.sy())+",vx"+std::to_string(p.vx())+",vy"+std::to_string(p.vy()));
//            std::cout<<"Person_v="<<p.vx()<<":"<<p.vy()<<std::endl;
        }
        std::string data;
        track_frame.SerializeToString(&data);
//        char bts[data.length()];
//        sprintf(bts, "%s", data.c_str());
//        char* array = new char[size_array];
//        track_frame.SerializeToArray(array, size_array);
        auto size=send(fd, data.c_str(),data.length(), 0);
//        RCLCPP_INFO(this->get_logger(),"size of senddata:"+std::to_string(size));
    }
public:
    SocketNode() : Node("socket")
    {
        publisher_rgbd = this->create_publisher<sensor_msgs::msg::PointCloud2>("/pointscloud_rgbd", 1);
        publisher_socket = this->create_publisher<std_msgs::msg::Int32>("/socket_fd", 1);
        timer_1 = this->create_wall_timer(20ms, std::bind(&SocketNode::timer_callback, this));
//        timer_2 = this->create_wall_timer(10ms, std::bind(&SocketNode::send_message, this));
//        timer_3 = this->create_wall_timer(10ms, std::bind(&SocketNode::send_track, this));

        sub_frame=this->create_subscription<geometry_msgs::msg::PoseArray>("/ph/core/track",1,std::bind((&SocketNode::topic_callback_frame),this,std::placeholders::_1));

        ///socket/////////
        //1.创建一个socket
        socket_fd = socket(AF_INET, SOCK_STREAM, 0);
        if (socket_fd == -1)
        {
            cout << "socket filed： "<< endl;
            exit(1);
        }
        //2.准备通讯地址（必须是服务器的）192.168.1.49是本机的IP
        struct sockaddr_in addr;
        addr.sin_family = AF_INET;
        addr.sin_port = htons(8086);//将一个无符号短整型的主机数值转换为网络字节顺序，即大尾顺序(big-endian)
        addr.sin_addr.s_addr = inet_addr("10.10.1.100");//net_addr方法可以转化字符串，主要用来将一个十进制的数转化为二进制的数，用途多于ipv4的IP转化。
        //3.bind()绑定
        //参数一：0的返回值（socket_fd）
        //参数二：(struct sockaddr*)&addr 前面结构体，即地址
        //参数三: addr结构体的长度
        int res = bind(socket_fd,(struct sockaddr*)&addr,sizeof(addr));
        if (res == -1)
        {
            cout << "bind filed： " << endl;
            exit(-1);
        }
        cout << "bind ok --waitting" << endl;
        //4.监听客户端listen()函数
        //参数二：进程上限，一般小于30
        listen(socket_fd,15);
        //5.等待客户端的连接accept()，返回用于交互的socket描述符
        struct sockaddr_in client;
        socklen_t len = sizeof(client);
        fd = accept(socket_fd,(struct sockaddr*)&client,&len);
        if (fd == -1)
        {
            cout << "accept wrong\n" << endl;
            exit(-1);
        }else{
            //发送fd 到 tracknode
            RCLCPP_INFO(this->get_logger(),"socket fd=:"+std::to_string(fd));
            std_msgs::msg::Int32 socket_msg ;
            socket_msg.data=fd;
            publisher_socket->publish(socket_msg);
        }
        //6.使用第5步返回socket描述符，进行读写通信。
        char *ip = inet_ntoa(client.sin_addr);
        RCLCPP_INFO(this->get_logger(),"connected:"+std::string{ip});
//        cout << "cilent： [" << ip << "] connected" << endl;
        //第一个参数：accept 返回的文件描述符
        //第二个参数：存放读取的内容
        //第三个参数：内容的大小
        std::vector<double> u_ins,u_rot,u_tra;
        this->declare_parameter("up_rgbd_ins",std::vector<double>{0.0,-0.702,0.00});
        this->declare_parameter("up_rgbd_rot",std::vector<double>{0.365,-0.01,0.03});
        this->declare_parameter("up_rgbd_tra",std::vector<double>{107.282, 107.282,105.0, 60.0});
        this->get_parameter<std::vector<double>>("up_rgbd_ins",u_ins);
        this->get_parameter<std::vector<double>>("up_rgbd_rot",u_rot);
        this->get_parameter<std::vector<double>>("up_rgbd_tra",u_tra);
        Eigen::Vector3d U_rot,U_tra;
//        U_rot={u_rot.at(0),u_rot.at(1),u_rot.at(2)};//向上RGBD相机旋转姿态 //0.0,-0.702,0.00
//        U_tra={u_tra.at(0),u_tra.at(1),u_tra.at(2)};//向上RGBD相机位置//0.365,-0.01,0.03
        U_rot={0.0,-0.50,0.00};
        U_tra={0.365,-0.01,0.03};
        std::cout<<"reparam_Utra:"<<U_tra<<std::endl;
        std::cout<<"reparam_Urot:"<<U_rot<<std::endl;
        U_out=getTFMatrix(U_rot,U_tra);
//        U_in={u_ins.at(0),u_ins.at(1),u_ins.at(2),u_ins.at(3)};//107.282, 107.282,105.0, 60.0
        U_in={107.282, 107.282,106.0, 60.0};
        std::cout<<"reparam_Uin:"<<U_in<<std::endl;
    }
};


int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<SocketNode>());
    rclcpp::shutdown();
    //7.关闭sockfd
    close(fd);
    close(socket_fd);
    return 0;
}
