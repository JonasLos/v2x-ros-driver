// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_driver_msgs:msg/RobotEnabled.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/msg/robot_enabled.h"


#ifndef CARMA_DRIVER_MSGS__MSG__DETAIL__ROBOT_ENABLED__STRUCT_H_
#define CARMA_DRIVER_MSGS__MSG__DETAIL__ROBOT_ENABLED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/RobotEnabled in the package carma_driver_msgs.
/**
  * RobotEnabled.msg
 */
typedef struct carma_driver_msgs__msg__RobotEnabled
{
  /// This message is feedback to the system to inform the ROS network that
  /// the SRX controller has enabled robotic control. Also contains feedback for
  /// injected torque and braking.
  /// true if the controller is actively commanding the vehicle
  bool robot_active;
  /// Status of robot_enabled, if set the controller is listening to command topics
  bool robot_enabled;
  /// The value of Torque being commanded to the vehicle Nm
  double torque;
  bool torque_validity;
  /// Braking deceleration - The commanded braking deceleration m/s^2
  double brake_decel;
  bool brake_decel_validity;
  /// Throttle effort as reported by vehicle [-100,100]
  double throttle_effort;
  bool throttle_effort_validity;
  /// Braking effort as reported by vehicle [-100,100]
  double braking_effort;
  bool braking_effort_validity;
} carma_driver_msgs__msg__RobotEnabled;

// Struct for a sequence of carma_driver_msgs__msg__RobotEnabled.
typedef struct carma_driver_msgs__msg__RobotEnabled__Sequence
{
  carma_driver_msgs__msg__RobotEnabled * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_driver_msgs__msg__RobotEnabled__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_DRIVER_MSGS__MSG__DETAIL__ROBOT_ENABLED__STRUCT_H_
