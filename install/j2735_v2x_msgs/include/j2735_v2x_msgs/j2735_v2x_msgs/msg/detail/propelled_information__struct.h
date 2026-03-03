// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/PropelledInformation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/propelled_information.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PROPELLED_INFORMATION__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__PROPELLED_INFORMATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'CHOICE_HUMAN'.
enum
{
  j2735_v2x_msgs__msg__PropelledInformation__CHOICE_HUMAN = 0
};

/// Constant 'CHOICE_ANIMAL'.
enum
{
  j2735_v2x_msgs__msg__PropelledInformation__CHOICE_ANIMAL = 1
};

/// Constant 'CHOICE_MOTOR'.
enum
{
  j2735_v2x_msgs__msg__PropelledInformation__CHOICE_MOTOR = 2
};

// Include directives for member types
// Member 'human'
#include "j2735_v2x_msgs/msg/detail/human_propelled_type__struct.h"
// Member 'animal'
#include "j2735_v2x_msgs/msg/detail/animal_propelled_type__struct.h"
// Member 'motor'
#include "j2735_v2x_msgs/msg/detail/motorized_propelled_type__struct.h"

/// Struct defined in msg/PropelledInformation in the package j2735_v2x_msgs.
/**
  * PropelledInformation.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of PropelledInformation from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * PropelledInformation ::= CHOICE {
  *    human   HumanPropelledType, -- PersonalDeviceUserType would be a aPEDESTRIAN
  *    animal  AnimalPropelledType,
  *    motor   MotorizedPropelledType,
  *    ...
  * }    
 */
typedef struct j2735_v2x_msgs__msg__PropelledInformation
{
  uint8_t choice;
  /// Following fields selected by the choice enum
  j2735_v2x_msgs__msg__HumanPropelledType human;
  j2735_v2x_msgs__msg__AnimalPropelledType animal;
  j2735_v2x_msgs__msg__MotorizedPropelledType motor;
} j2735_v2x_msgs__msg__PropelledInformation;

// Struct for a sequence of j2735_v2x_msgs__msg__PropelledInformation.
typedef struct j2735_v2x_msgs__msg__PropelledInformation__Sequence
{
  j2735_v2x_msgs__msg__PropelledInformation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__PropelledInformation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PROPELLED_INFORMATION__STRUCT_H_
