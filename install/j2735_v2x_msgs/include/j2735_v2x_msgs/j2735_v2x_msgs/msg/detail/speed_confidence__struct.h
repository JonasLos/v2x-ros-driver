// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/SpeedConfidence.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/speed_confidence.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__SPEED_CONFIDENCE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__SPEED_CONFIDENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__SpeedConfidence__UNAVAILABLE = 0
};

/// Constant 'PREC100MS'.
enum
{
  j2735_v2x_msgs__msg__SpeedConfidence__PREC100MS = 1
};

/// Constant 'PREC10MS'.
enum
{
  j2735_v2x_msgs__msg__SpeedConfidence__PREC10MS = 2
};

/// Constant 'PREC5MS'.
enum
{
  j2735_v2x_msgs__msg__SpeedConfidence__PREC5MS = 3
};

/// Constant 'PREC1MS'.
enum
{
  j2735_v2x_msgs__msg__SpeedConfidence__PREC1MS = 4
};

/// Constant 'PREC0_1MS'.
enum
{
  j2735_v2x_msgs__msg__SpeedConfidence__PREC0_1MS = 5
};

/// Constant 'PREC0_05MS'.
enum
{
  j2735_v2x_msgs__msg__SpeedConfidence__PREC0_05MS = 6
};

/// Constant 'PREC0_01MS'.
enum
{
  j2735_v2x_msgs__msg__SpeedConfidence__PREC0_01MS = 7
};

/// Struct defined in msg/SpeedConfidence in the package j2735_v2x_msgs.
/**
  * SpeedConfidence.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The DE_SpeedConfidence data element is used to provide the 95% confidence level for the currently reported
  * value of DE_Speed, taking into account the current calibration and precision of the sensor(s) used to measure and/or
  * calculate the value.
 */
typedef struct j2735_v2x_msgs__msg__SpeedConfidence
{
  /// SpeedConfidence ::= ENUMERATED {
  /// unavailable (0), -- Not Equipped or unavailable
  /// prec100ms (1), -- 100 meters / sec
  /// prec10ms(2), -- 10 meters / sec
  /// prec5ms (3), -- 5 meters / sec
  /// prec1ms (4), -- 1 meters / sec
  /// prec0-1ms (5), -- 0.1 meters / sec
  /// prec0-05ms (6), -- -- 0.05 meters / sec
  /// prec0-01ms (7) -- -- 0.01 meters / sec
  /// }
  uint8_t speed_confidence;
} j2735_v2x_msgs__msg__SpeedConfidence;

// Struct for a sequence of j2735_v2x_msgs__msg__SpeedConfidence.
typedef struct j2735_v2x_msgs__msg__SpeedConfidence__Sequence
{
  j2735_v2x_msgs__msg__SpeedConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__SpeedConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SPEED_CONFIDENCE__STRUCT_H_
