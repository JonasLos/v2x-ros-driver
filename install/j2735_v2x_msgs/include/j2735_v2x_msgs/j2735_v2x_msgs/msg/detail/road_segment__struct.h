// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/RoadSegment.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/road_segment.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT__STRUCT_H_

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
// Member 'id'
#include "j2735_v2x_msgs/msg/detail/road_segment_reference_id__struct.h"
// Member 'ref_point'
#include "j2735_v2x_msgs/msg/detail/position3_d__struct.h"
// Member 'speed_limits'
#include "j2735_v2x_msgs/msg/detail/speed_limit_list__struct.h"
// Member 'road_lane_set'
#include "j2735_v2x_msgs/msg/detail/road_lane_set_list__struct.h"

/// Struct defined in msg/RoadSegment in the package j2735_v2x_msgs.
/**
  * RoadSegment.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The DF_ RoadSegment data frame is a complete description of a RoadSegment including its geometry and its
  * allowed navigational paths (independent of any additional regulatory restrictions that may apply over time or from user
  * classification) and any current disruptions such as a work zone or incident event.
  *
  * RoadSegment ::= SEQUENCE {
  * name DescriptiveName OPTIONAL,
  * id RoadSegmentReferenceID,
  * -- a globally unique value for the segment
  * revision MsgCount,
  * -- Required default values about the descriptions to follow
  * refPoint Position3D,
  * -- the reference from which subsequent
  * -- data points are offset until a new
  * -- point is used.
  * laneWidth LaneWidth OPTIONAL,
  * -- Reference width used by all subsequent
  * -- lanes unless a new width is given
  * speedLimits SpeedLimitList OPTIONAL,
  * -- Reference regulatory speed limits
  * -- used by all subsequent
  * -- lanes unless a new speed is given
  * -- See Section 11 for converting and
  * -- translating speed expressed in mph
  * -- into units of m/s
  * -- Data describing disruptions in the RoadSegment
  * -- such as work zones etc will be added here;
  * -- in the US the SAE ITIS codes would be used here
  * -- The details regarding each lane type in the RoadSegment
  * roadLaneSet RoadLaneSetList,
  * regional SEQUENCE (SIZE(1..4)) OF RegionalExtension {{REGION.Reg-RoadSegment}} OPTIONAL,
  * ...
  * }
 */
typedef struct j2735_v2x_msgs__msg__RoadSegment
{
  /// name DescriptiveName OPTIONAL := IA5String (SIZE(1..63))
  /// -- often for debug use only
  /// -- but at times used to name ped crossings
  rosidl_runtime_c__String name;
  bool name_exists;
  j2735_v2x_msgs__msg__RoadSegmentReferenceID id;
  /// MsgCount ::= INTEGER (0..127)
  uint8_t revision;
  j2735_v2x_msgs__msg__Position3D ref_point;
  /// LaneWidth OPTIONAL ::= INTEGER (0..32767) -- units of 1 cm
  uint16_t lane_width;
  bool lane_width_exists;
  j2735_v2x_msgs__msg__SpeedLimitList speed_limits;
  bool speed_limits_exists;
  j2735_v2x_msgs__msg__RoadLaneSetList road_lane_set;
} j2735_v2x_msgs__msg__RoadSegment;

// Struct for a sequence of j2735_v2x_msgs__msg__RoadSegment.
typedef struct j2735_v2x_msgs__msg__RoadSegment__Sequence
{
  j2735_v2x_msgs__msg__RoadSegment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__RoadSegment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT__STRUCT_H_
