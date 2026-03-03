// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/YawRateConfidence.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/yaw_rate_confidence.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__YAW_RATE_CONFIDENCE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__YAW_RATE_CONFIDENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'DEG_SEC_100_00'.
/**
  * enumeration values for yaw_rate_confidence
 */
enum
{
  j2735_v2x_msgs__msg__YawRateConfidence__DEG_SEC_100_00 = 1
};

/// Constant 'DEG_SEC_010_00'.
enum
{
  j2735_v2x_msgs__msg__YawRateConfidence__DEG_SEC_010_00 = 2
};

/// Constant 'DEG_SEC_005_00'.
enum
{
  j2735_v2x_msgs__msg__YawRateConfidence__DEG_SEC_005_00 = 3
};

/// Constant 'DEG_SEC_001_00'.
enum
{
  j2735_v2x_msgs__msg__YawRateConfidence__DEG_SEC_001_00 = 4
};

/// Constant 'DEG_SEC_000_10'.
enum
{
  j2735_v2x_msgs__msg__YawRateConfidence__DEG_SEC_000_10 = 5
};

/// Constant 'DEG_SEC_000_05'.
enum
{
  j2735_v2x_msgs__msg__YawRateConfidence__DEG_SEC_000_05 = 6
};

/// Constant 'DEG_SEC_000_01'.
enum
{
  j2735_v2x_msgs__msg__YawRateConfidence__DEG_SEC_000_01 = 7
};

/// Struct defined in msg/YawRateConfidence in the package j2735_v2x_msgs.
/**
  * YawRateConfidence.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__YawRateConfidence
{
  /// YawRateConfidence ::= ENUMERATED {
  ///    unavailable (0), -- B’000 Not Equipped with yaw rate status
  ///    -- or yaw rate status is unavailable
  ///    degSec-100-00 (1), -- B’001 100 deg/sec
  ///    degSec-010-00 (2), -- B’010 10 deg/sec
  ///    degSec-005-00 (3), -- B’011 5 deg/sec
  ///    degSec-001-00 (4), -- B’100 1 deg/sec
  ///    degSec-000-10 (5), -- B’101 0.1 deg/sec
  ///    degSec-000-05 (6), -- B’110 0.05 deg/sec
  ///    degSec-000-01 (7) -- B’111 0.01 deg/sec
  ///    }
  ///    -- Encoded as a 3 bit value
  uint8_t yaw_rate_confidence;
} j2735_v2x_msgs__msg__YawRateConfidence;

// Struct for a sequence of j2735_v2x_msgs__msg__YawRateConfidence.
typedef struct j2735_v2x_msgs__msg__YawRateConfidence__Sequence
{
  j2735_v2x_msgs__msg__YawRateConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__YawRateConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__YAW_RATE_CONFIDENCE__STRUCT_H_
