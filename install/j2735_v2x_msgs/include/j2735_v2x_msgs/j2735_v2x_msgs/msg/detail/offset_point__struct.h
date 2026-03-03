// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/OffsetPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/offset_point.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__OFFSET_POINT__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__OFFSET_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/OffsetPoint in the package j2735_v2x_msgs.
/**
  * OffsetPoint.msg
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
typedef struct j2735_v2x_msgs__msg__OffsetPoint
{
  /// OffsetPoint ::= SEQUENCE
  /// {
  ///  deltax INTEGER (-32768..32767), -- relative horizontal vertex position in scaled meters
  ///  deltay INTEGER (-32768..32767) -- relative vertical vertex position in scaled meters
  /// }
  /// deltax ::= INTEGER (-32768..32767)
  int16_t deltax;
  /// deltay ::= INTEGER (-32768..32767)
  int16_t deltay;
} j2735_v2x_msgs__msg__OffsetPoint;

// Struct for a sequence of j2735_v2x_msgs__msg__OffsetPoint.
typedef struct j2735_v2x_msgs__msg__OffsetPoint__Sequence
{
  j2735_v2x_msgs__msg__OffsetPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__OffsetPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__OFFSET_POINT__STRUCT_H_
