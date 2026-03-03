// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/NodeXY28b.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/node_xy28b.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_XY28B__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_XY28B__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/NodeXY28b in the package j2735_v2x_msgs.
/**
  * NodeXY28b.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * A 28-bit node type with offset values from the last point in X and Y.
 */
typedef struct j2735_v2x_msgs__msg__NodeXY28b
{
  /// Node-XY-28b ::= SEQUENCE {
  /// x Offset-B14,
  /// y Offset-B14
  /// }
  /// A 14-bit delta offset in X or Y direction from some known point. For non-vehicle centric coordinate frames of
  /// reference, offset is positive to the East (X) and to the North (Y) directions.
  /// Offset-B14 ::= INTEGER (-8192..8191)
  /// -- a range of +- 81.91 meters
  float x;
  float y;
} j2735_v2x_msgs__msg__NodeXY28b;

// Struct for a sequence of j2735_v2x_msgs__msg__NodeXY28b.
typedef struct j2735_v2x_msgs__msg__NodeXY28b__Sequence
{
  j2735_v2x_msgs__msg__NodeXY28b * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__NodeXY28b__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_XY28B__STRUCT_H_
