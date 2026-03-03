// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/VehicleLength.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/vehicle_length.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_LENGTH__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_LENGTH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'VEHICLE_LENGTH_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__VehicleLength__VEHICLE_LENGTH_UNAVAILABLE = 0
};

/// Constant 'VEHICLE_LENGTH_MAX'.
enum
{
  j2735_v2x_msgs__msg__VehicleLength__VEHICLE_LENGTH_MAX = 4095
};

/// Constant 'VEHICLE_LENGTH_MIN'.
enum
{
  j2735_v2x_msgs__msg__VehicleLength__VEHICLE_LENGTH_MIN = 1
};

/// Struct defined in msg/VehicleLength in the package j2735_v2x_msgs.
/**
  * VehicleLength.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__VehicleLength
{
  /// VehicleLength ::= INTEGER (0.. 4095)
  ///     -- LSB units of 1 cm with a range of >40 meters
  uint16_t vehicle_length;
} j2735_v2x_msgs__msg__VehicleLength;

// Struct for a sequence of j2735_v2x_msgs__msg__VehicleLength.
typedef struct j2735_v2x_msgs__msg__VehicleLength__Sequence
{
  j2735_v2x_msgs__msg__VehicleLength * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__VehicleLength__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_LENGTH__STRUCT_H_
