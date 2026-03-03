// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/DailySchedule.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/daily_schedule.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__DAILY_SCHEDULE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__DAILY_SCHEDULE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/DailySchedule in the package j2735_v2x_msgs.
/**
  * DailySchedule.msg
  *
  * Part of the CARMA Cloud geo-fence specification for vehicle internal use.
  *
  * @author Misheel Bayartsengel 
  * @version 0.1
  *
  * Description
  * The schedule bounds of a geofence within a specific day of the week
 */
typedef struct j2735_v2x_msgs__msg__DailySchedule
{
  /// DailySchedule ::= SEQUENCE
  /// {
  ///  begin INTEGER (0..1439), -- minutes relative to midnight local time
  ///  duration INTEGER (0..1439) -- the number of active minutes, up to one day
  /// }
  /// begin INTEGER (0..1439), -- minutes relative to midnight local time
  uint16_t begin;
  /// duration INTEGER (0..1439) -- the number of active minutes, up to one day
  uint16_t duration;
} j2735_v2x_msgs__msg__DailySchedule;

// Struct for a sequence of j2735_v2x_msgs__msg__DailySchedule.
typedef struct j2735_v2x_msgs__msg__DailySchedule__Sequence
{
  j2735_v2x_msgs__msg__DailySchedule * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__DailySchedule__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__DAILY_SCHEDULE__STRUCT_H_
