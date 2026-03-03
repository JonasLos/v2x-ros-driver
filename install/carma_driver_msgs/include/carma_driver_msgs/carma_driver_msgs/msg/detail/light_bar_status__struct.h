// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_driver_msgs:msg/LightBarStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/msg/light_bar_status.h"


#ifndef CARMA_DRIVER_MSGS__MSG__DETAIL__LIGHT_BAR_STATUS__STRUCT_H_
#define CARMA_DRIVER_MSGS__MSG__DETAIL__LIGHT_BAR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'OFF'.
enum
{
  carma_driver_msgs__msg__LightBarStatus__OFF = 0
};

/// Constant 'ON'.
enum
{
  carma_driver_msgs__msg__LightBarStatus__ON = 1
};

/// Struct defined in msg/LightBarStatus in the package carma_driver_msgs.
/**
  * LightBarStatus.msg
 */
typedef struct carma_driver_msgs__msg__LightBarStatus
{
  /// This message contains the state of the light bar
  /// the states are set based off of front lightbar
  uint8_t green_solid;
  uint8_t yellow_solid;
  uint8_t right_arrow;
  uint8_t left_arrow;
  uint8_t sides_solid;
  uint8_t flash;
  uint8_t green_flash;
  /// following state(s) may not be supported anymore
  uint8_t takedown;
} carma_driver_msgs__msg__LightBarStatus;

// Struct for a sequence of carma_driver_msgs__msg__LightBarStatus.
typedef struct carma_driver_msgs__msg__LightBarStatus__Sequence
{
  carma_driver_msgs__msg__LightBarStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_driver_msgs__msg__LightBarStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_DRIVER_MSGS__MSG__DETAIL__LIGHT_BAR_STATUS__STRUCT_H_
