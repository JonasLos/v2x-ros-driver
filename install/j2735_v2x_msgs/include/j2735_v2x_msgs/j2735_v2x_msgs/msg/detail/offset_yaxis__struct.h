// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/OffsetYaxis.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/offset_yaxis.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__OFFSET_YAXIS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__OFFSET_YAXIS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'SMALL'.
enum
{
  j2735_v2x_msgs__msg__OffsetYaxis__SMALL = 0
};

/// Constant 'LARGE'.
enum
{
  j2735_v2x_msgs__msg__OffsetYaxis__LARGE = 1
};

/// Struct defined in msg/OffsetYaxis in the package j2735_v2x_msgs.
/**
  * OffsetYaxis.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  *  -- A path X offset value for translations of the
  *  -- path's points when creating translated lanes.
  *  -- The values found in the reference lane are
  *  -- all offset based on the X and Y values from
  *  -- the coordinates of the reference lane's
  *  -- initial path point.
  * offsetYaxis CHOICE {
  *   small DrivenLineOffsetSm,
  *   large DrivenLineOffsetLg
  *   },
 */
typedef struct j2735_v2x_msgs__msg__OffsetYaxis
{
  uint8_t choice;
  /// The DrivenLineOffsetSmall data element is an integer value expressing the offset in a defined axis from a reference
  /// lane number from which a computed lane is offset.
  /// DrivenLineOffsetSm ::= INTEGER (-2047..2047)
  /// -- LSB units are 1 cm.
  int16_t small;
  /// The DE_DrivenLineOffsetLarge data element is an integer value expressing the offset in a defined axis from a
  /// reference lane number from which a computed lane is offset.
  /// DrivenLineOffsetLg ::= INTEGER (-32767..32767)
  /// -- LSB units are 1 cm.
  int16_t large;
} j2735_v2x_msgs__msg__OffsetYaxis;

// Struct for a sequence of j2735_v2x_msgs__msg__OffsetYaxis.
typedef struct j2735_v2x_msgs__msg__OffsetYaxis__Sequence
{
  j2735_v2x_msgs__msg__OffsetYaxis * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__OffsetYaxis__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__OFFSET_YAXIS__STRUCT_H_
