// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/BumperHeights.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/bumper_heights.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BUMPER_HEIGHTS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__BUMPER_HEIGHTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'front'
// Member 'rear'
#include "j2735_v2x_msgs/msg/detail/bumper_height__struct.h"

/// Struct defined in msg/BumperHeights in the package j2735_v2x_msgs.
/**
  * BumperHeights.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__BumperHeights
{
  /// BumperHeights ::= SEQUENCE {
  ///    front      BumperHeight,
  ///    rear       BumperHeight
  ///    }
  j2735_v2x_msgs__msg__BumperHeight front;
  j2735_v2x_msgs__msg__BumperHeight rear;
} j2735_v2x_msgs__msg__BumperHeights;

// Struct for a sequence of j2735_v2x_msgs__msg__BumperHeights.
typedef struct j2735_v2x_msgs__msg__BumperHeights__Sequence
{
  j2735_v2x_msgs__msg__BumperHeights * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__BumperHeights__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BUMPER_HEIGHTS__STRUCT_H_
