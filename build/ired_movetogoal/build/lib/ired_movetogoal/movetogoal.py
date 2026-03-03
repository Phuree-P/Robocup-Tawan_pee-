#!/usr/bin/env python3

import rclpy
from rclpy.duration import Duration
from geometry_msgs.msg import PoseStamped
from nav2_simple_commander.robot_navigator import BasicNavigator, TaskResult
import time

def make_pose(x, y, yaw, frame="map"):
    import math
    import tf_transformations

    pose = PoseStamped()
    pose.header.frame_id = frame
    pose.header.stamp = rclpy.clock.Clock().now().to_msg()

    pose.pose.position.x = x
    pose.pose.position.y = y
    pose.pose.position.z = 0.0

    q = tf_transformations.quaternion_from_euler(0, 0, yaw)
    pose.pose.orientation.x = q[0]
    pose.pose.orientation.y = q[1]
    pose.pose.orientation.z = q[2]
    pose.pose.orientation.w = q[3]

    return pose

def main():
    rclpy.init()

    navigator = BasicNavigator()

    # Wait for Nav2 to be fully active
    navigator.waitUntilNav2Active()

    # Define your list of goals (x, y, yaw in radians)
    goals = [
        make_pose(0.0, 0.0, 0.0),
        make_pose(0.0, 0.0, 1.57),
        make_pose(0.0, 0.0, 3.14),
    ]

    for i, goal in enumerate(goals):
        print(f"\n Sending goal {i+1}: ({goal.pose.position.x}, {goal.pose.position.y})")

        navigator.goToPose(goal)

        # Wait for result
        while not navigator.isTaskComplete():
            feedback = navigator.getFeedback()
            if feedback:
                print(
                    f"    Distance remaining: {feedback.distance_remaining:.2f} m"
                )
            rclpy.spin_once(navigator, timeout_sec=0.1)

        # Check result
        result = navigator.getResult()
        if result == TaskResult.SUCCEEDED:
            print(f" Goal {i+1} reached successfully!")
            time.sleep(5)
        elif result == TaskResult.CANCELED:
            print(f" Goal {i+1} canceled. Stopping sequence.")
            break
        elif result == TaskResult.FAILED:
            print(f" Goal {i+1} failed. Stopping sequence.")
            break

    print("\n Navigation sequence finished.")
    rclpy.shutdown()


if __name__ == "__main__":
    main()
