#!/usr/bin/env python
import rospy
from std_msgs.msg import Float64

def main():
    pub = rospy.Publisher("float_number",Float64,queue_size=100)
    rospy.init_node("publisher_py",anonymous=True)
    rate = rospy.Rate(10)

    float_number = Float64
    float_number = 0.0

    while not rospy.is_shutdown():
        pub.publish(float_number)
        rate.sleep()

        float_number = float_number + 2.0


if __name__ == "__main__":
    try:
        main()
    except rospy.ROSInterruptException:
        pass