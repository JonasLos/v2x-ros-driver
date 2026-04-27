# RTOR OBU Warning App

This app is a first-cut standalone Commsignia OBU-side evaluator for right-turn-on-red risk.
It uses the vendored CFF/app-notif SDK state interface already present in this workspace to:

- subscribe to ego, vehicle, and object entities
- gate RTOR evaluation on the ego decision zone and right-turn signal
- classify oncoming vehicles into `caution` or `warning`
- classify pedestrians and nearby VRUs into `caution` or `warning`
- emit newline-delimited JSON events to stdout for device-side logging and field tuning

## Build

```bash
colcon build --packages-select v2x_ros_driver \
  --cmake-args \
    -DENABLE_COMMSIGNIA_RTOR_OBU_APP=ON \
    -DCOMMSIGNIA_APP_NOTIF_SDK_DIR=/home/avalocal/ros_drivers/third_party/commsignia/app-notif-sdk
```

## Run on host

```bash
./build/v2x_ros_driver/v2x_rtor_obu_warning_exec \
  127.0.0.1 \
  /home/avalocal/ros_drivers/src/v2x-ros-driver/v2x_ros_driver/config/rtor_obu_warning_config.json \
  43985
```

## Deploy to OBU

Copy these files under `/rwdata/opt/rtor_obu_warning`:

- executable: `v2x_rtor_obu_warning_exec`
- config: `rtor_obu_warning_config.json`

Copy the service template from `v2x_ros_driver/etc/rtor_obu_warning` to `/rwdata/etc/init.d/rtor_obu_warning`, then:

```bash
chmod +x /rwdata/etc/init.d/rtor_obu_warning
/rwdata/etc/init.d/rtor_obu_warning enable
/rwdata/etc/init.d/rtor_obu_warning start
logread | grep rtor_obu_warning
```

## Current scope

This implementation uses static geometry from JSON config as the immediate path to OBU deployment.
It does not yet publish native Commsignia SAF notifications back into the stack because the vendored SDK in this repo exposes subscription and state access but does not provide a confirmed notification send API.
The next implementation step is to replace or augment stdout JSON emission with stack-native alert publication once the device-side custom-app SDK send path is wired in.