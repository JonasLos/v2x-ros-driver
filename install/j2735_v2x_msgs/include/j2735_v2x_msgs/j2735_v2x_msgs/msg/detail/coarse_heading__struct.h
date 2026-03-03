// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/CoarseHeading.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/coarse_heading.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__COARSE_HEADING__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__COARSE_HEADING__STRUCT_H_

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
  j2735_v2x_msgs__msg__CoarseHeading__MIN = 0
};

/// Constant 'MAX'.
enum
{
  j2735_v2x_msgs__msg__CoarseHeading__MAX = 239
};

/// Constant 'UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__CoarseHeading__UNAVAILABLE = 240
};

/// Struct defined in msg/CoarseHeading in the package j2735_v2x_msgs.
/**
  * CoarseHeading.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of CoarseHeading from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * CoarseHeading ::= INTEGER (0..240)
  *    -- Where the LSB is in units of 1.5 degrees 
  *    -- over a range of 0~358.5 degrees
  *    -- the value 240 shall be used for unavailable
 */
typedef struct j2735_v2x_msgs__msg__CoarseHeading
{
  uint8_t heading;
} j2735_v2x_msgs__msg__CoarseHeading;

// Struct for a sequence of j2735_v2x_msgs__msg__CoarseHeading.
typedef struct j2735_v2x_msgs__msg__CoarseHeading__Sequence
{
  j2735_v2x_msgs__msg__CoarseHeading * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__CoarseHeading__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__COARSE_HEADING__STRUCT_H_
