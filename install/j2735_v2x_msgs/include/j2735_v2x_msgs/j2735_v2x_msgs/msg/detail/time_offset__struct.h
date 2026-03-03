// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/TimeOffset.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/time_offset.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TIME_OFFSET__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__TIME_OFFSET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'MIN'.
enum
{
  j2735_v2x_msgs__msg__TimeOffset__MIN = 1
};

/// Constant 'MAX'.
enum
{
  j2735_v2x_msgs__msg__TimeOffset__MAX = 65534
};

/// Constant 'UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__TimeOffset__UNAVAILABLE = 65535
};

/// Struct defined in msg/TimeOffset in the package j2735_v2x_msgs.
/**
  * TimeOffset.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of TimeOffset from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * TimeOffset ::= INTEGER (1..65535)
  *    -- LSB units of of 10 mSec, 
  *    -- with a range of 0.01 seconds to 10 minutes and 55.34 seconds
  *    -- a value of 65534 to be used for 655.34 seconds or greater
  *    -- a value of 65535 to be unavailable
 */
typedef struct j2735_v2x_msgs__msg__TimeOffset
{
  uint16_t offset;
} j2735_v2x_msgs__msg__TimeOffset;

// Struct for a sequence of j2735_v2x_msgs__msg__TimeOffset.
typedef struct j2735_v2x_msgs__msg__TimeOffset__Sequence
{
  j2735_v2x_msgs__msg__TimeOffset * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__TimeOffset__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TIME_OFFSET__STRUCT_H_
