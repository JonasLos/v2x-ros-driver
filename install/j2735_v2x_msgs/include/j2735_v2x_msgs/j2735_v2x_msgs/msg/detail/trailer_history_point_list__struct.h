// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/TrailerHistoryPointList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/trailer_history_point_list.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAILER_HISTORY_POINT_LIST__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAILER_HISTORY_POINT_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'MIN_SIZE'.
enum
{
  j2735_v2x_msgs__msg__TrailerHistoryPointList__MIN_SIZE = 1
};

/// Constant 'MAX_SIZE'.
enum
{
  j2735_v2x_msgs__msg__TrailerHistoryPointList__MAX_SIZE = 23
};

// Include directives for member types
// Member 'trailer_history_points'
#include "j2735_v2x_msgs/msg/detail/trailer_history_point__struct.h"

/// Struct defined in msg/TrailerHistoryPointList in the package j2735_v2x_msgs.
/**
  * TrailerHistoryPointList.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__TrailerHistoryPointList
{
  /// TrailerHistoryPointList ::= SEQUENCE (SIZE(1..23)) OF TrailerHistoryPoint
  j2735_v2x_msgs__msg__TrailerHistoryPoint__Sequence trailer_history_points;
} j2735_v2x_msgs__msg__TrailerHistoryPointList;

// Struct for a sequence of j2735_v2x_msgs__msg__TrailerHistoryPointList.
typedef struct j2735_v2x_msgs__msg__TrailerHistoryPointList__Sequence
{
  j2735_v2x_msgs__msg__TrailerHistoryPointList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__TrailerHistoryPointList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAILER_HISTORY_POINT_LIST__STRUCT_H_
