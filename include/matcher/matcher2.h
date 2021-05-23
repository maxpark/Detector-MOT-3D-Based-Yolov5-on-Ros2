//
// Created by mzc on 2021/4/19.
//
#include "include.h"
#include "cluster/cluster.h"
#include "detector/detector.h"
#ifndef INC_2DTO3DMOT_MATCHER2_H
#define INC_2DTO3DMOT_MATCHER2_H

class Matcher2 {
private:
    int sensor;//0 : --RGBD  1 :single lidar 2: multi-lidar
    int biasx,biasy;
    float IOU_threshold=0.01,k_cost=1.0,k_dis=1.0;
    float stderr_threshold=0.1,k_stderr=1.0;
    std::vector<std::vector<bool>> A,A_;//A为选择最终输出 A_为cost代价筛选后的可行区域
    std::vector<std::vector<float>> cost;
    std::vector<float> std_err;
    std::vector<Oneclass> results_cluster;
    std::vector<Object> objects2d,objectto3d;
    std::map<int,pcl::PointXYZ> weight;
    pcl::PointCloud<pcl::PointXYZI>::Ptr pointobjects;
    std::vector<Detection> objects;
    float check_std_err(float err_all,std::vector<Oneclass> clus);
    void cost_calculate();
    void updateA_();
    float stderr_cost(std::vector<Oneclass> clus);
    float distance(pcl::PointXYZ p1,pcl::PointXYZ p2);
    float IOU_calculate(cv::Rect ob,cv::Rect clu);
    float distance_calculate(int ob_pix,float clu_pix);
    float loss();
    float loss_line(int index,std::vector<int> ways);
public:
    Matcher2(int sens);
    bool init(std::map<int,Oneclass> clu,std::vector<Object> obj);
    void match();
    pcl::PointCloud<pcl::PointXYZI>::Ptr returnpcl();
    std::vector<Detection> returnobjects(Eigen::Transform<float, 3, 2, 0> tr);

};


#endif //INC_2DTO3DMOT_MATCHER2_H
