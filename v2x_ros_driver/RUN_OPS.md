# v2x_ros_driver Runtime Ops

This note captures the last known-good commands used in this workspace for
driver + visualizer + rosbag replay.

## 1) Source Environments

```bash
source /home/jonaslo96/ros2_drivers/.venv/bin/activate
source /opt/ros/jazzy/setup.bash
source /home/jonaslo96/ros2_drivers/v2x-ros-driver/install/setup.bash
```

## 2) Launch Driver (Core Node Only)

```bash
ros2 launch v2x_ros_driver v2x_ros_driver.launch.py \
  enable_inbound_binary_visualizer:=False \
  enable_map_spat_visualizer:=False
```

## 3) Run Inbound Marker Visualizer (Live /v2x Topics)

```bash
ros2 run v2x_ros_driver v2x_inbound_marker_visualizer.py --ros-args \
  -p inbound_topic:=/comms/inbound_binary_msg \
  -p marker_topic:=/v2x/map_spat_markers \
  -p bsm_marker_topic:=/v2x/bsm_markers \
  -p psm_marker_topic:=/v2x/psm_markers \
  -p tim_marker_topic:=/v2x/tim_markers \
  -p enable_text_overlay:=true \
  -p frame_id:=map
```

## 4) Replay Last Bag (Normal)

```bash
ros2 bag play /home/jonaslo96/ros2_drivers/v2x-ros-driver/rosbag2_2026_03_26-15_20_55 --clock
```

## 5) Replay Last Bag with Marker/Overlay Isolation

Use this when you want replayed visualization topics not to interfere with live
visualizer outputs.

```bash
ros2 bag play /home/jonaslo96/ros2_drivers/v2x-ros-driver/rosbag2_2026_03_26-15_20_55 --clock \
  --remap /v2x/map_spat_markers:=/replay/v2x/map_spat_markers \
          /v2x/bsm_markers:=/replay/v2x/bsm_markers \
          /v2x/psm_markers:=/replay/v2x/psm_markers \
          /v2x/tim_markers:=/replay/v2x/tim_markers \
          /v2x/inbound_map_spat_markers:=/replay/v2x/inbound_map_spat_markers \
          /v2x/map_spat_overlay_text:=/replay/v2x/map_spat_overlay_text \
          /v2x/bsm_overlay_text:=/replay/v2x/bsm_overlay_text \
          /v2x/psm_overlay_text:=/replay/v2x/psm_overlay_text \
          /v2x/tim_overlay_text:=/replay/v2x/tim_overlay_text
```

## 6) Useful Checks

```bash
ros2 topic hz /v2x/map_spat_markers
ros2 topic hz /v2x/bsm_markers
ros2 topic hz /v2x/psm_markers
ros2 topic hz /v2x/tim_markers
ros2 topic echo /v2x/tim_markers --once
```