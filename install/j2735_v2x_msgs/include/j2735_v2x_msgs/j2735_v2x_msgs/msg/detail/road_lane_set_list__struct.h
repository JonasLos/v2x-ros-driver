// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/RoadLaneSetList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/road_lane_set_list.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ROAD_LANE_SET_LIST__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__ROAD_LANE_SET_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'road_lane_set_list'
#include "j2735_v2x_msgs/msg/detail/generic_lane__struct.h"

/// Struct defined in msg/RoadLaneSetList in the package j2735_v2x_msgs.
/**
  * RoadLaneSetList.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The DF_RoadLaneSetList data frame consists of a list of GenericLane entries used to describe a segment of
  *  roadway.
  *
  * RoadLaneSetList ::= SEQUENCE (SIZE(1..255)) OF GenericLane
 */
typedef struct j2735_v2x_msgs__msg__RoadLaneSetList
{
  j2735_v2x_msgs__msg__GenericLane__Sequence road_lane_set_list;
} j2735_v2x_msgs__msg__RoadLaneSetList;

// Struct for a sequence of j2735_v2x_msgs__msg__RoadLaneSetList.
typedef struct j2735_v2x_msgs__msg__RoadLaneSetList__Sequence
{
  j2735_v2x_msgs__msg__RoadLaneSetList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__RoadLaneSetList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ROAD_LANE_SET_LIST__STRUCT_H_
