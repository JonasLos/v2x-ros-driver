// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/PivotingAllowed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/pivoting_allowed.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PIVOTING_ALLOWED__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__PIVOTING_ALLOWED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/PivotingAllowed in the package j2735_v2x_msgs.
/**
  * PivotingAllowed.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__PivotingAllowed
{
  /// PivotingAllowed ::= BOOLEAN
  bool pivoting_allowed;
} j2735_v2x_msgs__msg__PivotingAllowed;

// Struct for a sequence of j2735_v2x_msgs__msg__PivotingAllowed.
typedef struct j2735_v2x_msgs__msg__PivotingAllowed__Sequence
{
  j2735_v2x_msgs__msg__PivotingAllowed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__PivotingAllowed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PIVOTING_ALLOWED__STRUCT_H_
