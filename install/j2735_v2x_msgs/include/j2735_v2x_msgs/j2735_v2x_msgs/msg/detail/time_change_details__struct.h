// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/TimeChangeDetails.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/time_change_details.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TIME_CHANGE_DETAILS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__TIME_CHANGE_DETAILS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/TimeChangeDetails in the package j2735_v2x_msgs.
/**
  * TimeChangeDetails.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The DF_TimeChangeDetails data frame conveys details about the timing of a phase within a movement. The core
  * data concept expressed is the time stamp (time mark) at which the related phase will change to the next state. This is
  * often found in the MinEndTime element, but the other elements may be needed to convey the full concept when adaptive
  * timing is employed.
  *
  * TimeChangeDetails ::= SEQUENCE {
  * startTime TimeMark OPTIONAL,
  * -- When this phase 1st started
  * minEndTime TimeMark,
  * -- Expected shortest end time
  * maxEndTime TimeMark OPTIONAL,
  * -- Expected longest end time
  * likelyTime TimeMark OPTIONAL,
  * -- Best predicted value based on other data
  * confidence TimeIntervalConfidence OPTIONAL,
  * -- Applies to above time element only
  * nextTime TimeMark OPTIONAL
  * -- A rough estimate of time when
  * -- this phase may next occur again
  * -- used to support various ECO driving power
  * -- management needs.
  * }
 */
typedef struct j2735_v2x_msgs__msg__TimeChangeDetails
{
  /// TimeMark ::= INTEGER (0..36001)
  /// -- Tenths of a second in the current or next hour
  /// -- In units of 1/10th second from UTC time
  /// -- A range of 0~36000 covers one hour
  /// -- The values 35991..35999 are used when a leap second occurs
  /// -- The value 36000 is used to indicate time >3600 seconds
  /// -- 36001 is to be used when value undefined or unknown
  /// -- Note that this is NOT expressed in GPS time
  /// -- or in local time
  uint16_t start_time;
  bool start_time_exists;
  uint16_t min_end_time;
  uint16_t max_end_time;
  bool max_end_time_exists;
  uint16_t likely_time;
  bool likely_time_exists;
  /// TimeIntervalConfidence ::= INTEGER (0..15)
  uint8_t confidence;
  bool confidence_exists;
  /// TimeMark ::= INTEGER (0..36001)
  uint16_t next_time;
  bool next_time_exists;
} j2735_v2x_msgs__msg__TimeChangeDetails;

// Struct for a sequence of j2735_v2x_msgs__msg__TimeChangeDetails.
typedef struct j2735_v2x_msgs__msg__TimeChangeDetails__Sequence
{
  j2735_v2x_msgs__msg__TimeChangeDetails * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__TimeChangeDetails__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TIME_CHANGE_DETAILS__STRUCT_H_
