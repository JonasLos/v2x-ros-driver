// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/PositionConfidence.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/position_confidence.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__POSITION_CONFIDENCE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__POSITION_CONFIDENCE__STRUCT_H_

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
  j2735_v2x_msgs__msg__PositionConfidence__UNAVAILABLE = 0
};

/// Constant 'A500M'.
enum
{
  j2735_v2x_msgs__msg__PositionConfidence__A500M = 1
};

/// Constant 'A200M'.
enum
{
  j2735_v2x_msgs__msg__PositionConfidence__A200M = 2
};

/// Constant 'A100M'.
enum
{
  j2735_v2x_msgs__msg__PositionConfidence__A100M = 3
};

/// Constant 'A50M'.
enum
{
  j2735_v2x_msgs__msg__PositionConfidence__A50M = 4
};

/// Constant 'A20M'.
enum
{
  j2735_v2x_msgs__msg__PositionConfidence__A20M = 5
};

/// Constant 'A10M'.
enum
{
  j2735_v2x_msgs__msg__PositionConfidence__A10M = 6
};

/// Constant 'A5M'.
enum
{
  j2735_v2x_msgs__msg__PositionConfidence__A5M = 7
};

/// Constant 'A2M'.
enum
{
  j2735_v2x_msgs__msg__PositionConfidence__A2M = 8
};

/// Constant 'A1M'.
enum
{
  j2735_v2x_msgs__msg__PositionConfidence__A1M = 9
};

/// Constant 'A50CM'.
enum
{
  j2735_v2x_msgs__msg__PositionConfidence__A50CM = 10
};

/// Constant 'A20CM'.
enum
{
  j2735_v2x_msgs__msg__PositionConfidence__A20CM = 11
};

/// Constant 'A10CM'.
enum
{
  j2735_v2x_msgs__msg__PositionConfidence__A10CM = 12
};

/// Constant 'A5CM'.
enum
{
  j2735_v2x_msgs__msg__PositionConfidence__A5CM = 13
};

/// Constant 'A2CM'.
enum
{
  j2735_v2x_msgs__msg__PositionConfidence__A2CM = 14
};

/// Constant 'A1CM'.
enum
{
  j2735_v2x_msgs__msg__PositionConfidence__A1CM = 15
};

/// Struct defined in msg/PositionConfidence in the package j2735_v2x_msgs.
/**
  * PositionConfidence.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of PositionConfidence from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * PositionConfidence ::= ENUMERATED {
  *    unavailable (0),  -- B'0000  Not Equipped or unavailable
  *    a500m   (1), -- B'0001  500m  or about 5 * 10 ^ -3 decimal degrees
  *    a200m   (2), -- B'0010  200m  or about 2 * 10 ^ -3 decimal degrees
  *    a100m   (3), -- B'0011  100m  or about 1 * 10 ^ -3 decimal degrees
  *    a50m    (4), -- B'0100  50m   or about 5 * 10 ^ -4 decimal degrees 
  *    a20m    (5), -- B'0101  20m   or about 2 * 10 ^ -4 decimal degrees 
  *    a10m    (6), -- B'0110  10m   or about 1 * 10 ^ -4 decimal degrees 
  *    a5m     (7), -- B'0111  5m    or about 5 * 10 ^ -5 decimal degrees 
  *    a2m     (8), -- B'1000  2m    or about 2 * 10 ^ -5 decimal degrees 
  *    a1m     (9), -- B'1001  1m    or about 1 * 10 ^ -5 decimal degrees 
  *    a50cm  (10), -- B'1010  0.50m or about 5 * 10 ^ -6 decimal degrees 
  *    a20cm  (11), -- B'1011  0.20m or about 2 * 10 ^ -6 decimal degrees 
  *    a10cm  (12), -- B'1100  0.10m or about 1 * 10 ^ -6 decimal degrees 
  *    a5cm   (13), -- B'1101  0.05m or about 5 * 10 ^ -7 decimal degrees 
  *    a2cm   (14), -- B'1110  0.02m or about 2 * 10 ^ -7 decimal degrees 
  *    a1cm   (15)  -- B'1111  0.01m or about 1 * 10 ^ -7 decimal degrees 
  *    } 
 */
typedef struct j2735_v2x_msgs__msg__PositionConfidence
{
  uint8_t confidence;
} j2735_v2x_msgs__msg__PositionConfidence;

// Struct for a sequence of j2735_v2x_msgs__msg__PositionConfidence.
typedef struct j2735_v2x_msgs__msg__PositionConfidence__Sequence
{
  j2735_v2x_msgs__msg__PositionConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__PositionConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__POSITION_CONFIDENCE__STRUCT_H_
