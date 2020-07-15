/**********************ROS**********************************/
#include <ros/ros.h>
#include <axif_tf/getPoint.h>
#include <geometry_msgs/PointStamped.h>
#include <sensor_msgs/image_encodings.h>
#include <image_transport/image_transport.h>
#include <tf/transform_broadcaster.h>
#include <tf/transform_datatypes.h>
#include <tf_conversions/tf_eigen.h>
#include <tf/transform_listener.h>
/*********************EUGEN*********************************/
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
#include <eigen3/Eigen/Geometry>
#include <cmath>
/********************OPENCVLIBRARY***************************/
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/aruco.hpp>
#include <opencv2/aruco/dictionary.hpp>
#include <opencv2/core/eigen.hpp>
#include <cv_bridge/cv_bridge.h>
#include <iostream>
#include "opencv2/calib3d/calib3d.hpp"
#include "opencv2/imgcodecs.hpp"
/*******************PACKAGE_HEADER***************************/
#include <opencvtest/pixel_point0.h>
//#include <dobot/mypose.h>
#include <dobot/GetPose.h>
using namespace std;

ros::NodeHandle *n_p = NULL;

geometry_msgs::PointStamped result_in;
geometry_msgs::PointStamped result_out;

tf::TransformListener *listener_ptr;

/* 添加红色工件 */

axif_tf::getPoint msg10; //存储物块在机械臂基座坐标系下的中心坐标
ros::Publisher *pointer_result_10_pub = NULL;
void callbackCalculateAxis1(axif_tf::getPoint::ConstPtr message);


/* 添加绿色工件 */
axif_tf::getPoint msg20; //存储物块在机械臂基座坐标系下的中心坐标
ros::Publisher *pointer_result_20_pub = NULL;
void callbackCalculateAxis2(axif_tf::getPoint::ConstPtr message);


/* 添加紫色工件 */
axif_tf::getPoint msg30; //存储物块在机械臂基座坐标系下的中心坐标
ros::Publisher *pointer_result_30_pub = NULL;
void callbackCalculateAxis3(axif_tf::getPoint::ConstPtr message);


/* 添加橙色工件 */
axif_tf::getPoint msg40; //存储物块在机械臂基座坐标系下的中心坐标
ros::Publisher *pointer_result_40_pub = NULL;
void callbackCalculateAxis4(axif_tf::getPoint::ConstPtr message);


/* 添加黄色工件 */
axif_tf::getPoint msg50; //存储物块在机械臂基座坐标系下的中心坐标
ros::Publisher *pointer_result_50_pub = NULL;
void callbackCalculateAxis5(axif_tf::getPoint::ConstPtr message);

/* 添加蓝色工件 */
axif_tf::getPoint msg60; //存储物块在机械臂基座坐标系下的中心坐标
ros::Publisher *pointer_result_60_pub = NULL;
void callbackCalculateAxis6(axif_tf::getPoint::ConstPtr message);


int main(int argc, char **argv)
{
    ros::init(argc, argv, "transform_base");
    ros::NodeHandle n;
    n_p = &n;

    /* 红色 */
    tf::TransformListener listener;
    listener_ptr = &listener;


    ros::Subscriber pixel_sub = n.subscribe("result_1", 100, callbackCalculateAxis1);
    ros::Publisher result_1_pub = n.advertise<axif_tf::getPoint>("result_10", 1); //发布相机坐标系下的红色物块中心坐标

    
    pointer_result_10_pub = &result_1_pub;
  

    ros::Rate loop_rate(30);
    while (ros::ok())
    {
        ros::spinOnce();
        loop_rate.sleep();
    }
}
void callbackCalculateAxis1(axif_tf::getPoint::ConstPtr message)
{
    for (int i = 0; i < message->x1.size(); i++)
    {
        result_in.point.x = message->x1[i];
        result_in.point.y = message->x2[i];
        result_in.point.z = message->x3[i];
        result_in.header.frame_id = "logitech";
        result_out.header.frame_id = "dobot_base";
        try
        {
            listener_ptr->transformPoint("dobot_base", ros::Time(0), result_in, "logitech", result_out);
        }
        //相机坐标系到机械臂坐标系下的变换
        catch (tf::TransformException &ex)
        {
            ROS_ERROR("%s", ex.what());
            ros::Duration(1.0).sleep();
            continue;
        }

        switch (message->color)
        {
        case  1:
            cout << "red" << endl;
            msg10.color = 1;
            msg10.x1.push_back(result_out.point.x);
            msg10.x2.push_back(result_out.point.y-0.015);
            msg10.x3.push_back(-0.040);

            pointer_result_10_pub->publish(msg10); //发布出来

            msg10.x1.clear();
            msg10.x2.clear();
            msg10.x3.clear();
            msg10.color = 0;

            break;
        case 2:
            cout << "green" << endl;
            msg20.color = 2;
            msg20.x1.push_back(result_out.point.x+0.0 );
            msg20.x2.push_back(result_out.point.y-0.005 );
            msg20.x3.push_back(-0.040);

            pointer_result_10_pub->publish(msg20); //发布出来

            msg20.x1.clear();
            msg20.x2.clear();
            msg20.x3.clear();
            msg20.color = 0;

            break;

        case 3:
            cout << "purple" << endl;
            msg30.color = 3;
            msg30.x1.push_back(result_out.point.x+0.005 );
            msg30.x2.push_back(result_out.point.y-0.01);
            msg30.x3.push_back(-0.040);

            pointer_result_10_pub->publish(msg30); //发布出来

            msg30.x1.clear();
            msg30.x2.clear();
            msg30.x3.clear();
            msg30.color = 0;

            break;

        case 4:
            cout << "orange" << endl;
            msg40.color = 4;
            msg40.x1.push_back(result_out.point.x +0.005);
            msg40.x2.push_back(result_out.point.y -0.015);
            msg40.x3.push_back(-0.040);

            pointer_result_10_pub->publish(msg40); //发布出来

            msg40.x1.clear();
            msg40.x2.clear();
            msg40.x3.clear();
            msg40.color = 0;            
            break;
        
        case 5:
            cout << "yellow" << endl;
            msg50.color = 5;
            msg50.x1.push_back(result_out.point.x +0.005);
            msg50.x2.push_back(result_out.point.y - 0.01);
            msg50.x3.push_back(-0.040);

            pointer_result_10_pub->publish(msg50); //发布出来

            msg50.x1.clear();
            msg50.x2.clear();
            msg50.x3.clear();
            msg50.color = 0;    
            break;
        case 6:
            cout << "blue" << endl;
            msg60.color = 6;
            msg60.x1.push_back(result_out.point.x +0.01);
            msg60.x2.push_back(result_out.point.y-0.01);
            msg60.x3.push_back(-0.040);

            pointer_result_10_pub->publish(msg60); //发布出来

            msg60.x1.clear();
            msg60.x2.clear();
            msg60.x3.clear();
            msg60.color = 0;  


            break;
        default:
            break;
        }

        
    }
}
