// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/ObstacleDistance.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/obstacle_distance.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'DISTANCE_MIN'.
enum
{
  j2735_v2x_msgs__msg__ObstacleDistance__DISTANCE_MIN = 0
};

/// Constant 'DISTANCE_MAX'.
enum
{
  j2735_v2x_msgs__msg__ObstacleDistance__DISTANCE_MAX = 32767
};

/// Struct defined in msg/ObstacleDistance in the package j2735_v2x_msgs.
/**
  * ObstacleDistance.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__ObstacleDistance
{
  /// ObstacleDistance ::= INTEGER (0..32767) -- LSB units of meters
  uint16_t distance;
} j2735_v2x_msgs__msg__ObstacleDistance;

// Struct for a sequence of j2735_v2x_msgs__msg__ObstacleDistance.
typedef struct j2735_v2x_msgs__msg__ObstacleDistance__Sequence
{
  j2735_v2x_msgs__msg__ObstacleDistance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__ObstacleDistance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__OBSTACLE_DISTANCE__STRUCT_H_
