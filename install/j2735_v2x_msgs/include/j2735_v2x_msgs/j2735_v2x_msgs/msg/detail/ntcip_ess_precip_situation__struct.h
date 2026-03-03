// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/NTCIPEssPrecipSituation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/ntcip_ess_precip_situation.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_SITUATION__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_SITUATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'OTHER'.
/**
  * Enumeration values for ess_precip_situation
 */
enum
{
  j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__OTHER = 1
};

/// Constant 'UNKNOWN'.
enum
{
  j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__UNKNOWN = 2
};

/// Constant 'NO_PRECIPITATION'.
enum
{
  j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__NO_PRECIPITATION = 3
};

/// Constant 'UNIDENTIFIED_SLIGHT'.
enum
{
  j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__UNIDENTIFIED_SLIGHT = 4
};

/// Constant 'UNIDENTIFIED_MODERATE'.
enum
{
  j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__UNIDENTIFIED_MODERATE = 5
};

/// Constant 'UNIDENTIFIED_HEAVY'.
enum
{
  j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__UNIDENTIFIED_HEAVY = 6
};

/// Constant 'SNOW_SLIGHT'.
enum
{
  j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__SNOW_SLIGHT = 7
};

/// Constant 'SNOW_MODERATE'.
enum
{
  j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__SNOW_MODERATE = 8
};

/// Constant 'SNOW_HEAVY'.
enum
{
  j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__SNOW_HEAVY = 9
};

/// Constant 'RAIN_SLIGHT'.
enum
{
  j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__RAIN_SLIGHT = 10
};

/// Constant 'RAIN_MODERATE'.
enum
{
  j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__RAIN_MODERATE = 11
};

/// Constant 'RAIN_HEAVY'.
enum
{
  j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__RAIN_HEAVY = 12
};

/// Constant 'FROZEN_PRECIPITATION_SLIGHT'.
enum
{
  j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__FROZEN_PRECIPITATION_SLIGHT = 13
};

/// Constant 'FROZEN_PRECIPITATION_MODERATE'.
enum
{
  j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__FROZEN_PRECIPITATION_MODERATE = 14
};

/// Constant 'FROZEN_PRECIPITATION_HEAVY'.
enum
{
  j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__FROZEN_PRECIPITATION_HEAVY = 15
};

/// Struct defined in msg/NTCIPEssPrecipSituation in the package j2735_v2x_msgs.
/**
  * NTCIPEssPrecipSituation.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__NTCIPEssPrecipSituation
{
  /// EssPrecipSituation ::= ENUMERATED {
  ///    other (1),
  ///    unknown (2),
  ///    noPrecipitation (3),
  ///    unidentifiedSlight (4),
  ///    unidentifiedModerate (5),
  ///    unidentifiedHeavy (6),
  ///    snowSlight (7),
  ///    snowModerate (8),
  ///    snowHeavy (9),
  ///    rainSlight (10),
  ///    rainModerate (11),
  ///    rainHeavy (12),
  ///    frozenPrecipitationSlight (13),
  ///    frozenPrecipitationModerate (14),
  ///    frozenPrecipitationHeavy (15)
  ///    }
  uint8_t ess_precip_situation;
} j2735_v2x_msgs__msg__NTCIPEssPrecipSituation;

// Struct for a sequence of j2735_v2x_msgs__msg__NTCIPEssPrecipSituation.
typedef struct j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__Sequence
{
  j2735_v2x_msgs__msg__NTCIPEssPrecipSituation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_SITUATION__STRUCT_H_
