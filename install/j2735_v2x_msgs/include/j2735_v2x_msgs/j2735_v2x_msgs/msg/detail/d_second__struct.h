// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/DSecond.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/d_second.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__D_SECOND__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__D_SECOND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'MILLISEC_WITHIN_MINUTE_NON_LEAP_MIN'.
enum
{
  j2735_v2x_msgs__msg__DSecond__MILLISEC_WITHIN_MINUTE_NON_LEAP_MIN = 0
};

/// Constant 'MILLISEC_WITHIN_MINUTE_NON_LEAP_MAX'.
enum
{
  j2735_v2x_msgs__msg__DSecond__MILLISEC_WITHIN_MINUTE_NON_LEAP_MAX = 59999
};

/// Constant 'MILLISEC_WITHIN_MINUTE_LEAP_MIN'.
enum
{
  j2735_v2x_msgs__msg__DSecond__MILLISEC_WITHIN_MINUTE_LEAP_MIN = 60000
};

/// Constant 'MILLISEC_WITHIN_MINUTE_LEAP_MAX'.
enum
{
  j2735_v2x_msgs__msg__DSecond__MILLISEC_WITHIN_MINUTE_LEAP_MAX = 60999
};

/// Constant 'RESERVED_MIN'.
enum
{
  j2735_v2x_msgs__msg__DSecond__RESERVED_MIN = 61000
};

/// Constant 'RESERVED_MAX'.
enum
{
  j2735_v2x_msgs__msg__DSecond__RESERVED_MAX = 65534
};

/// Constant 'UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__DSecond__UNAVAILABLE = 65535
};

/// Struct defined in msg/DSecond in the package j2735_v2x_msgs.
/**
  * DSecond.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of DSecond from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * DSecond ::= INTEGER (0..65535) -- units of milliseconds
 */
typedef struct j2735_v2x_msgs__msg__DSecond
{
  uint16_t millisecond;
} j2735_v2x_msgs__msg__DSecond;

// Struct for a sequence of j2735_v2x_msgs__msg__DSecond.
typedef struct j2735_v2x_msgs__msg__DSecond__Sequence
{
  j2735_v2x_msgs__msg__DSecond * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__DSecond__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__D_SECOND__STRUCT_H_
