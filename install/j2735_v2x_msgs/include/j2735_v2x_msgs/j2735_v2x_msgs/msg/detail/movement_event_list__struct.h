// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/MovementEventList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/movement_event_list.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT_LIST__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'movement_event_list'
#include "j2735_v2x_msgs/msg/detail/movement_event__struct.h"

/// Struct defined in msg/MovementEventList in the package j2735_v2x_msgs.
/**
  * MovementEventList.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The MovementEventList data frame consists of a list of MovementEvent entries.
  *
  * MovementEventList ::= SEQUENCE (SIZE(1..16)) OF MovementEvent
 */
typedef struct j2735_v2x_msgs__msg__MovementEventList
{
  j2735_v2x_msgs__msg__MovementEvent__Sequence movement_event_list;
} j2735_v2x_msgs__msg__MovementEventList;

// Struct for a sequence of j2735_v2x_msgs__msg__MovementEventList.
typedef struct j2735_v2x_msgs__msg__MovementEventList__Sequence
{
  j2735_v2x_msgs__msg__MovementEventList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__MovementEventList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT_LIST__STRUCT_H_
