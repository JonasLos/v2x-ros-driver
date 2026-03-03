// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/EnabledLaneList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/enabled_lane_list.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ENABLED_LANE_LIST__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__ENABLED_LANE_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'lane_id_list'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/EnabledLaneList in the package j2735_v2x_msgs.
/**
  *  EnabledLaneList.msg
  *
  *  J2735 2016 message format.
  *
  *  @author Mae Fromm
  *  @version 0.1
  *
  *  The Enabled Lane List data frame is a sequence of lane IDs for lane objects that are activated in the current map
  *  configuration. These lanes, unlike most lanes, have their RevocableLane bit set to one (asserted). Such lanes are not
  *  considered to be part of the current map unless they are in the Enabled Lane List. This concept is used to describe all the
  *  possible regulatory states for a given physical lane.
  *
  *  EnabledLaneList ::= SEQUENCE (SIZE(1..16)) OF LaneID
  * -- The unique ID numbers for each
  * -- lane object which is 'active'
  * -- as part of the dynamic map contents.
 */
typedef struct j2735_v2x_msgs__msg__EnabledLaneList
{
  /// LaneID ::= INTEGER (0..255)
  /// -- the value 0 shall be used when the lane ID is not available or not known
  /// -- the value 255 is reserved for future use
  rosidl_runtime_c__uint16__Sequence lane_id_list;
} j2735_v2x_msgs__msg__EnabledLaneList;

// Struct for a sequence of j2735_v2x_msgs__msg__EnabledLaneList.
typedef struct j2735_v2x_msgs__msg__EnabledLaneList__Sequence
{
  j2735_v2x_msgs__msg__EnabledLaneList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__EnabledLaneList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ENABLED_LANE_LIST__STRUCT_H_
