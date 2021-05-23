//
// Created by mzc on 2021/4/19.
//
#include "matcher/matcher2.h"
#include "transformer/transformer.h"
Matcher2::Matcher2(int sens) {
    sensor=sens;

    if (sensor==0){
        biasx=Img_width/2;
        biasy=Img_height/2;
       IOU_threshold=0.01,k_cost=1.0,k_dis=1.0;
        stderr_threshold=0.1,k_stderr=1.0;
    }
    if (sensor==1){
        biasx=0;
        biasy=0;
        IOU_threshold=0.01,k_cost=1.0,k_dis=1.0;
        stderr_threshold=0.01,k_stderr=1.0;
    }
}

float Matcher2::IOU_calculate(cv::Rect ob,cv::Rect clu) {
    if (sensor==1){
        ob.y=399;
        ob.height=10;
    }
    float iou=(ob & clu).area()*1.0/(ob | clu).area();
    if (ob.area()<clu.area()*0.8)
        iou=-iou;
    return iou;
}
float Matcher2::distance_calculate(int ob_pix,float clu_pix) {
    return 1-abs(clu_pix-ob_pix)/Img_width;
}
bool Matcher2::init(std::map<int, Oneclass> clu, std::vector<Object> obj){
    results_cluster.clear();
    objects2d.clear();
    objectto3d.clear();
    for (auto c:clu) {
        results_cluster.push_back(c.second);
    }
    for(auto p:obj){
        if (sensor==0){
            p.area.x+=biasx;//转为点云映射重构平面像素坐标系
            p.area.y+=biasy;
            if (p.area.y+p.area.height>Img_height/2){
                objectto3d.push_back(p);//检测结果
            }
        }
        if (sensor==1){
            //雷达将目标的bbox做筛选和处理
//            if (p.area.y+p.area.height>Img_height/2){
//                p.area.y=Img_height/2;
//                p.area.height=10;
                objectto3d.push_back(p);//检测结果
//            }
        }
    }
    cost.clear();
    A.clear();
    A_.clear();
    if (clu.size()<=0||obj.size()<=0)
        return false;
    for (int i = 0; i < obj.size(); ++i) {
        std::vector<bool> temp;
        for (int j = 0; j < clu.size(); ++j) {
            temp.push_back(false);
        }
        A.push_back(temp);
        A_.push_back(temp);
    }
    return true;
}
void Matcher2::match() {
    pointobjects.reset((new pcl::PointCloud<pcl::PointXYZI>));
    objects.clear();
    cost_calculate();//cost 第一次简化
    updateA_();//去耦合 两次简化
   //此时目标已经简化为单个目标内的优化问题
    for (int i = 0; i < A_.size(); ++i) {
        std::vector<int> merge,final;
//        std::vector<std::vector<int>> ways;
        float loss_ln=MAXFLOAT;
        for (int j = 0; j < A_.at(i).size(); ++j) {
            if (A_.at(i).at(j))
                merge.push_back(j);
        }
        int n= 1<<merge.size(); //2^n 组合方式
        std::cout<<"ways:"<<n<<std::endl;
        for (int j = 0; j < n; ++j) {
            std::vector<int> way;
            for (int k = 0; k < merge.size(); ++k) {
                int m=1<<k;
                if(j&m)
                    way.push_back(merge.at(k));
            }
            auto loss_now=loss_line(i,way);
            std::cout<<"loss now:"<<loss_now<<std::endl;
            if (loss_ln>loss_now){
                loss_ln=loss_now;
                final=way;
            }
           std::cout<<"j:"<<j<<"way:";
            for (auto wa:way) {
                std::cout<<wa<<" ";
            }
            std::cout<<"loss:"<<loss_ln<<std::endl;
        }
        std::cout<<"final:";
        for (auto f:final) {
            std::cout<<f<<" ";
        }
        for (auto w:final) {//记录下最小loss的A阵 此时为最优解
            A.at(i).at(w)=true;
        }
    }
    //由A阵组合聚类点云 形成3D目标
    for (int i = 0; i < A.size(); ++i) {
        //行 目标
        Detection object;
        object.classname=objectto3d.at(i).name;
        object.ClassID=objectto3d.at(i).classID;
        object.Bbox=objectto3d.at(i).area;
        object.Bbox.x-=biasx;
        object.Bbox.y-=biasy;
        object.Information_3D= false;
        for (int j = 0; j < A.at(i).size(); ++j) {
            if (A.at(i).at(j))//匹配上 3D信息
            {
                object.Information_3D= true;
                for (auto p:results_cluster.at(j).ponits3d->points) {
                    p.intensity=object.ClassID+1;
                    object.points.push_back(p);
                }
            }
        }
        objects.push_back(object);
    }
}
std::vector<Detection> Matcher2::returnobjects(Eigen::Transform<float, 3, 2, 0> tr) {
    for (auto &object:objects){
        middata m{-100,-100,-100,100,100,100,0,0,0};
        for (auto &p:object.points){
            pointobjects->points.push_back(p);
            if (Pose_trans)
                p=pcl::transformPoint(p,tr);//结合机器人位姿 转到世界坐标系
            if (m.max_x<p.x)
                m.max_x=p.x;
            if (m.max_y<p.y)
                m.max_y=p.y;
            if (m.max_z<p.z)
                m.max_z=p.z;
            if (m.min_x>p.x)
                m.min_x=p.x;
            if (m.min_y>p.y)
                m.min_y=p.y;
            if (m.min_z>p.z)
                m.min_z=p.z;
            m.sum_x+=p.x;
            m.sum_y+=p.y;
            m.sum_z+=p.z;
        }
        if (object.Information_3D== true){
            object.p={m.sum_x/object.points.size(),m.sum_y/object.points.size(),m.sum_z/object.points.size()};
            object.s={m.max_x-m.min_x,m.max_y-m.min_y,m.max_y-m.min_y};
            object.viz=m;
        } else{
            object.p={0.0,0.0,0.0};
            object.s={0.0,0.0,0.0};
        }
    }
    return objects;
}
void Matcher2::cost_calculate(){
    int row=0;
      for(auto object:objectto3d){
          if (sensor==1){
              object.area.y=Img_height/2;
              object.area.height=10;
          }
          cost.emplace_back(std::vector<float>());
          for(auto clu:results_cluster ){
              float this_cost= IOU_calculate(object.area,clu.images);
              cost.at(row).push_back(this_cost);
          }
          row++;
      }

    for (int i = 0; i < cost.size(); ++i) {
        for (int j = 0; j < cost.at(i).size(); ++j) {
            if (cost.at(i).at(j)>IOU_threshold)
                A_.at(i).at(j)=true;//根据限制可行区域范围
        }
    }
}
void Matcher2::updateA_() {
    for(int k=0;k<A_.size();k++){//按行 根据标准差简化
        std::vector<Oneclass> vec_clu;
        float std_err_all;
        for (int i = 0; i < A_.at(k).size(); ++i) {
            if (A_.at(k).at(i)){
                vec_clu.push_back(results_cluster.at(i));
            }
            std_err_all= stderr_cost(vec_clu);
        }
        for (int i = 0; i < A_.at(k).size(); ++i) {
            int index=0;
            if (A_.at(k).at(i)){
//                auto index=std::find(vec_clu.begin(),vec_clu.end(),results_cluster.at(i));
                vec_clu.erase(vec_clu.begin()+index);
                if(cost.at(k).at(i)-check_std_err(std_err_all,vec_clu)<stderr_threshold)
                {
                    A_.at(k).at(i)=false;//标准差筛选
                }
                vec_clu.push_back(results_cluster.at(i));
                index++;
            }
        }
    }
    //按列根据IOU sum(aij<=1) 把列条件加入 //bug 暂时无效 待测试
    std::map<int ,std::vector<int>> memory;
    for (int i = 0; i < A_.size(); ++i) {
        for (int j = 0; j < A_.at(i).size(); ++j) {
            if (A_.at(i).at(j)==true){
                memory[j].push_back(i);
            }
        }
    }
    for (auto me:memory) {
        float  loss_this=MAXFLOAT;
        if (me.second.size()>=2){//列上数目大于2需要简化 为1 透过当前计算的loss比对
            for (auto i:me.second){
                A_.at(i).at(me.first)= false;
            }
            int index=0;
            for (auto i:me.second){
                A_.at(i).at(me.first)=true;
                auto lossnow=loss();
                A_.at(i).at(me.first)= false;
                if (lossnow>loss_this)
                    A_.at(i).at(me.first)=false;
                else{
                    loss_this=lossnow;
                    index=i;
//                    A_.at(i).at(me.first)=true;
                }
            }
            A_.at(index).at(me.first)=true;
        }
    }
}
pcl::PointCloud<pcl::PointXYZI>::Ptr Matcher2::returnpcl() {
    return pointobjects;
}
float Matcher2::loss() {
    float loss_all=0;
    for (int i = 0; i < A_.size(); ++i) {
        std::vector<Oneclass> vec_clu;
        for (int j = 0; j < A_.at(i).size(); ++j) {
            if (A_.at(i).at(j)){
                loss_all-=k_cost*cost.at(i).at(j);
                vec_clu.push_back(results_cluster.at(j));
            }
        }
        if (vec_clu.size()>0)
            loss_all+= k_stderr*stderr_cost(vec_clu);
    }
    return loss_all;
}
float Matcher2::loss_line(int index,std::vector<int> way) {
    float loss_ln=0.0,loss_distance=0.0;
    std::vector<Oneclass> vec_clu;
    for (int j = 0; j < way.size(); ++j) {
            loss_ln-=k_cost*cost.at(index).at(way.at(j));
            loss_distance+= std::sqrt(distance(results_cluster.at(j).centerpoint,pcl::PointXYZ{0.0,0.0,0.0}))/MAX_X;
            vec_clu.push_back(results_cluster.at(way.at(j)));
    }
    loss_ln+=k_dis*loss_distance/way.size();
    loss_ln+=k_stderr*stderr_cost(vec_clu);
    return loss_ln;
}
float Matcher2::check_std_err(float err_all, std::vector<Oneclass> clus) {
    auto err_now= stderr_cost(clus);
    return (err_all-err_now)/err_all;
}
float Matcher2::stderr_cost(std::vector<Oneclass> clus){
    pcl::PointXYZ avg;
    int points=0;
    for(auto clu:clus){
        points+=clu.ponits3d->points.size();
        avg.x+=clu.centerpoint.x*clu.ponits3d->points.size();
        avg.y+=clu.centerpoint.y*clu.ponits3d->points.size();
        avg.z+=clu.centerpoint.z*clu.ponits3d->points.size();
    }
    avg.x/=points;
    avg.y/=points;
    avg.z/=points;
    float sum=0.0;
    for (auto clu:clus) {
        sum+= distance(avg,clu.centerpoint)*clu.ponits3d->points.size();
    }
    sum=sum/points;
    sum=std::sqrt(sum);
    return sum;
}
float Matcher2::distance(pcl::PointXYZ p1, pcl::PointXYZ p2) {
//    return (p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y)+(p2.z-p1.z)*(p2.z-p1.z);
    return (p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y);

}