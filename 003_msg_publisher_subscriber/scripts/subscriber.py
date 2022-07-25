#!/usr/bin/env python
import rospy
from std_msgs.msg import Float64

def callback(data):
    rospy.loginfo("the number is: %f", data.data)

def main():
    rospy.init_node("subscriber_py",anonymous=True)
    rospy.Subscriber("float_number",Float64,callback)
    rospy.spin()

if __name__ == "__main__":
    try:
        main()
    except rospy.ROSInterruptException:
        pass