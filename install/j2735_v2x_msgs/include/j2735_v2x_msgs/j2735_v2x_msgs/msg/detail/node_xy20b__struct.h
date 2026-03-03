// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/NodeXY20b.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/node_xy20b.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_XY20B__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_XY20B__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/NodeXY20b in the package j2735_v2x_msgs.
/**
  * NodeXY20b.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * A 20-bit node type with offset values from the last point in X and Y.
  *
  * Node-XY-20b ::= SEQUENCE {
  * x Offset-B10,
  * y Offset-B10
  * }
 */
typedef struct j2735_v2x_msgs__msg__NodeXY20b
{
  /// Offset-B10 ::= INTEGER (-512..511)
  /// -- a range of +- 5.11 meters
  /// A 10-bit delta offset in X, Y or Z direction from some known point. For non-vehicle centric coordinate frames of
  /// reference, offset is positive to the East (X) and to the North (Y) directions. The most negative value shall be used to
  /// indicate an unknown value.
  float x;
  float y;
} j2735_v2x_msgs__msg__NodeXY20b;

// Struct for a sequence of j2735_v2x_msgs__msg__NodeXY20b.
typedef struct j2735_v2x_msgs__msg__NodeXY20b__Sequence
{
  j2735_v2x_msgs__msg__NodeXY20b * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__NodeXY20b__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_XY20B__STRUCT_H_
