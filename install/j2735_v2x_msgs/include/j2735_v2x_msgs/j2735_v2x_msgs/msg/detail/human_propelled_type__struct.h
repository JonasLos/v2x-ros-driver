// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/HumanPropelledType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/human_propelled_type.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__HUMAN_PROPELLED_TYPE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__HUMAN_PROPELLED_TYPE__STRUCT_H_

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
  j2735_v2x_msgs__msg__HumanPropelledType__UNAVAILABLE = 0
};

/// Constant 'OTHER_TYPES'.
enum
{
  j2735_v2x_msgs__msg__HumanPropelledType__OTHER_TYPES = 1
};

/// Constant 'ON_FOOT'.
enum
{
  j2735_v2x_msgs__msg__HumanPropelledType__ON_FOOT = 2
};

/// Constant 'SKATEBOARD'.
enum
{
  j2735_v2x_msgs__msg__HumanPropelledType__SKATEBOARD = 3
};

/// Constant 'PUSH_OR_KICK_SCOOTER'.
enum
{
  j2735_v2x_msgs__msg__HumanPropelledType__PUSH_OR_KICK_SCOOTER = 4
};

/// Constant 'WHEELCHAIR'.
enum
{
  j2735_v2x_msgs__msg__HumanPropelledType__WHEELCHAIR = 5
};

/// Struct defined in msg/HumanPropelledType in the package j2735_v2x_msgs.
/**
  * HumanPropelledType.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of HumanPropelledType from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * HumanPropelledType ::= ENUMERATED {   
  *    unavailable        (0),
  *    otherTypes         (1), -- any method not listed below
  *    onFoot             (2),
  *    skateboard         (3),
  *    pushOrKickScooter  (4),
  *    wheelchair         (5), -- implies manually powered
  *    ...
  * }
 */
typedef struct j2735_v2x_msgs__msg__HumanPropelledType
{
  uint8_t type;
} j2735_v2x_msgs__msg__HumanPropelledType;

// Struct for a sequence of j2735_v2x_msgs__msg__HumanPropelledType.
typedef struct j2735_v2x_msgs__msg__HumanPropelledType__Sequence
{
  j2735_v2x_msgs__msg__HumanPropelledType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__HumanPropelledType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__HUMAN_PROPELLED_TYPE__STRUCT_H_
