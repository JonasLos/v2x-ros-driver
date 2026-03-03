// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/IntersectionGeometry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/intersection_geometry.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__STRUCT_H_

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
#include "j2735_v2x_msgs/msg/detail/intersection_reference_id__struct.h"
// Member 'ref_point'
#include "j2735_v2x_msgs/msg/detail/position3_d__struct.h"
// Member 'speed_limits'
#include "j2735_v2x_msgs/msg/detail/speed_limit_list__struct.h"
// Member 'lane_set'
#include "j2735_v2x_msgs/msg/detail/lane_list__struct.h"
// Member 'preempt_priority_data'
#include "j2735_v2x_msgs/msg/detail/preempt_priority_list__struct.h"

/// Struct defined in msg/IntersectionGeometry in the package j2735_v2x_msgs.
/**
  * IntersectionGeometry.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * A complete description of an intersection's roadway geometry and its allowed navigational paths
  * (independent of any additional regulatory restrictions that may apply over time or from user classification).
 */
typedef struct j2735_v2x_msgs__msg__IntersectionGeometry
{
  /// IntersectionGeometry ::= SEQUENCE {
  /// name DescriptiveName OPTIONAL ::= IA5String (SIZE(1..63))
  /// -- For debug use only
  rosidl_runtime_c__String name;
  bool name_exists;
  /// id IntersectionReferenceID,
  /// -- A globally unique value set,
  /// -- consisting of a regionID and
  /// -- intersection ID assignment
  j2735_v2x_msgs__msg__IntersectionReferenceID id;
  /// revision MsgCount  ::= INTEGER (0..127)
  /// -- Required default values about lane descriptions follow
  uint8_t revision;
  /// refPoint Position3D, -- The reference from which subsequent
  /// -- data points are offset until a new
  /// -- point is used.
  j2735_v2x_msgs__msg__Position3D ref_point;
  /// laneWidth LaneWidth OPTIONAL ::= INTEGER (0..32767) -- units of 1 cm
  /// -- Reference width used by all subsequent
  /// -- lanes unless a new width is given
  uint16_t lane_width;
  bool lane_width_exists;
  /// speedLimits SpeedLimitList OPTIONAL
  /// -- Reference regulatory speed limits
  /// -- used by all subsequent
  /// -- lanes unless a new speed is given
  /// -- See Section 11 for converting and
  /// -- translating speed expressed in mph
  /// -- into units of m/s
  /// -- Complete details regarding each lane type in this intersection
  j2735_v2x_msgs__msg__SpeedLimitList speed_limits;
  bool speed_limits_exists;
  /// laneSet LaneList,
  /// -- Data about one or more lanes
  /// -- (all lane data is found here)
  /// -- Data describing how to use and request preemption and
  /// -- priority services from this intersection (if supported)
  j2735_v2x_msgs__msg__LaneList lane_set;
  /// -- NOTE Additonal data may be added in the next release of the
  /// -- standard at this point to handle this concept
  /// preemptPriorityData PreemptPriorityList OPTIONAL,
  /// -- data about one or more regional
  /// -- preempt or priority zones
  j2735_v2x_msgs__msg__PreemptPriorityList preempt_priority_data;
  bool preempt_priority_data_exists;
} j2735_v2x_msgs__msg__IntersectionGeometry;

// Struct for a sequence of j2735_v2x_msgs__msg__IntersectionGeometry.
typedef struct j2735_v2x_msgs__msg__IntersectionGeometry__Sequence
{
  j2735_v2x_msgs__msg__IntersectionGeometry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__IntersectionGeometry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__STRUCT_H_
