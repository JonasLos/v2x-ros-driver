// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/AdvisorySpeedList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/advisory_speed_list.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED_LIST__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'advisory_speed_list'
#include "j2735_v2x_msgs/msg/detail/advisory_speed__struct.h"

/// Struct defined in msg/AdvisorySpeedList in the package j2735_v2x_msgs.
/**
  * AdvisorySpeedList.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The AdvisorySpeedList data frame consists of a list of AdvisorySpeed entries.
  *
  * AdvisorySpeedList ::= SEQUENCE (SIZE(1..16)) OF AdvisorySpeed
 */
typedef struct j2735_v2x_msgs__msg__AdvisorySpeedList
{
  j2735_v2x_msgs__msg__AdvisorySpeed__Sequence advisory_speed_list;
} j2735_v2x_msgs__msg__AdvisorySpeedList;

// Struct for a sequence of j2735_v2x_msgs__msg__AdvisorySpeedList.
typedef struct j2735_v2x_msgs__msg__AdvisorySpeedList__Sequence
{
  j2735_v2x_msgs__msg__AdvisorySpeedList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__AdvisorySpeedList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED_LIST__STRUCT_H_
