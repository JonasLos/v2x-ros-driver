// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/NodeAttributeSetXY.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/node_attribute_set_xy.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'local_node'
#include "j2735_v2x_msgs/msg/detail/node_attribute_xy_list__struct.h"
// Member 'disabled'
// Member 'enabled'
#include "j2735_v2x_msgs/msg/detail/segment_attribute_xy_list__struct.h"
// Member 'data'
#include "j2735_v2x_msgs/msg/detail/lane_data_attribute_list__struct.h"

/// Struct defined in msg/NodeAttributeSetXY in the package j2735_v2x_msgs.
/**
  * NodeAttributeSetXY.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The DF_NodeAttributeSetXY is a data frame used to convey one or more changes in the attribute set which occur
  * at the node point at which it is used. Some of these attributes persist until the end of the lane or until changed again or
  * turned off.
  *
  * NodeAttributeSetXY ::= SEQUENCE {
  * localNode NodeAttributeXYList OPTIONAL,
  * -- Attribute states which pertain to this node point
  * disabled SegmentAttributeXYList OPTIONAL,
  * -- Attribute states which are disabled at this node point
  * enabled SegmentAttributeXYList OPTIONAL,
  * -- Attribute states which are enabled at this node point
  * -- and which remain enabled until disabled or the lane ends
  * data LaneDataAttributeList OPTIONAL,
  * -- Attributes which require an additional data values
  * -- some of these are local to the node point, while others
  * -- persist with the provided values until changed
  * -- and this is indicated in each entry
  * dWidth Offset-B10 OPTIONAL,
  * -- A value added to the current lane width
  * -- at this node and from this node onwards, in 1cm steps
  * -- lane width between nodes are a linear taper between pts
  * -- the value of zero shall not be sent here
  * dElevation Offset-B10 OPTIONAL,
  * -- A value added to the current Elevation
  * -- at this node from this node onwards, in 10cm steps
  * -- elevations between nodes are a linear taper between pts
  * -- the value of zero shall not be sent here
  * regional SEQUENCE (SIZE(1..4)) OF RegionalExtension {{REGION.Reg-NodeAttributeSetXY}}OPTIONAL,
  * ...
  * }
 */
typedef struct j2735_v2x_msgs__msg__NodeAttributeSetXY
{
  j2735_v2x_msgs__msg__NodeAttributeXYList local_node;
  bool local_node_exists;
  j2735_v2x_msgs__msg__SegmentAttributeXYList disabled;
  bool disabled_exists;
  j2735_v2x_msgs__msg__SegmentAttributeXYList enabled;
  bool enabled_exists;
  j2735_v2x_msgs__msg__LaneDataAttributeList data;
  bool data_exists;
  /// Offset-B10 ::= INTEGER (-512..511)
  /// -- a range of +- 5.11 meters
  float d_width;
  bool d_width_exists;
  float d_elevation;
  bool d_elevation_exists;
} j2735_v2x_msgs__msg__NodeAttributeSetXY;

// Struct for a sequence of j2735_v2x_msgs__msg__NodeAttributeSetXY.
typedef struct j2735_v2x_msgs__msg__NodeAttributeSetXY__Sequence
{
  j2735_v2x_msgs__msg__NodeAttributeSetXY * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__NodeAttributeSetXY__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__STRUCT_H_
