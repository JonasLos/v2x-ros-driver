// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/Angle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/angle.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ANGLE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__ANGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ANGLE_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__Angle__ANGLE_UNAVAILABLE = 28800
};

/// Constant 'ANGLE_MAX'.
enum
{
  j2735_v2x_msgs__msg__Angle__ANGLE_MAX = 28799
};

/// Constant 'ANGLE_MIN'.
enum
{
  j2735_v2x_msgs__msg__Angle__ANGLE_MIN = 0
};

/// Struct defined in msg/Angle in the package j2735_v2x_msgs.
/**
  * Angle.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__Angle
{
  /// Angle ::= INTEGER (0..28800)
  ///    -- LSB of 0.0125 degrees
  ///    -- A range of 0 to 359.9875 degrees
  uint16_t angle;
} j2735_v2x_msgs__msg__Angle;

// Struct for a sequence of j2735_v2x_msgs__msg__Angle.
typedef struct j2735_v2x_msgs__msg__Angle__Sequence
{
  j2735_v2x_msgs__msg__Angle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__Angle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ANGLE__STRUCT_H_
