// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/PreemptPriorityList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/preempt_priority_list.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PREEMPT_PRIORITY_LIST__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__PREEMPT_PRIORITY_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'preempt_priority_list'
#include "j2735_v2x_msgs/msg/detail/signal_control_zone__struct.h"

/// Struct defined in msg/PreemptPriorityList in the package j2735_v2x_msgs.
/**
  * PreemptPriorityList.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The DF_PreemptPriorityList data frame consists of a list of RegionalSignalControlZone entries.
  *
  * PreemptPriorityList ::= SEQUENCE (SIZE(1..32)) OF SignalControlZone
 */
typedef struct j2735_v2x_msgs__msg__PreemptPriorityList
{
  j2735_v2x_msgs__msg__SignalControlZone__Sequence preempt_priority_list;
} j2735_v2x_msgs__msg__PreemptPriorityList;

// Struct for a sequence of j2735_v2x_msgs__msg__PreemptPriorityList.
typedef struct j2735_v2x_msgs__msg__PreemptPriorityList__Sequence
{
  j2735_v2x_msgs__msg__PreemptPriorityList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__PreemptPriorityList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PREEMPT_PRIORITY_LIST__STRUCT_H_
