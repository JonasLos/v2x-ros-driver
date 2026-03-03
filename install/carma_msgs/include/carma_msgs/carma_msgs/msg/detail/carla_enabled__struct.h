// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_msgs:msg/CarlaEnabled.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_msgs/msg/carla_enabled.h"


#ifndef CARMA_MSGS__MSG__DETAIL__CARLA_ENABLED__STRUCT_H_
#define CARMA_MSGS__MSG__DETAIL__CARLA_ENABLED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/CarlaEnabled in the package carma_msgs.
/**
  * CarlaEnabled.msg
 */
typedef struct carma_msgs__msg__CarlaEnabled
{
  ///  This message is feedback to the system to inform the ROS network that
  ///  Carla starts and is ready for the simulation
  ///  @author Fang Zhou
  /// Status of carla_enabled
  bool carla_enabled;
} carma_msgs__msg__CarlaEnabled;

// Struct for a sequence of carma_msgs__msg__CarlaEnabled.
typedef struct carma_msgs__msg__CarlaEnabled__Sequence
{
  carma_msgs__msg__CarlaEnabled * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_msgs__msg__CarlaEnabled__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_MSGS__MSG__DETAIL__CARLA_ENABLED__STRUCT_H_
