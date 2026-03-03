// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/TrafficControlSchedule.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traffic_control_schedule.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_SCHEDULE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_SCHEDULE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'dow'
#include "j2735_v2x_msgs/msg/detail/day_of_week__struct.h"
// Member 'between'
#include "j2735_v2x_msgs/msg/detail/daily_schedule__struct.h"
// Member 'repeat'
#include "j2735_v2x_msgs/msg/detail/repeat_params__struct.h"

/// Struct defined in msg/TrafficControlSchedule in the package j2735_v2x_msgs.
/**
  * TrafficControlSchedule.msg
  *
  * Part of the CARMA Cloud geo-fence specification not part of the official SAE j2735 standard
  *
  * J2735 2016 message format.
  *
  *
  * @version 0.1
  *
  * Description
  * ...
 */
typedef struct j2735_v2x_msgs__msg__TrafficControlSchedule
{
  /// TrafficControlSchedule ::= SEQUENCE
  /// {
  ///  start EpochMins, -- start time required, even if it's the epoch value zero
  ///  end [0] EpochMins OPTIONAL, -- default to max value 153722867280912
  ///  dow [1] DayOfWeek OPTIONAL,
  ///  between [2] SEQUENCE (SIZE(1..63)) OF DailySchedule OPTIONAL,
  ///  repeat [3] RepeatParams OPTIONAL
  /// }
  /// start EpochMins, -- start time required, even if it's the epoch value zero
  uint64_t start;
  /// end EpochMins OPTIONAL, -- default to max value 153722867280912
  uint64_t end;
  bool end_exists;
  /// dow DayOfWeek OPTIONAL,
  j2735_v2x_msgs__msg__DayOfWeek dow;
  bool dow_exists;
  /// between SEQUENCE (SIZE(1..63)) OF DailySchedule OPTIONAL,
  j2735_v2x_msgs__msg__DailySchedule__Sequence between;
  bool between_exists;
  /// repeat RepeatParams OPTIONAL
  j2735_v2x_msgs__msg__RepeatParams repeat;
  bool repeat_exists;
} j2735_v2x_msgs__msg__TrafficControlSchedule;

// Struct for a sequence of j2735_v2x_msgs__msg__TrafficControlSchedule.
typedef struct j2735_v2x_msgs__msg__TrafficControlSchedule__Sequence
{
  j2735_v2x_msgs__msg__TrafficControlSchedule * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__TrafficControlSchedule__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_SCHEDULE__STRUCT_H_
