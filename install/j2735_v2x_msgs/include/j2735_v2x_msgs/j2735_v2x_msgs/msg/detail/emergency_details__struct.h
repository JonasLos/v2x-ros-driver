// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/EmergencyDetails.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/emergency_details.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__EMERGENCY_DETAILS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__EMERGENCY_DETAILS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'HAS_EVENTS'.
enum
{
  j2735_v2x_msgs__msg__EmergencyDetails__HAS_EVENTS = 1
};

/// Constant 'HAS_RESPONSE_TYPE'.
enum
{
  j2735_v2x_msgs__msg__EmergencyDetails__HAS_RESPONSE_TYPE = 2
};

// Include directives for member types
// Member 'siren_use'
#include "j2735_v2x_msgs/msg/detail/siren_in_use__struct.h"
// Member 'lights_use'
#include "j2735_v2x_msgs/msg/detail/lightbar_in_use__struct.h"
// Member 'multi'
#include "j2735_v2x_msgs/msg/detail/multi_vehicle_response__struct.h"
// Member 'events'
#include "j2735_v2x_msgs/msg/detail/privileged_events__struct.h"
// Member 'response_type'
#include "j2735_v2x_msgs/msg/detail/response_type__struct.h"

/// Struct defined in msg/EmergencyDetails in the package j2735_v2x_msgs.
/**
  * EmergencyDetails.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__EmergencyDetails
{
  /// EmergencyDetails ::= SEQUENCE {
  ///  notUsed SSPindex,
  /// -- always set to 0 and carries no meaning;
  /// -- legacy field maintained for backward compatibility
  ///  sirenUse SirenInUse,
  ///  lightsUse LightbarInUse,
  ///  multi MultiVehicleResponse,
  ///  events PrivilegedEvents OPTIONAL,
  ///  responseType ResponseType OPTIONAL,
  ///  ...
  /// }
  /// A BIT STRING defining the presence of optional fields.
  /// Compare with bitwise-and
  /// if (presence_vector & HAS_EVENTS) etc.
  /// Create with bitwise-or
  /// presence_vector = presence_vector | HAS_EVENTS
  uint16_t presence_vector;
  uint8_t ssp_index;
  /// SirenInUse ::= ENUMERATED {
  ///   unavailable (0), -- Not Equipped or unavailable
  ///   notInUse (1),
  ///   inUse (2),
  ///   reserved (3) -- for future use
  /// }
  j2735_v2x_msgs__msg__SirenInUse siren_use;
  j2735_v2x_msgs__msg__LightbarInUse lights_use;
  j2735_v2x_msgs__msg__MultiVehicleResponse multi;
  /// OPTIONAL FIELDS
  /// All fields below this section are optional.
  /// The presence of a given field can be idenfied by checking the presence_vector
  j2735_v2x_msgs__msg__PrivilegedEvents events;
  j2735_v2x_msgs__msg__ResponseType response_type;
} j2735_v2x_msgs__msg__EmergencyDetails;

// Struct for a sequence of j2735_v2x_msgs__msg__EmergencyDetails.
typedef struct j2735_v2x_msgs__msg__EmergencyDetails__Sequence
{
  j2735_v2x_msgs__msg__EmergencyDetails * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__EmergencyDetails__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__EMERGENCY_DETAILS__STRUCT_H_
