// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/RestrictionAppliesTo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/restriction_applies_to.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_APPLIES_TO__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_APPLIES_TO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'NONE'.
enum
{
  j2735_v2x_msgs__msg__RestrictionAppliesTo__NONE = 0
};

/// Constant 'EQUIPPEDTRANSIT'.
enum
{
  j2735_v2x_msgs__msg__RestrictionAppliesTo__EQUIPPEDTRANSIT = 1
};

/// Constant 'EQUIPPEDTAXIS'.
enum
{
  j2735_v2x_msgs__msg__RestrictionAppliesTo__EQUIPPEDTAXIS = 2
};

/// Constant 'EQUIPPEDOTHER'.
enum
{
  j2735_v2x_msgs__msg__RestrictionAppliesTo__EQUIPPEDOTHER = 3
};

/// Constant 'EMISSIONCOMPLIANT'.
enum
{
  j2735_v2x_msgs__msg__RestrictionAppliesTo__EMISSIONCOMPLIANT = 4
};

/// Constant 'EQUIPPEDBICYCLE'.
enum
{
  j2735_v2x_msgs__msg__RestrictionAppliesTo__EQUIPPEDBICYCLE = 5
};

/// Constant 'WEIGHTCOMPLIANT'.
enum
{
  j2735_v2x_msgs__msg__RestrictionAppliesTo__WEIGHTCOMPLIANT = 6
};

/// Constant 'HEIGHTCOMPLIANT'.
enum
{
  j2735_v2x_msgs__msg__RestrictionAppliesTo__HEIGHTCOMPLIANT = 7
};

/// Constant 'PEDESTRIANS'.
enum
{
  j2735_v2x_msgs__msg__RestrictionAppliesTo__PEDESTRIANS = 8
};

/// Constant 'SLOWMOVINGPERSONS'.
enum
{
  j2735_v2x_msgs__msg__RestrictionAppliesTo__SLOWMOVINGPERSONS = 9
};

/// Constant 'WHEELCHAIRUSERS'.
enum
{
  j2735_v2x_msgs__msg__RestrictionAppliesTo__WHEELCHAIRUSERS = 10
};

/// Constant 'VISUALDISABILITIES'.
enum
{
  j2735_v2x_msgs__msg__RestrictionAppliesTo__VISUALDISABILITIES = 11
};

/// Constant 'AUDIODISABILITIES'.
enum
{
  j2735_v2x_msgs__msg__RestrictionAppliesTo__AUDIODISABILITIES = 12
};

/// Constant 'OTHERUNKNOWNDISABILITIES'.
enum
{
  j2735_v2x_msgs__msg__RestrictionAppliesTo__OTHERUNKNOWNDISABILITIES = 13
};

/// Struct defined in msg/RestrictionAppliesTo in the package j2735_v2x_msgs.
/**
  * RestrictionAppliesTo.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The RestrictionAppliesTo data element provides a short list of common vehicle
  * types which may have one or more special movements at an intersection. I
  *
  * RestrictionAppliesTo ::= ENUMERATED {
  * none, -- applies to nothing
  * equippedTransit, -- buses etc.
  * equippedTaxis,
  * equippedOther, -- other vehicle types with
  *   -- necessary signal phase state
  *   -- reception equipment
  * emissionCompliant, -- regional variants with more
  *   -- definitive items also exist
  * equippedBicycle,
  * weightCompliant,
  * heightCompliant,
  * -- Items dealing with traveler needs serviced by the infrastructure
  * -- These end users (which are not vehicles) are presumed to be suitably equipped
  * pedestrians,
  * slowMovingPersons,
  * wheelchairUsers,
  * visualDisabilities,
  * audioDisabilities, -- hearing
  * otherUnknownDisabilities,
  * ...
  * }
 */
typedef struct j2735_v2x_msgs__msg__RestrictionAppliesTo
{
  /// Variable which can be used to store a type enum value.
  uint8_t restriction_applies_to;
} j2735_v2x_msgs__msg__RestrictionAppliesTo;

// Struct for a sequence of j2735_v2x_msgs__msg__RestrictionAppliesTo.
typedef struct j2735_v2x_msgs__msg__RestrictionAppliesTo__Sequence
{
  j2735_v2x_msgs__msg__RestrictionAppliesTo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__RestrictionAppliesTo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_APPLIES_TO__STRUCT_H_
