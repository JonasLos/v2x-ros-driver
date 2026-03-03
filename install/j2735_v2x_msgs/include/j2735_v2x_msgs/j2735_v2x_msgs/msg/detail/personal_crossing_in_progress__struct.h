// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/PersonalCrossingInProgress.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/personal_crossing_in_progress.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_CROSSING_IN_PROGRESS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_CROSSING_IN_PROGRESS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/PersonalCrossingInProgress in the package j2735_v2x_msgs.
/**
  * PersonalCrossingInProgress.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of PersonalCrossingInProgress from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * PersonalCrossingInProgress ::= BOOLEAN -- Use:
  *    -- True  = Yes, is in maneuver
  *    -- False = No
 */
typedef struct j2735_v2x_msgs__msg__PersonalCrossingInProgress
{
  bool cross_state;
} j2735_v2x_msgs__msg__PersonalCrossingInProgress;

// Struct for a sequence of j2735_v2x_msgs__msg__PersonalCrossingInProgress.
typedef struct j2735_v2x_msgs__msg__PersonalCrossingInProgress__Sequence
{
  j2735_v2x_msgs__msg__PersonalCrossingInProgress * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__PersonalCrossingInProgress__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_CROSSING_IN_PROGRESS__STRUCT_H_
