// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/ManeuverAssistList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/maneuver_assist_list.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__MANEUVER_ASSIST_LIST__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__MANEUVER_ASSIST_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'connection_maneuver_assist_list'
#include "j2735_v2x_msgs/msg/detail/connection_maneuver_assist__struct.h"

/// Struct defined in msg/ManeuverAssistList in the package j2735_v2x_msgs.
/**
  * This entry is used directly by one other data structure in this standard, a DF called DF_LaneAttributes <ASN>.
  *  In addition, this item may be used by data structures in other ITS standards.
  * ManeuverAssistList ::= SEQUENCE (SIZE(1..16)) OF ConnectionManeuverAssist
 */
typedef struct j2735_v2x_msgs__msg__ManeuverAssistList
{
  j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence connection_maneuver_assist_list;
} j2735_v2x_msgs__msg__ManeuverAssistList;

// Struct for a sequence of j2735_v2x_msgs__msg__ManeuverAssistList.
typedef struct j2735_v2x_msgs__msg__ManeuverAssistList__Sequence
{
  j2735_v2x_msgs__msg__ManeuverAssistList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__ManeuverAssistList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__MANEUVER_ASSIST_LIST__STRUCT_H_
