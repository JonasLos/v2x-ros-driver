// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/VehicleWidth.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/vehicle_width.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_WIDTH__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_WIDTH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'VEHICLE_WIDTH_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__VehicleWidth__VEHICLE_WIDTH_UNAVAILABLE = 0
};

/// Constant 'VEHICLE_WIDTH_MAX'.
enum
{
  j2735_v2x_msgs__msg__VehicleWidth__VEHICLE_WIDTH_MAX = 1023
};

/// Constant 'VEHICLE_WIDTH_MIN'.
enum
{
  j2735_v2x_msgs__msg__VehicleWidth__VEHICLE_WIDTH_MIN = 1
};

/// Struct defined in msg/VehicleWidth in the package j2735_v2x_msgs.
/**
  * VehicleWidth.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__VehicleWidth
{
  /// VehicleWidth ::= INTEGER (0..1023)
  ///    -- LSB units are 1 cm with a range of >10 meters
  ///    -- The value zero shall be sent when data is unavailable.
  uint16_t vehicle_width;
} j2735_v2x_msgs__msg__VehicleWidth;

// Struct for a sequence of j2735_v2x_msgs__msg__VehicleWidth.
typedef struct j2735_v2x_msgs__msg__VehicleWidth__Sequence
{
  j2735_v2x_msgs__msg__VehicleWidth * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__VehicleWidth__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_WIDTH__STRUCT_H_
