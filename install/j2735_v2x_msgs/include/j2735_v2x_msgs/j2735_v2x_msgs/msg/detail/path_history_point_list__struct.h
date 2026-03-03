// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/PathHistoryPointList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/path_history_point_list.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT_LIST__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT_LIST__STRUCT_H_

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
  j2735_v2x_msgs__msg__PathHistoryPointList__MIN_SIZE = 1
};

/// Constant 'MAX_SIZE'.
enum
{
  j2735_v2x_msgs__msg__PathHistoryPointList__MAX_SIZE = 23
};

// Include directives for member types
// Member 'points'
#include "j2735_v2x_msgs/msg/detail/path_history_point__struct.h"

/// Struct defined in msg/PathHistoryPointList in the package j2735_v2x_msgs.
/**
  * PathHistoryPointList.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of PathHistoryPointList from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * PathHistoryPointList ::= SEQUENCE (SIZE(1..23)) OF PathHistoryPoint
 */
typedef struct j2735_v2x_msgs__msg__PathHistoryPointList
{
  j2735_v2x_msgs__msg__PathHistoryPoint__Sequence points;
} j2735_v2x_msgs__msg__PathHistoryPointList;

// Struct for a sequence of j2735_v2x_msgs__msg__PathHistoryPointList.
typedef struct j2735_v2x_msgs__msg__PathHistoryPointList__Sequence
{
  j2735_v2x_msgs__msg__PathHistoryPointList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__PathHistoryPointList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT_LIST__STRUCT_H_
