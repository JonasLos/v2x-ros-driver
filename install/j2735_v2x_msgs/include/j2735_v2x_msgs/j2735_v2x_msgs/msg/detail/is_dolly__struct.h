// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/IsDolly.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/is_dolly.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__IS_DOLLY__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__IS_DOLLY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/IsDolly in the package j2735_v2x_msgs.
/**
  * IsDolly.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__IsDolly
{
  /// IsDolly ::= BOOLEAN -- When false indicates a trailer unit
  bool is_dolly;
} j2735_v2x_msgs__msg__IsDolly;

// Struct for a sequence of j2735_v2x_msgs__msg__IsDolly.
typedef struct j2735_v2x_msgs__msg__IsDolly__Sequence
{
  j2735_v2x_msgs__msg__IsDolly * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__IsDolly__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__IS_DOLLY__STRUCT_H_
