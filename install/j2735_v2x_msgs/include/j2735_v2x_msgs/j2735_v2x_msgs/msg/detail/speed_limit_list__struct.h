// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/SpeedLimitList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/speed_limit_list.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__SPEED_LIMIT_LIST__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__SPEED_LIMIT_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'speed_limits'
#include "j2735_v2x_msgs/msg/detail/regulatory_speed_limit__struct.h"

/// Struct defined in msg/SpeedLimitList in the package j2735_v2x_msgs.
/**
  * SpeedLimitList.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * SpeedLimitList ::= SEQUENCE (SIZE(1..9)) OF RegulatorySpeedLimit
 */
typedef struct j2735_v2x_msgs__msg__SpeedLimitList
{
  /// A list of RegulatorySpeedLimit
  j2735_v2x_msgs__msg__RegulatorySpeedLimit__Sequence speed_limits;
} j2735_v2x_msgs__msg__SpeedLimitList;

// Struct for a sequence of j2735_v2x_msgs__msg__SpeedLimitList.
typedef struct j2735_v2x_msgs__msg__SpeedLimitList__Sequence
{
  j2735_v2x_msgs__msg__SpeedLimitList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__SpeedLimitList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SPEED_LIMIT_LIST__STRUCT_H_
