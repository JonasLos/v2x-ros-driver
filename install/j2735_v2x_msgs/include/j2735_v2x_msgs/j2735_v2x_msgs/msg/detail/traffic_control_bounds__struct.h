// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/TrafficControlBounds.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traffic_control_bounds.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_BOUNDS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_BOUNDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'REFLON_MAX'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlBounds__REFLON_MAX = 1800000000l
};

/// Constant 'REFLON_MIN'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlBounds__REFLON_MIN = -1799999999l
};

/// Constant 'REFLON_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlBounds__REFLON_UNAVAILABLE = 1800000001l
};

/// Constant 'REFLAT_MAX'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlBounds__REFLAT_MAX = 900000000l
};

/// Constant 'REFLAT_MIN'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlBounds__REFLAT_MIN = -900000000l
};

/// Constant 'REFLAT_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlBounds__REFLAT_UNAVAILABLE = 900000001l
};

// Include directives for member types
// Member 'offsets'
#include "j2735_v2x_msgs/msg/detail/offset_point__struct.h"

/// Struct defined in msg/TrafficControlBounds in the package j2735_v2x_msgs.
/**
  * TrafficControlBounds.msg
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
typedef struct j2735_v2x_msgs__msg__TrafficControlBounds
{
  /// TrafficControlBounds ::= SEQUENCE
  /// {
  ///  oldest EpochMins, -- timestamp of oldest traffic control message within bounds
  ///  reflon Longitude, -- initial vertex reference longitude
  ///  reflat Latitude, -- initial vertex reference latitude
  ///  offsets SEQUENCE (SIZE(3)) OF OffsetPoint -- relative vertex positions in scaled meters
  /// }
  /// oldest ::= EpochMins
  uint64_t oldest;
  /// reflon ::= INTEGER (-1799999999..1800000000)
  ///  -- initial vertex reference longitude
  ///  -- LSB = 1/10 micro degree
  ///  -- Providing a range of plus-minus 180 degrees
  ///  -- Convert to degree with factor 0.0000001 when field is used
  int32_t reflon;
  /// reflat ::= INTEGER (-900000000..900000000)
  ///  -- initial vertex reference latitude
  ///  -- LSB = 1/10 micro degree
  ///  -- Providing a range of plus-minus 90 degrees
  ///  -- Convert to degree with factor 0.0000001 when field is used
  int32_t reflat;
  /// offsets ::= SEQUENCE (SIZE(3)) OF OffsetPoint
  j2735_v2x_msgs__msg__OffsetPoint offsets[3];
} j2735_v2x_msgs__msg__TrafficControlBounds;

// Struct for a sequence of j2735_v2x_msgs__msg__TrafficControlBounds.
typedef struct j2735_v2x_msgs__msg__TrafficControlBounds__Sequence
{
  j2735_v2x_msgs__msg__TrafficControlBounds * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__TrafficControlBounds__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_BOUNDS__STRUCT_H_
