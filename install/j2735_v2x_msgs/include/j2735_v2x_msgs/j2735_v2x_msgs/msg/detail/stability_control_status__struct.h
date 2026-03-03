// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/StabilityControlStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/stability_control_status.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__STABILITY_CONTROL_STATUS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__STABILITY_CONTROL_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'UNAVAILABLE'.
/**
  * enumeration values for status:
 */
enum
{
  j2735_v2x_msgs__msg__StabilityControlStatus__UNAVAILABLE = 0
};

/// Constant 'OFF'.
enum
{
  j2735_v2x_msgs__msg__StabilityControlStatus__OFF = 1
};

/// Constant 'ON'.
enum
{
  j2735_v2x_msgs__msg__StabilityControlStatus__ON = 2
};

/// Constant 'ENGAGED'.
enum
{
  j2735_v2x_msgs__msg__StabilityControlStatus__ENGAGED = 3
};

/// Struct defined in msg/StabilityControlStatus in the package j2735_v2x_msgs.
/**
  * StabilityControlStatus.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
 */
typedef struct j2735_v2x_msgs__msg__StabilityControlStatus
{
  /// StabilityControlStatus ::= ENUMERATED {
  ///    unavailable (0), -- B'00  Not Equipped with SC
  ///                     --       or SC status is unavailable
  ///    off         (1), -- B'01  Off
  ///    on          (2), -- B'10  On or active (but not engaged)
  ///    engaged     (3)  -- B'11  stability control is Engaged
  ///    }
  uint8_t stability_control_status;
} j2735_v2x_msgs__msg__StabilityControlStatus;

// Struct for a sequence of j2735_v2x_msgs__msg__StabilityControlStatus.
typedef struct j2735_v2x_msgs__msg__StabilityControlStatus__Sequence
{
  j2735_v2x_msgs__msg__StabilityControlStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__StabilityControlStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__STABILITY_CONTROL_STATUS__STRUCT_H_
