// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/BSM.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/bsm__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__BSM__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x69, 0xe7, 0xdb, 0xfa, 0xd3, 0x8c, 0x69, 0xd1,
      0xef, 0xa3, 0xf8, 0x6f, 0x10, 0xd8, 0x4b, 0x32,
      0x0f, 0x81, 0xe4, 0xdd, 0x7c, 0x0b, 0xca, 0xae,
      0x84, 0x71, 0xa0, 0x28, 0x8a, 0x24, 0x72, 0x0b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/vehicle_classification__functions.h"
#include "j2735_v2x_msgs/msg/detail/elevation__functions.h"
#include "j2735_v2x_msgs/msg/detail/coefficient_of_friction__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_hour__functions.h"
#include "j2735_v2x_msgs/msg/detail/extent__functions.h"
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_role__functions.h"
#include "j2735_v2x_msgs/msg/detail/vert_offset_b07__functions.h"
#include "j2735_v2x_msgs/msg/detail/vehicle_safety_extensions__functions.h"
#include "j2735_v2x_msgs/msg/detail/supplemental_vehicle_extensions__functions.h"
#include "j2735_v2x_msgs/msg/detail/time_offset__functions.h"
#include "j2735_v2x_msgs/msg/detail/transmission_state__functions.h"
#include "j2735_v2x_msgs/msg/detail/wiper_status__functions.h"
#include "j2735_v2x_msgs/msg/detail/privileged_events__functions.h"
#include "j2735_v2x_msgs/msg/detail/speed_confidence__functions.h"
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_situation__functions.h"
#include "j2735_v2x_msgs/msg/detail/position3_d__functions.h"
#include "j2735_v2x_msgs/msg/detail/trailer_history_point__functions.h"
#include "j2735_v2x_msgs/msg/detail/obstacle_direction__functions.h"
#include "j2735_v2x_msgs/msg/detail/is_dolly__functions.h"
#include "j2735_v2x_msgs/msg/detail/vertical_acceleration_threshold__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_date_time__functions.h"
#include "j2735_v2x_msgs/msg/detail/itis_generic_locations__functions.h"
#include "j2735_v2x_msgs/msg/detail/brake_system_status__functions.h"
#include "j2735_v2x_msgs/msg/detail/time_confidence__functions.h"
#include "j2735_v2x_msgs/msg/detail/vehicle_mass__functions.h"
#include "j2735_v2x_msgs/msg/detail/transmission_and_speed__functions.h"
#include "j2735_v2x_msgs/msg/detail/itis_incident_response_equipment__functions.h"
#include "j2735_v2x_msgs/msg/detail/auxiliary_brake_status__functions.h"
#include "j2735_v2x_msgs/msg/detail/path_history_point_list__functions.h"
#include "j2735_v2x_msgs/msg/detail/elevation_confidence__functions.h"
#include "j2735_v2x_msgs/msg/detail/bsm_core_data__functions.h"
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_class__functions.h"
#include "j2735_v2x_msgs/msg/detail/obstacle_detection__functions.h"
#include "j2735_v2x_msgs/msg/detail/rtcm_header__functions.h"
#include "j2735_v2x_msgs/msg/detail/speedand_headingand_throttle_confidence__functions.h"
#include "j2735_v2x_msgs/msg/detail/emergency_details__functions.h"
#include "j2735_v2x_msgs/msg/detail/speed__functions.h"
#include "j2735_v2x_msgs/msg/detail/anti_lock_brake_status__functions.h"
#include "j2735_v2x_msgs/msg/detail/siren_in_use__functions.h"
#include "j2735_v2x_msgs/msg/detail/brake_boost_applied__functions.h"
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_mobile_friction__functions.h"
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_yes_no__functions.h"
#include "j2735_v2x_msgs/msg/detail/ambient_air_temperature__functions.h"
#include "j2735_v2x_msgs/msg/detail/vert_offset_b12__functions.h"
#include "j2735_v2x_msgs/msg/detail/trailer_unit_description__functions.h"
#include "j2735_v2x_msgs/msg/detail/full_position_vector__functions.h"
#include "j2735_v2x_msgs/msg/detail/path_history_point__functions.h"
#include "j2735_v2x_msgs/msg/detail/weather_report__functions.h"
#include "j2735_v2x_msgs/msg/detail/multi_vehicle_response__functions.h"
#include "j2735_v2x_msgs/msg/detail/positional_accuracy__functions.h"
#include "j2735_v2x_msgs/msg/detail/offset_b11__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_xy24b__functions.h"
#include "j2735_v2x_msgs/msg/detail/bsm_part_ii_extension__functions.h"
#include "j2735_v2x_msgs/msg/detail/trailer_mass__functions.h"
#include "j2735_v2x_msgs/msg/detail/wiper_set__functions.h"
#include "j2735_v2x_msgs/msg/detail/vehicle_height__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_minute__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_second__functions.h"
#include "j2735_v2x_msgs/msg/detail/path_history__functions.h"
#include "j2735_v2x_msgs/msg/detail/longitude__functions.h"
#include "j2735_v2x_msgs/msg/detail/offset_b10__functions.h"
#include "j2735_v2x_msgs/msg/detail/pivot_point_description__functions.h"
#include "j2735_v2x_msgs/msg/detail/acceleration_set4_way__functions.h"
#include "j2735_v2x_msgs/msg/detail/pivoting_allowed__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "j2735_v2x_msgs/msg/detail/privileged_event_flags__functions.h"
#include "j2735_v2x_msgs/msg/detail/gnss_status__functions.h"
#include "j2735_v2x_msgs/msg/detail/exterior_lights__functions.h"
#include "j2735_v2x_msgs/msg/detail/vehicle_length__functions.h"
#include "j2735_v2x_msgs/msg/detail/position_confidence_set__functions.h"
#include "j2735_v2x_msgs/msg/detail/vehicle_data__functions.h"
#include "j2735_v2x_msgs/msg/detail/rtcm_package__functions.h"
#include "j2735_v2x_msgs/msg/detail/angle__functions.h"
#include "j2735_v2x_msgs/msg/detail/weather_probe__functions.h"
#include "j2735_v2x_msgs/msg/detail/bumper_height__functions.h"
#include "j2735_v2x_msgs/msg/detail/vehicle_event_flags__functions.h"
#include "j2735_v2x_msgs/msg/detail/throttle_confidence__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_day__functions.h"
#include "j2735_v2x_msgs/msg/detail/event_description__functions.h"
#include "j2735_v2x_msgs/msg/detail/disabled_vehicle__functions.h"
#include "j2735_v2x_msgs/msg/detail/heading_confidence__functions.h"
#include "j2735_v2x_msgs/msg/detail/trailer_unit_description_list__functions.h"
#include "j2735_v2x_msgs/msg/detail/velocity__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "j2735_v2x_msgs/msg/detail/trailer_weight__functions.h"
#include "j2735_v2x_msgs/msg/detail/traction_control_status__functions.h"
#include "j2735_v2x_msgs/msg/detail/fuel_type__functions.h"
#include "j2735_v2x_msgs/msg/detail/wiper_rate__functions.h"
#include "j2735_v2x_msgs/msg/detail/position_confidence__functions.h"
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_solar_radiation__functions.h"
#include "j2735_v2x_msgs/msg/detail/gross_speed__functions.h"
#include "j2735_v2x_msgs/msg/detail/response_type__functions.h"
#include "j2735_v2x_msgs/msg/detail/itis_responder_group_affected__functions.h"
#include "j2735_v2x_msgs/msg/detail/ambient_air_pressure__functions.h"
#include "j2735_v2x_msgs/msg/detail/brake_applied_status__functions.h"
#include "j2735_v2x_msgs/msg/detail/lightbar_in_use__functions.h"
#include "j2735_v2x_msgs/msg/detail/offset_b12__functions.h"
#include "j2735_v2x_msgs/msg/detail/iti_scodes__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_offset__functions.h"
#include "j2735_v2x_msgs/msg/detail/path_prediction__functions.h"
#include "j2735_v2x_msgs/msg/detail/coarse_heading__functions.h"
#include "j2735_v2x_msgs/msg/detail/bumper_heights__functions.h"
#include "j2735_v2x_msgs/msg/detail/trailer_history_point_list__functions.h"
#include "j2735_v2x_msgs/msg/detail/trailer_data__functions.h"
#include "j2735_v2x_msgs/msg/detail/special_vehicle_extensions__functions.h"
#include "j2735_v2x_msgs/msg/detail/latitude__functions.h"
#include "j2735_v2x_msgs/msg/detail/priority__functions.h"
#include "j2735_v2x_msgs/msg/detail/heading__functions.h"
#include "j2735_v2x_msgs/msg/detail/offset_llb18__functions.h"
#include "j2735_v2x_msgs/msg/detail/offset_b09__functions.h"
#include "j2735_v2x_msgs/msg/detail/bsm_regional_extension__functions.h"
#include "j2735_v2x_msgs/msg/detail/stability_control_status__functions.h"
#include "j2735_v2x_msgs/msg/detail/itis_vehicle_group_affected__functions.h"
#include "j2735_v2x_msgs/msg/detail/vehicle_width__functions.h"
#include "j2735_v2x_msgs/msg/detail/vehicle_size__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_year__functions.h"
#include "j2735_v2x_msgs/msg/detail/ntcip_ess_precip_rate__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_month__functions.h"
#include "j2735_v2x_msgs/msg/detail/obstacle_distance__functions.h"
#include "j2735_v2x_msgs/msg/detail/vehicle_type__functions.h"
#include "j2735_v2x_msgs/msg/detail/heading_slice__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__AccelerationSet4Way__EXPECTED_HASH = {1, {
    0xec, 0x74, 0xcc, 0xee, 0x1d, 0xc1, 0x15, 0x2e,
    0xd6, 0xb9, 0x8f, 0xec, 0x0c, 0x7f, 0xb0, 0x70,
    0x43, 0x36, 0x0f, 0xb5, 0x15, 0xd9, 0xa3, 0xdf,
    0xf5, 0x11, 0xb9, 0x2f, 0x43, 0x84, 0x3b, 0xc4,
  }};
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
static const rosidl_type_hash_t j2735_v2x_msgs__msg__AntiLockBrakeStatus__EXPECTED_HASH = {1, {
    0x58, 0x15, 0x5f, 0x60, 0xf0, 0x68, 0x34, 0x11,
    0xdc, 0x60, 0x64, 0x6e, 0x17, 0x20, 0xe6, 0x61,
    0x83, 0x7e, 0x02, 0x03, 0xd8, 0x58, 0x50, 0x7e,
    0x61, 0x64, 0x2f, 0x4a, 0xb5, 0xee, 0xe2, 0x74,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__EXPECTED_HASH = {1, {
    0x09, 0x2c, 0xba, 0x7e, 0x4e, 0x9e, 0x07, 0xbc,
    0x42, 0xf6, 0x3d, 0x5d, 0x30, 0xed, 0xed, 0x9f,
    0x80, 0x55, 0x26, 0xaf, 0x04, 0xc4, 0x50, 0x61,
    0x6f, 0x0b, 0x4d, 0x61, 0x59, 0x8c, 0x6b, 0x79,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__BSMCoreData__EXPECTED_HASH = {1, {
    0xc6, 0xe7, 0x1b, 0x35, 0x99, 0xc2, 0x22, 0xc0,
    0xe4, 0xf1, 0x95, 0xfd, 0x30, 0x7b, 0xe3, 0x9c,
    0x94, 0xca, 0x10, 0x99, 0xa1, 0xde, 0x36, 0x40,
    0xa1, 0xf3, 0xd3, 0x4c, 0xda, 0x94, 0x1c, 0x00,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__BSMPartIIExtension__EXPECTED_HASH = {1, {
    0x24, 0x7f, 0x9a, 0x5b, 0x73, 0xe1, 0x55, 0x14,
    0xac, 0xb5, 0x4b, 0x4e, 0x65, 0xe7, 0x8f, 0x95,
    0xe7, 0xba, 0xc4, 0x56, 0x49, 0x04, 0xee, 0xc5,
    0xc1, 0x7e, 0xaf, 0xf8, 0xfa, 0xcf, 0x4f, 0x75,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__BSMRegionalExtension__EXPECTED_HASH = {1, {
    0xe9, 0x5b, 0x83, 0x9a, 0xe1, 0x4d, 0xe4, 0xb0,
    0x2f, 0xdb, 0x8e, 0x4b, 0x0e, 0x04, 0x9a, 0x14,
    0xa3, 0xed, 0x93, 0x28, 0x95, 0x27, 0x9e, 0xab,
    0x15, 0xdc, 0x7c, 0xd5, 0xa1, 0xf9, 0x34, 0x6d,
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
static const rosidl_type_hash_t j2735_v2x_msgs__msg__BrakeAppliedStatus__EXPECTED_HASH = {1, {
    0x72, 0x34, 0xf3, 0x6d, 0x46, 0x12, 0x93, 0x08,
    0x25, 0x48, 0xf1, 0x83, 0x74, 0x73, 0xa5, 0xdf,
    0xbf, 0x1b, 0xe3, 0xaa, 0x79, 0x5a, 0x37, 0x18,
    0x36, 0xec, 0xa0, 0x61, 0xb8, 0xa0, 0xb2, 0x07,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__BrakeBoostApplied__EXPECTED_HASH = {1, {
    0x79, 0x40, 0x3b, 0xd2, 0x40, 0x6b, 0xf6, 0xd1,
    0x9d, 0x66, 0x8e, 0xc2, 0x47, 0x26, 0xaa, 0xfa,
    0xe7, 0xa0, 0x8f, 0x39, 0x80, 0xb7, 0x7c, 0xb5,
    0x85, 0x37, 0x32, 0xaa, 0x4b, 0xde, 0x14, 0x96,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__BrakeSystemStatus__EXPECTED_HASH = {1, {
    0xd9, 0xd7, 0xed, 0x3e, 0x86, 0x2a, 0x09, 0xcc,
    0xef, 0x22, 0x7b, 0xdd, 0xcb, 0xc0, 0xed, 0xeb,
    0x24, 0xa2, 0x51, 0xd7, 0xe2, 0x56, 0x54, 0x56,
    0xc7, 0x1b, 0x53, 0xc3, 0x53, 0x87, 0xf5, 0xbf,
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
static const rosidl_type_hash_t j2735_v2x_msgs__msg__CoarseHeading__EXPECTED_HASH = {1, {
    0x1f, 0x65, 0xfa, 0x36, 0x68, 0x7f, 0xac, 0x8e,
    0xcb, 0x56, 0x01, 0xff, 0x00, 0x6c, 0x22, 0x72,
    0xab, 0xbc, 0x40, 0xe8, 0x13, 0xef, 0xf1, 0x58,
    0xfb, 0x43, 0xd1, 0x0e, 0x99, 0x3d, 0xb9, 0xc8,
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
static const rosidl_type_hash_t j2735_v2x_msgs__msg__Elevation__EXPECTED_HASH = {1, {
    0x19, 0xc1, 0xbd, 0x79, 0xd5, 0x39, 0xcf, 0x3d,
    0xb4, 0x05, 0x5f, 0xbf, 0xc7, 0xa0, 0x2b, 0x31,
    0x6d, 0x6f, 0x68, 0xe1, 0x6d, 0xbc, 0x72, 0x3e,
    0xde, 0x45, 0xf2, 0x52, 0xeb, 0xf0, 0xca, 0x68,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ElevationConfidence__EXPECTED_HASH = {1, {
    0x00, 0xa2, 0x1c, 0xd6, 0xc7, 0x69, 0x48, 0xca,
    0xb7, 0x24, 0xb3, 0x6a, 0xa3, 0xb2, 0xdd, 0x8f,
    0x5f, 0x5a, 0x6d, 0xb4, 0x94, 0x6d, 0x79, 0x98,
    0xac, 0x9d, 0x6e, 0x00, 0x33, 0xbc, 0x4d, 0x70,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__EmergencyDetails__EXPECTED_HASH = {1, {
    0x3b, 0xff, 0xfd, 0x58, 0x25, 0x1b, 0xbe, 0xe1,
    0xa9, 0x2a, 0x5c, 0xbb, 0x80, 0xb3, 0x2f, 0x51,
    0xc7, 0xb5, 0xa8, 0x0f, 0xb8, 0xa8, 0x13, 0x69,
    0x15, 0x49, 0xfb, 0xce, 0xb2, 0xed, 0x5e, 0x5b,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__EventDescription__EXPECTED_HASH = {1, {
    0x70, 0x48, 0xe4, 0xd8, 0x7c, 0x8c, 0x4d, 0x39,
    0xe0, 0x36, 0x37, 0x3a, 0xb1, 0x8e, 0x08, 0x91,
    0x24, 0x97, 0x5d, 0xe6, 0x69, 0x64, 0xbc, 0xe2,
    0x0f, 0x0d, 0xaa, 0x35, 0x23, 0xe4, 0xcd, 0x8c,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__Extent__EXPECTED_HASH = {1, {
    0xae, 0x06, 0xa4, 0x3f, 0x89, 0x96, 0x73, 0xb7,
    0x1b, 0xaf, 0x35, 0x96, 0x25, 0xa7, 0x17, 0x3f,
    0xd9, 0x4c, 0x08, 0x35, 0x5f, 0x0f, 0x5f, 0x3e,
    0xe7, 0x36, 0x5e, 0x3f, 0x90, 0xba, 0x6a, 0xb0,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ExteriorLights__EXPECTED_HASH = {1, {
    0x09, 0x4a, 0xba, 0xa6, 0x97, 0xa5, 0xae, 0x50,
    0x3f, 0xdc, 0xac, 0x19, 0x10, 0x08, 0xe0, 0xf9,
    0x3c, 0xe6, 0x10, 0x3c, 0x6b, 0xca, 0xe4, 0x56,
    0x62, 0x30, 0x07, 0x7c, 0x02, 0x1d, 0x47, 0xfd,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__FuelType__EXPECTED_HASH = {1, {
    0x9f, 0xc4, 0xb6, 0x33, 0xca, 0xf4, 0x85, 0xaa,
    0x73, 0x27, 0x8d, 0x18, 0xb6, 0x2f, 0xbe, 0x36,
    0x95, 0xc1, 0xb1, 0x72, 0x66, 0x88, 0xa4, 0x12,
    0x5d, 0x55, 0x9d, 0x79, 0x7a, 0x5d, 0x6a, 0x16,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__FullPositionVector__EXPECTED_HASH = {1, {
    0xbe, 0x5a, 0x5f, 0xa8, 0x20, 0xba, 0x21, 0x63,
    0x15, 0x13, 0x1f, 0xf5, 0x7d, 0xc0, 0x39, 0x5d,
    0x09, 0xdb, 0x3d, 0x58, 0xc0, 0x2f, 0x76, 0x78,
    0x19, 0x42, 0x9d, 0x27, 0x0c, 0xc8, 0x0f, 0xea,
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
static const rosidl_type_hash_t j2735_v2x_msgs__msg__Heading__EXPECTED_HASH = {1, {
    0x3b, 0xbe, 0x41, 0x1d, 0x07, 0xbf, 0x87, 0x09,
    0x3c, 0x83, 0x4a, 0x2d, 0x56, 0x05, 0xf9, 0xdd,
    0x82, 0x4f, 0x49, 0xb6, 0xff, 0x0d, 0x2c, 0x39,
    0x8b, 0x7f, 0x29, 0xff, 0x64, 0x41, 0x23, 0x5b,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__HeadingConfidence__EXPECTED_HASH = {1, {
    0xd7, 0x91, 0xea, 0xa1, 0x47, 0xac, 0xce, 0xa9,
    0xd0, 0x8d, 0x54, 0xa3, 0x57, 0xcd, 0xdc, 0x01,
    0x28, 0xde, 0x2e, 0x2b, 0xd0, 0x49, 0x02, 0xd5,
    0x3f, 0x89, 0xce, 0x79, 0x69, 0x4a, 0xda, 0x27,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__HeadingSlice__EXPECTED_HASH = {1, {
    0x06, 0x17, 0x9d, 0x8e, 0x81, 0xc8, 0xde, 0xcf,
    0x90, 0xc7, 0x71, 0xda, 0x83, 0x88, 0x59, 0x73,
    0xbc, 0xb2, 0x69, 0x2b, 0x48, 0xa8, 0x28, 0xda,
    0x58, 0x02, 0xe2, 0x00, 0x0d, 0xb4, 0x0d, 0x3b,
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
static const rosidl_type_hash_t j2735_v2x_msgs__msg__IsDolly__EXPECTED_HASH = {1, {
    0xaf, 0x05, 0x51, 0x88, 0xdf, 0x86, 0x5a, 0x40,
    0x07, 0xb0, 0x6d, 0x2f, 0x41, 0x28, 0xeb, 0x9c,
    0x10, 0x27, 0x81, 0xf5, 0xad, 0x84, 0x97, 0x29,
    0x17, 0xc5, 0x67, 0x76, 0x9e, 0x95, 0xd8, 0xee,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__Latitude__EXPECTED_HASH = {1, {
    0x98, 0x04, 0xa0, 0xc2, 0x9e, 0x8e, 0xba, 0xfa,
    0x62, 0xa6, 0x72, 0x4f, 0x39, 0xc2, 0x12, 0xfb,
    0x93, 0xae, 0x8d, 0x51, 0x54, 0x5f, 0x2e, 0x2c,
    0x28, 0x7e, 0x88, 0x3a, 0x33, 0xe4, 0x3b, 0xf3,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__LightbarInUse__EXPECTED_HASH = {1, {
    0xfb, 0xc6, 0x92, 0x45, 0x64, 0xe1, 0xde, 0xe8,
    0x8d, 0xd9, 0xc5, 0xe3, 0x87, 0x69, 0x4c, 0x2e,
    0x1b, 0xe2, 0x07, 0x75, 0x2e, 0xb5, 0x2c, 0xe4,
    0x95, 0xa2, 0xb1, 0x39, 0x0b, 0x7f, 0x14, 0x06,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__Longitude__EXPECTED_HASH = {1, {
    0x40, 0xb0, 0xe5, 0x07, 0xbd, 0xa2, 0x4c, 0x74,
    0xd8, 0x9a, 0x7e, 0x0b, 0x3c, 0x76, 0x43, 0x9b,
    0xf1, 0xf8, 0x59, 0x6b, 0x9b, 0x45, 0x13, 0x55,
    0x9f, 0x42, 0x28, 0x49, 0x40, 0x9f, 0x0b, 0x00,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__MultiVehicleResponse__EXPECTED_HASH = {1, {
    0xdd, 0x21, 0xa6, 0x6d, 0x3d, 0x15, 0xec, 0xb6,
    0xe1, 0xc4, 0xa7, 0xa3, 0x25, 0xcc, 0xfa, 0xeb,
    0x32, 0xf2, 0xfe, 0xa4, 0x0a, 0x32, 0xb0, 0x54,
    0x1c, 0xa2, 0xd1, 0x7d, 0x44, 0xb5, 0xd4, 0xe8,
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
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NodeXY24b__EXPECTED_HASH = {1, {
    0xe7, 0xb7, 0x0d, 0x99, 0x15, 0xcd, 0x02, 0xbf,
    0x77, 0xde, 0xd9, 0x29, 0x4f, 0xf0, 0xa5, 0x12,
    0x03, 0xac, 0x3d, 0xa5, 0xb5, 0x93, 0x93, 0xaf,
    0x8a, 0x00, 0x6c, 0x47, 0x60, 0xc6, 0x23, 0x2c,
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
static const rosidl_type_hash_t j2735_v2x_msgs__msg__OffsetB11__EXPECTED_HASH = {1, {
    0xfb, 0xde, 0x82, 0x51, 0xf0, 0xc5, 0x34, 0xf2,
    0xa0, 0x8a, 0x3e, 0x64, 0x1d, 0xb4, 0xb1, 0xc3,
    0x20, 0x29, 0x51, 0xf7, 0x00, 0x73, 0x4a, 0xde,
    0x14, 0xab, 0xdb, 0xe6, 0x71, 0x6d, 0xf8, 0x70,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__OffsetB12__EXPECTED_HASH = {1, {
    0x68, 0x42, 0xcd, 0x20, 0xa9, 0x18, 0x46, 0xec,
    0xb7, 0x01, 0xbc, 0x09, 0x3a, 0xdc, 0x8f, 0xfa,
    0xb9, 0x2b, 0x58, 0x72, 0xb9, 0x8e, 0x37, 0x38,
    0xd8, 0x41, 0x06, 0xc4, 0x85, 0x17, 0x1d, 0x76,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__OffsetLLB18__EXPECTED_HASH = {1, {
    0x60, 0x12, 0xa2, 0x3c, 0x8e, 0xd5, 0xc0, 0xfb,
    0x4b, 0xaa, 0x9e, 0xd8, 0x17, 0x1c, 0x07, 0xbc,
    0x85, 0x3b, 0x1b, 0x48, 0xd5, 0x58, 0x90, 0x14,
    0x5e, 0x7d, 0x12, 0x11, 0xb5, 0x27, 0xe3, 0xbb,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PathHistory__EXPECTED_HASH = {1, {
    0xd1, 0x5a, 0xf0, 0x76, 0xa3, 0x57, 0x7f, 0xfb,
    0x89, 0xdb, 0x55, 0x26, 0x4b, 0x6c, 0x0f, 0xe3,
    0x4b, 0x73, 0x87, 0x26, 0x09, 0x59, 0x57, 0x20,
    0x69, 0xbd, 0x6b, 0x66, 0x99, 0x4e, 0x8b, 0xa6,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PathHistoryPoint__EXPECTED_HASH = {1, {
    0xf9, 0x3f, 0x10, 0x96, 0xcc, 0x16, 0x63, 0x2c,
    0x87, 0xd4, 0xbe, 0xae, 0x0e, 0x40, 0xbe, 0xd1,
    0xc5, 0xdf, 0x69, 0x69, 0x84, 0x73, 0x30, 0x49,
    0x0f, 0x9d, 0x00, 0xa1, 0xa0, 0x54, 0x15, 0x74,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PathHistoryPointList__EXPECTED_HASH = {1, {
    0x13, 0xe5, 0xbf, 0x42, 0x05, 0x5a, 0x3c, 0x1c,
    0x69, 0x42, 0xbc, 0xb4, 0x24, 0x1f, 0x04, 0xc6,
    0xad, 0x8f, 0xd7, 0x3a, 0xd2, 0xaa, 0x21, 0x70,
    0x3e, 0x31, 0xa9, 0x0a, 0xc5, 0xe2, 0x66, 0xea,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PathPrediction__EXPECTED_HASH = {1, {
    0x06, 0x02, 0xab, 0x43, 0x01, 0x44, 0x84, 0x15,
    0xfa, 0xe5, 0x87, 0xf2, 0x00, 0xe2, 0x80, 0xe6,
    0x97, 0x6e, 0xdc, 0x30, 0x8d, 0x64, 0x4b, 0xb9,
    0x2e, 0xa7, 0x3e, 0xee, 0x18, 0x94, 0x8a, 0x70,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PivotPointDescription__EXPECTED_HASH = {1, {
    0x77, 0xdf, 0xb8, 0x7a, 0x91, 0xd9, 0x27, 0x1d,
    0x2a, 0x8c, 0x00, 0x6b, 0x7f, 0x41, 0xf1, 0x72,
    0x0d, 0xb8, 0x25, 0x3b, 0xc2, 0x2d, 0x1c, 0xbc,
    0x8f, 0xcb, 0x04, 0x2c, 0x6c, 0x7e, 0x0b, 0xb6,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PivotingAllowed__EXPECTED_HASH = {1, {
    0x0c, 0xfc, 0xca, 0xda, 0x20, 0x61, 0x89, 0x9a,
    0x96, 0xb9, 0x0c, 0xd9, 0x33, 0x78, 0x22, 0x4e,
    0xb7, 0x67, 0x9d, 0xfb, 0xe4, 0xca, 0x71, 0x2e,
    0xd3, 0x5a, 0x3a, 0x24, 0x4f, 0x51, 0x6d, 0xed,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__Position3D__EXPECTED_HASH = {1, {
    0xa1, 0x45, 0x55, 0x07, 0x95, 0x8a, 0xec, 0x9b,
    0x3c, 0x0d, 0xac, 0x63, 0x0e, 0x0a, 0xb4, 0x03,
    0x4d, 0xd7, 0x9b, 0xa9, 0x75, 0x33, 0x32, 0x89,
    0x3e, 0xc8, 0x3f, 0x12, 0xe3, 0x02, 0xdd, 0x5c,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PositionConfidence__EXPECTED_HASH = {1, {
    0x61, 0x21, 0xfa, 0x3f, 0xed, 0x8e, 0x09, 0x3b,
    0xde, 0x31, 0x48, 0xa5, 0xb7, 0xd5, 0x21, 0x79,
    0x02, 0x69, 0x79, 0x4b, 0xb3, 0xce, 0xe6, 0x93,
    0xa0, 0xd8, 0x48, 0x6b, 0x34, 0xdb, 0x8b, 0x17,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PositionConfidenceSet__EXPECTED_HASH = {1, {
    0x8e, 0x1a, 0xf9, 0xc0, 0x0f, 0xf6, 0x51, 0x2f,
    0x59, 0x14, 0x5f, 0x4c, 0xa5, 0xa4, 0xdb, 0xee,
    0x90, 0xf5, 0x4a, 0xd6, 0xa9, 0x9d, 0xe4, 0xbf,
    0xf6, 0x46, 0x4a, 0xed, 0x56, 0x15, 0xd7, 0xf8,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PositionalAccuracy__EXPECTED_HASH = {1, {
    0xc9, 0x81, 0xc5, 0xb3, 0x13, 0x72, 0xab, 0xba,
    0xca, 0x5a, 0xf5, 0xcd, 0xc2, 0xa2, 0x2b, 0xc9,
    0xfb, 0xa1, 0x73, 0x73, 0xed, 0x39, 0xf6, 0x8f,
    0x9e, 0xc7, 0x6c, 0xc3, 0xba, 0x5d, 0xfe, 0xdd,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__Priority__EXPECTED_HASH = {1, {
    0x0c, 0xde, 0x86, 0xd3, 0x30, 0xf3, 0xba, 0x04,
    0x40, 0xb6, 0x1c, 0xf8, 0x36, 0x18, 0x18, 0x36,
    0x2a, 0x13, 0x98, 0x6b, 0x91, 0xd1, 0x53, 0x9b,
    0x23, 0x0a, 0x25, 0xa7, 0x91, 0xda, 0x65, 0x0a,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PrivilegedEventFlags__EXPECTED_HASH = {1, {
    0x92, 0xcb, 0x49, 0x88, 0x6a, 0xef, 0x29, 0xc6,
    0xf1, 0x82, 0xe9, 0x09, 0xac, 0xb9, 0xe0, 0x13,
    0xa7, 0xa3, 0xea, 0x4a, 0xd7, 0x9e, 0xed, 0xb9,
    0xc5, 0xeb, 0x8d, 0x8f, 0x6e, 0x1b, 0x34, 0x60,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PrivilegedEvents__EXPECTED_HASH = {1, {
    0x58, 0xc1, 0xab, 0x8a, 0xf1, 0x89, 0xc7, 0xda,
    0xcb, 0x70, 0x20, 0x71, 0xa3, 0xf5, 0x32, 0x2a,
    0x1f, 0x7d, 0x25, 0xbd, 0xe0, 0xa9, 0x87, 0x39,
    0xab, 0xce, 0x70, 0xad, 0x87, 0xe0, 0xdd, 0x27,
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
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ResponseType__EXPECTED_HASH = {1, {
    0x2e, 0x51, 0xdb, 0xc0, 0x9d, 0x1f, 0xb6, 0x69,
    0xf4, 0xc2, 0x64, 0xe2, 0x51, 0x7e, 0xb3, 0x66,
    0xe4, 0x5e, 0x34, 0x5b, 0xcf, 0x12, 0x8d, 0x86,
    0x19, 0xa7, 0xd4, 0xff, 0xee, 0xc1, 0x78, 0x68,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__SirenInUse__EXPECTED_HASH = {1, {
    0x3a, 0xb5, 0x9e, 0x83, 0xc2, 0x25, 0x88, 0xc6,
    0x36, 0xa2, 0x41, 0x5e, 0xf4, 0xca, 0x22, 0x09,
    0x15, 0x1a, 0x67, 0x3c, 0xe1, 0x8e, 0xcc, 0xe4,
    0xe3, 0xd2, 0x3c, 0x61, 0xcc, 0x0b, 0x57, 0xd8,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__SpecialVehicleExtensions__EXPECTED_HASH = {1, {
    0x45, 0x62, 0xe8, 0x36, 0xc7, 0x23, 0x10, 0xd2,
    0x48, 0xb7, 0x01, 0xdd, 0x54, 0x96, 0x5c, 0x8d,
    0x65, 0x92, 0xb8, 0xf7, 0x24, 0xe3, 0x63, 0x1e,
    0xea, 0xef, 0x51, 0xb5, 0x24, 0x08, 0xbd, 0x17,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__Speed__EXPECTED_HASH = {1, {
    0xb8, 0xc8, 0xb7, 0x35, 0x92, 0xe5, 0x20, 0x47,
    0x80, 0x83, 0x56, 0x7f, 0xe3, 0x43, 0x2a, 0x05,
    0x0e, 0xc7, 0xf2, 0x83, 0xf5, 0x8d, 0x71, 0xc8,
    0xd4, 0x09, 0x3a, 0x2b, 0x41, 0x5b, 0xb1, 0xec,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__SpeedConfidence__EXPECTED_HASH = {1, {
    0x60, 0x1a, 0x6a, 0xf8, 0x51, 0xec, 0x0e, 0x4d,
    0xfc, 0x8b, 0x6a, 0x0c, 0x60, 0x8f, 0x60, 0xb6,
    0xbe, 0x2d, 0xc5, 0x7b, 0x58, 0x7d, 0x3e, 0x76,
    0x56, 0xb2, 0x1c, 0x09, 0xd8, 0x59, 0x20, 0xa0,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__EXPECTED_HASH = {1, {
    0x20, 0x00, 0x0e, 0x4a, 0xd6, 0x38, 0xdb, 0x6b,
    0xc2, 0x1e, 0x53, 0xa2, 0x2b, 0x77, 0x4b, 0x84,
    0x50, 0xc5, 0x68, 0x02, 0x2d, 0x3f, 0x0d, 0xc1,
    0xeb, 0xf3, 0x54, 0x46, 0x14, 0x4f, 0x37, 0x71,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__StabilityControlStatus__EXPECTED_HASH = {1, {
    0x89, 0xa1, 0xab, 0xef, 0x37, 0xbe, 0x18, 0x08,
    0x5b, 0xaf, 0x6b, 0xab, 0x38, 0x92, 0x71, 0x76,
    0x9a, 0x7d, 0xee, 0x9c, 0x34, 0x76, 0x38, 0xf0,
    0xc4, 0x25, 0x1c, 0x81, 0x55, 0xb8, 0x16, 0x33,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__SupplementalVehicleExtensions__EXPECTED_HASH = {1, {
    0xcb, 0xc4, 0xcf, 0xc1, 0x93, 0x36, 0xf5, 0x21,
    0x67, 0xb9, 0xf2, 0xe0, 0x61, 0x76, 0xe5, 0xf4,
    0x87, 0x07, 0x8a, 0xf9, 0x80, 0xde, 0x94, 0x1c,
    0xc0, 0x66, 0xcb, 0xa4, 0x3f, 0xbb, 0x31, 0x12,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ThrottleConfidence__EXPECTED_HASH = {1, {
    0xeb, 0x4c, 0x08, 0x81, 0xa7, 0xd5, 0x0a, 0x4a,
    0xc8, 0xb4, 0x78, 0x99, 0xa6, 0x4b, 0x60, 0x24,
    0x19, 0xc5, 0x71, 0xee, 0xb7, 0x95, 0x99, 0x9e,
    0xf8, 0xb3, 0xc0, 0x6d, 0x75, 0x17, 0x84, 0xe5,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TimeConfidence__EXPECTED_HASH = {1, {
    0x71, 0xec, 0x32, 0x9f, 0x3b, 0x01, 0xec, 0x1e,
    0x64, 0xaf, 0x49, 0x81, 0x82, 0x10, 0x49, 0x12,
    0x77, 0x69, 0x08, 0x1b, 0xc1, 0xcb, 0x23, 0xb5,
    0x16, 0xbb, 0xa8, 0x3a, 0xb9, 0x3f, 0x66, 0x07,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TimeOffset__EXPECTED_HASH = {1, {
    0x9c, 0x0d, 0x74, 0xc8, 0xb3, 0xce, 0x4f, 0xa5,
    0x46, 0x07, 0x3b, 0xc3, 0x39, 0xa1, 0x4a, 0xe8,
    0x6b, 0x35, 0xb0, 0x94, 0x0b, 0x9b, 0x5b, 0x9f,
    0x7b, 0x61, 0x3c, 0xef, 0xb0, 0x88, 0xb1, 0x7c,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TractionControlStatus__EXPECTED_HASH = {1, {
    0x8a, 0x7e, 0x7f, 0x5e, 0x52, 0xc7, 0xe4, 0x6b,
    0x20, 0x6f, 0x54, 0xbc, 0xcf, 0xc2, 0x77, 0x7b,
    0x4f, 0x5f, 0x98, 0x6a, 0x76, 0x32, 0xc5, 0x09,
    0x29, 0x90, 0x4a, 0x78, 0x8a, 0x0d, 0x4d, 0x38,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TrailerData__EXPECTED_HASH = {1, {
    0x8a, 0x2f, 0x75, 0x85, 0xaa, 0x70, 0xee, 0xd8,
    0x64, 0xb5, 0x23, 0x20, 0x56, 0x1a, 0xbd, 0x94,
    0xca, 0x21, 0xdd, 0xdc, 0xb5, 0xb2, 0x50, 0xf9,
    0x3e, 0x16, 0x63, 0xee, 0xb2, 0x39, 0x66, 0xab,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TrailerHistoryPoint__EXPECTED_HASH = {1, {
    0xa5, 0xfb, 0xdb, 0xa4, 0x9f, 0x08, 0xbb, 0x04,
    0x00, 0x82, 0xe7, 0x2a, 0x5c, 0x8e, 0xa4, 0x6c,
    0x9d, 0x74, 0xa1, 0xdb, 0x53, 0x01, 0x4b, 0xfb,
    0x8c, 0x3c, 0xc7, 0x69, 0xe3, 0xd8, 0x9b, 0x2e,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TrailerHistoryPointList__EXPECTED_HASH = {1, {
    0x25, 0x89, 0xb0, 0x88, 0x09, 0xd7, 0xd8, 0xcc,
    0x36, 0xf3, 0xfa, 0x26, 0xda, 0xd3, 0xce, 0x34,
    0x20, 0xad, 0x2a, 0x27, 0xec, 0xee, 0x3a, 0xe9,
    0x38, 0x8d, 0xd6, 0x07, 0x01, 0x38, 0x3e, 0x52,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TrailerMass__EXPECTED_HASH = {1, {
    0x8c, 0xba, 0x28, 0xbd, 0xf6, 0xba, 0x3a, 0x55,
    0x43, 0xcb, 0x70, 0x1f, 0xde, 0xa5, 0xe0, 0xb4,
    0x92, 0x31, 0xe7, 0x80, 0x01, 0xcf, 0x14, 0x78,
    0x91, 0x2f, 0xd7, 0x98, 0x47, 0x80, 0xdd, 0x8e,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TrailerUnitDescription__EXPECTED_HASH = {1, {
    0x94, 0x29, 0xcb, 0x57, 0xf7, 0x36, 0x2e, 0xa4,
    0x59, 0xa7, 0xa2, 0x6a, 0x1d, 0x3a, 0xd1, 0x4b,
    0x4a, 0x85, 0x6b, 0x0c, 0x85, 0x7d, 0x47, 0xa9,
    0xad, 0xc0, 0x22, 0x3e, 0xaa, 0xb2, 0x04, 0x33,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TrailerUnitDescriptionList__EXPECTED_HASH = {1, {
    0x5e, 0x7c, 0xaa, 0x56, 0x2a, 0xcc, 0xc2, 0x6f,
    0x0c, 0x47, 0x0f, 0xa1, 0x18, 0xfc, 0xca, 0x19,
    0xfc, 0x5a, 0xc6, 0x4a, 0x49, 0xb5, 0xa3, 0x2e,
    0xeb, 0xd3, 0x23, 0x19, 0xeb, 0x1c, 0xb7, 0x38,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TrailerWeight__EXPECTED_HASH = {1, {
    0x2f, 0x7c, 0x4e, 0xc4, 0xeb, 0x12, 0xcd, 0x2a,
    0x3e, 0xa7, 0x7d, 0x46, 0xec, 0xac, 0xd9, 0x29,
    0xbf, 0x18, 0x4c, 0x95, 0xd2, 0x8f, 0x2c, 0x7e,
    0x28, 0x6e, 0xf2, 0xfd, 0xca, 0x00, 0xb4, 0x55,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TransmissionAndSpeed__EXPECTED_HASH = {1, {
    0x82, 0xd2, 0x34, 0x5a, 0xda, 0x0f, 0xaa, 0x69,
    0xaa, 0x92, 0x23, 0x9b, 0xb0, 0x48, 0xcb, 0xbe,
    0x3c, 0x02, 0x9e, 0x05, 0xeb, 0xb9, 0xca, 0xae,
    0xf5, 0x11, 0xcd, 0x7d, 0x9e, 0x95, 0x34, 0x10,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TransmissionState__EXPECTED_HASH = {1, {
    0x50, 0xd7, 0xde, 0x5a, 0x14, 0x37, 0xc5, 0x6a,
    0x34, 0x76, 0x3d, 0x70, 0xce, 0xe2, 0x12, 0xbe,
    0x56, 0xfc, 0x62, 0x1b, 0xb4, 0x34, 0x41, 0x63,
    0xa8, 0x34, 0x5d, 0x80, 0x64, 0x15, 0x53, 0x5c,
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
static const rosidl_type_hash_t j2735_v2x_msgs__msg__VehicleEventFlags__EXPECTED_HASH = {1, {
    0x96, 0x59, 0xfe, 0xf9, 0xbb, 0x8b, 0xc6, 0x5b,
    0x81, 0x0d, 0xc7, 0xa4, 0x2b, 0x24, 0x85, 0x89,
    0xe3, 0xe1, 0x94, 0x99, 0x0b, 0x27, 0x21, 0x91,
    0x50, 0xff, 0x79, 0x6c, 0x2c, 0x87, 0x3a, 0xaf,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__VehicleHeight__EXPECTED_HASH = {1, {
    0x10, 0x3f, 0x7b, 0x69, 0x2a, 0xe8, 0x14, 0xbb,
    0xf1, 0x71, 0x13, 0x51, 0x88, 0x00, 0xd6, 0x9c,
    0xc7, 0x8f, 0xfa, 0x1a, 0x9d, 0x5e, 0xfa, 0x51,
    0x56, 0x26, 0xea, 0x2d, 0x1d, 0x70, 0xe5, 0xb4,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__VehicleLength__EXPECTED_HASH = {1, {
    0xf7, 0x34, 0x97, 0x26, 0xad, 0x1a, 0xf5, 0xf7,
    0x3d, 0x35, 0x20, 0xc2, 0xe0, 0x2c, 0x01, 0x75,
    0x37, 0x36, 0x68, 0xa8, 0x52, 0x69, 0xbc, 0x55,
    0xe1, 0x95, 0x59, 0xca, 0xfb, 0xb3, 0x16, 0xee,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__VehicleMass__EXPECTED_HASH = {1, {
    0x28, 0x2c, 0x24, 0xd0, 0x88, 0xa1, 0x78, 0x5c,
    0x1c, 0x39, 0x71, 0x22, 0x58, 0x08, 0xa5, 0x89,
    0x78, 0xf2, 0x42, 0xa7, 0x4d, 0x7b, 0xa3, 0x2e,
    0x16, 0x7a, 0x72, 0xd5, 0x85, 0xa1, 0x90, 0x5b,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__VehicleSafetyExtensions__EXPECTED_HASH = {1, {
    0xfb, 0xbf, 0xc2, 0x2f, 0xd7, 0x26, 0x5c, 0xfc,
    0x56, 0xef, 0x24, 0xb9, 0xff, 0x06, 0x35, 0x28,
    0x78, 0x8d, 0x2f, 0xd5, 0xc0, 0x22, 0xfe, 0xb0,
    0x99, 0x6f, 0xc3, 0x7e, 0x25, 0xad, 0xc9, 0xb7,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__VehicleSize__EXPECTED_HASH = {1, {
    0xcd, 0x0c, 0x51, 0xef, 0xad, 0x8c, 0xb4, 0x12,
    0x64, 0x31, 0xc6, 0x64, 0xaa, 0x9d, 0xd3, 0x4f,
    0x55, 0x30, 0x85, 0x5e, 0x47, 0xb6, 0x5c, 0xb5,
    0xe7, 0x6b, 0x00, 0x6b, 0x56, 0x82, 0x19, 0xa9,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__VehicleType__EXPECTED_HASH = {1, {
    0xd9, 0x06, 0x05, 0x41, 0x21, 0x2a, 0x3e, 0xa9,
    0x81, 0xb9, 0x86, 0x57, 0xb3, 0xb9, 0xee, 0xa3,
    0x43, 0x3d, 0xc6, 0x64, 0x5a, 0x44, 0x2d, 0xe6,
    0x86, 0x03, 0xce, 0x78, 0xf4, 0x7b, 0xc2, 0xfb,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__VehicleWidth__EXPECTED_HASH = {1, {
    0x19, 0x60, 0x02, 0xee, 0xe5, 0x9c, 0xf0, 0xe7,
    0xae, 0xd7, 0x08, 0x54, 0xb8, 0x90, 0xad, 0xc1,
    0x74, 0x98, 0xb9, 0xaf, 0x34, 0x3e, 0x95, 0xdb,
    0x81, 0xc2, 0xa5, 0xe4, 0xce, 0x6e, 0x2c, 0x78,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__Velocity__EXPECTED_HASH = {1, {
    0x05, 0xe5, 0x1e, 0xa8, 0x34, 0x8a, 0x16, 0x2e,
    0x6b, 0xe6, 0xaa, 0xf0, 0x51, 0x9a, 0xc6, 0x20,
    0x41, 0x00, 0xcf, 0xad, 0x68, 0xb5, 0xfb, 0xe8,
    0xc3, 0x07, 0xd5, 0x72, 0x7a, 0x76, 0x9d, 0x76,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__VertOffsetB07__EXPECTED_HASH = {1, {
    0x0d, 0x59, 0x6e, 0xf1, 0x2d, 0xae, 0x7b, 0x4e,
    0xb9, 0x88, 0x8c, 0x0e, 0xc6, 0xac, 0x9c, 0xc8,
    0x2c, 0xd7, 0x1e, 0x7f, 0xd4, 0x9e, 0x58, 0xf4,
    0x86, 0x7d, 0x7e, 0xc0, 0xdf, 0x05, 0x97, 0x6b,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__VertOffsetB12__EXPECTED_HASH = {1, {
    0xbe, 0xf5, 0xf6, 0x06, 0x26, 0xd1, 0x52, 0x6e,
    0xfc, 0x08, 0xad, 0x64, 0x43, 0xb9, 0xca, 0xca,
    0x3d, 0x7e, 0xc3, 0x81, 0xe4, 0x40, 0x40, 0x95,
    0x1d, 0xbb, 0xd0, 0x3c, 0xb4, 0xe8, 0x6d, 0x34,
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
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char j2735_v2x_msgs__msg__BSM__TYPE_NAME[] = "j2735_v2x_msgs/msg/BSM";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char j2735_v2x_msgs__msg__AccelerationSet4Way__TYPE_NAME[] = "j2735_v2x_msgs/msg/AccelerationSet4Way";
static char j2735_v2x_msgs__msg__AmbientAirPressure__TYPE_NAME[] = "j2735_v2x_msgs/msg/AmbientAirPressure";
static char j2735_v2x_msgs__msg__AmbientAirTemperature__TYPE_NAME[] = "j2735_v2x_msgs/msg/AmbientAirTemperature";
static char j2735_v2x_msgs__msg__Angle__TYPE_NAME[] = "j2735_v2x_msgs/msg/Angle";
static char j2735_v2x_msgs__msg__AntiLockBrakeStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/AntiLockBrakeStatus";
static char j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/AuxiliaryBrakeStatus";
static char j2735_v2x_msgs__msg__BSMCoreData__TYPE_NAME[] = "j2735_v2x_msgs/msg/BSMCoreData";
static char j2735_v2x_msgs__msg__BSMPartIIExtension__TYPE_NAME[] = "j2735_v2x_msgs/msg/BSMPartIIExtension";
static char j2735_v2x_msgs__msg__BSMRegionalExtension__TYPE_NAME[] = "j2735_v2x_msgs/msg/BSMRegionalExtension";
static char j2735_v2x_msgs__msg__BasicVehicleClass__TYPE_NAME[] = "j2735_v2x_msgs/msg/BasicVehicleClass";
static char j2735_v2x_msgs__msg__BasicVehicleRole__TYPE_NAME[] = "j2735_v2x_msgs/msg/BasicVehicleRole";
static char j2735_v2x_msgs__msg__BrakeAppliedStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/BrakeAppliedStatus";
static char j2735_v2x_msgs__msg__BrakeBoostApplied__TYPE_NAME[] = "j2735_v2x_msgs/msg/BrakeBoostApplied";
static char j2735_v2x_msgs__msg__BrakeSystemStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/BrakeSystemStatus";
static char j2735_v2x_msgs__msg__BumperHeight__TYPE_NAME[] = "j2735_v2x_msgs/msg/BumperHeight";
static char j2735_v2x_msgs__msg__BumperHeights__TYPE_NAME[] = "j2735_v2x_msgs/msg/BumperHeights";
static char j2735_v2x_msgs__msg__CoarseHeading__TYPE_NAME[] = "j2735_v2x_msgs/msg/CoarseHeading";
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
static char j2735_v2x_msgs__msg__Elevation__TYPE_NAME[] = "j2735_v2x_msgs/msg/Elevation";
static char j2735_v2x_msgs__msg__ElevationConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/ElevationConfidence";
static char j2735_v2x_msgs__msg__EmergencyDetails__TYPE_NAME[] = "j2735_v2x_msgs/msg/EmergencyDetails";
static char j2735_v2x_msgs__msg__EventDescription__TYPE_NAME[] = "j2735_v2x_msgs/msg/EventDescription";
static char j2735_v2x_msgs__msg__Extent__TYPE_NAME[] = "j2735_v2x_msgs/msg/Extent";
static char j2735_v2x_msgs__msg__ExteriorLights__TYPE_NAME[] = "j2735_v2x_msgs/msg/ExteriorLights";
static char j2735_v2x_msgs__msg__FuelType__TYPE_NAME[] = "j2735_v2x_msgs/msg/FuelType";
static char j2735_v2x_msgs__msg__FullPositionVector__TYPE_NAME[] = "j2735_v2x_msgs/msg/FullPositionVector";
static char j2735_v2x_msgs__msg__GNSSStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/GNSSStatus";
static char j2735_v2x_msgs__msg__GrossSpeed__TYPE_NAME[] = "j2735_v2x_msgs/msg/GrossSpeed";
static char j2735_v2x_msgs__msg__Heading__TYPE_NAME[] = "j2735_v2x_msgs/msg/Heading";
static char j2735_v2x_msgs__msg__HeadingConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/HeadingConfidence";
static char j2735_v2x_msgs__msg__HeadingSlice__TYPE_NAME[] = "j2735_v2x_msgs/msg/HeadingSlice";
static char j2735_v2x_msgs__msg__ITISGenericLocations__TYPE_NAME[] = "j2735_v2x_msgs/msg/ITISGenericLocations";
static char j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__TYPE_NAME[] = "j2735_v2x_msgs/msg/ITISIncidentResponseEquipment";
static char j2735_v2x_msgs__msg__ITISResponderGroupAffected__TYPE_NAME[] = "j2735_v2x_msgs/msg/ITISResponderGroupAffected";
static char j2735_v2x_msgs__msg__ITISVehicleGroupAffected__TYPE_NAME[] = "j2735_v2x_msgs/msg/ITISVehicleGroupAffected";
static char j2735_v2x_msgs__msg__ITIScodes__TYPE_NAME[] = "j2735_v2x_msgs/msg/ITIScodes";
static char j2735_v2x_msgs__msg__IsDolly__TYPE_NAME[] = "j2735_v2x_msgs/msg/IsDolly";
static char j2735_v2x_msgs__msg__Latitude__TYPE_NAME[] = "j2735_v2x_msgs/msg/Latitude";
static char j2735_v2x_msgs__msg__LightbarInUse__TYPE_NAME[] = "j2735_v2x_msgs/msg/LightbarInUse";
static char j2735_v2x_msgs__msg__Longitude__TYPE_NAME[] = "j2735_v2x_msgs/msg/Longitude";
static char j2735_v2x_msgs__msg__MultiVehicleResponse__TYPE_NAME[] = "j2735_v2x_msgs/msg/MultiVehicleResponse";
static char j2735_v2x_msgs__msg__NTCIPEssMobileFriction__TYPE_NAME[] = "j2735_v2x_msgs/msg/NTCIPEssMobileFriction";
static char j2735_v2x_msgs__msg__NTCIPEssPrecipRate__TYPE_NAME[] = "j2735_v2x_msgs/msg/NTCIPEssPrecipRate";
static char j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__TYPE_NAME[] = "j2735_v2x_msgs/msg/NTCIPEssPrecipSituation";
static char j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__TYPE_NAME[] = "j2735_v2x_msgs/msg/NTCIPEssPrecipYesNo";
static char j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__TYPE_NAME[] = "j2735_v2x_msgs/msg/NTCIPEssSolarRadiation";
static char j2735_v2x_msgs__msg__NodeXY24b__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeXY24b";
static char j2735_v2x_msgs__msg__ObstacleDetection__TYPE_NAME[] = "j2735_v2x_msgs/msg/ObstacleDetection";
static char j2735_v2x_msgs__msg__ObstacleDirection__TYPE_NAME[] = "j2735_v2x_msgs/msg/ObstacleDirection";
static char j2735_v2x_msgs__msg__ObstacleDistance__TYPE_NAME[] = "j2735_v2x_msgs/msg/ObstacleDistance";
static char j2735_v2x_msgs__msg__OffsetB09__TYPE_NAME[] = "j2735_v2x_msgs/msg/OffsetB09";
static char j2735_v2x_msgs__msg__OffsetB10__TYPE_NAME[] = "j2735_v2x_msgs/msg/OffsetB10";
static char j2735_v2x_msgs__msg__OffsetB11__TYPE_NAME[] = "j2735_v2x_msgs/msg/OffsetB11";
static char j2735_v2x_msgs__msg__OffsetB12__TYPE_NAME[] = "j2735_v2x_msgs/msg/OffsetB12";
static char j2735_v2x_msgs__msg__OffsetLLB18__TYPE_NAME[] = "j2735_v2x_msgs/msg/OffsetLLB18";
static char j2735_v2x_msgs__msg__PathHistory__TYPE_NAME[] = "j2735_v2x_msgs/msg/PathHistory";
static char j2735_v2x_msgs__msg__PathHistoryPoint__TYPE_NAME[] = "j2735_v2x_msgs/msg/PathHistoryPoint";
static char j2735_v2x_msgs__msg__PathHistoryPointList__TYPE_NAME[] = "j2735_v2x_msgs/msg/PathHistoryPointList";
static char j2735_v2x_msgs__msg__PathPrediction__TYPE_NAME[] = "j2735_v2x_msgs/msg/PathPrediction";
static char j2735_v2x_msgs__msg__PivotPointDescription__TYPE_NAME[] = "j2735_v2x_msgs/msg/PivotPointDescription";
static char j2735_v2x_msgs__msg__PivotingAllowed__TYPE_NAME[] = "j2735_v2x_msgs/msg/PivotingAllowed";
static char j2735_v2x_msgs__msg__Position3D__TYPE_NAME[] = "j2735_v2x_msgs/msg/Position3D";
static char j2735_v2x_msgs__msg__PositionConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/PositionConfidence";
static char j2735_v2x_msgs__msg__PositionConfidenceSet__TYPE_NAME[] = "j2735_v2x_msgs/msg/PositionConfidenceSet";
static char j2735_v2x_msgs__msg__PositionalAccuracy__TYPE_NAME[] = "j2735_v2x_msgs/msg/PositionalAccuracy";
static char j2735_v2x_msgs__msg__Priority__TYPE_NAME[] = "j2735_v2x_msgs/msg/Priority";
static char j2735_v2x_msgs__msg__PrivilegedEventFlags__TYPE_NAME[] = "j2735_v2x_msgs/msg/PrivilegedEventFlags";
static char j2735_v2x_msgs__msg__PrivilegedEvents__TYPE_NAME[] = "j2735_v2x_msgs/msg/PrivilegedEvents";
static char j2735_v2x_msgs__msg__RTCMHeader__TYPE_NAME[] = "j2735_v2x_msgs/msg/RTCMHeader";
static char j2735_v2x_msgs__msg__RTCMPackage__TYPE_NAME[] = "j2735_v2x_msgs/msg/RTCMPackage";
static char j2735_v2x_msgs__msg__ResponseType__TYPE_NAME[] = "j2735_v2x_msgs/msg/ResponseType";
static char j2735_v2x_msgs__msg__SirenInUse__TYPE_NAME[] = "j2735_v2x_msgs/msg/SirenInUse";
static char j2735_v2x_msgs__msg__SpecialVehicleExtensions__TYPE_NAME[] = "j2735_v2x_msgs/msg/SpecialVehicleExtensions";
static char j2735_v2x_msgs__msg__Speed__TYPE_NAME[] = "j2735_v2x_msgs/msg/Speed";
static char j2735_v2x_msgs__msg__SpeedConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/SpeedConfidence";
static char j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/SpeedandHeadingandThrottleConfidence";
static char j2735_v2x_msgs__msg__StabilityControlStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/StabilityControlStatus";
static char j2735_v2x_msgs__msg__SupplementalVehicleExtensions__TYPE_NAME[] = "j2735_v2x_msgs/msg/SupplementalVehicleExtensions";
static char j2735_v2x_msgs__msg__ThrottleConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/ThrottleConfidence";
static char j2735_v2x_msgs__msg__TimeConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/TimeConfidence";
static char j2735_v2x_msgs__msg__TimeOffset__TYPE_NAME[] = "j2735_v2x_msgs/msg/TimeOffset";
static char j2735_v2x_msgs__msg__TractionControlStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/TractionControlStatus";
static char j2735_v2x_msgs__msg__TrailerData__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrailerData";
static char j2735_v2x_msgs__msg__TrailerHistoryPoint__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrailerHistoryPoint";
static char j2735_v2x_msgs__msg__TrailerHistoryPointList__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrailerHistoryPointList";
static char j2735_v2x_msgs__msg__TrailerMass__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrailerMass";
static char j2735_v2x_msgs__msg__TrailerUnitDescription__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrailerUnitDescription";
static char j2735_v2x_msgs__msg__TrailerUnitDescriptionList__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrailerUnitDescriptionList";
static char j2735_v2x_msgs__msg__TrailerWeight__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrailerWeight";
static char j2735_v2x_msgs__msg__TransmissionAndSpeed__TYPE_NAME[] = "j2735_v2x_msgs/msg/TransmissionAndSpeed";
static char j2735_v2x_msgs__msg__TransmissionState__TYPE_NAME[] = "j2735_v2x_msgs/msg/TransmissionState";
static char j2735_v2x_msgs__msg__VehicleClassification__TYPE_NAME[] = "j2735_v2x_msgs/msg/VehicleClassification";
static char j2735_v2x_msgs__msg__VehicleData__TYPE_NAME[] = "j2735_v2x_msgs/msg/VehicleData";
static char j2735_v2x_msgs__msg__VehicleEventFlags__TYPE_NAME[] = "j2735_v2x_msgs/msg/VehicleEventFlags";
static char j2735_v2x_msgs__msg__VehicleHeight__TYPE_NAME[] = "j2735_v2x_msgs/msg/VehicleHeight";
static char j2735_v2x_msgs__msg__VehicleLength__TYPE_NAME[] = "j2735_v2x_msgs/msg/VehicleLength";
static char j2735_v2x_msgs__msg__VehicleMass__TYPE_NAME[] = "j2735_v2x_msgs/msg/VehicleMass";
static char j2735_v2x_msgs__msg__VehicleSafetyExtensions__TYPE_NAME[] = "j2735_v2x_msgs/msg/VehicleSafetyExtensions";
static char j2735_v2x_msgs__msg__VehicleSize__TYPE_NAME[] = "j2735_v2x_msgs/msg/VehicleSize";
static char j2735_v2x_msgs__msg__VehicleType__TYPE_NAME[] = "j2735_v2x_msgs/msg/VehicleType";
static char j2735_v2x_msgs__msg__VehicleWidth__TYPE_NAME[] = "j2735_v2x_msgs/msg/VehicleWidth";
static char j2735_v2x_msgs__msg__Velocity__TYPE_NAME[] = "j2735_v2x_msgs/msg/Velocity";
static char j2735_v2x_msgs__msg__VertOffsetB07__TYPE_NAME[] = "j2735_v2x_msgs/msg/VertOffsetB07";
static char j2735_v2x_msgs__msg__VertOffsetB12__TYPE_NAME[] = "j2735_v2x_msgs/msg/VertOffsetB12";
static char j2735_v2x_msgs__msg__VerticalAccelerationThreshold__TYPE_NAME[] = "j2735_v2x_msgs/msg/VerticalAccelerationThreshold";
static char j2735_v2x_msgs__msg__WeatherProbe__TYPE_NAME[] = "j2735_v2x_msgs/msg/WeatherProbe";
static char j2735_v2x_msgs__msg__WeatherReport__TYPE_NAME[] = "j2735_v2x_msgs/msg/WeatherReport";
static char j2735_v2x_msgs__msg__WiperRate__TYPE_NAME[] = "j2735_v2x_msgs/msg/WiperRate";
static char j2735_v2x_msgs__msg__WiperSet__TYPE_NAME[] = "j2735_v2x_msgs/msg/WiperSet";
static char j2735_v2x_msgs__msg__WiperStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/WiperStatus";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__BSM__FIELD_NAME__header[] = "header";
static char j2735_v2x_msgs__msg__BSM__FIELD_NAME__core_data[] = "core_data";
static char j2735_v2x_msgs__msg__BSM__FIELD_NAME__presence_vector[] = "presence_vector";
static char j2735_v2x_msgs__msg__BSM__FIELD_NAME__part_ii[] = "part_ii";
static char j2735_v2x_msgs__msg__BSM__FIELD_NAME__regional[] = "regional";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__BSM__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__BSM__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BSM__FIELD_NAME__core_data, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__BSMCoreData__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BSM__FIELD_NAME__presence_vector, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BSM__FIELD_NAME__part_ii, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {j2735_v2x_msgs__msg__BSMPartIIExtension__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BSM__FIELD_NAME__regional, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {j2735_v2x_msgs__msg__BSMRegionalExtension__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__BSM__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__AccelerationSet4Way__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
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
    {j2735_v2x_msgs__msg__AntiLockBrakeStatus__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BSMCoreData__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BSMPartIIExtension__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BSMRegionalExtension__TYPE_NAME, 39, 39},
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
    {j2735_v2x_msgs__msg__BrakeAppliedStatus__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BrakeBoostApplied__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BrakeSystemStatus__TYPE_NAME, 36, 36},
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
    {j2735_v2x_msgs__msg__CoarseHeading__TYPE_NAME, 32, 32},
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
    {j2735_v2x_msgs__msg__Elevation__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ElevationConfidence__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__EmergencyDetails__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__EventDescription__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__Extent__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ExteriorLights__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__FuelType__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__FullPositionVector__TYPE_NAME, 37, 37},
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
    {j2735_v2x_msgs__msg__Heading__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__HeadingConfidence__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__HeadingSlice__TYPE_NAME, 31, 31},
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
    {j2735_v2x_msgs__msg__IsDolly__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__Latitude__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LightbarInUse__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__Longitude__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__MultiVehicleResponse__TYPE_NAME, 39, 39},
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
    {j2735_v2x_msgs__msg__NodeXY24b__TYPE_NAME, 28, 28},
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
    {j2735_v2x_msgs__msg__OffsetB11__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__OffsetB12__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__OffsetLLB18__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PathHistory__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PathHistoryPoint__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PathHistoryPointList__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PathPrediction__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PivotPointDescription__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PivotingAllowed__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__Position3D__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PositionConfidence__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PositionConfidenceSet__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PositionalAccuracy__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__Priority__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PrivilegedEventFlags__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PrivilegedEvents__TYPE_NAME, 35, 35},
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
    {j2735_v2x_msgs__msg__ResponseType__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__SirenInUse__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__SpecialVehicleExtensions__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__Speed__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__SpeedConfidence__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__TYPE_NAME, 55, 55},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__StabilityControlStatus__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__SupplementalVehicleExtensions__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ThrottleConfidence__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TimeConfidence__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TimeOffset__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TractionControlStatus__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrailerData__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrailerHistoryPoint__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrailerHistoryPointList__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrailerMass__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrailerUnitDescription__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrailerUnitDescriptionList__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrailerWeight__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TransmissionAndSpeed__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TransmissionState__TYPE_NAME, 36, 36},
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
    {j2735_v2x_msgs__msg__VehicleEventFlags__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VehicleHeight__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VehicleLength__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VehicleMass__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VehicleSafetyExtensions__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VehicleSize__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VehicleType__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VehicleWidth__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__Velocity__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VertOffsetB07__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VertOffsetB12__TYPE_NAME, 32, 32},
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
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__BSM__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__BSM__TYPE_NAME, 22, 22},
      {j2735_v2x_msgs__msg__BSM__FIELDS, 5, 5},
    },
    {j2735_v2x_msgs__msg__BSM__REFERENCED_TYPE_DESCRIPTIONS, 121, 121},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AccelerationSet4Way__EXPECTED_HASH, j2735_v2x_msgs__msg__AccelerationSet4Way__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__AccelerationSet4Way__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AmbientAirPressure__EXPECTED_HASH, j2735_v2x_msgs__msg__AmbientAirPressure__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__AmbientAirPressure__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AmbientAirTemperature__EXPECTED_HASH, j2735_v2x_msgs__msg__AmbientAirTemperature__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = j2735_v2x_msgs__msg__AmbientAirTemperature__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Angle__EXPECTED_HASH, j2735_v2x_msgs__msg__Angle__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = j2735_v2x_msgs__msg__Angle__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AntiLockBrakeStatus__EXPECTED_HASH, j2735_v2x_msgs__msg__AntiLockBrakeStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = j2735_v2x_msgs__msg__AntiLockBrakeStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__EXPECTED_HASH, j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__BSMCoreData__EXPECTED_HASH, j2735_v2x_msgs__msg__BSMCoreData__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = j2735_v2x_msgs__msg__BSMCoreData__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__BSMPartIIExtension__EXPECTED_HASH, j2735_v2x_msgs__msg__BSMPartIIExtension__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = j2735_v2x_msgs__msg__BSMPartIIExtension__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__BSMRegionalExtension__EXPECTED_HASH, j2735_v2x_msgs__msg__BSMRegionalExtension__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = j2735_v2x_msgs__msg__BSMRegionalExtension__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__BasicVehicleClass__EXPECTED_HASH, j2735_v2x_msgs__msg__BasicVehicleClass__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = j2735_v2x_msgs__msg__BasicVehicleClass__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__BasicVehicleRole__EXPECTED_HASH, j2735_v2x_msgs__msg__BasicVehicleRole__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = j2735_v2x_msgs__msg__BasicVehicleRole__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__BrakeAppliedStatus__EXPECTED_HASH, j2735_v2x_msgs__msg__BrakeAppliedStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[12].fields = j2735_v2x_msgs__msg__BrakeAppliedStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__BrakeBoostApplied__EXPECTED_HASH, j2735_v2x_msgs__msg__BrakeBoostApplied__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[13].fields = j2735_v2x_msgs__msg__BrakeBoostApplied__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__BrakeSystemStatus__EXPECTED_HASH, j2735_v2x_msgs__msg__BrakeSystemStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[14].fields = j2735_v2x_msgs__msg__BrakeSystemStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__BumperHeight__EXPECTED_HASH, j2735_v2x_msgs__msg__BumperHeight__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[15].fields = j2735_v2x_msgs__msg__BumperHeight__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__BumperHeights__EXPECTED_HASH, j2735_v2x_msgs__msg__BumperHeights__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[16].fields = j2735_v2x_msgs__msg__BumperHeights__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__CoarseHeading__EXPECTED_HASH, j2735_v2x_msgs__msg__CoarseHeading__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[17].fields = j2735_v2x_msgs__msg__CoarseHeading__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__CoefficientOfFriction__EXPECTED_HASH, j2735_v2x_msgs__msg__CoefficientOfFriction__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[18].fields = j2735_v2x_msgs__msg__CoefficientOfFriction__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DDateTime__EXPECTED_HASH, j2735_v2x_msgs__msg__DDateTime__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[19].fields = j2735_v2x_msgs__msg__DDateTime__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DDay__EXPECTED_HASH, j2735_v2x_msgs__msg__DDay__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[20].fields = j2735_v2x_msgs__msg__DDay__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DHour__EXPECTED_HASH, j2735_v2x_msgs__msg__DHour__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[21].fields = j2735_v2x_msgs__msg__DHour__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DMinute__EXPECTED_HASH, j2735_v2x_msgs__msg__DMinute__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[22].fields = j2735_v2x_msgs__msg__DMinute__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DMonth__EXPECTED_HASH, j2735_v2x_msgs__msg__DMonth__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[23].fields = j2735_v2x_msgs__msg__DMonth__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DOffset__EXPECTED_HASH, j2735_v2x_msgs__msg__DOffset__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[24].fields = j2735_v2x_msgs__msg__DOffset__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DSecond__EXPECTED_HASH, j2735_v2x_msgs__msg__DSecond__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[25].fields = j2735_v2x_msgs__msg__DSecond__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DYear__EXPECTED_HASH, j2735_v2x_msgs__msg__DYear__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[26].fields = j2735_v2x_msgs__msg__DYear__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DisabledVehicle__EXPECTED_HASH, j2735_v2x_msgs__msg__DisabledVehicle__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[27].fields = j2735_v2x_msgs__msg__DisabledVehicle__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Elevation__EXPECTED_HASH, j2735_v2x_msgs__msg__Elevation__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[28].fields = j2735_v2x_msgs__msg__Elevation__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ElevationConfidence__EXPECTED_HASH, j2735_v2x_msgs__msg__ElevationConfidence__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[29].fields = j2735_v2x_msgs__msg__ElevationConfidence__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__EmergencyDetails__EXPECTED_HASH, j2735_v2x_msgs__msg__EmergencyDetails__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[30].fields = j2735_v2x_msgs__msg__EmergencyDetails__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__EventDescription__EXPECTED_HASH, j2735_v2x_msgs__msg__EventDescription__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[31].fields = j2735_v2x_msgs__msg__EventDescription__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Extent__EXPECTED_HASH, j2735_v2x_msgs__msg__Extent__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[32].fields = j2735_v2x_msgs__msg__Extent__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ExteriorLights__EXPECTED_HASH, j2735_v2x_msgs__msg__ExteriorLights__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[33].fields = j2735_v2x_msgs__msg__ExteriorLights__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__FuelType__EXPECTED_HASH, j2735_v2x_msgs__msg__FuelType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[34].fields = j2735_v2x_msgs__msg__FuelType__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__FullPositionVector__EXPECTED_HASH, j2735_v2x_msgs__msg__FullPositionVector__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[35].fields = j2735_v2x_msgs__msg__FullPositionVector__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__GNSSStatus__EXPECTED_HASH, j2735_v2x_msgs__msg__GNSSStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[36].fields = j2735_v2x_msgs__msg__GNSSStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__GrossSpeed__EXPECTED_HASH, j2735_v2x_msgs__msg__GrossSpeed__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[37].fields = j2735_v2x_msgs__msg__GrossSpeed__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Heading__EXPECTED_HASH, j2735_v2x_msgs__msg__Heading__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[38].fields = j2735_v2x_msgs__msg__Heading__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__HeadingConfidence__EXPECTED_HASH, j2735_v2x_msgs__msg__HeadingConfidence__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[39].fields = j2735_v2x_msgs__msg__HeadingConfidence__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__HeadingSlice__EXPECTED_HASH, j2735_v2x_msgs__msg__HeadingSlice__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[40].fields = j2735_v2x_msgs__msg__HeadingSlice__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ITISGenericLocations__EXPECTED_HASH, j2735_v2x_msgs__msg__ITISGenericLocations__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[41].fields = j2735_v2x_msgs__msg__ITISGenericLocations__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__EXPECTED_HASH, j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[42].fields = j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ITISResponderGroupAffected__EXPECTED_HASH, j2735_v2x_msgs__msg__ITISResponderGroupAffected__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[43].fields = j2735_v2x_msgs__msg__ITISResponderGroupAffected__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ITISVehicleGroupAffected__EXPECTED_HASH, j2735_v2x_msgs__msg__ITISVehicleGroupAffected__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[44].fields = j2735_v2x_msgs__msg__ITISVehicleGroupAffected__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ITIScodes__EXPECTED_HASH, j2735_v2x_msgs__msg__ITIScodes__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[45].fields = j2735_v2x_msgs__msg__ITIScodes__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__IsDolly__EXPECTED_HASH, j2735_v2x_msgs__msg__IsDolly__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[46].fields = j2735_v2x_msgs__msg__IsDolly__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Latitude__EXPECTED_HASH, j2735_v2x_msgs__msg__Latitude__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[47].fields = j2735_v2x_msgs__msg__Latitude__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__LightbarInUse__EXPECTED_HASH, j2735_v2x_msgs__msg__LightbarInUse__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[48].fields = j2735_v2x_msgs__msg__LightbarInUse__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Longitude__EXPECTED_HASH, j2735_v2x_msgs__msg__Longitude__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[49].fields = j2735_v2x_msgs__msg__Longitude__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__MultiVehicleResponse__EXPECTED_HASH, j2735_v2x_msgs__msg__MultiVehicleResponse__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[50].fields = j2735_v2x_msgs__msg__MultiVehicleResponse__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NTCIPEssMobileFriction__EXPECTED_HASH, j2735_v2x_msgs__msg__NTCIPEssMobileFriction__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[51].fields = j2735_v2x_msgs__msg__NTCIPEssMobileFriction__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NTCIPEssPrecipRate__EXPECTED_HASH, j2735_v2x_msgs__msg__NTCIPEssPrecipRate__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[52].fields = j2735_v2x_msgs__msg__NTCIPEssPrecipRate__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__EXPECTED_HASH, j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[53].fields = j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__EXPECTED_HASH, j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[54].fields = j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__EXPECTED_HASH, j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[55].fields = j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeXY24b__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeXY24b__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[56].fields = j2735_v2x_msgs__msg__NodeXY24b__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ObstacleDetection__EXPECTED_HASH, j2735_v2x_msgs__msg__ObstacleDetection__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[57].fields = j2735_v2x_msgs__msg__ObstacleDetection__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ObstacleDirection__EXPECTED_HASH, j2735_v2x_msgs__msg__ObstacleDirection__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[58].fields = j2735_v2x_msgs__msg__ObstacleDirection__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ObstacleDistance__EXPECTED_HASH, j2735_v2x_msgs__msg__ObstacleDistance__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[59].fields = j2735_v2x_msgs__msg__ObstacleDistance__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__OffsetB09__EXPECTED_HASH, j2735_v2x_msgs__msg__OffsetB09__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[60].fields = j2735_v2x_msgs__msg__OffsetB09__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__OffsetB10__EXPECTED_HASH, j2735_v2x_msgs__msg__OffsetB10__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[61].fields = j2735_v2x_msgs__msg__OffsetB10__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__OffsetB11__EXPECTED_HASH, j2735_v2x_msgs__msg__OffsetB11__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[62].fields = j2735_v2x_msgs__msg__OffsetB11__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__OffsetB12__EXPECTED_HASH, j2735_v2x_msgs__msg__OffsetB12__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[63].fields = j2735_v2x_msgs__msg__OffsetB12__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__OffsetLLB18__EXPECTED_HASH, j2735_v2x_msgs__msg__OffsetLLB18__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[64].fields = j2735_v2x_msgs__msg__OffsetLLB18__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PathHistory__EXPECTED_HASH, j2735_v2x_msgs__msg__PathHistory__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[65].fields = j2735_v2x_msgs__msg__PathHistory__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PathHistoryPoint__EXPECTED_HASH, j2735_v2x_msgs__msg__PathHistoryPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[66].fields = j2735_v2x_msgs__msg__PathHistoryPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PathHistoryPointList__EXPECTED_HASH, j2735_v2x_msgs__msg__PathHistoryPointList__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[67].fields = j2735_v2x_msgs__msg__PathHistoryPointList__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PathPrediction__EXPECTED_HASH, j2735_v2x_msgs__msg__PathPrediction__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[68].fields = j2735_v2x_msgs__msg__PathPrediction__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PivotPointDescription__EXPECTED_HASH, j2735_v2x_msgs__msg__PivotPointDescription__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[69].fields = j2735_v2x_msgs__msg__PivotPointDescription__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PivotingAllowed__EXPECTED_HASH, j2735_v2x_msgs__msg__PivotingAllowed__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[70].fields = j2735_v2x_msgs__msg__PivotingAllowed__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Position3D__EXPECTED_HASH, j2735_v2x_msgs__msg__Position3D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[71].fields = j2735_v2x_msgs__msg__Position3D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PositionConfidence__EXPECTED_HASH, j2735_v2x_msgs__msg__PositionConfidence__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[72].fields = j2735_v2x_msgs__msg__PositionConfidence__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PositionConfidenceSet__EXPECTED_HASH, j2735_v2x_msgs__msg__PositionConfidenceSet__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[73].fields = j2735_v2x_msgs__msg__PositionConfidenceSet__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PositionalAccuracy__EXPECTED_HASH, j2735_v2x_msgs__msg__PositionalAccuracy__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[74].fields = j2735_v2x_msgs__msg__PositionalAccuracy__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Priority__EXPECTED_HASH, j2735_v2x_msgs__msg__Priority__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[75].fields = j2735_v2x_msgs__msg__Priority__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PrivilegedEventFlags__EXPECTED_HASH, j2735_v2x_msgs__msg__PrivilegedEventFlags__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[76].fields = j2735_v2x_msgs__msg__PrivilegedEventFlags__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PrivilegedEvents__EXPECTED_HASH, j2735_v2x_msgs__msg__PrivilegedEvents__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[77].fields = j2735_v2x_msgs__msg__PrivilegedEvents__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__RTCMHeader__EXPECTED_HASH, j2735_v2x_msgs__msg__RTCMHeader__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[78].fields = j2735_v2x_msgs__msg__RTCMHeader__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__RTCMPackage__EXPECTED_HASH, j2735_v2x_msgs__msg__RTCMPackage__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[79].fields = j2735_v2x_msgs__msg__RTCMPackage__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ResponseType__EXPECTED_HASH, j2735_v2x_msgs__msg__ResponseType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[80].fields = j2735_v2x_msgs__msg__ResponseType__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__SirenInUse__EXPECTED_HASH, j2735_v2x_msgs__msg__SirenInUse__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[81].fields = j2735_v2x_msgs__msg__SirenInUse__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__SpecialVehicleExtensions__EXPECTED_HASH, j2735_v2x_msgs__msg__SpecialVehicleExtensions__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[82].fields = j2735_v2x_msgs__msg__SpecialVehicleExtensions__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Speed__EXPECTED_HASH, j2735_v2x_msgs__msg__Speed__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[83].fields = j2735_v2x_msgs__msg__Speed__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__SpeedConfidence__EXPECTED_HASH, j2735_v2x_msgs__msg__SpeedConfidence__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[84].fields = j2735_v2x_msgs__msg__SpeedConfidence__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__EXPECTED_HASH, j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[85].fields = j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__StabilityControlStatus__EXPECTED_HASH, j2735_v2x_msgs__msg__StabilityControlStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[86].fields = j2735_v2x_msgs__msg__StabilityControlStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__SupplementalVehicleExtensions__EXPECTED_HASH, j2735_v2x_msgs__msg__SupplementalVehicleExtensions__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[87].fields = j2735_v2x_msgs__msg__SupplementalVehicleExtensions__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ThrottleConfidence__EXPECTED_HASH, j2735_v2x_msgs__msg__ThrottleConfidence__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[88].fields = j2735_v2x_msgs__msg__ThrottleConfidence__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TimeConfidence__EXPECTED_HASH, j2735_v2x_msgs__msg__TimeConfidence__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[89].fields = j2735_v2x_msgs__msg__TimeConfidence__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TimeOffset__EXPECTED_HASH, j2735_v2x_msgs__msg__TimeOffset__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[90].fields = j2735_v2x_msgs__msg__TimeOffset__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TractionControlStatus__EXPECTED_HASH, j2735_v2x_msgs__msg__TractionControlStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[91].fields = j2735_v2x_msgs__msg__TractionControlStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TrailerData__EXPECTED_HASH, j2735_v2x_msgs__msg__TrailerData__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[92].fields = j2735_v2x_msgs__msg__TrailerData__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TrailerHistoryPoint__EXPECTED_HASH, j2735_v2x_msgs__msg__TrailerHistoryPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[93].fields = j2735_v2x_msgs__msg__TrailerHistoryPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TrailerHistoryPointList__EXPECTED_HASH, j2735_v2x_msgs__msg__TrailerHistoryPointList__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[94].fields = j2735_v2x_msgs__msg__TrailerHistoryPointList__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TrailerMass__EXPECTED_HASH, j2735_v2x_msgs__msg__TrailerMass__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[95].fields = j2735_v2x_msgs__msg__TrailerMass__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TrailerUnitDescription__EXPECTED_HASH, j2735_v2x_msgs__msg__TrailerUnitDescription__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[96].fields = j2735_v2x_msgs__msg__TrailerUnitDescription__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TrailerUnitDescriptionList__EXPECTED_HASH, j2735_v2x_msgs__msg__TrailerUnitDescriptionList__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[97].fields = j2735_v2x_msgs__msg__TrailerUnitDescriptionList__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TrailerWeight__EXPECTED_HASH, j2735_v2x_msgs__msg__TrailerWeight__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[98].fields = j2735_v2x_msgs__msg__TrailerWeight__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TransmissionAndSpeed__EXPECTED_HASH, j2735_v2x_msgs__msg__TransmissionAndSpeed__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[99].fields = j2735_v2x_msgs__msg__TransmissionAndSpeed__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TransmissionState__EXPECTED_HASH, j2735_v2x_msgs__msg__TransmissionState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[100].fields = j2735_v2x_msgs__msg__TransmissionState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__VehicleClassification__EXPECTED_HASH, j2735_v2x_msgs__msg__VehicleClassification__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[101].fields = j2735_v2x_msgs__msg__VehicleClassification__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__VehicleData__EXPECTED_HASH, j2735_v2x_msgs__msg__VehicleData__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[102].fields = j2735_v2x_msgs__msg__VehicleData__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__VehicleEventFlags__EXPECTED_HASH, j2735_v2x_msgs__msg__VehicleEventFlags__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[103].fields = j2735_v2x_msgs__msg__VehicleEventFlags__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__VehicleHeight__EXPECTED_HASH, j2735_v2x_msgs__msg__VehicleHeight__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[104].fields = j2735_v2x_msgs__msg__VehicleHeight__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__VehicleLength__EXPECTED_HASH, j2735_v2x_msgs__msg__VehicleLength__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[105].fields = j2735_v2x_msgs__msg__VehicleLength__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__VehicleMass__EXPECTED_HASH, j2735_v2x_msgs__msg__VehicleMass__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[106].fields = j2735_v2x_msgs__msg__VehicleMass__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__VehicleSafetyExtensions__EXPECTED_HASH, j2735_v2x_msgs__msg__VehicleSafetyExtensions__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[107].fields = j2735_v2x_msgs__msg__VehicleSafetyExtensions__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__VehicleSize__EXPECTED_HASH, j2735_v2x_msgs__msg__VehicleSize__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[108].fields = j2735_v2x_msgs__msg__VehicleSize__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__VehicleType__EXPECTED_HASH, j2735_v2x_msgs__msg__VehicleType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[109].fields = j2735_v2x_msgs__msg__VehicleType__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__VehicleWidth__EXPECTED_HASH, j2735_v2x_msgs__msg__VehicleWidth__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[110].fields = j2735_v2x_msgs__msg__VehicleWidth__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Velocity__EXPECTED_HASH, j2735_v2x_msgs__msg__Velocity__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[111].fields = j2735_v2x_msgs__msg__Velocity__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__VertOffsetB07__EXPECTED_HASH, j2735_v2x_msgs__msg__VertOffsetB07__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[112].fields = j2735_v2x_msgs__msg__VertOffsetB07__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__VertOffsetB12__EXPECTED_HASH, j2735_v2x_msgs__msg__VertOffsetB12__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[113].fields = j2735_v2x_msgs__msg__VertOffsetB12__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__VerticalAccelerationThreshold__EXPECTED_HASH, j2735_v2x_msgs__msg__VerticalAccelerationThreshold__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[114].fields = j2735_v2x_msgs__msg__VerticalAccelerationThreshold__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__WeatherProbe__EXPECTED_HASH, j2735_v2x_msgs__msg__WeatherProbe__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[115].fields = j2735_v2x_msgs__msg__WeatherProbe__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__WeatherReport__EXPECTED_HASH, j2735_v2x_msgs__msg__WeatherReport__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[116].fields = j2735_v2x_msgs__msg__WeatherReport__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__WiperRate__EXPECTED_HASH, j2735_v2x_msgs__msg__WiperRate__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[117].fields = j2735_v2x_msgs__msg__WiperRate__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__WiperSet__EXPECTED_HASH, j2735_v2x_msgs__msg__WiperSet__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[118].fields = j2735_v2x_msgs__msg__WiperSet__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__WiperStatus__EXPECTED_HASH, j2735_v2x_msgs__msg__WiperStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[119].fields = j2735_v2x_msgs__msg__WiperStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[120].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# BSM.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "\n"
  "std_msgs/Header header\n"
  "\n"
  "# -- Part I, Sent at all times with each message\n"
  "j2735_v2x_msgs/BSMCoreData core_data\n"
  "\n"
  "#    -- Part II Content\n"
  "\n"
  "# A BIT STRING defining the presence of optional fields.\n"
  "# Compare with bitwise-and\n"
  "# if (presence_vector & HAS_PART_II_EXTENSION) etc.\n"
  "# Create with bitwise-or\n"
  "# presence_vector = presence_vector | HAS_PART_II_EXTENSION\n"
  "uint8 presence_vector\n"
  "\n"
  "uint8 HAS_PART_II = 1\n"
  "uint8 HAS_REGIONAL = 2\n"
  "\n"
  "#    partII        SEQUENCE (SIZE(1..8)) OF \n"
  "#                  PartIIcontent {{ BSMpartIIExtension }} OPTIONAL,\n"
  "j2735_v2x_msgs/BSMPartIIExtension[] part_ii\n"
  "\n"
  "uint8 PART_II_MIN_SIZE = 1\n"
  "uint8 PART_II_MAX_SIZE = 8\n"
  "\n"
  "#    regional      SEQUENCE (SIZE(1..4)) OF \n"
  "#                 RegionalExtension {{REGION.Reg-BasicSafetyMessage}} OPTIONAL,\n"
  "j2735_v2x_msgs/BSMRegionalExtension[] regional\n"
  "\n"
  "uint8 REGIONAL_MIN_SIZE = 1\n"
  "uint8 REGIONAL_MAX_SIZE = 4";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__BSM__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__BSM__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 950, 950},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__BSM__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[122];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 122, 122};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__BSM__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__AccelerationSet4Way__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__AmbientAirPressure__get_individual_type_description_source(NULL);
    sources[4] = *j2735_v2x_msgs__msg__AmbientAirTemperature__get_individual_type_description_source(NULL);
    sources[5] = *j2735_v2x_msgs__msg__Angle__get_individual_type_description_source(NULL);
    sources[6] = *j2735_v2x_msgs__msg__AntiLockBrakeStatus__get_individual_type_description_source(NULL);
    sources[7] = *j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__get_individual_type_description_source(NULL);
    sources[8] = *j2735_v2x_msgs__msg__BSMCoreData__get_individual_type_description_source(NULL);
    sources[9] = *j2735_v2x_msgs__msg__BSMPartIIExtension__get_individual_type_description_source(NULL);
    sources[10] = *j2735_v2x_msgs__msg__BSMRegionalExtension__get_individual_type_description_source(NULL);
    sources[11] = *j2735_v2x_msgs__msg__BasicVehicleClass__get_individual_type_description_source(NULL);
    sources[12] = *j2735_v2x_msgs__msg__BasicVehicleRole__get_individual_type_description_source(NULL);
    sources[13] = *j2735_v2x_msgs__msg__BrakeAppliedStatus__get_individual_type_description_source(NULL);
    sources[14] = *j2735_v2x_msgs__msg__BrakeBoostApplied__get_individual_type_description_source(NULL);
    sources[15] = *j2735_v2x_msgs__msg__BrakeSystemStatus__get_individual_type_description_source(NULL);
    sources[16] = *j2735_v2x_msgs__msg__BumperHeight__get_individual_type_description_source(NULL);
    sources[17] = *j2735_v2x_msgs__msg__BumperHeights__get_individual_type_description_source(NULL);
    sources[18] = *j2735_v2x_msgs__msg__CoarseHeading__get_individual_type_description_source(NULL);
    sources[19] = *j2735_v2x_msgs__msg__CoefficientOfFriction__get_individual_type_description_source(NULL);
    sources[20] = *j2735_v2x_msgs__msg__DDateTime__get_individual_type_description_source(NULL);
    sources[21] = *j2735_v2x_msgs__msg__DDay__get_individual_type_description_source(NULL);
    sources[22] = *j2735_v2x_msgs__msg__DHour__get_individual_type_description_source(NULL);
    sources[23] = *j2735_v2x_msgs__msg__DMinute__get_individual_type_description_source(NULL);
    sources[24] = *j2735_v2x_msgs__msg__DMonth__get_individual_type_description_source(NULL);
    sources[25] = *j2735_v2x_msgs__msg__DOffset__get_individual_type_description_source(NULL);
    sources[26] = *j2735_v2x_msgs__msg__DSecond__get_individual_type_description_source(NULL);
    sources[27] = *j2735_v2x_msgs__msg__DYear__get_individual_type_description_source(NULL);
    sources[28] = *j2735_v2x_msgs__msg__DisabledVehicle__get_individual_type_description_source(NULL);
    sources[29] = *j2735_v2x_msgs__msg__Elevation__get_individual_type_description_source(NULL);
    sources[30] = *j2735_v2x_msgs__msg__ElevationConfidence__get_individual_type_description_source(NULL);
    sources[31] = *j2735_v2x_msgs__msg__EmergencyDetails__get_individual_type_description_source(NULL);
    sources[32] = *j2735_v2x_msgs__msg__EventDescription__get_individual_type_description_source(NULL);
    sources[33] = *j2735_v2x_msgs__msg__Extent__get_individual_type_description_source(NULL);
    sources[34] = *j2735_v2x_msgs__msg__ExteriorLights__get_individual_type_description_source(NULL);
    sources[35] = *j2735_v2x_msgs__msg__FuelType__get_individual_type_description_source(NULL);
    sources[36] = *j2735_v2x_msgs__msg__FullPositionVector__get_individual_type_description_source(NULL);
    sources[37] = *j2735_v2x_msgs__msg__GNSSStatus__get_individual_type_description_source(NULL);
    sources[38] = *j2735_v2x_msgs__msg__GrossSpeed__get_individual_type_description_source(NULL);
    sources[39] = *j2735_v2x_msgs__msg__Heading__get_individual_type_description_source(NULL);
    sources[40] = *j2735_v2x_msgs__msg__HeadingConfidence__get_individual_type_description_source(NULL);
    sources[41] = *j2735_v2x_msgs__msg__HeadingSlice__get_individual_type_description_source(NULL);
    sources[42] = *j2735_v2x_msgs__msg__ITISGenericLocations__get_individual_type_description_source(NULL);
    sources[43] = *j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__get_individual_type_description_source(NULL);
    sources[44] = *j2735_v2x_msgs__msg__ITISResponderGroupAffected__get_individual_type_description_source(NULL);
    sources[45] = *j2735_v2x_msgs__msg__ITISVehicleGroupAffected__get_individual_type_description_source(NULL);
    sources[46] = *j2735_v2x_msgs__msg__ITIScodes__get_individual_type_description_source(NULL);
    sources[47] = *j2735_v2x_msgs__msg__IsDolly__get_individual_type_description_source(NULL);
    sources[48] = *j2735_v2x_msgs__msg__Latitude__get_individual_type_description_source(NULL);
    sources[49] = *j2735_v2x_msgs__msg__LightbarInUse__get_individual_type_description_source(NULL);
    sources[50] = *j2735_v2x_msgs__msg__Longitude__get_individual_type_description_source(NULL);
    sources[51] = *j2735_v2x_msgs__msg__MultiVehicleResponse__get_individual_type_description_source(NULL);
    sources[52] = *j2735_v2x_msgs__msg__NTCIPEssMobileFriction__get_individual_type_description_source(NULL);
    sources[53] = *j2735_v2x_msgs__msg__NTCIPEssPrecipRate__get_individual_type_description_source(NULL);
    sources[54] = *j2735_v2x_msgs__msg__NTCIPEssPrecipSituation__get_individual_type_description_source(NULL);
    sources[55] = *j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__get_individual_type_description_source(NULL);
    sources[56] = *j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__get_individual_type_description_source(NULL);
    sources[57] = *j2735_v2x_msgs__msg__NodeXY24b__get_individual_type_description_source(NULL);
    sources[58] = *j2735_v2x_msgs__msg__ObstacleDetection__get_individual_type_description_source(NULL);
    sources[59] = *j2735_v2x_msgs__msg__ObstacleDirection__get_individual_type_description_source(NULL);
    sources[60] = *j2735_v2x_msgs__msg__ObstacleDistance__get_individual_type_description_source(NULL);
    sources[61] = *j2735_v2x_msgs__msg__OffsetB09__get_individual_type_description_source(NULL);
    sources[62] = *j2735_v2x_msgs__msg__OffsetB10__get_individual_type_description_source(NULL);
    sources[63] = *j2735_v2x_msgs__msg__OffsetB11__get_individual_type_description_source(NULL);
    sources[64] = *j2735_v2x_msgs__msg__OffsetB12__get_individual_type_description_source(NULL);
    sources[65] = *j2735_v2x_msgs__msg__OffsetLLB18__get_individual_type_description_source(NULL);
    sources[66] = *j2735_v2x_msgs__msg__PathHistory__get_individual_type_description_source(NULL);
    sources[67] = *j2735_v2x_msgs__msg__PathHistoryPoint__get_individual_type_description_source(NULL);
    sources[68] = *j2735_v2x_msgs__msg__PathHistoryPointList__get_individual_type_description_source(NULL);
    sources[69] = *j2735_v2x_msgs__msg__PathPrediction__get_individual_type_description_source(NULL);
    sources[70] = *j2735_v2x_msgs__msg__PivotPointDescription__get_individual_type_description_source(NULL);
    sources[71] = *j2735_v2x_msgs__msg__PivotingAllowed__get_individual_type_description_source(NULL);
    sources[72] = *j2735_v2x_msgs__msg__Position3D__get_individual_type_description_source(NULL);
    sources[73] = *j2735_v2x_msgs__msg__PositionConfidence__get_individual_type_description_source(NULL);
    sources[74] = *j2735_v2x_msgs__msg__PositionConfidenceSet__get_individual_type_description_source(NULL);
    sources[75] = *j2735_v2x_msgs__msg__PositionalAccuracy__get_individual_type_description_source(NULL);
    sources[76] = *j2735_v2x_msgs__msg__Priority__get_individual_type_description_source(NULL);
    sources[77] = *j2735_v2x_msgs__msg__PrivilegedEventFlags__get_individual_type_description_source(NULL);
    sources[78] = *j2735_v2x_msgs__msg__PrivilegedEvents__get_individual_type_description_source(NULL);
    sources[79] = *j2735_v2x_msgs__msg__RTCMHeader__get_individual_type_description_source(NULL);
    sources[80] = *j2735_v2x_msgs__msg__RTCMPackage__get_individual_type_description_source(NULL);
    sources[81] = *j2735_v2x_msgs__msg__ResponseType__get_individual_type_description_source(NULL);
    sources[82] = *j2735_v2x_msgs__msg__SirenInUse__get_individual_type_description_source(NULL);
    sources[83] = *j2735_v2x_msgs__msg__SpecialVehicleExtensions__get_individual_type_description_source(NULL);
    sources[84] = *j2735_v2x_msgs__msg__Speed__get_individual_type_description_source(NULL);
    sources[85] = *j2735_v2x_msgs__msg__SpeedConfidence__get_individual_type_description_source(NULL);
    sources[86] = *j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__get_individual_type_description_source(NULL);
    sources[87] = *j2735_v2x_msgs__msg__StabilityControlStatus__get_individual_type_description_source(NULL);
    sources[88] = *j2735_v2x_msgs__msg__SupplementalVehicleExtensions__get_individual_type_description_source(NULL);
    sources[89] = *j2735_v2x_msgs__msg__ThrottleConfidence__get_individual_type_description_source(NULL);
    sources[90] = *j2735_v2x_msgs__msg__TimeConfidence__get_individual_type_description_source(NULL);
    sources[91] = *j2735_v2x_msgs__msg__TimeOffset__get_individual_type_description_source(NULL);
    sources[92] = *j2735_v2x_msgs__msg__TractionControlStatus__get_individual_type_description_source(NULL);
    sources[93] = *j2735_v2x_msgs__msg__TrailerData__get_individual_type_description_source(NULL);
    sources[94] = *j2735_v2x_msgs__msg__TrailerHistoryPoint__get_individual_type_description_source(NULL);
    sources[95] = *j2735_v2x_msgs__msg__TrailerHistoryPointList__get_individual_type_description_source(NULL);
    sources[96] = *j2735_v2x_msgs__msg__TrailerMass__get_individual_type_description_source(NULL);
    sources[97] = *j2735_v2x_msgs__msg__TrailerUnitDescription__get_individual_type_description_source(NULL);
    sources[98] = *j2735_v2x_msgs__msg__TrailerUnitDescriptionList__get_individual_type_description_source(NULL);
    sources[99] = *j2735_v2x_msgs__msg__TrailerWeight__get_individual_type_description_source(NULL);
    sources[100] = *j2735_v2x_msgs__msg__TransmissionAndSpeed__get_individual_type_description_source(NULL);
    sources[101] = *j2735_v2x_msgs__msg__TransmissionState__get_individual_type_description_source(NULL);
    sources[102] = *j2735_v2x_msgs__msg__VehicleClassification__get_individual_type_description_source(NULL);
    sources[103] = *j2735_v2x_msgs__msg__VehicleData__get_individual_type_description_source(NULL);
    sources[104] = *j2735_v2x_msgs__msg__VehicleEventFlags__get_individual_type_description_source(NULL);
    sources[105] = *j2735_v2x_msgs__msg__VehicleHeight__get_individual_type_description_source(NULL);
    sources[106] = *j2735_v2x_msgs__msg__VehicleLength__get_individual_type_description_source(NULL);
    sources[107] = *j2735_v2x_msgs__msg__VehicleMass__get_individual_type_description_source(NULL);
    sources[108] = *j2735_v2x_msgs__msg__VehicleSafetyExtensions__get_individual_type_description_source(NULL);
    sources[109] = *j2735_v2x_msgs__msg__VehicleSize__get_individual_type_description_source(NULL);
    sources[110] = *j2735_v2x_msgs__msg__VehicleType__get_individual_type_description_source(NULL);
    sources[111] = *j2735_v2x_msgs__msg__VehicleWidth__get_individual_type_description_source(NULL);
    sources[112] = *j2735_v2x_msgs__msg__Velocity__get_individual_type_description_source(NULL);
    sources[113] = *j2735_v2x_msgs__msg__VertOffsetB07__get_individual_type_description_source(NULL);
    sources[114] = *j2735_v2x_msgs__msg__VertOffsetB12__get_individual_type_description_source(NULL);
    sources[115] = *j2735_v2x_msgs__msg__VerticalAccelerationThreshold__get_individual_type_description_source(NULL);
    sources[116] = *j2735_v2x_msgs__msg__WeatherProbe__get_individual_type_description_source(NULL);
    sources[117] = *j2735_v2x_msgs__msg__WeatherReport__get_individual_type_description_source(NULL);
    sources[118] = *j2735_v2x_msgs__msg__WiperRate__get_individual_type_description_source(NULL);
    sources[119] = *j2735_v2x_msgs__msg__WiperSet__get_individual_type_description_source(NULL);
    sources[120] = *j2735_v2x_msgs__msg__WiperStatus__get_individual_type_description_source(NULL);
    sources[121] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
