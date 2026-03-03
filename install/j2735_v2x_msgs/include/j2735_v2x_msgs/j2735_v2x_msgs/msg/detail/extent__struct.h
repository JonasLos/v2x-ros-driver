// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/Extent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/extent.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__EXTENT__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__EXTENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'USE_INSTANTLY_ONLY'.
enum
{
  j2735_v2x_msgs__msg__Extent__USE_INSTANTLY_ONLY = 0
};

/// Constant 'USE_FOR_3_METERS'.
enum
{
  j2735_v2x_msgs__msg__Extent__USE_FOR_3_METERS = 1
};

/// Constant 'USE_FOR_10_METERS'.
enum
{
  j2735_v2x_msgs__msg__Extent__USE_FOR_10_METERS = 2
};

/// Constant 'USE_FOR_50_METERS'.
enum
{
  j2735_v2x_msgs__msg__Extent__USE_FOR_50_METERS = 3
};

/// Constant 'USE_FOR_100_METERS'.
enum
{
  j2735_v2x_msgs__msg__Extent__USE_FOR_100_METERS = 4
};

/// Constant 'USE_FOR_500_METERS'.
enum
{
  j2735_v2x_msgs__msg__Extent__USE_FOR_500_METERS = 5
};

/// Constant 'USE_FOR_1000_METERS'.
enum
{
  j2735_v2x_msgs__msg__Extent__USE_FOR_1000_METERS = 6
};

/// Constant 'USE_FOR_5000_METERS'.
enum
{
  j2735_v2x_msgs__msg__Extent__USE_FOR_5000_METERS = 7
};

/// Constant 'USE_FOR_10000_METERS'.
enum
{
  j2735_v2x_msgs__msg__Extent__USE_FOR_10000_METERS = 8
};

/// Constant 'USE_FOR_50000_METERS'.
enum
{
  j2735_v2x_msgs__msg__Extent__USE_FOR_50000_METERS = 9
};

/// Constant 'USE_FOR_100000_METERS'.
enum
{
  j2735_v2x_msgs__msg__Extent__USE_FOR_100000_METERS = 10
};

/// Constant 'USE_FOR_500000_METERS'.
enum
{
  j2735_v2x_msgs__msg__Extent__USE_FOR_500000_METERS = 11
};

/// Constant 'USE_FOR_1000000_METERS'.
enum
{
  j2735_v2x_msgs__msg__Extent__USE_FOR_1000000_METERS = 12
};

/// Constant 'USE_FOR_5000000_METERS'.
enum
{
  j2735_v2x_msgs__msg__Extent__USE_FOR_5000000_METERS = 13
};

/// Constant 'USE_FOR_10000000_METERS'.
enum
{
  j2735_v2x_msgs__msg__Extent__USE_FOR_10000000_METERS = 14
};

/// Constant 'FOREVER'.
enum
{
  j2735_v2x_msgs__msg__Extent__FOREVER = 15
};

/// Struct defined in msg/Extent in the package j2735_v2x_msgs.
/**
  * Extent.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__Extent
{
  /// Extent ::= ENUMERATED {
  ///    useInstantlyOnly     (0),
  ///    useFor3meters        (1),
  ///    useFor10meters       (2),
  ///    useFor50meters       (3),
  ///    useFor100meters      (4),
  ///    useFor500meters      (5),
  ///    useFor1000meters     (6),
  ///    useFor5000meters     (7),
  ///    useFor10000meters    (8),
  ///    useFor50000meters    (9),
  ///    useFor100000meters   (10),
  ///    useFor500000meters   (11),
  ///    useFor1000000meters  (12),
  ///    useFor5000000meters  (13),
  ///    useFor10000000meters (14),
  ///    forever              (15)  -- very wide area
  ///    }  -- Encoded as a 4 bit value
  uint8_t extent_value;
} j2735_v2x_msgs__msg__Extent;

// Struct for a sequence of j2735_v2x_msgs__msg__Extent.
typedef struct j2735_v2x_msgs__msg__Extent__Sequence
{
  j2735_v2x_msgs__msg__Extent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__Extent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__EXTENT__STRUCT_H_
