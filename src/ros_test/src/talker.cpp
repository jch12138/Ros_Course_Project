#include <iostream>
#include "ros/ros.h"
#include "std_msgs/String.h"

int main(int argc, char **argv)
{
    ros::init(argc,argv,"talker");
    ros::NodeHandle h;
    ros::Publisher chatter_pub = h.advertise<std_msgs::String>("chatter",1000);
    ros::Rate looprate(10);

    while(ros::ok())
    {
        std_msgs::String msg;
        std::stringstream ss;
        ss<<"hello world";
        msg.data = ss.str();
        ROS_INFO("%s",msg.data.c_str());
        chatter_pub.publish(msg);
        ros::spinOnce();
        looprate.sleep();
    }
}