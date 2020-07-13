#include <iostream>
#include "ros/ros.h"
#include "std_msgs/String.h"

void chatterCallback(const std_msgs::String::ConstPtr &msg)
{
    ROS_INFO("I get: [%s]",msg->data.c_str());
}

int main(int argc, char **argv)
{
    ros::init(argc,argv,"listener");
    ros::NodeHandle h;
    ros::Subscriber listener_sub = h.subscribe<std_msgs::String>("chatter",1000,chatterCallback);

    ros::spin();
    return 0;
}

