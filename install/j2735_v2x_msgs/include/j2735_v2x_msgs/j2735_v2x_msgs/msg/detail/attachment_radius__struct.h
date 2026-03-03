// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/AttachmentRadius.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/attachment_radius.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ATTACHMENT_RADIUS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__ATTACHMENT_RADIUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ATTACHMENT_RADIUS_MAX'.
enum
{
  j2735_v2x_msgs__msg__AttachmentRadius__ATTACHMENT_RADIUS_MAX = 200
};

/// Struct defined in msg/AttachmentRadius in the package j2735_v2x_msgs.
/**
  * AttachmentRadius.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of AttachmentRadius from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * AttachmentRadius ::= INTEGER (0..200) -- In LSB units of one decimeter
 */
typedef struct j2735_v2x_msgs__msg__AttachmentRadius
{
  uint8_t attachment_radius;
} j2735_v2x_msgs__msg__AttachmentRadius;

// Struct for a sequence of j2735_v2x_msgs__msg__AttachmentRadius.
typedef struct j2735_v2x_msgs__msg__AttachmentRadius__Sequence
{
  j2735_v2x_msgs__msg__AttachmentRadius * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__AttachmentRadius__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ATTACHMENT_RADIUS__STRUCT_H_
