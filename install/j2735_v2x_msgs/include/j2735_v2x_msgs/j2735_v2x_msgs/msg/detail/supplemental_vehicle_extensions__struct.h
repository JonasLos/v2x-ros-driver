// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/SupplementalVehicleExtensions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/supplemental_vehicle_extensions.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__SUPPLEMENTAL_VEHICLE_EXTENSIONS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__SUPPLEMENTAL_VEHICLE_EXTENSIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'HAS_CLASSIFICATION'.
enum
{
  j2735_v2x_msgs__msg__SupplementalVehicleExtensions__HAS_CLASSIFICATION = 1
};

/// Constant 'HAS_CLASS_DETAILS'.
enum
{
  j2735_v2x_msgs__msg__SupplementalVehicleExtensions__HAS_CLASS_DETAILS = 2
};

/// Constant 'HAS_VEHICLE_DATA'.
enum
{
  j2735_v2x_msgs__msg__SupplementalVehicleExtensions__HAS_VEHICLE_DATA = 4
};

/// Constant 'HAS_WEATHER_REPORT'.
enum
{
  j2735_v2x_msgs__msg__SupplementalVehicleExtensions__HAS_WEATHER_REPORT = 8
};

/// Constant 'HAS_WEATHER_PROBE'.
enum
{
  j2735_v2x_msgs__msg__SupplementalVehicleExtensions__HAS_WEATHER_PROBE = 16
};

/// Constant 'HAS_OBSTACLE'.
enum
{
  j2735_v2x_msgs__msg__SupplementalVehicleExtensions__HAS_OBSTACLE = 32
};

/// Constant 'HAS_STATUS'.
enum
{
  j2735_v2x_msgs__msg__SupplementalVehicleExtensions__HAS_STATUS = 64
};

/// Constant 'HAS_SPEED_PROFILE'.
enum
{
  j2735_v2x_msgs__msg__SupplementalVehicleExtensions__HAS_SPEED_PROFILE = 128
};

/// Constant 'HAS_THE_RTCM'.
enum
{
  j2735_v2x_msgs__msg__SupplementalVehicleExtensions__HAS_THE_RTCM = 256
};

// Include directives for member types
// Member 'classification'
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_class__struct.h"
// Member 'class_details'
#include "j2735_v2x_msgs/msg/detail/vehicle_classification__struct.h"
// Member 'vehicle_data'
#include "j2735_v2x_msgs/msg/detail/vehicle_data__struct.h"
// Member 'weather_report'
#include "j2735_v2x_msgs/msg/detail/weather_report__struct.h"
// Member 'weather_probe'
#include "j2735_v2x_msgs/msg/detail/weather_probe__struct.h"
// Member 'obstacle'
#include "j2735_v2x_msgs/msg/detail/obstacle_detection__struct.h"
// Member 'status'
#include "j2735_v2x_msgs/msg/detail/disabled_vehicle__struct.h"
// Member 'speed_profile'
#include "j2735_v2x_msgs/msg/detail/gross_speed__struct.h"
// Member 'the_rtcm'
#include "j2735_v2x_msgs/msg/detail/rtcm_package__struct.h"

/// Struct defined in msg/SupplementalVehicleExtensions in the package j2735_v2x_msgs.
/**
  * SupplementalVehicleExtensions.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__SupplementalVehicleExtensions
{
  /// SupplementalVehicleExtensions ::= SEQUENCE {
  ///    -- Note that VehicleEventFlags, ExteriorLights,
  ///    -- PathHistory, and PathPrediction are in VehicleSafetyExtensions
  ///
  ///    -- Vehicle Type Classification Data
  ///    classification   BasicVehicleClass        OPTIONAL,
  ///                     -- May be required to be present for non passenger vehicles
  ///    classDetails     VehicleClassification    OPTIONAL,
  ///    vehicleData      VehicleData              OPTIONAL,
  ///
  ///    -- Various V2V Probe Data
  ///    weatherReport    WeatherReport            OPTIONAL,
  ///    weatherProbe     WeatherProbe             OPTIONAL,
  ///
  ///    -- Detected Obstacle data
  ///    obstacle         ObstacleDetection        OPTIONAL,
  ///
  ///    -- Disabled Vehicle Report
  ///    status           DisabledVehicle          OPTIONAL,
  ///
  ///    -- Oncoming lane speed reporting
  ///    speedProfile     SpeedProfile             OPTIONAL,
  ///
  ///    -- Raw GNSS measurements
  ///    theRTCM          RTCMPackage              OPTIONAL,
  ///
  ///    regional  SEQUENCE (SIZE(1..4)) OF
  ///              RegionalExtension {{REGION.Reg-SupplementalVehicleExtensions}} OPTIONAL,
  ///    ...
  ///
  ///    }
  /// A BIT STRING defining the presence of optional fields.
  /// Compare with bitwise-and
  /// if (presence_vector & HAS_CLASSIFICATION) etc.
  /// Create with bitwise-or
  /// presence_vector = presence_vector | HAS_CLASSIFICATION
  uint16_t presence_vector;
  j2735_v2x_msgs__msg__BasicVehicleClass classification;
  j2735_v2x_msgs__msg__VehicleClassification class_details;
  j2735_v2x_msgs__msg__VehicleData vehicle_data;
  j2735_v2x_msgs__msg__WeatherReport weather_report;
  j2735_v2x_msgs__msg__WeatherProbe weather_probe;
  j2735_v2x_msgs__msg__ObstacleDetection obstacle;
  j2735_v2x_msgs__msg__DisabledVehicle status;
  j2735_v2x_msgs__msg__GrossSpeed__Sequence speed_profile;
  j2735_v2x_msgs__msg__RTCMPackage the_rtcm;
} j2735_v2x_msgs__msg__SupplementalVehicleExtensions;

// Struct for a sequence of j2735_v2x_msgs__msg__SupplementalVehicleExtensions.
typedef struct j2735_v2x_msgs__msg__SupplementalVehicleExtensions__Sequence
{
  j2735_v2x_msgs__msg__SupplementalVehicleExtensions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__SupplementalVehicleExtensions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SUPPLEMENTAL_VEHICLE_EXTENSIONS__STRUCT_H_
