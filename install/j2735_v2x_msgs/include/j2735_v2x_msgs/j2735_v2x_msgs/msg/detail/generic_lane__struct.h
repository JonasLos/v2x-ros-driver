// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/GenericLane.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/generic_lane.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__GENERIC_LANE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__GENERIC_LANE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'lane_attributes'
#include "j2735_v2x_msgs/msg/detail/lane_attributes__struct.h"
// Member 'maneuvers'
#include "j2735_v2x_msgs/msg/detail/allowed_maneuvers__struct.h"
// Member 'node_list'
#include "j2735_v2x_msgs/msg/detail/node_list_xy__struct.h"
// Member 'connects_to'
#include "j2735_v2x_msgs/msg/detail/connects_to_list__struct.h"
// Member 'overlay_lane_list'
#include "j2735_v2x_msgs/msg/detail/overlay_lane_list__struct.h"

/// Struct defined in msg/GenericLane in the package j2735_v2x_msgs.
/**
  * GenericLane.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * GenericLane ::= SEQUENCE {
  *
  * laneID LaneID ::= INTEGER (0..255)
  * -- The unique ID number assigned
  * -- to this lane object
 */
typedef struct j2735_v2x_msgs__msg__GenericLane
{
  uint8_t lane_id;
  /// name DescriptiveName OPTIONAL := IA5String (SIZE(1..63))
  /// -- often for debug use only
  /// -- but at times used to name ped crossings
  rosidl_runtime_c__String name;
  bool name_exists;
  /// ingressApproach ApproachID OPTIONAL, -- inbound
  /// ApproachID ::= INTEGER (0..15)
  uint8_t ingress_approach;
  bool ingress_approach_exists;
  /// egressApproach ApproachID OPTIONAL, -- outbound
  /// -- Approach IDs to which this lane belongs
  uint8_t egress_approach;
  bool egress_approach_exists;
  /// laneAttributes LaneAttributes,
  /// -- All Attribute information about
  /// -- the basic selected lane type
  /// -- Directions of use, Geometric co-sharing
  /// -- and Type Specific Attributes
  /// -- These Attributes are 'lane - global' that is,
  /// -- they are true for the entire length of the lane
  j2735_v2x_msgs__msg__LaneAttributes lane_attributes;
  /// maneuvers AllowedManeuvers OPTIONAL,
  /// -- the permitted maneuvers for this lane
  j2735_v2x_msgs__msg__AllowedManeuvers maneuvers;
  bool maneuvers_exists;
  /// nodeList NodeListXY,
  /// -- Lane spatial path information as well as
  /// -- various Attribute information along the node path
  /// -- Attributes found here are more general and may
  /// -- come and go over the length of the lane.
  j2735_v2x_msgs__msg__NodeListXY node_list;
  /// connectsTo ConnectsToList OPTIONAL,
  /// -- a list of other lanes and their signal group IDs
  /// -- each connecting lane and its signal group ID
  /// -- is given, therefore this element provides the
  /// -- information formerly in "signalGroups" in prior
  /// -- editions.
  j2735_v2x_msgs__msg__ConnectsToList connects_to;
  bool connects_to_exists;
  /// overlays OverlayLaneList OPTIONAL,
  /// -- A list of any lanes which have spatial paths that
  /// -- overlay (run on top of, and not simply cross)
  /// -- the path of this lane when used
  j2735_v2x_msgs__msg__OverlayLaneList overlay_lane_list;
  bool overlay_lane_list_exists;
} j2735_v2x_msgs__msg__GenericLane;

// Struct for a sequence of j2735_v2x_msgs__msg__GenericLane.
typedef struct j2735_v2x_msgs__msg__GenericLane__Sequence
{
  j2735_v2x_msgs__msg__GenericLane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__GenericLane__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__GENERIC_LANE__STRUCT_H_
