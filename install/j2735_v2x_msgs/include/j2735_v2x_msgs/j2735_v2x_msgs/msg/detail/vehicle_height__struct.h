// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/VehicleHeight.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/vehicle_height.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_HEIGHT__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_HEIGHT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'VEHICLE_HEIGHT_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__VehicleHeight__VEHICLE_HEIGHT_UNAVAILABLE = 0
};

/// Constant 'VEHICLE_HEIGHT_MAX'.
enum
{
  j2735_v2x_msgs__msg__VehicleHeight__VEHICLE_HEIGHT_MAX = 127
};

/// Constant 'VEHICLE_HEIGHT_MIN'.
enum
{
  j2735_v2x_msgs__msg__VehicleHeight__VEHICLE_HEIGHT_MIN = 1
};

/// Struct defined in msg/VehicleHeight in the package j2735_v2x_msgs.
/**
  * VehicleHeight.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__VehicleHeight
{
  /// VehicleHeight ::= INTEGER (0..127)
  ///     -- the height of the vehicle
  ///     -- LSB units of 5 cm, range to 6.35 meters
  uint8_t vehicle_height;
} j2735_v2x_msgs__msg__VehicleHeight;

// Struct for a sequence of j2735_v2x_msgs__msg__VehicleHeight.
typedef struct j2735_v2x_msgs__msg__VehicleHeight__Sequence
{
  j2735_v2x_msgs__msg__VehicleHeight * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__VehicleHeight__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_HEIGHT__STRUCT_H_
