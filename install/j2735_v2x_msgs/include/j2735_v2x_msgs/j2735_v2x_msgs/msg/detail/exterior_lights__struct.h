// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/ExteriorLights.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/exterior_lights.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__EXTERIOR_LIGHTS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__EXTERIOR_LIGHTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ALL_LIGHTS_OFF'.
enum
{
  j2735_v2x_msgs__msg__ExteriorLights__ALL_LIGHTS_OFF = 0
};

/// Constant 'LOW_BEAM_HEADLIGHTS_ON'.
enum
{
  j2735_v2x_msgs__msg__ExteriorLights__LOW_BEAM_HEADLIGHTS_ON = 1
};

/// Constant 'HIGH_BEAM_HEADLIGHTS_ON'.
enum
{
  j2735_v2x_msgs__msg__ExteriorLights__HIGH_BEAM_HEADLIGHTS_ON = 2
};

/// Constant 'LEFT_TURN_SIGNAL_ON'.
enum
{
  j2735_v2x_msgs__msg__ExteriorLights__LEFT_TURN_SIGNAL_ON = 4
};

/// Constant 'RIGHT_TURN_SIGNAL_ON'.
enum
{
  j2735_v2x_msgs__msg__ExteriorLights__RIGHT_TURN_SIGNAL_ON = 8
};

/// Constant 'HAZARD_SIGNAL_ON'.
enum
{
  j2735_v2x_msgs__msg__ExteriorLights__HAZARD_SIGNAL_ON = 16
};

/// Constant 'AUTOMATIC_LIGHT_CONTROL_ON'.
enum
{
  j2735_v2x_msgs__msg__ExteriorLights__AUTOMATIC_LIGHT_CONTROL_ON = 32
};

/// Constant 'DAYTIME_RUNNING_LIGHTS_ON'.
enum
{
  j2735_v2x_msgs__msg__ExteriorLights__DAYTIME_RUNNING_LIGHTS_ON = 64
};

/// Constant 'FOG_LIGHT_ON'.
enum
{
  j2735_v2x_msgs__msg__ExteriorLights__FOG_LIGHT_ON = 128
};

/// Constant 'PARKING_LIGHTS_ON'.
enum
{
  j2735_v2x_msgs__msg__ExteriorLights__PARKING_LIGHTS_ON = 256
};

/// Struct defined in msg/ExteriorLights in the package j2735_v2x_msgs.
/**
  * ExteriorLights.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__ExteriorLights
{
  /// ExteriorLights ::= BIT STRING {
  ///    -- All lights off is indicated by no bits set
  ///    lowBeamHeadlightsOn       (0),
  ///    highBeamHeadlightsOn      (1),
  ///    leftTurnSignalOn          (2),
  ///    rightTurnSignalOn         (3),
  ///    hazardSignalOn            (4),
  ///    automaticLightControlOn   (5),
  ///    daytimeRunningLightsOn    (6),
  ///    fogLightOn                (7),
  ///    parkingLightsOn           (8)
  ///    } (SIZE (9, ...))
  uint16_t exterior_lights;
} j2735_v2x_msgs__msg__ExteriorLights;

// Struct for a sequence of j2735_v2x_msgs__msg__ExteriorLights.
typedef struct j2735_v2x_msgs__msg__ExteriorLights__Sequence
{
  j2735_v2x_msgs__msg__ExteriorLights * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__ExteriorLights__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__EXTERIOR_LIGHTS__STRUCT_H_
