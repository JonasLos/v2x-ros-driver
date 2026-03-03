// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/MovementEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/movement_event.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'event_state'
#include "j2735_v2x_msgs/msg/detail/movement_phase_state__struct.h"
// Member 'timing'
#include "j2735_v2x_msgs/msg/detail/time_change_details__struct.h"
// Member 'speeds'
#include "j2735_v2x_msgs/msg/detail/advisory_speed_list__struct.h"

/// Struct defined in msg/MovementEvent in the package j2735_v2x_msgs.
/**
  * MovementEvent.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The MovementEvent data frame contains details about a single movement. It is used by the movement state to
  * convey one of number of movements (typically occurring over a sequence of times) for a SignalGroupID.
  *
  * MovementEvent ::= SEQUENCE {
  * eventState MovementPhaseState,
  * -- Consisting of:
  * -- Phase state (the basic 11 states)
  * -- Directional, protected, or permissive state
  * timing TimeChangeDetails OPTIONAL,
  * -- Timing Data in UTC time stamps for event
  * -- includes start and min/max end times of phase
  * -- confidence and estimated next occurrence
  * speeds AdvisorySpeedList OPTIONAL,
  * -- various speed advisories for use by
  * -- general and specific types of vehicles
  * -- supporting green-wave and other flow needs
  * -- See Section 11 for converting and translating
  * -- speed expressed in mph into units of m/s
  * regional SEQUENCE (SIZE(1..4)) OF RegionalExtension {{REGION.Reg-MovementEvent}} OPTIONAL,
  * ...
  * }
 */
typedef struct j2735_v2x_msgs__msg__MovementEvent
{
  j2735_v2x_msgs__msg__MovementPhaseState event_state;
  j2735_v2x_msgs__msg__TimeChangeDetails timing;
  bool timing_exists;
  j2735_v2x_msgs__msg__AdvisorySpeedList speeds;
  bool speeds_exists;
} j2735_v2x_msgs__msg__MovementEvent;

// Struct for a sequence of j2735_v2x_msgs__msg__MovementEvent.
typedef struct j2735_v2x_msgs__msg__MovementEvent__Sequence
{
  j2735_v2x_msgs__msg__MovementEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__MovementEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT__STRUCT_H_
