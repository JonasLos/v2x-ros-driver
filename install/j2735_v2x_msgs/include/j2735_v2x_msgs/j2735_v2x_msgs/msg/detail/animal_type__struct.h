// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/AnimalType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/animal_type.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ANIMAL_TYPE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__ANIMAL_TYPE__STRUCT_H_

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
  j2735_v2x_msgs__msg__AnimalType__UNAVAILABLE = 0
};

/// Constant 'SERVICE_USE'.
enum
{
  j2735_v2x_msgs__msg__AnimalType__SERVICE_USE = 1
};

/// Constant 'PET'.
enum
{
  j2735_v2x_msgs__msg__AnimalType__PET = 2
};

/// Constant 'FARM'.
enum
{
  j2735_v2x_msgs__msg__AnimalType__FARM = 3
};

/// Struct defined in msg/AnimalType in the package j2735_v2x_msgs.
/**
  * AnimalType.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of AnimalType from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * AnimalType ::= ENUMERATED { 
  *    unavailable    (0), 
  *    serviceUse     (1),  -- Includes guide or police animals
  *    pet            (2),
  *    farm           (3),
  *    ...
  *    }
 */
typedef struct j2735_v2x_msgs__msg__AnimalType
{
  uint8_t type;
} j2735_v2x_msgs__msg__AnimalType;

// Struct for a sequence of j2735_v2x_msgs__msg__AnimalType.
typedef struct j2735_v2x_msgs__msg__AnimalType__Sequence
{
  j2735_v2x_msgs__msg__AnimalType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__AnimalType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ANIMAL_TYPE__STRUCT_H_
