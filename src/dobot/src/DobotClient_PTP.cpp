#include "ros/ros.h"
#include "std_msgs/String.h"
#include "dobot/SetCmdTimeout.h"
#include "dobot/SetQueuedCmdClear.h"
#include "dobot/SetQueuedCmdStartExec.h"
#include "dobot/SetQueuedCmdForceStopExec.h"
#include "dobot/GetDeviceVersion.h"
#include <geometry_msgs/PointStamped.h>

#include "dobot/SetEndEffectorParams.h"
#include "dobot/SetPTPJointParams.h"
#include "dobot/SetPTPCoordinateParams.h"
#include "dobot/SetPTPJumpParams.h"
#include "dobot/SetPTPCommonParams.h"
#include "dobot/SetPTPCmd.h"

#include "dobot/SetHOMEParams.h"
#include "dobot/GetHOMEParams.h"
#include "dobot/SetHOMECmd.h"

#include "axif_tf/getPoint.h"

#include "dobot/SetEndEffectorParams.h"
#include "dobot/GetEndEffectorParams.h"
#include "dobot/SetEndEffectorLaser.h"
#include "dobot/GetEndEffectorLaser.h"
#include "dobot/SetEndEffectorSuctionCup.h"
#include "dobot/GetEndEffectorSuctionCup.h"
#include "dobot/SetEndEffectorGripper.h"
#include "dobot/GetEndEffectorGripper.h"

#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
#include <eigen3/Eigen/Geometry>
#include <cmath>

using namespace std;


//红色工件运动程序
void MOVE_rtr(axif_tf::getPoint::ConstPtr message);


int main(int argc, char **argv)
{
    ros::init(argc, argv, "DobotClient");
    ros::NodeHandle n;

    ros::ServiceClient client;

    // SetCmdTimeout
    client = n.serviceClient<dobot::SetCmdTimeout>("/DobotServer/SetCmdTimeout");
    dobot::SetCmdTimeout srv1;
    srv1.request.timeout = 3000;
    if (client.call(srv1) == false)
    {
        ROS_ERROR("Failed to call SetCmdTimeout. Maybe DobotServer isn't started yet!");
        return -1;
    }

    // Clear the command queue
    client = n.serviceClient<dobot::SetQueuedCmdClear>("/DobotServer/SetQueuedCmdClear");
    dobot::SetQueuedCmdClear srv2;
    client.call(srv2);

    // Start running the command queue
    client = n.serviceClient<dobot::SetQueuedCmdStartExec>("/DobotServer/SetQueuedCmdStartExec");
    dobot::SetQueuedCmdStartExec srv3;
    client.call(srv3);

    // Get device version information
    client = n.serviceClient<dobot::GetDeviceVersion>("/DobotServer/GetDeviceVersion");
    dobot::GetDeviceVersion srv4;
    client.call(srv4);
    if (srv4.response.result == 0)
    {
        ROS_INFO("Device version:%d.%d.%d", srv4.response.majorVersion, srv4.response.minorVersion, srv4.response.revision);
    }
    else
    {
        ROS_ERROR("Failed to get device version information!");
    }

    // Set end effector parameters
    // 设置执行末端偏移参数
    client = n.serviceClient<dobot::SetEndEffectorParams>("/DobotServer/SetEndEffectorParams");
    dobot::SetEndEffectorParams srv5;
    srv5.request.xBias = 70;
    srv5.request.yBias = 0;
    srv5.request.zBias = 0;
    client.call(srv5);

    // Set PTP joint parameters
    do
    {
        client = n.serviceClient<dobot::SetPTPJointParams>("/DobotServer/SetPTPJointParams");
        dobot::SetPTPJointParams srv;

        for (int i = 0; i < 4; i++)
        {
            srv.request.velocity.push_back(100);
        }
        for (int i = 0; i < 4; i++)
        {
            srv.request.acceleration.push_back(100);
        }
        client.call(srv);
    } while (0);

    // Set PTP coordinate parameters
    do
    {
        client = n.serviceClient<dobot::SetPTPCoordinateParams>("/DobotServer/SetPTPCoordinateParams");
        dobot::SetPTPCoordinateParams srv;

        srv.request.xyzVelocity = 100;
        srv.request.xyzAcceleration = 100;
        srv.request.rVelocity = 100;
        srv.request.rAcceleration = 100;
        client.call(srv);
        
    } while (0);

    // Set PTP jump parameters
    do
    {
        client = n.serviceClient<dobot::SetPTPJumpParams>("/DobotServer/SetPTPJumpParams");
        dobot::SetPTPJumpParams srv;

        srv.request.jumpHeight = 40;
        srv.request.zLimit = 200;
        client.call(srv);

    } while (0);

    // Set PTP common parameters
    do
    {
        client = n.serviceClient<dobot::SetPTPCommonParams>("/DobotServer/SetPTPCommonParams");
        dobot::SetPTPCommonParams srv;

        srv.request.velocityRatio = 50;
        srv.request.accelerationRatio = 50;
        client.call(srv);
    } while (0);

    client = n.serviceClient<dobot::SetPTPCmd>("/DobotServer/SetPTPCmd");
    dobot::SetPTPCmd srv;

    /* 添加的内容 */
    ros::Subscriber pixel_sub1 = n.subscribe("result_10", 1, MOVE_rtr); //red

    ros::Rate loop_rate(10);
    while (ros::ok())
    {
        ros::spinOnce();
        loop_rate.sleep();

    }

    return 0;
}

void MOVE_rtr(axif_tf::getPoint::ConstPtr message)
{
    
    int souce = 200;
    ros::NodeHandle *n_p = NULL;
    //初始位置
    int j = message->x1.size();
    vector<Eigen::Vector3d> temp;
    ros::NodeHandle n;
    n_p = &n;
    ros::ServiceClient client_suck = n_p->serviceClient<dobot::SetEndEffectorSuctionCup>("/DobotServer/SetEndEffectorSuctionCup");
    dobot::SetEndEffectorSuctionCup srv_s;
    ros::ServiceClient client_mov = n_p->serviceClient<dobot::SetPTPCmd>("/DobotServer/SetPTPCmd");
    dobot::SetPTPCmd srv_m;
    srv_s.request.enableCtrl = 1;  //吸盘使能
    srv_m.request.ptpMode = 0;     //PTP 为 JUMP 模式

    for (int i = 0; i < j; i++)
    {

        Eigen::Vector3d abc(message->x1[i], message->x2[i], message->x3[i]);
        //中间向量存储最新消息

        temp.push_back(abc);
    }
    //起始点

    for (int i = 0; i < j; i++)
    {
        if(message->color == 1)
        {
            cout << "正在移动红色工件" << endl;
        }
        if(message->color == 2)
        {
            cout << "正在移动绿色工件" << endl;
        }
        if(message->color == 3)
        {
            cout << "正在移动紫色工件" << endl;
        }
        if(message->color == 4)
        {
            cout << "正在移动橙色工件" << endl;
        }
        if(message->color == 5)
        {
            cout << "正在移动黄色工件" << endl;
        }
        if(message->color == 6)
        {
            cout << "正在移动蓝色工件" << endl;
        }       
        srv_m.request.x = temp[i][0] * 1000;
        srv_m.request.y = temp[i][1] * 1000;
        srv_m.request.z = temp[i][2] * 1000;
        srv_m.request.r = 0;
        client_mov.call(srv_m);
        sleep(6);
        //PTP 模式中起始点赋值

        srv_s.request.suck = 1;
        client_suck.call(srv_s);
        sleep(2);
        //吸盘吸取延时

        srv_m.request.x = souce;
        srv_m.request.y = -75;
        srv_m.request.z = -40;
        srv_m.request.r = 0;
        client_mov.call(srv_m);
        sleep(6);
        //PTP 模式中目标点赋值,单位 mm

        srv_s.request.suck = 0;
        client_suck.call(srv_s);
        sleep(2);
        //吸盘释放延时

        souce += 50;

        if (ros::ok() == false)
        {

            break;
        }
    }
    temp.clear();
}
