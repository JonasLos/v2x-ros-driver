// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/VehicleEventFlags.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/vehicle_event_flags.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_EVENT_FLAGS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_EVENT_FLAGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'EVENT_HAZARD_LIGHTS'.
enum
{
  j2735_v2x_msgs__msg__VehicleEventFlags__EVENT_HAZARD_LIGHTS = 0
};

/// Constant 'EVENT_STOP_LINE_VIOLATION'.
enum
{
  j2735_v2x_msgs__msg__VehicleEventFlags__EVENT_STOP_LINE_VIOLATION = 1
};

/// Constant 'EVENT_ABS_ACTIVATED'.
enum
{
  j2735_v2x_msgs__msg__VehicleEventFlags__EVENT_ABS_ACTIVATED = 2
};

/// Constant 'EVENT_TRACTION_CONTROL_LOSS'.
enum
{
  j2735_v2x_msgs__msg__VehicleEventFlags__EVENT_TRACTION_CONTROL_LOSS = 4
};

/// Constant 'EVENT_STABILITY_CONTROL_ACTIVATED'.
enum
{
  j2735_v2x_msgs__msg__VehicleEventFlags__EVENT_STABILITY_CONTROL_ACTIVATED = 8
};

/// Constant 'EVENT_HAZARDOUS_MATERIALS'.
enum
{
  j2735_v2x_msgs__msg__VehicleEventFlags__EVENT_HAZARDOUS_MATERIALS = 16
};

/// Constant 'EVENT_RESERVED1'.
enum
{
  j2735_v2x_msgs__msg__VehicleEventFlags__EVENT_RESERVED1 = 32
};

/// Constant 'EVENT_HARD_BRAKING'.
enum
{
  j2735_v2x_msgs__msg__VehicleEventFlags__EVENT_HARD_BRAKING = 64
};

/// Constant 'EVENT_LIGHTS_CHANGED'.
enum
{
  j2735_v2x_msgs__msg__VehicleEventFlags__EVENT_LIGHTS_CHANGED = 128
};

/// Constant 'EVENT_WIPERS_CHANGED'.
enum
{
  j2735_v2x_msgs__msg__VehicleEventFlags__EVENT_WIPERS_CHANGED = 256
};

/// Constant 'EVENT_FLAT_TIRE'.
enum
{
  j2735_v2x_msgs__msg__VehicleEventFlags__EVENT_FLAT_TIRE = 512
};

/// Constant 'EVENT_DISABLED_VEHICLE'.
enum
{
  j2735_v2x_msgs__msg__VehicleEventFlags__EVENT_DISABLED_VEHICLE = 1024
};

/// Constant 'EVENT_AIR_BAG_DEPLOYMENT'.
enum
{
  j2735_v2x_msgs__msg__VehicleEventFlags__EVENT_AIR_BAG_DEPLOYMENT = 2048
};

/// Struct defined in msg/VehicleEventFlags in the package j2735_v2x_msgs.
/**
  * VehicleEventFLags.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__VehicleEventFlags
{
  /// VehicleEventFlags ::= BIT STRING {
  ///    eventHazardLights               (0),
  ///    eventStopLineViolation          (1), -- Intersection Violation
  ///    eventABSactivated               (2),
  ///    eventTractionControlLoss        (3),
  ///    eventStabilityControlactivated  (4),
  ///    eventHazardousMaterials         (5),
  ///    eventReserved1                  (6),
  ///    eventHardBraking                (7),
  ///    eventLightsChanged              (8),
  ///    eventWipersChanged              (9),
  ///    eventFlatTire                   (10),
  ///    eventDisabledVehicle            (11), -- The DisabledVehicle DF may also be sent
  ///    eventAirBagDeployment           (12)
  ///    } (SIZE (13, ...))
  uint16_t vehicle_event_flag;
} j2735_v2x_msgs__msg__VehicleEventFlags;

// Struct for a sequence of j2735_v2x_msgs__msg__VehicleEventFlags.
typedef struct j2735_v2x_msgs__msg__VehicleEventFlags__Sequence
{
  j2735_v2x_msgs__msg__VehicleEventFlags * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__VehicleEventFlags__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_EVENT_FLAGS__STRUCT_H_
