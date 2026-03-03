// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/FuelType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/fuel_type.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__FUEL_TYPE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__FUEL_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'UNKNOWN_FUEL'.
/**
  * Enumeration values for fuel_type
 */
enum
{
  j2735_v2x_msgs__msg__FuelType__UNKNOWN_FUEL = 0
};

/// Constant 'GASOLINE'.
enum
{
  j2735_v2x_msgs__msg__FuelType__GASOLINE = 1
};

/// Constant 'ETHANOL'.
enum
{
  j2735_v2x_msgs__msg__FuelType__ETHANOL = 2
};

/// Constant 'DIESEL'.
enum
{
  j2735_v2x_msgs__msg__FuelType__DIESEL = 3
};

/// Constant 'ELECTRIC'.
enum
{
  j2735_v2x_msgs__msg__FuelType__ELECTRIC = 4
};

/// Constant 'HYBRID'.
enum
{
  j2735_v2x_msgs__msg__FuelType__HYBRID = 5
};

/// Constant 'HYDROGEN'.
enum
{
  j2735_v2x_msgs__msg__FuelType__HYDROGEN = 6
};

/// Constant 'NAT_GAS_LIQUID'.
enum
{
  j2735_v2x_msgs__msg__FuelType__NAT_GAS_LIQUID = 7
};

/// Constant 'NAT_GAS_COMP'.
enum
{
  j2735_v2x_msgs__msg__FuelType__NAT_GAS_COMP = 8
};

/// Constant 'PROPANE'.
enum
{
  j2735_v2x_msgs__msg__FuelType__PROPANE = 9
};

/// Struct defined in msg/FuelType in the package j2735_v2x_msgs.
/**
  * FuelType.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__FuelType
{
  /// FuelType ::= INTEGER (0..15)
  ///    unknownFuel   FuelType::=  0 -- Gasoline Powered
  ///    gasoline      FuelType::=  1
  ///    ethanol       FuelType::=  2 -- Including blends
  ///    diesel        FuelType::=  3 -- All types
  ///    electric      FuelType::=  4
  ///    hybrid        FuelType::=  5 -- All types
  ///    hydrogen      FuelType::=  6
  ///    natGasLiquid  FuelType::=  7 -- Liquefied
  ///    natGasComp    FuelType::=  8 -- Compressed
  ///    propane       FuelType::=  9
  uint8_t fuel_type;
} j2735_v2x_msgs__msg__FuelType;

// Struct for a sequence of j2735_v2x_msgs__msg__FuelType.
typedef struct j2735_v2x_msgs__msg__FuelType__Sequence
{
  j2735_v2x_msgs__msg__FuelType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__FuelType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__FUEL_TYPE__STRUCT_H_
