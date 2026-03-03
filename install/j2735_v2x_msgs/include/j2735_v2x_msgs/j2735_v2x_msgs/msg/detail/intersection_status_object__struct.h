// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/IntersectionStatusObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/intersection_status_object.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATUS_OBJECT__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATUS_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/IntersectionStatusObject in the package j2735_v2x_msgs.
/**
  * IntersectionStatusObject.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The Intersection Status Object contains Advanced Traffic Controller (ATC) status information that may be sent to
  * local OBUs as part of the SPAT process.
 */
typedef struct j2735_v2x_msgs__msg__IntersectionStatusObject
{
  /// IntersectionStatusObject ::= BIT STRING {
  /// manualControlIsEnabled (0),
  /// -- Timing reported is per programmed values, etc. but person
  /// -- at cabinet can manually request that certain intervals are
  /// -- terminated early (e.g. green).
  /// stopTimeIsActivated (1),
  /// -- And all counting/timing has stopped.
  /// failureFlash (2),
  /// -- Above to be used for any detected hardware failures,
  /// -- e.g. conflict monitor as well as for police flash
  /// preemptIsActive (3),
  /// signalPriorityIsActive (4),
  /// -- Additional states
  /// fixedTimeOperation (5),
  /// -- Schedule of signals is based on time only
  /// -- (i.e. the state can be calculated)
  /// trafficDependentOperation (6),
  /// -- Operation is based on different levels of traffic parameters
  /// -- (requests, duration of gaps or more complex parameters)
  /// standbyOperation (7),
  /// -- Controller: partially switched off or partially amber flashing
  /// failureMode (8),
  /// -- Controller has a problem or failure in operation
  /// off (9),
  /// -- Controller is switched off
  /// -- Related to MAP and SPAT bindings
  /// recentMAPmessageUpdate (10),
  /// -- Map revision with content changes
  /// recentChangeInMAPassignedLanesIDsUsed (11),
  /// -- Change in MAP's assigned lanes used (lane changes)
  /// -- Changes in the active lane list description
  /// noValidMAPisAvailableAtThisTime (12),
  /// -- MAP (and various lanes indexes) not available
  /// noValidSPATisAvailableAtThisTime (13)
  /// -- SPAT system is not working at this time
  /// -- Bits 14,15 reserved at this time and shall be zero
  /// } (SIZE(16))
  uint16_t intersection_status_object;
} j2735_v2x_msgs__msg__IntersectionStatusObject;

// Struct for a sequence of j2735_v2x_msgs__msg__IntersectionStatusObject.
typedef struct j2735_v2x_msgs__msg__IntersectionStatusObject__Sequence
{
  j2735_v2x_msgs__msg__IntersectionStatusObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__IntersectionStatusObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATUS_OBJECT__STRUCT_H_
