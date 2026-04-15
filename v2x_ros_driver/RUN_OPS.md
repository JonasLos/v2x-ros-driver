# v2x_ros_driver Runtime Ops

This note captures the last known-good commands used in this workspace for
driver + visualizer + rosbag replay.

## 1) Source Environments

```bash
source /home/avalocal/ros_drivers/.venv/bin/activate
source /opt/ros/jazzy/setup.bash
source /home/avalocal/ros_drivers/install/setup.bash
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

## 4) Build Native App-Notif Safety Bridge (Optional)

```bash
source /opt/ros/jazzy/setup.bash
colcon build --packages-select v2x_ros_driver --symlink-install \
  --cmake-args \
  -DENABLE_COMMSIGNIA_APP_NOTIF_BRIDGE=ON \
  -DCOMMSIGNIA_APP_NOTIF_SDK_DIR=/absolute/path/to/app-notif-sdk
```

## 5) Launch Native App-Notif Safety Bridge

```bash
ros2 launch v2x_ros_driver v2x_ros_driver.launch.py \
  enable_safety_alert_bridge:=False \
  enable_native_safety_alert_bridge:=True \
  safety_bridge_obu_host:=192.168.0.54 \
  safety_bridge_obu_port:=43985 \
  safety_bridge_notif_filter_csv:=FCW,IMA,WWE,WWR
```

## 6) Replay Last Bag (Normal)

```bash
ros2 bag play /home/avalocal/ros_drivers/rosbag2_2026_03_26-15_20_55 --clock
```

## 7) Replay Last Bag with Marker/Overlay Isolation

Use this when you want replayed visualization topics not to interfere with live
visualizer outputs.

```bash
ros2 bag play /home/avalocal/ros_drivers/rosbag2_2026_03_26-15_20_55 --clock \
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

## 8) Useful Checks

```bash
ros2 topic hz /v2x/map_spat_markers
ros2 topic hz /v2x/bsm_markers
ros2 topic hz /v2x/psm_markers
ros2 topic hz /v2x/tim_markers
ros2 topic echo /v2x/tim_markers --once
```