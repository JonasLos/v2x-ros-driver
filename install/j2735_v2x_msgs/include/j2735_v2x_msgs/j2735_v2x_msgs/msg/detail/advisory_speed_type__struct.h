// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/AdvisorySpeedType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/advisory_speed_type.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED_TYPE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'NONE'.
enum
{
  j2735_v2x_msgs__msg__AdvisorySpeedType__NONE = 0
};

/// Constant 'GREENWAVE'.
enum
{
  j2735_v2x_msgs__msg__AdvisorySpeedType__GREENWAVE = 1
};

/// Constant 'ECODRIVE'.
enum
{
  j2735_v2x_msgs__msg__AdvisorySpeedType__ECODRIVE = 2
};

/// Constant 'TRANSIT'.
enum
{
  j2735_v2x_msgs__msg__AdvisorySpeedType__TRANSIT = 3
};

/// Struct defined in msg/AdvisorySpeedType in the package j2735_v2x_msgs.
/**
  * AdvisorySpeedType.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The DE_AdvisorySpeedType data element relates the type of travel to which a given speed refers. This element is
  * typically used as part of an AdvisorySpeed data frame for signal phase and timing data.
  *
  * AdvisorySpeedType ::= ENUMERATED {
  * none (0),
  * greenwave (1),
  * ecoDrive (2),
  * transit (3),
  * ...
  * } -- Note: subject to further growth
 */
typedef struct j2735_v2x_msgs__msg__AdvisorySpeedType
{
  uint8_t advisory_speed_type;
} j2735_v2x_msgs__msg__AdvisorySpeedType;

// Struct for a sequence of j2735_v2x_msgs__msg__AdvisorySpeedType.
typedef struct j2735_v2x_msgs__msg__AdvisorySpeedType__Sequence
{
  j2735_v2x_msgs__msg__AdvisorySpeedType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__AdvisorySpeedType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED_TYPE__STRUCT_H_
