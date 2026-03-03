// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/MovementState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/movement_state.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_STATE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'movement_name'
#include "rosidl_runtime_c/string.h"
// Member 'state_time_speed'
#include "j2735_v2x_msgs/msg/detail/movement_event_list__struct.h"
// Member 'maneuver_assist_list'
#include "j2735_v2x_msgs/msg/detail/maneuver_assist_list__struct.h"

/// Struct defined in msg/MovementState in the package j2735_v2x_msgs.
/**
  * MovementState.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The MovementState data frame is used to convey various information about the current or future movement state of
  * a designated collection of one or more lanes of a common type. This is referred to as the GroupID. Note that lane object
  * types supported include both motorized vehicle lanes as well as pedestrian lanes and dedicated rail and transit lanes. Of
  * the reported data elements, the time to change (the time remaining in the current state) is often of the most value. Lanes
  * with a common state (typically adjacent sets of lanes in an approach) in a signalized intersection will have individual lane
  * values such as total vehicle counts, summed. It is used in the SPAT message to convey every active movement in a
  * given intersection so that vehicles, when combined with certain map information, can determine the state of the signal
  * phases.
  *
  * MovementState ::= SEQUENCE {
  * movementName DescriptiveName OPTIONAL,
  * -- uniquely defines movement by name
  * -- human readable name for intersection
  * -- to be used only in debug mode
  * signalGroup SignalGroupID,
  * -- the group id is used to map to lists
  * -- of lanes (and their descriptions)
  * -- which this MovementState data applies to
  * -- see comments in the Remarks for usage details
  * state-time-speed MovementEventList,
  * -- Consisting of sets of movement data with:
  * -- a) SignalPhaseState
  * -- b) TimeChangeDetails, and
  * -- c) AdvisorySpeeds (optional )
  * -- Note one or more of the movement events may be for
  * -- a future time and that this allows conveying multiple
  * -- predictive phase and movement timing for various uses
  * -- for the current signal group
  * maneuverAssistList ManeuverAssistList OPTIONAL,
  * -- This information may also be placed in the
  * -- IntersectionState when common information applies to
  * -- different lanes in the same way
  * regional SEQUENCE (SIZE(1..4)) OF RegionalExtension {{REGION.Reg-MovementState}} OPTIONAL,
  * ...
  * }
 */
typedef struct j2735_v2x_msgs__msg__MovementState
{
  /// DescriptiveName OPTIONAL := IA5String (SIZE(1..63))
  /// -- often for debug use only
  /// -- but at times used to name ped crossings
  rosidl_runtime_c__String movement_name;
  bool movement_name_exists;
  /// SignalGroupID ::= INTEGER (0..255)
  /// -- The value 0 shall be used when the ID is
  /// -- not available or known
  /// -- the value 255 is reserved to indicate a
  /// -- permanent green movement state
  uint8_t signal_group;
  /// state-time-speed MovementEventList
  j2735_v2x_msgs__msg__MovementEventList state_time_speed;
  j2735_v2x_msgs__msg__ManeuverAssistList maneuver_assist_list;
  bool maneuver_assist_list_exists;
} j2735_v2x_msgs__msg__MovementState;

// Struct for a sequence of j2735_v2x_msgs__msg__MovementState.
typedef struct j2735_v2x_msgs__msg__MovementState__Sequence
{
  j2735_v2x_msgs__msg__MovementState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__MovementState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_STATE__STRUCT_H_
