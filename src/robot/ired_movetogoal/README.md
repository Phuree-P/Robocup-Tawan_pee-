# ired_movetogoal

A ROS 2 Jazzy package for moving a robot through multiple waypoints using **Nav2** and the **nav2_simple_commander** Python API.

The robot will:
- Navigate to a sequence of predefined positions.
- Wait until each goal is reached before moving to the next.
- Pause **5 seconds** at each waypoint before continuing.

---

## 🚀 Requirements

This package requires ROS 2 **Jazzy** with Navigation2 installed.

### ROS 2 Dependencies
- [`nav2_bringup`](https://github.com/ros-planning/navigation2/tree/jazzy/nav2_bringup) (Nav2 launch files and params)
- [`nav2_simple_commander`](https://github.com/ros-planning/navigation2/tree/jazzy/nav2_simple_commander) (Python API wrapper)
- `geometry_msgs`

### Python Dependencies
Make sure you have SciPy installed:
```bash
sudo apt install ros-jazzy-tf-transformations
```

## 📦 Installation

Clone the package into your workspace and build:
```bash
cd ~/ired_ws/src
git clone -b jazzy https://gitlab.raikmitl.com/ired/ired_movetogoal.git
cd ~/ired_ws
colcon build --symlink-install
source install/setup.bash
```

## ▶️ Usage

Start ***iRED Bringup*** package:
```bash
ros2 launch ired_bringup bringup.launch.py
```
Start ***iRED Navigation*** package:
```bash
ros2 launch ired_navigation navigation.launch.py
```
Run the multi-goal navigation node:
```bash
ros2 run ired_movetogoal movetogoal
```

## ⚙️ Waypoint Configuration

Waypoints are currently hardcoded inside movetogoal.py:
```
goals = [
    make_pose(1.0, 0.0, 0.0),     # Position 1
    make_pose(1.0, 1.0, 1.57),    # Position 2
    make_pose(0.0, 1.0, 3.14),    # Position 3
    make_pose(0.0, 0.0, -1.57),   # Position 4
]
```

Each `make_pose(x, y, yaw)` defines a goal in the map frame:

- `x`, `y` → position in meters
- `yaw` → orientation in radians

⏳ After each goal is reached, the robot will wait 5 seconds before moving to the next.

## 📊 Example Output

When running the node, you should see logs like:

```
🚀 Going to position 1...
[Feedback] ETA: 12 seconds
✅ Goal 1 succeeded!
⏳ Waiting 5 seconds before next goal...

🚀 Going to position 2...
[Feedback] ETA: 8 seconds
✅ Goal 2 succeeded!
⏳ Waiting 5 seconds before next goal...
```

If a goal fails, the sequence will stop:
```
❌ Goal 3 failed! Stopping.
```