// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/WeatherReport.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/weather_report.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__WEATHER_REPORT__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__WEATHER_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'HAS_RAIN_RATE'.
enum
{
  j2735_v2x_msgs__msg__WeatherReport__HAS_RAIN_RATE = 1
};

/// Constant 'HAS_PRECIP_SITUATION'.
enum
{
  j2735_v2x_msgs__msg__WeatherReport__HAS_PRECIP_SITUATION = 2
};

/// Constant 'HAS_SOLAR_RADIATION'.
enum
{
  j2735_v2x_msgs__msg__WeatherReport__HAS_SOLAR_RADIATION = 4
};

/// Constant 'HAS_FRICTION'.
enum
{
  j2735_v2x_msgs__msg__WeatherReport__HAS_FRICTION = 8
};

/// Constant 'HAS_ROAD_FRICTION'.
enum
{
  j2735_v2x_msgs__msg__WeatherReport__HAS_ROAD_FRICTION = 16
};

// Include directives for member types
// Member 'is_raining'
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_yes_no__struct.h"
// Member 'rain_rate'
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_rate__struct.h"
// Member 'precip_situation'
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_situation__struct.h"
// Member 'solar_radiation'
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_solar_radiation__struct.h"
// Member 'friction'
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_mobile_friction__struct.h"
// Member 'road_friction'
#include "j2735_v2x_msgs/msg/detail/coefficient_of_friction__struct.h"

/// Struct defined in msg/WeatherReport in the package j2735_v2x_msgs.
/**
  * WeatherReport.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__WeatherReport
{
  /// WeatherReport ::= SEQUENCE {
  ///    isRaining        NTCIP.EssPrecipYesNo,
  ///    rainRate         NTCIP.EssPrecipRate       OPTIONAL,
  ///    precipSituation  NTCIP.EssPrecipSituation  OPTIONAL,
  ///    solarRadiation   NTCIP.EssSolarRadiation   OPTIONAL,
  ///    friction         NTCIP.EssMobileFriction   OPTIONAL,
  ///    roadFriction     CoefficientOfFriction     OPTIONAL,
  ///    ...
  ///    }
  /// A BIT STRING defining the presence of optional fields.
  /// Compare with bitwise-and
  /// if (presence_vector & HAS_RAIN_RATE) etc.
  /// Create with bitwise-or
  /// presence_vector = presence_vector | HAS_RAIN_RATE
  uint16_t presence_vector;
  j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo is_raining;
  /// OPTIONAL FIELDS
  /// All fields below this section are optional.
  /// The presence of a given field can be idenfied by checking the presence_vector
  j2735_v2x_msgs__msg__NTCIPEssPrecipRate rain_rate;
  j2735_v2x_msgs__msg__NTCIPEssPrecipSituation precip_situation;
  j2735_v2x_msgs__msg__NTCIPEssSolarRadiation solar_radiation;
  j2735_v2x_msgs__msg__NTCIPEssMobileFriction friction;
  j2735_v2x_msgs__msg__CoefficientOfFriction road_friction;
} j2735_v2x_msgs__msg__WeatherReport;

// Struct for a sequence of j2735_v2x_msgs__msg__WeatherReport.
typedef struct j2735_v2x_msgs__msg__WeatherReport__Sequence
{
  j2735_v2x_msgs__msg__WeatherReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__WeatherReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__WEATHER_REPORT__STRUCT_H_
