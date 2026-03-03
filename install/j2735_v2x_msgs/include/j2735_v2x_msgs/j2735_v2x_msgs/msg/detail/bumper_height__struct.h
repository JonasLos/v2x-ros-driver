// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/BumperHeight.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/bumper_height.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BUMPER_HEIGHT__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__BUMPER_HEIGHT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'BUMPER_HEIGHT_MIN'.
enum
{
  j2735_v2x_msgs__msg__BumperHeight__BUMPER_HEIGHT_MIN = 0
};

/// Constant 'BUMPER_HEIGHT_MAX'.
enum
{
  j2735_v2x_msgs__msg__BumperHeight__BUMPER_HEIGHT_MAX = 127
};

/// Struct defined in msg/BumperHeight in the package j2735_v2x_msgs.
/**
  * BumperHeight.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__BumperHeight
{
  /// BumperHeight ::= INTEGER (0..127)
  ///    -- in units of 0.01 meters from ground surface.
  uint8_t bumper_height;
} j2735_v2x_msgs__msg__BumperHeight;

// Struct for a sequence of j2735_v2x_msgs__msg__BumperHeight.
typedef struct j2735_v2x_msgs__msg__BumperHeight__Sequence
{
  j2735_v2x_msgs__msg__BumperHeight * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__BumperHeight__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BUMPER_HEIGHT__STRUCT_H_
