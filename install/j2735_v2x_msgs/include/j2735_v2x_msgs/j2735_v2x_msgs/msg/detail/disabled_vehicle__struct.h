// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/DisabledVehicle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/disabled_vehicle.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__DISABLED_VEHICLE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__DISABLED_VEHICLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'HAS_LOCATION_DETAILS'.
enum
{
  j2735_v2x_msgs__msg__DisabledVehicle__HAS_LOCATION_DETAILS = 1
};

/// Constant 'STATUS_DETAILS_MIN'.
enum
{
  j2735_v2x_msgs__msg__DisabledVehicle__STATUS_DETAILS_MIN = 532
};

/// Constant 'STATUS_DETAILS_MAX'.
enum
{
  j2735_v2x_msgs__msg__DisabledVehicle__STATUS_DETAILS_MAX = 541
};

// Include directives for member types
// Member 'status_details'
#include "j2735_v2x_msgs/msg/detail/iti_scodes__struct.h"
// Member 'location_details'
#include "j2735_v2x_msgs/msg/detail/itis_generic_locations__struct.h"

/// Struct defined in msg/DisabledVehicle in the package j2735_v2x_msgs.
/**
  * DisabledVehicle.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__DisabledVehicle
{
  /// DisabledVehicle ::= SEQUENCE {
  ///    statusDetails     ITIS.ITIScodes(523..541),
  ///                      -- Codes 532 to 541, as taken from J2540:
  ///                      -- Disabled, etc.
  ///                        -- stalled-vehicle (532),
  ///                        -- abandoned-vehicle (533),
  ///                        -- disabled-vehicle (534),
  ///                        -- disabled-truck (535),
  ///                        -- disabled-semi-trailer (536), -^- Alt: disabled
  ///                      -- tractor-trailer
  ///                        -- disabled-bus (537),
  ///                        -- disabled-train (538),
  ///                        -- vehicle-spun-out (539),
  ///                        -- vehicle-on-fire (540),
  ///                        -- vehicle-in-water (541),
  ///    locationDetails   ITIS.GenericLocations   OPTIONAL,
  ///    ...
  ///    }
  /// A BIT STRING defining the presence of optional fields.
  /// Compare with bitwise-and
  /// if (presence_vector & HAS_LOCATION_DETAILS) etc.
  /// Create with bitwise-or
  /// presence_vector = presence_vector | HAS_LOCATION_DETAILS
  uint16_t presence_vector;
  j2735_v2x_msgs__msg__ITIScodes status_details;
  j2735_v2x_msgs__msg__ITISGenericLocations location_details;
} j2735_v2x_msgs__msg__DisabledVehicle;

// Struct for a sequence of j2735_v2x_msgs__msg__DisabledVehicle.
typedef struct j2735_v2x_msgs__msg__DisabledVehicle__Sequence
{
  j2735_v2x_msgs__msg__DisabledVehicle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__DisabledVehicle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__DISABLED_VEHICLE__STRUCT_H_
