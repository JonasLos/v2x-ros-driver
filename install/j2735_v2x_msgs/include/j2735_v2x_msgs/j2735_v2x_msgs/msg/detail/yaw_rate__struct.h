// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/YawRate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/yaw_rate.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__YAW_RATE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__YAW_RATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'MIN_YAW_RATE'.
enum
{
  j2735_v2x_msgs__msg__YawRate__MIN_YAW_RATE = -32767
};

/// Constant 'MAX_YAW_RATE'.
enum
{
  j2735_v2x_msgs__msg__YawRate__MAX_YAW_RATE = 32767
};

/// Struct defined in msg/YawRate in the package j2735_v2x_msgs.
/**
  * YawRate.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__YawRate
{
  /// YawRate ::= INTEGER (-32767..32767)
  ///   -- LSB units of 0.01 degrees per second (signed)
  int16_t yaw_rate;
} j2735_v2x_msgs__msg__YawRate;

// Struct for a sequence of j2735_v2x_msgs__msg__YawRate.
typedef struct j2735_v2x_msgs__msg__YawRate__Sequence
{
  j2735_v2x_msgs__msg__YawRate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__YawRate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__YAW_RATE__STRUCT_H_
