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
axif_tf::getPoint msg10; //存储物块在机械臂基座坐标系下的中心坐标
void callbackCalculateAxis1(axif_tf::getPoint::ConstPtr message);
ros::NodeHandle *n_p = NULL;
ros::Publisher *pointer_result_10_pub = NULL;
geometry_msgs::PointStamped result_in;
geometry_msgs::PointStamped result_out;

//红
tf::TransformListener* listener_ptr;

int main(int argc, char **argv)
{
    ros::init(argc, argv, "transform_base");
    ros::NodeHandle n;
    n_p = &n;
    tf::TransformListener listener;
    listener_ptr = &listener;
    ros::Subscriber pixel_sub1 =
    n.subscribe("result_1", 100, callbackCalculateAxis1);
    ros::Publisher result_1_pub = n.advertise<axif_tf::getPoint>("result_10",1); //发布相机坐标系下的红色物块中心坐标
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
        msg10.x1.push_back(result_out.point.x + 0.004);
        msg10.x2.push_back(result_out.point.y);
        msg10.x3.push_back(-0.040);
    }
    cout << "red" << endl;
    cout << msg10 << endl;
    pointer_result_10_pub->publish(msg10); //发布出来
    msg10.x1.clear();
    msg10.x2.clear();
    msg10.x3.clear();
}