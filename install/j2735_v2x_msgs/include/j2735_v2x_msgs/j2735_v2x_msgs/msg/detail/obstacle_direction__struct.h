// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/ObstacleDirection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/obstacle_direction.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__OBSTACLE_DIRECTION__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__OBSTACLE_DIRECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'direction'
#include "j2735_v2x_msgs/msg/detail/angle__struct.h"

/// Struct defined in msg/ObstacleDirection in the package j2735_v2x_msgs.
/**
  * ObstacleDirection.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__ObstacleDirection
{
  /// ObstacleDirection ::= Angle
  /// The data is expressed in degrees as azimuth relative to forward direction of vehicle.
  j2735_v2x_msgs__msg__Angle direction;
} j2735_v2x_msgs__msg__ObstacleDirection;

// Struct for a sequence of j2735_v2x_msgs__msg__ObstacleDirection.
typedef struct j2735_v2x_msgs__msg__ObstacleDirection__Sequence
{
  j2735_v2x_msgs__msg__ObstacleDirection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__ObstacleDirection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__OBSTACLE_DIRECTION__STRUCT_H_
