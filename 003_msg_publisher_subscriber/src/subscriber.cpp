#include <ros/ros.h>
#include <std_msgs/Float64.h>

void callback(const std_msgs::Float64::ConstPtr &msg)
{
    ROS_INFO("Subscribed number is : %f",msg->data);
}

int main(int argc,char **argv)
{
    ros::init(argc,argv,"subscriber_cpp");
    ros::NodeHandle nh;

    ros::Subscriber sub;

    sub = nh.subscribe<std_msgs::Float64>("float_number",100,callback);

    ros::spin();

    return 0;
}