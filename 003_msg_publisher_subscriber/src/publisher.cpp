#include <ros/ros.h>
#include <std_msgs/Float64.h>

int main(int argc,char **argv)
{
    ros::init(argc, argv,"publisher_cpp");
    ros::NodeHandle nh;
    ros::Publisher pub;

    pub = nh.advertise<std_msgs::Float64>("float_number",100);

    ros::Rate loop_rate(10);
    
    std_msgs::Float64 float_number;
    float_number.data = 0.0;

    while(ros::ok())
    {
        
        ros::Duration(2.5).sleep();
        
        ROS_INFO("published number is : %f",float_number.data);

        pub.publish(float_number);
        
        ros::spinOnce();

        loop_rate.sleep();
        float_number.data += 2.5;
    }
    
    return 0;
}