#include "ros/ros.h"
#include "std_msgs/String.h"

void cb(const std_msgs::String::ConstPtr &msg){
    ROS_INFO("I heard :[%s]",msg->data.c_str());
}
int main(int argc,char **argv){
    ros::init(argc,argv,"listener");

    ros::NodeHandle n;
    auto sub = n.subscribe("chatter",1000,cb);
    ros::spin();
    return 0;
}