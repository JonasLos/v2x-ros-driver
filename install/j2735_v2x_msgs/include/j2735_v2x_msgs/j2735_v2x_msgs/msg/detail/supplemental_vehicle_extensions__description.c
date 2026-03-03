// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/SupplementalVehicleExtensions.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/supplemental_vehicle_extensions__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__SupplementalVehicleExtensions__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcb, 0xc4, 0xcf, 0xc1, 0x93, 0x36, 0xf5, 0x21,
      0x67, 0xb9, 0xf2, 0xe0, 0x61, 0x76, 0xe5, 0xf4,
      0x87, 0x07, 0x8a, 0xf9, 0x80, 0xde, 0x94, 0x1c,
      0xc0, 0x66, 0xcb, 0xa4, 0x3f, 0xbb, 0x31, 0x12,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/vehicle_classification__functions.h"
#include "j2735_v2x_msgs/msg/detail/coefficient_of_friction__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_hour__functions.h"
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_class__functions.h"
#include "j2735_v2x_msgs/msg/detail/itis_responder_group_affected__functions.h"
#include "j2735_v2x_msgs/msg/detail/ambient_air_pressure__functions.h"
#include "j2735_v2x_msgs/msg/detail/obstacle_detection__functions.h"
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_role__functions.h"
#include "j2735_v2x_msgs/msg/detail/rtcm_header__functions.h"
#include "j2735_v2x_msgs/msg/detail/offset_b12__functions.h"
#include "j2735_v2x_msgs/msg/detail/iti_scodes__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_offset__functions.h"
#include "j2735_v2x_msgs/msg/detail/gnss_status__functions.h"
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_mobile_friction__functions.h"
#include "j2735_v2x_msgs/msg/detail/bumper_heights__functions.h"
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_yes_no__functions.h"
#include "j2735_v2x_msgs/msg/detail/ambient_air_temperature__functions.h"
#include "j2735_v2x_msgs/msg/detail/vehicle_data__functions.h"
#include "j2735_v2x_msgs/msg/detail/rtcm_package__functions.h"
#include "j2735_v2x_msgs/msg/detail/wiper_status__functions.h"
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_situation__functions.h"
#include "j2735_v2x_msgs/msg/detail/angle__functions.h"
#include "j2735_v2x_msgs/msg/detail/offset_b09__functions.h"
#include "j2735_v2x_msgs/msg/detail/weather_probe__functions.h"
#include "j2735_v2x_msgs/msg/detail/weather_report__functions.h"
#include "j2735_v2x_msgs/msg/detail/obstacle_direction__functions.h"
#include "j2735_v2x_msgs/msg/detail/itis_vehicle_group_affected__functions.h"
#include "j2735_v2x_msgs/msg/detail/vertical_acceleration_threshold__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_date_time__functions.h"
#include "j2735_v2x_msgs/msg/detail/itis_generic_locations__functions.h"
#include "j2735_v2x_msgs/msg/detail/bumper_height__functions.h"
#include "j2735_v2x_msgs/msg/detail/vehicle_mass__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_day__functions.h"
#include "j2735_v2x_msgs/msg/detail/wiper_set__functions.h"
#include "j2735_v2x_msgs/msg/detail/disabled_vehicle__functions.h"
#include "j2735_v2x_msgs/msg/detail/vehicle_height__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_minute__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_second__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_year__functions.h"
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_rate__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_month__functions.h"
#include "j2735_v2x_msgs/msg/detail/trailer_weight__functions.h"
#include "j2735_v2x_msgs/msg/detail/obstacle_distance__functions.h"
#include "j2735_v2x_msgs/msg/detail/fuel_type__functions.h"
#include "j2735_v2x_msgs/msg/detail/offset_b10__functions.h"
#include "j2735_v2x_msgs/msg/detail/vehicle_type__functions.h"
#include "j2735_v2x_msgs/msg/detail/wiper_rate__functions.h"
#include "j2735_v2x_msgs/msg/detail/itis_incident_response_equipment__functions.h"
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_solar_radiation__functions.h"
#include "j2735_v2x_msgs/msg/detail/gross_speed__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__AmbientAirPressure__EXPECTED_HASH = {1, {
    0xc3, 0xe8, 0x92, 0x8c, 0x64, 0x96, 0x77, 0xa0,
    0xa8, 0xea, 0x7a, 0x14, 0x4d, 0x28, 0x7b, 0xb5,
    0x87, 0x25, 0x77, 0x5d, 0x1d, 0x2d, 0x4e, 0x6b,
    0x5c, 0xea, 0x64, 0x76, 0x1d, 0xa6, 0x09, 0xae,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__AmbientAirTemperature__EXPECTED_HASH = {1, {
    0x78, 0xc6, 0x97, 0xb3, 0x30, 0x99, 0x5d, 0xc4,
    0x98, 0x3f, 0x9f, 0xb3, 0x0d, 0xff, 0x44, 0x15,
    0x79, 0x62, 0x7b, 0xc7, 0x41, 0xf1, 0xa2, 0xe6,
    0xed, 0x57, 0x8b, 0x6b, 0xb3, 0x20, 0x81, 0x69,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__Angle__EXPECTED_HASH = {1, {
    0xd3, 0x71, 0x4d, 0x57, 0xd2, 0xda, 0x35, 0x97,
    0x4c, 0xd1, 0x0c, 0xcf, 0xca, 0xd6, 0x95, 0xb9,
    0x3f, 0xec, 0x8d, 0x61, 0x31, 0xa6, 0x53, 0x16,
    0x25, 0xda, 0x6a, 0x32, 0xc2, 0x83, 0x0c, 0x6d,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__BasicVehicleClass__EXPECTED_HASH = {1, {
    0xce, 0xed, 0x04, 0x0c, 0x41, 0xec, 0xac, 0xae,
    0xce, 0xcc, 0x52, 0x28, 0xa6, 0xcd, 0x1f, 0xc3,
    0xd8, 0x09, 0x68, 0x39, 0x35, 0x26, 0xfb, 0x44,
    0xeb, 0x61, 0xde, 0x4a, 0xd0, 0xaa, 0x6f, 0x8c,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__BasicVehicleRole__EXPECTED_HASH = {1, {
    0x16, 0x71, 0x57, 0x8a, 0xd7, 0x2b, 0x8d, 0x0c,
    0x7e, 0x4e, 0xd2, 0x5e, 0xd0, 0x00, 0xef, 0x9a,
    0x12, 0x52, 0xe7, 0x29, 0x6b, 0xb6, 0xb2, 0x53,
    0xab, 0x7c, 0xa0, 0x54, 0xf9, 0xbb, 0xf2, 0xe0,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__BumperHeight__EXPECTED_HASH = {1, {
    0xfc, 0x35, 0xaf, 0x40, 0xa1, 0x1a, 0xac, 0x07,
    0x48, 0xb8, 0xe4, 0x34, 0xaf, 0x9b, 0x53, 0x78,
    0xe5, 0x94, 0xc8, 0x1c, 0x28, 0x43, 0x23, 0x10,
    0x09, 0xba, 0x6a, 0x42, 0xf8, 0x7b, 0xa2, 0x2d,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__BumperHeights__EXPECTED_HASH = {1, {
    0x82, 0x2c, 0x64, 0x57, 0x1c, 0xe9, 0xbe, 0xd0,
    0x17, 0xcd, 0x5a, 0x53, 0xf8, 0xc0, 0x68, 0x7e,
    0x05, 0xd9, 0xa9, 0x70, 0x18, 0x2e, 0xed, 0xe4,
    0x86, 0x79, 0x5a, 0x61, 0xfb, 0x36, 0x04, 0x16,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__CoefficientOfFriction__EXPECTED_HASH = {1, {
    0x17, 0xb9, 0x03, 0x58, 0x0f, 0x27, 0x4b, 0xb4,
    0xc0, 0xde, 0x44, 0xf7, 0x0f, 0x12, 0x8b, 0x55,
    0xb7, 0xf8, 0x93, 0x74, 0xe2, 0x31, 0x51, 0x61,
    0x4e, 0xf5, 0xf7, 0x54, 0xe3, 0x7c, 0x81, 0xc6,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__DDateTime__EXPECTED_HASH = {1, {
    0x20, 0x7d, 0x4a, 0x5e, 0xa7, 0x89, 0xa3, 0xfc,
    0xb5, 0x0a, 0x91, 0xb1, 0xa6, 0xcf, 0x8b, 0xe4,
    0x41, 0xb6, 0xfe, 0x07, 0x1e, 0x14, 0x44, 0x33,
    0x0f, 0x1a, 0x85, 0x0a, 0xa1, 0x93, 0x30, 0xc8,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__DDay__EXPECTED_HASH = {1, {
    0x07, 0xee, 0x90, 0x8c, 0xb8, 0xfa, 0x01, 0x01,
    0x65, 0x42, 0x4f, 0x94, 0x79, 0x93, 0x0c, 0x20,
    0x5f, 0x19, 0xfa, 0x7f, 0xa8, 0x3d, 0x97, 0xfd,
    0xc8, 0x38, 0xa5, 0x2f, 0x1f, 0xeb, 0xba, 0xae,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__DHour__EXPECTED_HASH = {1, {
    0x0b, 0x61, 0xb8, 0xa5, 0x7f, 0x7c, 0xd5, 0xc1,
    0xcc, 0x3f, 0xe5, 0x50, 0xa5, 0x19, 0xfd, 0xbf,
    0x42, 0xde, 0xe0, 0xe9, 0x08, 0xf0, 0xd8, 0x54,
    0x23, 0x46, 0x4d, 0x20, 0x59, 0xac, 0x75, 0x8f,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__DMinute__EXPECTED_HASH = {1, {
    0x36, 0x2f, 0x1c, 0xf0, 0xcb, 0xb9, 0xba, 0x3f,
    0xdd, 0x53, 0xf8, 0xba, 0xe8, 0x58, 0x69, 0xbb,
    0x89, 0x63, 0x98, 0xb8, 0xeb, 0xb9, 0x19, 0x8a,
    0x04, 0xa5, 0x69, 0xb9, 0xdc, 0x96, 0x3f, 0xec,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__DMonth__EXPECTED_HASH = {1, {
    0x60, 0xf7, 0xdd, 0xa8, 0x95, 0xe8, 0x06, 0xe6,
    0xb5, 0xeb, 0x4d, 0x54, 0x9d, 0xed, 0xe7, 0xdf,
    0xec, 0xdc, 0x5d, 0xa3, 0x8d, 0xa5, 0x9a, 0xa8,
    0x27, 0x40, 0xd4, 0x14, 0x65, 0xac, 0xf4, 0x10,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__DOffset__EXPECTED_HASH = {1, {
    0xa9, 0xed, 0x8e, 0x6b, 0x5e, 0x57, 0x73, 0x09,
    0x5e, 0xcb, 0x92, 0xee, 0xd7, 0xd0, 0x38, 0x73,
    0xfc, 0x10, 0xea, 0x2d, 0x26, 0x25, 0xdc, 0x0a,
    0x23, 0x91, 0xf1, 0x3d, 0x0a, 0xbf, 0x62, 0x84,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__DSecond__EXPECTED_HASH = {1, {
    0x30, 0x1d, 0x97, 0x44, 0x35, 0x12, 0xb0, 0x3b,
    0xed, 0xf4, 0xa3, 0x19, 0x4e, 0x90, 0x4a, 0xb4,
    0x9f, 0xd6, 0x29, 0x54, 0xe6, 0xc0, 0x1a, 0x55,
    0x0f, 0x55, 0xb2, 0xc3, 0xd3, 0x15, 0x12, 0xc0,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__DYear__EXPECTED_HASH = {1, {
    0xa5, 0xab, 0x56, 0x67, 0x6a, 0xc6, 0xdb, 0x81,
    0xb2, 0xa4, 0xd5, 0x66, 0x01, 0xda, 0x13, 0xaa,
    0xfd, 0xfd, 0x79, 0x33, 0x25, 0x78, 0x22, 0x91,
    0x96, 0x69, 0xe3, 0xac, 0xfe, 0x9c, 0xd4, 0x26,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__DisabledVehicle__EXPECTED_HASH = {1, {
    0x54, 0x97, 0x98, 0x1d, 0x93, 0x51, 0x92, 0x37,
    0x69, 0x58, 0x98, 0x39, 0xd7, 0xe8, 0x2d, 0x20,
    0xe3, 0x4f, 0x05, 0x29, 0x31, 0x29, 0x78, 0x70,
    0x53, 0x4c, 0x4c, 0x8e, 0x52, 0xaf, 0x50, 0xab,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__FuelType__EXPECTED_HASH = {1, {
    0x9f, 0xc4, 0xb6, 0x33, 0xca, 0xf4, 0x85, 0xaa,
    0x73, 0x27, 0x8d, 0x18, 0xb6, 0x2f, 0xbe, 0x36,
    0x95, 0xc1, 0xb1, 0x72, 0x66, 0x88, 0xa4, 0x12,
    0x5d, 0x55, 0x9d, 0x79, 0x7a, 0x5d, 0x6a, 0x16,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__GNSSStatus__EXPECTED_HASH = {1, {
    0x4d, 0xa6, 0x63, 0xdd, 0x67, 0x4c, 0x15, 0x9d,
    0xb1, 0x67, 0xf4, 0xdd, 0xf6, 0x36, 0xb8, 0x24,
    0x6a, 0xde, 0x50, 0xe9, 0xd3, 0x2f, 0x9c, 0x55,
    0xe8, 0x2a, 0x13, 0xf3, 0x8d, 0xd9, 0xf1, 0x99,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__GrossSpeed__EXPECTED_HASH = {1, {
    0xd6, 0x48, 0x05, 0x7c, 0xdb, 0x33, 0x9f, 0x1d,
    0x6b, 0xdb, 0x4e, 0x3f, 0xd9, 0xbe, 0xf4, 0x95,
    0xc6, 0x95, 0xe4, 0xdf, 0xd2, 0xe0, 0x32, 0x0e,
    0xb5, 0xe6, 0xed, 0xd0, 0x35, 0xa0, 0x2d, 0x79,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ITISGenericLocations__EXPECTED_HASH = {1, {
    0x10, 0x13, 0x26, 0xf3, 0x6d, 0x6b, 0x8c, 0x2f,
    0xef, 0x25, 0xcd, 0x5b, 0x67, 0x9e, 0x05, 0xf9,
    0xc4, 0x32, 0xdf, 0x5f, 0xf1, 0xfd, 0xf3, 0xa4,
    0xe3, 0xf3, 0x47, 0xc2, 0xb2, 0x7b, 0x09, 0x9e,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__EXPECTED_HASH = {1, {
    0x1c, 0x06, 0xe2, 0x25, 0x9c, 0x95, 0x3a, 0x05,
    0x39, 0xa9, 0x00, 0x89, 0xbf, 0xff, 0x7f, 0x10,
    0x88, 0x27, 0xfc, 0x3c, 0x28, 0x24, 0x5a, 0x25,
    0x2f, 0x6f, 0x02, 0xde, 0x3b, 0x59, 0x0e, 0x44,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ITISResponderGroupAffected__EXPECTED_HASH = {1, {
    0x05, 0x24, 0x8c, 0xa0, 0xcc, 0xcc, 0x96, 0xe5,
    0xef, 0x4f, 0xd7, 0xed, 0x92, 0x82, 0x00, 0xc4,
    0x18, 0x08, 0xa6, 0xea, 0xad, 0x37, 0x60, 0x18,
    0x12, 0x43, 0xe2, 0x11, 0x87, 0x9a, 0xac, 0xfe,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ITISVehicleGroupAffected__EXPECTED_HASH = {1, {
    0x1e, 0x14, 0x2b, 0x50, 0x15, 0xee, 0x94, 0xb0,
    0x7f, 0x61, 0x1b, 0xfb, 0xed, 0x2b, 0x91, 0xdc,
    0xd5, 0x16, 0xb5, 0x0d, 0x66, 0x6e, 0x3f, 0xe1,
    0xd7, 0xd4, 0xd6, 0xbd, 0xdd, 0x5f, 0x7b, 0x0d,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ITIScodes__EXPECTED_HASH = {1, {
    0x5c, 0xe9, 0x4e, 0x8e, 0xb9, 0x8c, 0xd8, 0x67,
    0xc6, 0x1d, 0x9c, 0xe9, 0x75, 0xc2, 0xee, 0x55,
    0x04, 0x79, 0x97, 0xb6, 0xe9, 0x2d, 0xec, 0xda,
    0xeb, 0x57, 0xd9, 0xa6, 0x2e, 0x14, 0x09, 0x5e,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NTCIPEssMobileFriction__EXPECTED_HASH = {1, {
    0x96, 0x05, 0x73, 0x8c, 0x22, 0x28, 0x3b, 0x54,
    0x06, 0x1e, 0x20, 0xfa, 0x2c, 0x2d, 0x3c, 0x17,
    0x50, 0xfb, 0x08, 0x8b, 0x1c, 0x03, 0x91, 0x00,
    0x9b, 0x2d, 0x15, 0x5b, 0x5a, 0x8c, 0x7e, 0x9a,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NTCIPEssPrecipRate__EXPECTED_HASH = {1, {
    0x32, 0xeb, 0x57, 0x6e, 0xc3, 0x7d, 0x47, 0x25,
    0x30, 0xa5, 0x11, 0xd5, 0x6f, 0x32, 0xe9, 0xb6,
    0x03, 0xe0, 0x2e, 0x51, 0xd4, 0xd8, 0xf4, 0x23,
    0x38, 0xd0, 0x0d, 0x04, 0xd7, 0x86, 0xde, 0xd4,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__EXPECTED_HASH = {1, {
    0x8d, 0xed, 0xd9, 0xea, 0x73, 0x6f, 0x3b, 0x37,
    0xbb, 0x84, 0x8f, 0x42, 0x58, 0x7b, 0xa4, 0x64,
    0x28, 0xae, 0x48, 0x30, 0xaf, 0x58, 0xfe, 0xb6,
    0x37, 0xb2, 0x38, 0x8a, 0x92, 0x30, 0xb6, 0x26,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__EXPECTED_HASH = {1, {
    0x64, 0xab, 0x29, 0x69, 0x23, 0x0c, 0x88, 0xff,
    0x5f, 0x1d, 0xf5, 0x7f, 0x42, 0x2d, 0xc6, 0x9f,
    0x67, 0x4b, 0x0e, 0x83, 0x0c, 0xcb, 0xf0, 0x71,
    0xec, 0xad, 0x8a, 0x67, 0xb3, 0x44, 0xc9, 0xb4,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__EXPECTED_HASH = {1, {
    0x96, 0x2a, 0x39, 0x79, 0x91, 0x45, 0x79, 0x85,
    0x67, 0x09, 0x8f, 0x55, 0xdc, 0xa6, 0x62, 0x13,
    0xd8, 0x91, 0x0c, 0xc0, 0x02, 0xce, 0xc6, 0x75,
    0xee, 0x1c, 0x0e, 0x82, 0xc8, 0x4d, 0x6d, 0xfa,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ObstacleDetection__EXPECTED_HASH = {1, {
    0x67, 0xf5, 0x25, 0x3a, 0x4f, 0x4a, 0x33, 0xcc,
    0xdd, 0x1e, 0x35, 0xf9, 0xa4, 0xb0, 0x5d, 0x87,
    0x64, 0x86, 0xcf, 0xd7, 0xa3, 0xfd, 0xd8, 0x29,
    0x7f, 0x35, 0x66, 0x0e, 0x95, 0x3c, 0x03, 0xc7,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ObstacleDirection__EXPECTED_HASH = {1, {
    0xb8, 0x5f, 0x5d, 0xb3, 0x38, 0xec, 0x05, 0x81,
    0x94, 0xf7, 0x79, 0x99, 0x37, 0x77, 0xbe, 0x41,
    0xbf, 0x24, 0xce, 0xbe, 0x96, 0xf2, 0xee, 0xe3,
    0x94, 0x83, 0x3d, 0x45, 0xba, 0xb1, 0x56, 0xa7,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ObstacleDistance__EXPECTED_HASH = {1, {
    0x62, 0x60, 0x60, 0xdf, 0xe4, 0xec, 0x12, 0x67,
    0x57, 0xbc, 0x0d, 0x09, 0x84, 0xa5, 0xe7, 0x56,
    0xfb, 0x6b, 0xbb, 0x44, 0xfa, 0xb3, 0x21, 0x46,
    0x24, 0xb3, 0x3f, 0xca, 0x51, 0x58, 0x40, 0xe7,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__OffsetB09__EXPECTED_HASH = {1, {
    0x6c, 0x43, 0x98, 0x38, 0xcc, 0xb3, 0xb4, 0xb5,
    0xe0, 0x8d, 0x1c, 0xd3, 0x87, 0x9b, 0x90, 0xdc,
    0x6a, 0xbc, 0x11, 0x2e, 0xfc, 0xdd, 0x17, 0xda,
    0xcf, 0x3a, 0x92, 0x43, 0x78, 0x75, 0x27, 0x23,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__OffsetB10__EXPECTED_HASH = {1, {
    0xf1, 0x54, 0x5e, 0x45, 0x22, 0x1b, 0xbb, 0xd6,
    0x68, 0xd6, 0x4b, 0x1a, 0x04, 0xb5, 0x5a, 0x7f,
    0x75, 0x0c, 0x80, 0x3b, 0x46, 0xc3, 0x5f, 0x0c,
    0x4a, 0x71, 0xb2, 0xa5, 0xad, 0x88, 0x12, 0xc2,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__OffsetB12__EXPECTED_HASH = {1, {
    0x68, 0x42, 0xcd, 0x20, 0xa9, 0x18, 0x46, 0xec,
    0xb7, 0x01, 0xbc, 0x09, 0x3a, 0xdc, 0x8f, 0xfa,
    0xb9, 0x2b, 0x58, 0x72, 0xb9, 0x8e, 0x37, 0x38,
    0xd8, 0x41, 0x06, 0xc4, 0x85, 0x17, 0x1d, 0x76,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__RTCMHeader__EXPECTED_HASH = {1, {
    0x85, 0xeb, 0xbb, 0x0f, 0x15, 0x43, 0xb6, 0xc1,
    0xdf, 0xa6, 0xc0, 0x75, 0x39, 0x4b, 0x22, 0xf4,
    0x5a, 0xe5, 0x3c, 0x23, 0x06, 0xef, 0xc6, 0x02,
    0x5e, 0x3a, 0x93, 0x4e, 0xe0, 0x34, 0xe5, 0x5b,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__RTCMPackage__EXPECTED_HASH = {1, {
    0x43, 0x05, 0xd7, 0xe7, 0x1a, 0x8b, 0xea, 0x42,
    0x8a, 0xea, 0xc7, 0x45, 0xf8, 0xd3, 0xfa, 0x77,
    0x1a, 0xe0, 0xbb, 0x23, 0xaf, 0xa1, 0x10, 0x98,
    0x07, 0xe8, 0x8f, 0xc6, 0xea, 0x3b, 0xbb, 0x63,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TrailerWeight__EXPECTED_HASH = {1, {
    0x2f, 0x7c, 0x4e, 0xc4, 0xeb, 0x12, 0xcd, 0x2a,
    0x3e, 0xa7, 0x7d, 0x46, 0xec, 0xac, 0xd9, 0x29,
    0xbf, 0x18, 0x4c, 0x95, 0xd2, 0x8f, 0x2c, 0x7e,
    0x28, 0x6e, 0xf2, 0xfd, 0xca, 0x00, 0xb4, 0x55,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__VehicleClassification__EXPECTED_HASH = {1, {
    0x59, 0xbf, 0x59, 0xac, 0x78, 0xe3, 0xae, 0x51,
    0xfe, 0xa9, 0x1a, 0x2c, 0x23, 0x73, 0x82, 0x85,
    0x31, 0xd1, 0xc5, 0x65, 0x58, 0x0b, 0x58, 0xc6,
    0x1c, 0x82, 0xe8, 0x2d, 0xcd, 0xea, 0xa6, 0x91,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__VehicleData__EXPECTED_HASH = {1, {
    0xa3, 0xf1, 0x1d, 0x0a, 0x68, 0xf6, 0x6e, 0x81,
    0x31, 0x42, 0xf4, 0x3c, 0xe4, 0xea, 0xba, 0x06,
    0xec, 0x22, 0xe6, 0xc5, 0x73, 0x1a, 0x08, 0xf8,
    0x14, 0x75, 0xe1, 0xc2, 0xdd, 0x17, 0xe2, 0x1d,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__VehicleHeight__EXPECTED_HASH = {1, {
    0x10, 0x3f, 0x7b, 0x69, 0x2a, 0xe8, 0x14, 0xbb,
    0xf1, 0x71, 0x13, 0x51, 0x88, 0x00, 0xd6, 0x9c,
    0xc7, 0x8f, 0xfa, 0x1a, 0x9d, 0x5e, 0xfa, 0x51,
    0x56, 0x26, 0xea, 0x2d, 0x1d, 0x70, 0xe5, 0xb4,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__VehicleMass__EXPECTED_HASH = {1, {
    0x28, 0x2c, 0x24, 0xd0, 0x88, 0xa1, 0x78, 0x5c,
    0x1c, 0x39, 0x71, 0x22, 0x58, 0x08, 0xa5, 0x89,
    0x78, 0xf2, 0x42, 0xa7, 0x4d, 0x7b, 0xa3, 0x2e,
    0x16, 0x7a, 0x72, 0xd5, 0x85, 0xa1, 0x90, 0x5b,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__VehicleType__EXPECTED_HASH = {1, {
    0xd9, 0x06, 0x05, 0x41, 0x21, 0x2a, 0x3e, 0xa9,
    0x81, 0xb9, 0x86, 0x57, 0xb3, 0xb9, 0xee, 0xa3,
    0x43, 0x3d, 0xc6, 0x64, 0x5a, 0x44, 0x2d, 0xe6,
    0x86, 0x03, 0xce, 0x78, 0xf4, 0x7b, 0xc2, 0xfb,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__VerticalAccelerationThreshold__EXPECTED_HASH = {1, {
    0x5c, 0xd9, 0x9d, 0xa5, 0x58, 0x03, 0xc5, 0xb8,
    0x59, 0x21, 0x7e, 0xce, 0xc8, 0xf5, 0x5a, 0x3d,
    0xec, 0xc6, 0xca, 0xbb, 0x50, 0x00, 0x41, 0xf8,
    0xd3, 0x3a, 0x2e, 0xd2, 0x05, 0x24, 0x5f, 0xbc,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__WeatherProbe__EXPECTED_HASH = {1, {
    0x01, 0xc2, 0x0c, 0xd2, 0x66, 0xba, 0xbc, 0xa8,
    0xf5, 0xc0, 0xfb, 0x54, 0xdb, 0xcf, 0xb6, 0x0c,
    0x8a, 0xd0, 0x1a, 0x2f, 0xcd, 0xae, 0x7b, 0x32,
    0xa1, 0x97, 0x0f, 0x7e, 0x88, 0x62, 0xa2, 0x5d,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__WeatherReport__EXPECTED_HASH = {1, {
    0xc1, 0x48, 0x2b, 0x46, 0x6f, 0x76, 0x7b, 0x9c,
    0xbd, 0xdf, 0x4f, 0xea, 0x46, 0xa4, 0x8a, 0xf1,
    0xd9, 0xb0, 0x10, 0x6d, 0xf0, 0x86, 0x4e, 0x97,
    0x16, 0x23, 0xad, 0x78, 0x10, 0x86, 0x9f, 0xbe,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__WiperRate__EXPECTED_HASH = {1, {
    0x7a, 0x92, 0x19, 0x8c, 0x1d, 0x75, 0x12, 0xd3,
    0x12, 0xfb, 0x93, 0x2b, 0x07, 0xc0, 0x9e, 0x5f,
    0x58, 0x03, 0xb3, 0x3e, 0x0e, 0x99, 0xe1, 0x60,
    0xcd, 0x8d, 0x7f, 0x53, 0x1d, 0x1a, 0x9f, 0xfa,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__WiperSet__EXPECTED_HASH = {1, {
    0x83, 0x95, 0x31, 0xe9, 0xad, 0x33, 0xa9, 0x04,
    0xa0, 0x4e, 0x1d, 0x23, 0x34, 0xfd, 0xa8, 0xb5,
    0xba, 0x9b, 0xe4, 0xf1, 0xd5, 0xcd, 0x81, 0xd2,
    0x53, 0x7a, 0x57, 0x1d, 0xf5, 0x92, 0xa7, 0x3b,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__WiperStatus__EXPECTED_HASH = {1, {
    0xd1, 0xa2, 0x76, 0xb7, 0x40, 0xaa, 0x00, 0x2a,
    0xaa, 0x4b, 0x1d, 0xba, 0xdf, 0xb6, 0x69, 0xab,
    0x27, 0x1d, 0xf9, 0x1c, 0x91, 0xc2, 0xe4, 0xb4,
    0xa5, 0xcb, 0xee, 0x45, 0xee, 0x64, 0x0a, 0x0b,
  }};
#endif

static char j2735_v2x_msgs__msg__SupplementalVehicleExtensions__TYPE_NAME[] = "j2735_v2x_msgs/msg/SupplementalVehicleExtensions";
static char j2735_v2x_msgs__msg__AmbientAirPressure__TYPE_NAME[] = "j2735_v2x_msgs/msg/AmbientAirPressure";
static char j2735_v2x_msgs__msg__AmbientAirTemperature__TYPE_NAME[] = "j2735_v2x_msgs/msg/AmbientAirTemperature";
static char j2735_v2x_msgs__msg__Angle__TYPE_NAME[] = "j2735_v2x_msgs/msg/Angle";
static char j2735_v2x_msgs__msg__BasicVehicleClass__TYPE_NAME[] = "j2735_v2x_msgs/msg/BasicVehicleClass";
static char j2735_v2x_msgs__msg__BasicVehicleRole__TYPE_NAME[] = "j2735_v2x_msgs/msg/BasicVehicleRole";
static char j2735_v2x_msgs__msg__BumperHeight__TYPE_NAME[] = "j2735_v2x_msgs/msg/BumperHeight";
static char j2735_v2x_msgs__msg__BumperHeights__TYPE_NAME[] = "j2735_v2x_msgs/msg/BumperHeights";
static char j2735_v2x_msgs__msg__CoefficientOfFriction__TYPE_NAME[] = "j2735_v2x_msgs/msg/CoefficientOfFriction";
static char j2735_v2x_msgs__msg__DDateTime__TYPE_NAME[] = "j2735_v2x_msgs/msg/DDateTime";
static char j2735_v2x_msgs__msg__DDay__TYPE_NAME[] = "j2735_v2x_msgs/msg/DDay";
static char j2735_v2x_msgs__msg__DHour__TYPE_NAME[] = "j2735_v2x_msgs/msg/DHour";
static char j2735_v2x_msgs__msg__DMinute__TYPE_NAME[] = "j2735_v2x_msgs/msg/DMinute";
static char j2735_v2x_msgs__msg__DMonth__TYPE_NAME[] = "j2735_v2x_msgs/msg/DMonth";
static char j2735_v2x_msgs__msg__DOffset__TYPE_NAME[] = "j2735_v2x_msgs/msg/DOffset";
static char j2735_v2x_msgs__msg__DSecond__TYPE_NAME[] = "j2735_v2x_msgs/msg/DSecond";
static char j2735_v2x_msgs__msg__DYear__TYPE_NAME[] = "j2735_v2x_msgs/msg/DYear";
static char j2735_v2x_msgs__msg__DisabledVehicle__TYPE_NAME[] = "j2735_v2x_msgs/msg/DisabledVehicle";
static char j2735_v2x_msgs__msg__FuelType__TYPE_NAME[] = "j2735_v2x_msgs/msg/FuelType";
static char j2735_v2x_msgs__msg__GNSSStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/GNSSStatus";
static char j2735_v2x_msgs__msg__GrossSpeed__TYPE_NAME[] = "j2735_v2x_msgs/msg/GrossSpeed";
static char j2735_v2x_msgs__msg__ITISGenericLocations__TYPE_NAME[] = "j2735_v2x_msgs/msg/ITISGenericLocations";
static char j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__TYPE_NAME[] = "j2735_v2x_msgs/msg/ITISIncidentResponseEquipment";
static char j2735_v2x_msgs__msg__ITISResponderGroupAffected__TYPE_NAME[] = "j2735_v2x_msgs/msg/ITISResponderGroupAffected";
static char j2735_v2x_msgs__msg__ITISVehicleGroupAffected__TYPE_NAME[] = "j2735_v2x_msgs/msg/ITISVehicleGroupAffected";
static char j2735_v2x_msgs__msg__ITIScodes__TYPE_NAME[] = "j2735_v2x_msgs/msg/ITIScodes";
static char j2735_v2x_msgs__msg__NTCIPEssMobileFriction__TYPE_NAME[] = "j2735_v2x_msgs/msg/NTCIPEssMobileFriction";
static char j2735_v2x_msgs__msg__NTCIPEssPrecipRate__TYPE_NAME[] = "j2735_v2x_msgs/msg/NTCIPEssPrecipRate";
static char j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__TYPE_NAME[] = "j2735_v2x_msgs/msg/NTCIPEssPrecipSituation";
static char j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__TYPE_NAME[] = "j2735_v2x_msgs/msg/NTCIPEssPrecipYesNo";
static char j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__TYPE_NAME[] = "j2735_v2x_msgs/msg/NTCIPEssSolarRadiation";
static char j2735_v2x_msgs__msg__ObstacleDetection__TYPE_NAME[] = "j2735_v2x_msgs/msg/ObstacleDetection";
static char j2735_v2x_msgs__msg__ObstacleDirection__TYPE_NAME[] = "j2735_v2x_msgs/msg/ObstacleDirection";
static char j2735_v2x_msgs__msg__ObstacleDistance__TYPE_NAME[] = "j2735_v2x_msgs/msg/ObstacleDistance";
static char j2735_v2x_msgs__msg__OffsetB09__TYPE_NAME[] = "j2735_v2x_msgs/msg/OffsetB09";
static char j2735_v2x_msgs__msg__OffsetB10__TYPE_NAME[] = "j2735_v2x_msgs/msg/OffsetB10";
static char j2735_v2x_msgs__msg__OffsetB12__TYPE_NAME[] = "j2735_v2x_msgs/msg/OffsetB12";
static char j2735_v2x_msgs__msg__RTCMHeader__TYPE_NAME[] = "j2735_v2x_msgs/msg/RTCMHeader";
static char j2735_v2x_msgs__msg__RTCMPackage__TYPE_NAME[] = "j2735_v2x_msgs/msg/RTCMPackage";
static char j2735_v2x_msgs__msg__TrailerWeight__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrailerWeight";
static char j2735_v2x_msgs__msg__VehicleClassification__TYPE_NAME[] = "j2735_v2x_msgs/msg/VehicleClassification";
static char j2735_v2x_msgs__msg__VehicleData__TYPE_NAME[] = "j2735_v2x_msgs/msg/VehicleData";
static char j2735_v2x_msgs__msg__VehicleHeight__TYPE_NAME[] = "j2735_v2x_msgs/msg/VehicleHeight";
static char j2735_v2x_msgs__msg__VehicleMass__TYPE_NAME[] = "j2735_v2x_msgs/msg/VehicleMass";
static char j2735_v2x_msgs__msg__VehicleType__TYPE_NAME[] = "j2735_v2x_msgs/msg/VehicleType";
static char j2735_v2x_msgs__msg__VerticalAccelerationThreshold__TYPE_NAME[] = "j2735_v2x_msgs/msg/VerticalAccelerationThreshold";
static char j2735_v2x_msgs__msg__WeatherProbe__TYPE_NAME[] = "j2735_v2x_msgs/msg/WeatherProbe";
static char j2735_v2x_msgs__msg__WeatherReport__TYPE_NAME[] = "j2735_v2x_msgs/msg/WeatherReport";
static char j2735_v2x_msgs__msg__WiperRate__TYPE_NAME[] = "j2735_v2x_msgs/msg/WiperRate";
static char j2735_v2x_msgs__msg__WiperSet__TYPE_NAME[] = "j2735_v2x_msgs/msg/WiperSet";
static char j2735_v2x_msgs__msg__WiperStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/WiperStatus";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__SupplementalVehicleExtensions__FIELD_NAME__presence_vector[] = "presence_vector";
static char j2735_v2x_msgs__msg__SupplementalVehicleExtensions__FIELD_NAME__classification[] = "classification";
static char j2735_v2x_msgs__msg__SupplementalVehicleExtensions__FIELD_NAME__class_details[] = "class_details";
static char j2735_v2x_msgs__msg__SupplementalVehicleExtensions__FIELD_NAME__vehicle_data[] = "vehicle_data";
static char j2735_v2x_msgs__msg__SupplementalVehicleExtensions__FIELD_NAME__weather_report[] = "weather_report";
static char j2735_v2x_msgs__msg__SupplementalVehicleExtensions__FIELD_NAME__weather_probe[] = "weather_probe";
static char j2735_v2x_msgs__msg__SupplementalVehicleExtensions__FIELD_NAME__obstacle[] = "obstacle";
static char j2735_v2x_msgs__msg__SupplementalVehicleExtensions__FIELD_NAME__status[] = "status";
static char j2735_v2x_msgs__msg__SupplementalVehicleExtensions__FIELD_NAME__speed_profile[] = "speed_profile";
static char j2735_v2x_msgs__msg__SupplementalVehicleExtensions__FIELD_NAME__the_rtcm[] = "the_rtcm";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__SupplementalVehicleExtensions__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__SupplementalVehicleExtensions__FIELD_NAME__presence_vector, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__SupplementalVehicleExtensions__FIELD_NAME__classification, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__BasicVehicleClass__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__SupplementalVehicleExtensions__FIELD_NAME__class_details, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__VehicleClassification__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__SupplementalVehicleExtensions__FIELD_NAME__vehicle_data, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__VehicleData__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__SupplementalVehicleExtensions__FIELD_NAME__weather_report, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__WeatherReport__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__SupplementalVehicleExtensions__FIELD_NAME__weather_probe, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__WeatherProbe__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__SupplementalVehicleExtensions__FIELD_NAME__obstacle, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__ObstacleDetection__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__SupplementalVehicleExtensions__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__DisabledVehicle__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__SupplementalVehicleExtensions__FIELD_NAME__speed_profile, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {j2735_v2x_msgs__msg__GrossSpeed__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__SupplementalVehicleExtensions__FIELD_NAME__the_rtcm, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__RTCMPackage__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__SupplementalVehicleExtensions__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__AmbientAirPressure__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__AmbientAirTemperature__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__Angle__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BasicVehicleClass__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BasicVehicleRole__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BumperHeight__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BumperHeights__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__CoefficientOfFriction__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DDateTime__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DDay__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DHour__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DMinute__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DMonth__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DOffset__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DSecond__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DYear__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DisabledVehicle__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__FuelType__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__GNSSStatus__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__GrossSpeed__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ITISGenericLocations__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ITISResponderGroupAffected__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ITISVehicleGroupAffected__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ITIScodes__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NTCIPEssMobileFriction__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NTCIPEssPrecipRate__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ObstacleDetection__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ObstacleDirection__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ObstacleDistance__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__OffsetB09__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__OffsetB10__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__OffsetB12__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__RTCMHeader__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__RTCMPackage__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrailerWeight__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VehicleClassification__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VehicleData__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VehicleHeight__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VehicleMass__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VehicleType__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VerticalAccelerationThreshold__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__WeatherProbe__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__WeatherReport__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__WiperRate__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__WiperSet__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__WiperStatus__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__SupplementalVehicleExtensions__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__SupplementalVehicleExtensions__TYPE_NAME, 48, 48},
      {j2735_v2x_msgs__msg__SupplementalVehicleExtensions__FIELDS, 10, 10},
    },
    {j2735_v2x_msgs__msg__SupplementalVehicleExtensions__REFERENCED_TYPE_DESCRIPTIONS, 50, 50},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AmbientAirPressure__EXPECTED_HASH, j2735_v2x_msgs__msg__AmbientAirPressure__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__AmbientAirPressure__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AmbientAirTemperature__EXPECTED_HASH, j2735_v2x_msgs__msg__AmbientAirTemperature__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__AmbientAirTemperature__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Angle__EXPECTED_HASH, j2735_v2x_msgs__msg__Angle__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__Angle__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__BasicVehicleClass__EXPECTED_HASH, j2735_v2x_msgs__msg__BasicVehicleClass__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = j2735_v2x_msgs__msg__BasicVehicleClass__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__BasicVehicleRole__EXPECTED_HASH, j2735_v2x_msgs__msg__BasicVehicleRole__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = j2735_v2x_msgs__msg__BasicVehicleRole__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__BumperHeight__EXPECTED_HASH, j2735_v2x_msgs__msg__BumperHeight__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = j2735_v2x_msgs__msg__BumperHeight__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__BumperHeights__EXPECTED_HASH, j2735_v2x_msgs__msg__BumperHeights__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = j2735_v2x_msgs__msg__BumperHeights__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__CoefficientOfFriction__EXPECTED_HASH, j2735_v2x_msgs__msg__CoefficientOfFriction__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = j2735_v2x_msgs__msg__CoefficientOfFriction__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DDateTime__EXPECTED_HASH, j2735_v2x_msgs__msg__DDateTime__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = j2735_v2x_msgs__msg__DDateTime__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DDay__EXPECTED_HASH, j2735_v2x_msgs__msg__DDay__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = j2735_v2x_msgs__msg__DDay__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DHour__EXPECTED_HASH, j2735_v2x_msgs__msg__DHour__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = j2735_v2x_msgs__msg__DHour__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DMinute__EXPECTED_HASH, j2735_v2x_msgs__msg__DMinute__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = j2735_v2x_msgs__msg__DMinute__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DMonth__EXPECTED_HASH, j2735_v2x_msgs__msg__DMonth__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[12].fields = j2735_v2x_msgs__msg__DMonth__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DOffset__EXPECTED_HASH, j2735_v2x_msgs__msg__DOffset__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[13].fields = j2735_v2x_msgs__msg__DOffset__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DSecond__EXPECTED_HASH, j2735_v2x_msgs__msg__DSecond__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[14].fields = j2735_v2x_msgs__msg__DSecond__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DYear__EXPECTED_HASH, j2735_v2x_msgs__msg__DYear__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[15].fields = j2735_v2x_msgs__msg__DYear__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DisabledVehicle__EXPECTED_HASH, j2735_v2x_msgs__msg__DisabledVehicle__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[16].fields = j2735_v2x_msgs__msg__DisabledVehicle__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__FuelType__EXPECTED_HASH, j2735_v2x_msgs__msg__FuelType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[17].fields = j2735_v2x_msgs__msg__FuelType__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__GNSSStatus__EXPECTED_HASH, j2735_v2x_msgs__msg__GNSSStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[18].fields = j2735_v2x_msgs__msg__GNSSStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__GrossSpeed__EXPECTED_HASH, j2735_v2x_msgs__msg__GrossSpeed__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[19].fields = j2735_v2x_msgs__msg__GrossSpeed__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ITISGenericLocations__EXPECTED_HASH, j2735_v2x_msgs__msg__ITISGenericLocations__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[20].fields = j2735_v2x_msgs__msg__ITISGenericLocations__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__EXPECTED_HASH, j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[21].fields = j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ITISResponderGroupAffected__EXPECTED_HASH, j2735_v2x_msgs__msg__ITISResponderGroupAffected__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[22].fields = j2735_v2x_msgs__msg__ITISResponderGroupAffected__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ITISVehicleGroupAffected__EXPECTED_HASH, j2735_v2x_msgs__msg__ITISVehicleGroupAffected__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[23].fields = j2735_v2x_msgs__msg__ITISVehicleGroupAffected__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ITIScodes__EXPECTED_HASH, j2735_v2x_msgs__msg__ITIScodes__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[24].fields = j2735_v2x_msgs__msg__ITIScodes__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NTCIPEssMobileFriction__EXPECTED_HASH, j2735_v2x_msgs__msg__NTCIPEssMobileFriction__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[25].fields = j2735_v2x_msgs__msg__NTCIPEssMobileFriction__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NTCIPEssPrecipRate__EXPECTED_HASH, j2735_v2x_msgs__msg__NTCIPEssPrecipRate__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[26].fields = j2735_v2x_msgs__msg__NTCIPEssPrecipRate__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__EXPECTED_HASH, j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[27].fields = j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__EXPECTED_HASH, j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[28].fields = j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__EXPECTED_HASH, j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[29].fields = j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ObstacleDetection__EXPECTED_HASH, j2735_v2x_msgs__msg__ObstacleDetection__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[30].fields = j2735_v2x_msgs__msg__ObstacleDetection__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ObstacleDirection__EXPECTED_HASH, j2735_v2x_msgs__msg__ObstacleDirection__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[31].fields = j2735_v2x_msgs__msg__ObstacleDirection__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ObstacleDistance__EXPECTED_HASH, j2735_v2x_msgs__msg__ObstacleDistance__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[32].fields = j2735_v2x_msgs__msg__ObstacleDistance__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__OffsetB09__EXPECTED_HASH, j2735_v2x_msgs__msg__OffsetB09__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[33].fields = j2735_v2x_msgs__msg__OffsetB09__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__OffsetB10__EXPECTED_HASH, j2735_v2x_msgs__msg__OffsetB10__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[34].fields = j2735_v2x_msgs__msg__OffsetB10__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__OffsetB12__EXPECTED_HASH, j2735_v2x_msgs__msg__OffsetB12__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[35].fields = j2735_v2x_msgs__msg__OffsetB12__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__RTCMHeader__EXPECTED_HASH, j2735_v2x_msgs__msg__RTCMHeader__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[36].fields = j2735_v2x_msgs__msg__RTCMHeader__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__RTCMPackage__EXPECTED_HASH, j2735_v2x_msgs__msg__RTCMPackage__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[37].fields = j2735_v2x_msgs__msg__RTCMPackage__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TrailerWeight__EXPECTED_HASH, j2735_v2x_msgs__msg__TrailerWeight__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[38].fields = j2735_v2x_msgs__msg__TrailerWeight__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__VehicleClassification__EXPECTED_HASH, j2735_v2x_msgs__msg__VehicleClassification__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[39].fields = j2735_v2x_msgs__msg__VehicleClassification__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__VehicleData__EXPECTED_HASH, j2735_v2x_msgs__msg__VehicleData__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[40].fields = j2735_v2x_msgs__msg__VehicleData__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__VehicleHeight__EXPECTED_HASH, j2735_v2x_msgs__msg__VehicleHeight__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[41].fields = j2735_v2x_msgs__msg__VehicleHeight__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__VehicleMass__EXPECTED_HASH, j2735_v2x_msgs__msg__VehicleMass__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[42].fields = j2735_v2x_msgs__msg__VehicleMass__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__VehicleType__EXPECTED_HASH, j2735_v2x_msgs__msg__VehicleType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[43].fields = j2735_v2x_msgs__msg__VehicleType__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__VerticalAccelerationThreshold__EXPECTED_HASH, j2735_v2x_msgs__msg__VerticalAccelerationThreshold__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[44].fields = j2735_v2x_msgs__msg__VerticalAccelerationThreshold__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__WeatherProbe__EXPECTED_HASH, j2735_v2x_msgs__msg__WeatherProbe__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[45].fields = j2735_v2x_msgs__msg__WeatherProbe__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__WeatherReport__EXPECTED_HASH, j2735_v2x_msgs__msg__WeatherReport__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[46].fields = j2735_v2x_msgs__msg__WeatherReport__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__WiperRate__EXPECTED_HASH, j2735_v2x_msgs__msg__WiperRate__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[47].fields = j2735_v2x_msgs__msg__WiperRate__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__WiperSet__EXPECTED_HASH, j2735_v2x_msgs__msg__WiperSet__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[48].fields = j2735_v2x_msgs__msg__WiperSet__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__WiperStatus__EXPECTED_HASH, j2735_v2x_msgs__msg__WiperStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[49].fields = j2735_v2x_msgs__msg__WiperStatus__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# SupplementalVehicleExtensions.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# SupplementalVehicleExtensions ::= SEQUENCE {\n"
  "#    -- Note that VehicleEventFlags, ExteriorLights, \n"
  "#    -- PathHistory, and PathPrediction are in VehicleSafetyExtensions \n"
  "# \n"
  "#    -- Vehicle Type Classification Data\n"
  "#    classification   BasicVehicleClass        OPTIONAL,\n"
  "#                     -- May be required to be present for non passenger vehicles\n"
  "#    classDetails     VehicleClassification    OPTIONAL,\n"
  "#    vehicleData      VehicleData              OPTIONAL,\n"
  "# \n"
  "#    -- Various V2V Probe Data\n"
  "#    weatherReport    WeatherReport            OPTIONAL, \n"
  "#    weatherProbe     WeatherProbe             OPTIONAL, \n"
  "# \n"
  "#    -- Detected Obstacle data\n"
  "#    obstacle         ObstacleDetection        OPTIONAL,\n"
  "# \n"
  "#    -- Disabled Vehicle Report\n"
  "#    status           DisabledVehicle          OPTIONAL,\n"
  "#    \n"
  "#    -- Oncoming lane speed reporting\n"
  "#    speedProfile     SpeedProfile             OPTIONAL, \n"
  "# \n"
  "#    -- Raw GNSS measurements\n"
  "#    theRTCM          RTCMPackage              OPTIONAL, \n"
  "# \n"
  "#    regional  SEQUENCE (SIZE(1..4)) OF \n"
  "#              RegionalExtension {{REGION.Reg-SupplementalVehicleExtensions}} OPTIONAL,\n"
  "#    ...\n"
  "# \n"
  "#    }\n"
  "\n"
  "# A BIT STRING defining the presence of optional fields.\n"
  "# Compare with bitwise-and\n"
  "# if (presence_vector & HAS_CLASSIFICATION) etc.\n"
  "# Create with bitwise-or\n"
  "# presence_vector = presence_vector | HAS_CLASSIFICATION\n"
  "uint16 presence_vector\n"
  "\n"
  "uint16 HAS_CLASSIFICATION = 1\n"
  "uint16 HAS_CLASS_DETAILS = 2\n"
  "uint16 HAS_VEHICLE_DATA = 4\n"
  "uint16 HAS_WEATHER_REPORT = 8\n"
  "uint16 HAS_WEATHER_PROBE = 16\n"
  "uint16 HAS_OBSTACLE = 32\n"
  "uint16 HAS_STATUS = 64\n"
  "uint16 HAS_SPEED_PROFILE = 128\n"
  "uint16 HAS_THE_RTCM = 256\n"
  "\n"
  "j2735_v2x_msgs/BasicVehicleClass classification\n"
  "\n"
  "j2735_v2x_msgs/VehicleClassification class_details\n"
  "\n"
  "j2735_v2x_msgs/VehicleData vehicle_data\n"
  "\n"
  "j2735_v2x_msgs/WeatherReport weather_report\n"
  "\n"
  "j2735_v2x_msgs/WeatherProbe weather_probe\n"
  "\n"
  "j2735_v2x_msgs/ObstacleDetection obstacle\n"
  "\n"
  "j2735_v2x_msgs/DisabledVehicle status \n"
  "\n"
  "j2735_v2x_msgs/GrossSpeed[] speed_profile\n"
  "\n"
  "j2735_v2x_msgs/RTCMPackage the_rtcm\n"
  "\n"
  "# regional #TODO: RegionalExtensions are not yet supported for this message type";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__SupplementalVehicleExtensions__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__SupplementalVehicleExtensions__TYPE_NAME, 48, 48},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2185, 2185},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__SupplementalVehicleExtensions__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[51];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 51, 51};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__SupplementalVehicleExtensions__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__AmbientAirPressure__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__AmbientAirTemperature__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__Angle__get_individual_type_description_source(NULL);
    sources[4] = *j2735_v2x_msgs__msg__BasicVehicleClass__get_individual_type_description_source(NULL);
    sources[5] = *j2735_v2x_msgs__msg__BasicVehicleRole__get_individual_type_description_source(NULL);
    sources[6] = *j2735_v2x_msgs__msg__BumperHeight__get_individual_type_description_source(NULL);
    sources[7] = *j2735_v2x_msgs__msg__BumperHeights__get_individual_type_description_source(NULL);
    sources[8] = *j2735_v2x_msgs__msg__CoefficientOfFriction__get_individual_type_description_source(NULL);
    sources[9] = *j2735_v2x_msgs__msg__DDateTime__get_individual_type_description_source(NULL);
    sources[10] = *j2735_v2x_msgs__msg__DDay__get_individual_type_description_source(NULL);
    sources[11] = *j2735_v2x_msgs__msg__DHour__get_individual_type_description_source(NULL);
    sources[12] = *j2735_v2x_msgs__msg__DMinute__get_individual_type_description_source(NULL);
    sources[13] = *j2735_v2x_msgs__msg__DMonth__get_individual_type_description_source(NULL);
    sources[14] = *j2735_v2x_msgs__msg__DOffset__get_individual_type_description_source(NULL);
    sources[15] = *j2735_v2x_msgs__msg__DSecond__get_individual_type_description_source(NULL);
    sources[16] = *j2735_v2x_msgs__msg__DYear__get_individual_type_description_source(NULL);
    sources[17] = *j2735_v2x_msgs__msg__DisabledVehicle__get_individual_type_description_source(NULL);
    sources[18] = *j2735_v2x_msgs__msg__FuelType__get_individual_type_description_source(NULL);
    sources[19] = *j2735_v2x_msgs__msg__GNSSStatus__get_individual_type_description_source(NULL);
    sources[20] = *j2735_v2x_msgs__msg__GrossSpeed__get_individual_type_description_source(NULL);
    sources[21] = *j2735_v2x_msgs__msg__ITISGenericLocations__get_individual_type_description_source(NULL);
    sources[22] = *j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__get_individual_type_description_source(NULL);
    sources[23] = *j2735_v2x_msgs__msg__ITISResponderGroupAffected__get_individual_type_description_source(NULL);
    sources[24] = *j2735_v2x_msgs__msg__ITISVehicleGroupAffected__get_individual_type_description_source(NULL);
    sources[25] = *j2735_v2x_msgs__msg__ITIScodes__get_individual_type_description_source(NULL);
    sources[26] = *j2735_v2x_msgs__msg__NTCIPEssMobileFriction__get_individual_type_description_source(NULL);
    sources[27] = *j2735_v2x_msgs__msg__NTCIPEssPrecipRate__get_individual_type_description_source(NULL);
    sources[28] = *j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__get_individual_type_description_source(NULL);
    sources[29] = *j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__get_individual_type_description_source(NULL);
    sources[30] = *j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__get_individual_type_description_source(NULL);
    sources[31] = *j2735_v2x_msgs__msg__ObstacleDetection__get_individual_type_description_source(NULL);
    sources[32] = *j2735_v2x_msgs__msg__ObstacleDirection__get_individual_type_description_source(NULL);
    sources[33] = *j2735_v2x_msgs__msg__ObstacleDistance__get_individual_type_description_source(NULL);
    sources[34] = *j2735_v2x_msgs__msg__OffsetB09__get_individual_type_description_source(NULL);
    sources[35] = *j2735_v2x_msgs__msg__OffsetB10__get_individual_type_description_source(NULL);
    sources[36] = *j2735_v2x_msgs__msg__OffsetB12__get_individual_type_description_source(NULL);
    sources[37] = *j2735_v2x_msgs__msg__RTCMHeader__get_individual_type_description_source(NULL);
    sources[38] = *j2735_v2x_msgs__msg__RTCMPackage__get_individual_type_description_source(NULL);
    sources[39] = *j2735_v2x_msgs__msg__TrailerWeight__get_individual_type_description_source(NULL);
    sources[40] = *j2735_v2x_msgs__msg__VehicleClassification__get_individual_type_description_source(NULL);
    sources[41] = *j2735_v2x_msgs__msg__VehicleData__get_individual_type_description_source(NULL);
    sources[42] = *j2735_v2x_msgs__msg__VehicleHeight__get_individual_type_description_source(NULL);
    sources[43] = *j2735_v2x_msgs__msg__VehicleMass__get_individual_type_description_source(NULL);
    sources[44] = *j2735_v2x_msgs__msg__VehicleType__get_individual_type_description_source(NULL);
    sources[45] = *j2735_v2x_msgs__msg__VerticalAccelerationThreshold__get_individual_type_description_source(NULL);
    sources[46] = *j2735_v2x_msgs__msg__WeatherProbe__get_individual_type_description_source(NULL);
    sources[47] = *j2735_v2x_msgs__msg__WeatherReport__get_individual_type_description_source(NULL);
    sources[48] = *j2735_v2x_msgs__msg__WiperRate__get_individual_type_description_source(NULL);
    sources[49] = *j2735_v2x_msgs__msg__WiperSet__get_individual_type_description_source(NULL);
    sources[50] = *j2735_v2x_msgs__msg__WiperStatus__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
