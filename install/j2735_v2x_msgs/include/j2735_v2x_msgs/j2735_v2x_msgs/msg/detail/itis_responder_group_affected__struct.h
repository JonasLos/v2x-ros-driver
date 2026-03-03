// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/ITISResponderGroupAffected.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/itis_responder_group_affected.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ITIS_RESPONDER_GROUP_AFFECTED__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__ITIS_RESPONDER_GROUP_AFFECTED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'EMERGENCY_VEHICLE_UNITS'.
/**
  * Enumeration values for responder_group_affected
 */
enum
{
  j2735_v2x_msgs__msg__ITISResponderGroupAffected__EMERGENCY_VEHICLE_UNITS = 9729
};

/// Constant 'FEDERAL_LAW_ENFORCEMENT_UNITS'.
enum
{
  j2735_v2x_msgs__msg__ITISResponderGroupAffected__FEDERAL_LAW_ENFORCEMENT_UNITS = 9730
};

/// Constant 'STATE_POLICE_UNITS'.
enum
{
  j2735_v2x_msgs__msg__ITISResponderGroupAffected__STATE_POLICE_UNITS = 9731
};

/// Constant 'LOCAL_POLICE_UNITS'.
enum
{
  j2735_v2x_msgs__msg__ITISResponderGroupAffected__LOCAL_POLICE_UNITS = 9732
};

/// Constant 'AMBULANCE_UNITS'.
enum
{
  j2735_v2x_msgs__msg__ITISResponderGroupAffected__AMBULANCE_UNITS = 9734
};

/// Constant 'RESCUE_UNITS'.
enum
{
  j2735_v2x_msgs__msg__ITISResponderGroupAffected__RESCUE_UNITS = 9735
};

/// Constant 'FIRE_UNITS'.
enum
{
  j2735_v2x_msgs__msg__ITISResponderGroupAffected__FIRE_UNITS = 9736
};

/// Constant 'HAZMAT_UNITS'.
enum
{
  j2735_v2x_msgs__msg__ITISResponderGroupAffected__HAZMAT_UNITS = 9737
};

/// Constant 'LIGHT_TOW_UNIT'.
enum
{
  j2735_v2x_msgs__msg__ITISResponderGroupAffected__LIGHT_TOW_UNIT = 9738
};

/// Constant 'HEAVY_TOW_UNIT'.
enum
{
  j2735_v2x_msgs__msg__ITISResponderGroupAffected__HEAVY_TOW_UNIT = 9739
};

/// Constant 'FREEWAY_SERVICE_PATROLS'.
enum
{
  j2735_v2x_msgs__msg__ITISResponderGroupAffected__FREEWAY_SERVICE_PATROLS = 9740
};

/// Constant 'TRANSPORTATION_RESPONSE_UNITS'.
enum
{
  j2735_v2x_msgs__msg__ITISResponderGroupAffected__TRANSPORTATION_RESPONSE_UNITS = 9741
};

/// Constant 'PRIVATE_CONTRACTOR_RESPONSE_UNITS'.
enum
{
  j2735_v2x_msgs__msg__ITISResponderGroupAffected__PRIVATE_CONTRACTOR_RESPONSE_UNITS = 9742
};

/// Struct defined in msg/ITISResponderGroupAffected in the package j2735_v2x_msgs.
/**
  * ITISResponderGroupAffected.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__ITISResponderGroupAffected
{
  /// ResponderGroupAffected ::= ENUMERATED {
  ///    emergency-vehicle-units           (9729),  -- Default, to be used when one of
  ///                                               -- the below does not fit better
  ///    federal-law-enforcement-units     (9730),
  ///    state-police-units                (9731),
  ///    county-police-units               (9732),  -- Hint: also sheriff response units
  ///    local-police-units                (9733),
  ///    ambulance-units                   (9734),
  ///    rescue-units                      (9735),
  ///    fire-units                        (9736),
  ///    hAZMAT-units                      (9737),
  ///    light-tow-unit                    (9738),
  ///    heavy-tow-unit                    (9739),
  ///    freeway-service-patrols           (9740),
  ///    transportation-response-units     (9741),
  ///    private-contractor-response-units (9742),
  ///    ... -- # LOCAL_CONTENT_ITIS
  ///    }
  ///    -- These groups are used in coordinated response and staging area information
  ///    -- (rather than typically consumer related)
  uint16_t responder_group_affected;
} j2735_v2x_msgs__msg__ITISResponderGroupAffected;

// Struct for a sequence of j2735_v2x_msgs__msg__ITISResponderGroupAffected.
typedef struct j2735_v2x_msgs__msg__ITISResponderGroupAffected__Sequence
{
  j2735_v2x_msgs__msg__ITISResponderGroupAffected * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__ITISResponderGroupAffected__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ITIS_RESPONDER_GROUP_AFFECTED__STRUCT_H_
