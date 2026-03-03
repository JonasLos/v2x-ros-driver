// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/RepeatParams.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/repeat_params.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__REPEAT_PARAMS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__REPEAT_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/RepeatParams in the package j2735_v2x_msgs.
/**
  * RepeatParams.msg
  *
  * Part of the CARMA Cloud geo-fence specification for vehicle internal use.
  *
  * @author Misheel Bayartsengel 
  * @version 0.1
  *
  * Description
  * ...
 */
typedef struct j2735_v2x_msgs__msg__RepeatParams
{
  /// RepeatParams ::= SEQUENCE
  /// {
  ///  offset INTEGER (0..1439), -- shift repetition start relative to midnight local time
  ///  period INTEGER (0..1439), -- minutes between successive time spans
  ///  span INTEGER (0..1439) -- number of minutes schedule is active, must be less than the period
  /// }
  /// Offset
  /// shift repetition start relative to midnight local time
  uint16_t offset;
  /// Period
  /// minutes between successive time spans
  uint16_t period;
  /// Span
  /// number of minutes schedule is active, must be less than the period
  uint16_t span;
} j2735_v2x_msgs__msg__RepeatParams;

// Struct for a sequence of j2735_v2x_msgs__msg__RepeatParams.
typedef struct j2735_v2x_msgs__msg__RepeatParams__Sequence
{
  j2735_v2x_msgs__msg__RepeatParams * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__RepeatParams__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__REPEAT_PARAMS__STRUCT_H_
