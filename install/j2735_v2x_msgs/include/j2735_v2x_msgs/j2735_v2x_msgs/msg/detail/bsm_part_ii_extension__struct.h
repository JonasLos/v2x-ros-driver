// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/BSMPartIIExtension.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/bsm_part_ii_extension.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BSM_PART_II_EXTENSION__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__BSM_PART_II_EXTENSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'VEHICLE_SAFETY_EXT'.
/**
  * Enumeration values for part_ii_id
 */
enum
{
  j2735_v2x_msgs__msg__BSMPartIIExtension__VEHICLE_SAFETY_EXT = 0
};

/// Constant 'SPECIAL_VEHICLE_EXT'.
enum
{
  j2735_v2x_msgs__msg__BSMPartIIExtension__SPECIAL_VEHICLE_EXT = 1
};

/// Constant 'SUPPLEMENTAL_VEHICLE_EXT'.
enum
{
  j2735_v2x_msgs__msg__BSMPartIIExtension__SUPPLEMENTAL_VEHICLE_EXT = 2
};

// Include directives for member types
// Member 'vehicle_safety_extensions'
#include "j2735_v2x_msgs/msg/detail/vehicle_safety_extensions__struct.h"
// Member 'special_vehicle_extensions'
#include "j2735_v2x_msgs/msg/detail/special_vehicle_extensions__struct.h"
// Member 'supplemental_vehicle_extensions'
#include "j2735_v2x_msgs/msg/detail/supplemental_vehicle_extensions__struct.h"

/// Struct defined in msg/BSMPartIIExtension in the package j2735_v2x_msgs.
/**
  * BSMPartIIExtension.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__BSMPartIIExtension
{
  /// -- BSM Part II content support
  /// PARTII-EXT-ID-AND-TYPE ::= CLASS {
  ///   &id     PartII-Id UNIQUE,
  ///   &Type
  ///   } WITH SYNTAX {&Type IDENTIFIED BY &id}
  ///
  /// PartIIcontent  { PARTII-EXT-ID-AND-TYPE: Set} ::= SEQUENCE {
  ///   partII-Id     PARTII-EXT-ID-AND-TYPE.&id( {Set} ),
  ///   partII-Value  PARTII-EXT-ID-AND-TYPE.&Type( {Set}{@partII-Id} )
  ///   }
  ///
  /// PartII-Id ::= INTEGER (0..63)
  ///   vehicleSafetyExt       PartII-Id::= 0  -- VehicleSafetyExtensions
  ///   specialVehicleExt      PartII-Id::= 1  -- SpecialVehicleExtensions
  ///   supplementalVehicleExt PartII-Id::= 2  -- SupplementalVehicleExtensions
  ///   -- NOTE: new registered Part II content IDs will be denoted here
  ///
  /// -- In a given message there may be multiple extensions present
  /// -- but at most one instance of each extension type.
  /// BSMpartIIExtension  PARTII-EXT-ID-AND-TYPE ::= {
  ///   { VehicleSafetyExtensions       IDENTIFIED BY vehicleSafetyExt} |
  ///   { SpecialVehicleExtensions      IDENTIFIED BY specialVehicleExt} |
  ///   { SupplementalVehicleExtensions IDENTIFIED BY supplementalVehicleExt} ,
  ///   ...
  ///   }
  uint8_t part_ii_id;
  j2735_v2x_msgs__msg__VehicleSafetyExtensions vehicle_safety_extensions;
  j2735_v2x_msgs__msg__SpecialVehicleExtensions special_vehicle_extensions;
  j2735_v2x_msgs__msg__SupplementalVehicleExtensions supplemental_vehicle_extensions;
} j2735_v2x_msgs__msg__BSMPartIIExtension;

// Struct for a sequence of j2735_v2x_msgs__msg__BSMPartIIExtension.
typedef struct j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence
{
  j2735_v2x_msgs__msg__BSMPartIIExtension * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BSM_PART_II_EXTENSION__STRUCT_H_
