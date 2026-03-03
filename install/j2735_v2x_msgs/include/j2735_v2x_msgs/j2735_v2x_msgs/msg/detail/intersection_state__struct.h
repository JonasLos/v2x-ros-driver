// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/IntersectionState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/intersection_state.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'MOY_INVALID'.
enum
{
  j2735_v2x_msgs__msg__IntersectionState__MOY_INVALID = 527040ul
};

/// Constant 'TIME_STAMP_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__IntersectionState__TIME_STAMP_UNAVAILABLE = 65535ul
};

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'id'
#include "j2735_v2x_msgs/msg/detail/intersection_reference_id__struct.h"
// Member 'status'
#include "j2735_v2x_msgs/msg/detail/intersection_status_object__struct.h"
// Member 'enabled_lanes'
#include "j2735_v2x_msgs/msg/detail/enabled_lane_list__struct.h"
// Member 'states'
#include "j2735_v2x_msgs/msg/detail/movement_list__struct.h"
// Member 'maneuever_assist_list'
#include "j2735_v2x_msgs/msg/detail/maneuver_assist_list__struct.h"

/// Struct defined in msg/IntersectionState in the package j2735_v2x_msgs.
/**
  * IntersectionState.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The IntersectionState data frame is used to convey all the SPAT information for a single intersection. Both current
  * and future data can be sent.
  *
  * IntersectionState ::= SEQUENCE {
  *  name DescriptiveName OPTIONAL,
  *  -- human readable name for intersection
  *  -- to be used only in debug mode
  *  id IntersectionReferenceID,
  *  -- A globally unique value set, consisting of a
  *  -- regionID and intersection ID assignment
  *  -- provides a unique mapping to the
  *  -- intersection MAP in question
  *  -- which provides complete location
  *  -- and approach/move/lane data
  *  revision MsgCount,
  *  status IntersectionStatusObject,
  *  -- general status of the controller(s)
  *  moy MinuteOfTheYear OPTIONAL,
  *  -- Minute of current UTC year
  *  -- used only with messages to be archived
  *  timeStamp DSecond OPTIONAL,
  *  -- the mSec point in the current UTC minute that
  *  -- this message was constructed
  *  enabledLanes EnabledLaneList OPTIONAL,
  *  -- a list of lanes where the RevocableLane bit
  *  -- has been set which are now active and
  *  -- therefore part of the current intersection
  *  states MovementList,
  *  -- Each Movement is given in turn
  *  -- and contains its signal phase state,
  *  -- mapping to the lanes it applies to, and
  *  -- point in time it will end, and it
  *  -- may contain both active and future states
  *  maneuverAssistList ManeuverAssistList OPTIONAL,
  *  -- Assist data
  *  regional SEQUENCE (SIZE(1..4)) OF RegionalExtension {{REGION.Reg-IntersectionState}} OPTIONAL,
  *  ...
  * }
 */
typedef struct j2735_v2x_msgs__msg__IntersectionState
{
  /// name DescriptiveName OPTIONAL := IA5String (SIZE(1..63))
  /// -- often for debug use only
  /// -- but at times used to name ped crossings
  /// NOTE: As optional field, blank value can note that it's not set in carma.
  rosidl_runtime_c__String name;
  bool name_exists;
  j2735_v2x_msgs__msg__IntersectionReferenceID id;
  /// MsgCount ::= INTEGER (0..127)
  uint8_t revision;
  j2735_v2x_msgs__msg__IntersectionStatusObject status;
  /// MinuteOfTheYear OPTIONAL ::= INTEGER (0..527040)
  ///  The value of 527040 shall be used for invalid
  uint32_t moy;
  bool moy_exists;
  /// DSecond ::= INTEGER (0..65535)
  ///   -- Integer values from 0 to 59999 represent the milliseconds within a minute
  ///   -- A leap second is represented by the value range 60000 to 60999
  ///   -- The values from 61000 to 65534 are reserved
  ///   -- The value of 65535 shall represent an unavailable value in the range of the minute
  ///   -- Unit is milliseconds
  uint32_t time_stamp;
  bool time_stamp_exists;
  /// enabledLanes EnabledLaneList
  /// This is a list therefore can be empty list in ROS.
  j2735_v2x_msgs__msg__EnabledLaneList enabled_lanes;
  bool enabled_lanes_exists;
  /// states MovementList
  j2735_v2x_msgs__msg__MovementList states;
  /// maneuverAssistList ManeuverAssistList
  j2735_v2x_msgs__msg__ManeuverAssistList maneuever_assist_list;
  bool maneuever_assist_list_exists;
} j2735_v2x_msgs__msg__IntersectionState;

// Struct for a sequence of j2735_v2x_msgs__msg__IntersectionState.
typedef struct j2735_v2x_msgs__msg__IntersectionState__Sequence
{
  j2735_v2x_msgs__msg__IntersectionState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__IntersectionState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE__STRUCT_H_
