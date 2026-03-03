// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/DMinute.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/d_minute.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__D_MINUTE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__D_MINUTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'MINUTE_IN_HOUR_MIN'.
enum
{
  j2735_v2x_msgs__msg__DMinute__MINUTE_IN_HOUR_MIN = 0
};

/// Constant 'MINUTE_IN_HOUR_MAX'.
enum
{
  j2735_v2x_msgs__msg__DMinute__MINUTE_IN_HOUR_MAX = 59
};

/// Constant 'UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__DMinute__UNAVAILABLE = 60
};

/// Struct defined in msg/DMinute in the package j2735_v2x_msgs.
/**
  * DMinute.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of DMinute from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * DMinute ::= INTEGER (0..60) -- units of minutes
 */
typedef struct j2735_v2x_msgs__msg__DMinute
{
  uint8_t minute;
} j2735_v2x_msgs__msg__DMinute;

// Struct for a sequence of j2735_v2x_msgs__msg__DMinute.
typedef struct j2735_v2x_msgs__msg__DMinute__Sequence
{
  j2735_v2x_msgs__msg__DMinute * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__DMinute__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__D_MINUTE__STRUCT_H_
