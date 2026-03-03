// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/NodeXY32b.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/node_xy32b.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_XY32B__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_XY32B__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/NodeXY32b in the package j2735_v2x_msgs.
/**
  * NodeXY32b.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * A 32-bit node type with offset values from the last point in X and Y.
 */
typedef struct j2735_v2x_msgs__msg__NodeXY32b
{
  /// Node-XY-32b ::= SEQUENCE {
  /// x Offset-B16,
  /// y Offset-B16
  /// }
  /// A 16-bit delta offset in X, Y or Z direction from some known point. For non-vehicle centric coordinate frames of
  /// reference, offset is positive to the East (X) and to the North (Y) directions. The most negative value shall be used to
  /// indicate an unknown value.
  /// Offset-B16 ::= INTEGER (-32768..32767)
  /// -- a range of +- 327.68 meters
  float x;
  float y;
} j2735_v2x_msgs__msg__NodeXY32b;

// Struct for a sequence of j2735_v2x_msgs__msg__NodeXY32b.
typedef struct j2735_v2x_msgs__msg__NodeXY32b__Sequence
{
  j2735_v2x_msgs__msg__NodeXY32b * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__NodeXY32b__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_XY32B__STRUCT_H_
