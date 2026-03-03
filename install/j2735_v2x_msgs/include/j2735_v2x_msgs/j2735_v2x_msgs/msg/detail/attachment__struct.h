// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/Attachment.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/attachment.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ATTACHMENT__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__ATTACHMENT__STRUCT_H_

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
  j2735_v2x_msgs__msg__Attachment__UNAVAILABLE = 0
};

/// Constant 'STROLLER'.
enum
{
  j2735_v2x_msgs__msg__Attachment__STROLLER = 1
};

/// Constant 'BICYCLE_TRAILER'.
enum
{
  j2735_v2x_msgs__msg__Attachment__BICYCLE_TRAILER = 2
};

/// Constant 'CART'.
enum
{
  j2735_v2x_msgs__msg__Attachment__CART = 3
};

/// Constant 'WHEELCHAIR'.
enum
{
  j2735_v2x_msgs__msg__Attachment__WHEELCHAIR = 4
};

/// Constant 'OTHER_WALK_ASSIST_ATTACHMENTS'.
enum
{
  j2735_v2x_msgs__msg__Attachment__OTHER_WALK_ASSIST_ATTACHMENTS = 5
};

/// Constant 'PET'.
enum
{
  j2735_v2x_msgs__msg__Attachment__PET = 6
};

/// Struct defined in msg/Attachment in the package j2735_v2x_msgs.
/**
  * Attachment.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of Attachment from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * Attachment ::= ENUMERATED { 
  *    unavailable                  (0), -- has some unknown attachment type
  *    stroller                     (1),
  *    bicycleTrailer               (2),
  *    cart                         (3),
  *    wheelchair                   (4), 
  *    otherWalkAssistAttachments   (5),
  *    pet                          (6),
  *    ...
  *    }
 */
typedef struct j2735_v2x_msgs__msg__Attachment
{
  uint8_t type;
} j2735_v2x_msgs__msg__Attachment;

// Struct for a sequence of j2735_v2x_msgs__msg__Attachment.
typedef struct j2735_v2x_msgs__msg__Attachment__Sequence
{
  j2735_v2x_msgs__msg__Attachment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__Attachment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ATTACHMENT__STRUCT_H_
