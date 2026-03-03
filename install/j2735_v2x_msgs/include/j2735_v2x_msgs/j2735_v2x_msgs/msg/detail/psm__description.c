// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/PSM.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/psm__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__PSM__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xab, 0xcc, 0x5e, 0x62, 0xee, 0x04, 0xf9, 0xb0,
      0xee, 0x77, 0x7c, 0x45, 0x28, 0x1a, 0x14, 0x36,
      0xbf, 0xf5, 0x1d, 0x30, 0x77, 0xc1, 0xcc, 0x92,
      0xdf, 0x2e, 0x62, 0xc4, 0x72, 0x2f, 0xd7, 0x25,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/acceleration_set4_way__functions.h"
#include "j2735_v2x_msgs/msg/detail/path_history_point_list__functions.h"
#include "j2735_v2x_msgs/msg/detail/elevation_confidence__functions.h"
#include "j2735_v2x_msgs/msg/detail/elevation__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_hour__functions.h"
#include "j2735_v2x_msgs/msg/detail/speedand_headingand_throttle_confidence__functions.h"
#include "j2735_v2x_msgs/msg/detail/speed__functions.h"
#include "j2735_v2x_msgs/msg/detail/personal_device_usage_state__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_offset__functions.h"
#include "j2735_v2x_msgs/msg/detail/path_prediction__functions.h"
#include "j2735_v2x_msgs/msg/detail/user_size_and_behaviour__functions.h"
#include "j2735_v2x_msgs/msg/detail/gnss_status__functions.h"
#include "j2735_v2x_msgs/msg/detail/human_propelled_type__functions.h"
#include "j2735_v2x_msgs/msg/detail/public_safety_and_road_worker_activity__functions.h"
#include "j2735_v2x_msgs/msg/detail/coarse_heading__functions.h"
#include "j2735_v2x_msgs/msg/detail/position_confidence_set__functions.h"
#include "j2735_v2x_msgs/msg/detail/time_offset__functions.h"
#include "j2735_v2x_msgs/msg/detail/transmission_state__functions.h"
#include "j2735_v2x_msgs/msg/detail/latitude__functions.h"
#include "j2735_v2x_msgs/msg/detail/vert_offset_b12__functions.h"
#include "j2735_v2x_msgs/msg/detail/temporary_id__functions.h"
#include "j2735_v2x_msgs/msg/detail/personal_cluster_radius__functions.h"
#include "j2735_v2x_msgs/msg/detail/full_position_vector__functions.h"
#include "j2735_v2x_msgs/msg/detail/speed_confidence__functions.h"
#include "j2735_v2x_msgs/msg/detail/heading__functions.h"
#include "j2735_v2x_msgs/msg/detail/offset_llb18__functions.h"
#include "j2735_v2x_msgs/msg/detail/position3_d__functions.h"
#include "j2735_v2x_msgs/msg/detail/public_safety_directing_traffic_sub_type__functions.h"
#include "j2735_v2x_msgs/msg/detail/path_history_point__functions.h"
#include "j2735_v2x_msgs/msg/detail/number_of_participants_in_cluster__functions.h"
#include "j2735_v2x_msgs/msg/detail/personal_crossing_request__functions.h"
#include "j2735_v2x_msgs/msg/detail/positional_accuracy__functions.h"
#include "j2735_v2x_msgs/msg/detail/animal_type__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_date_time__functions.h"
#include "j2735_v2x_msgs/msg/detail/msg_count__functions.h"
#include "j2735_v2x_msgs/msg/detail/time_confidence__functions.h"
#include "j2735_v2x_msgs/msg/detail/attachment_radius__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_day__functions.h"
#include "j2735_v2x_msgs/msg/detail/throttle_confidence__functions.h"
#include "j2735_v2x_msgs/msg/detail/propelled_information__functions.h"
#include "j2735_v2x_msgs/msg/detail/heading_confidence__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_minute__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_second__functions.h"
#include "j2735_v2x_msgs/msg/detail/motorized_propelled_type__functions.h"
#include "j2735_v2x_msgs/msg/detail/attachment__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_year__functions.h"
#include "j2735_v2x_msgs/msg/detail/longitude__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_month__functions.h"
#include "j2735_v2x_msgs/msg/detail/animal_propelled_type__functions.h"
#include "j2735_v2x_msgs/msg/detail/path_history__functions.h"
#include "j2735_v2x_msgs/msg/detail/velocity__functions.h"
#include "j2735_v2x_msgs/msg/detail/personal_device_user_type__functions.h"
#include "j2735_v2x_msgs/msg/detail/transmission_and_speed__functions.h"
#include "j2735_v2x_msgs/msg/detail/public_safety_event_responder_worker_type__functions.h"
#include "j2735_v2x_msgs/msg/detail/position_confidence__functions.h"
#include "j2735_v2x_msgs/msg/detail/personal_crossing_in_progress__functions.h"
#include "j2735_v2x_msgs/msg/detail/personal_assistive__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__AccelerationSet4Way__EXPECTED_HASH = {1, {
    0xec, 0x74, 0xcc, 0xee, 0x1d, 0xc1, 0x15, 0x2e,
    0xd6, 0xb9, 0x8f, 0xec, 0x0c, 0x7f, 0xb0, 0x70,
    0x43, 0x36, 0x0f, 0xb5, 0x15, 0xd9, 0xa3, 0xdf,
    0xf5, 0x11, 0xb9, 0x2f, 0x43, 0x84, 0x3b, 0xc4,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__AnimalPropelledType__EXPECTED_HASH = {1, {
    0x95, 0x80, 0x0a, 0xb8, 0x8d, 0xe8, 0x6c, 0x41,
    0x4f, 0xa1, 0x35, 0x20, 0xbd, 0xff, 0x97, 0xb0,
    0x02, 0x20, 0xaa, 0xae, 0x3b, 0x6c, 0x35, 0x09,
    0x6e, 0xd3, 0xf6, 0x9e, 0x06, 0x8f, 0x46, 0x0e,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__AnimalType__EXPECTED_HASH = {1, {
    0x77, 0xd2, 0xa3, 0xe1, 0x90, 0xee, 0x9a, 0xf7,
    0x2c, 0x34, 0xbb, 0x5b, 0xae, 0xb3, 0xd6, 0x38,
    0x13, 0xda, 0x5f, 0xc1, 0x18, 0x6d, 0x5e, 0x28,
    0x4d, 0xb5, 0x4b, 0xcb, 0xee, 0x04, 0x1d, 0x0d,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__Attachment__EXPECTED_HASH = {1, {
    0xc7, 0xe1, 0x20, 0x74, 0xef, 0x58, 0xc9, 0xbc,
    0x99, 0xb0, 0xcf, 0x73, 0xf1, 0x7b, 0x4f, 0x8b,
    0x08, 0xbe, 0x12, 0x1f, 0x11, 0x48, 0x14, 0x3e,
    0x65, 0x1a, 0x6a, 0x40, 0x4b, 0xf2, 0x9c, 0x54,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__AttachmentRadius__EXPECTED_HASH = {1, {
    0x5c, 0xaa, 0x1e, 0x8c, 0xd3, 0x87, 0xa0, 0x66,
    0x34, 0x43, 0x38, 0x4d, 0x7c, 0xbc, 0x9b, 0x8c,
    0xbc, 0x4b, 0xf2, 0xf2, 0xa9, 0x29, 0x7d, 0x9c,
    0x1b, 0x1f, 0x86, 0x79, 0xa4, 0xe0, 0xfe, 0x55,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__CoarseHeading__EXPECTED_HASH = {1, {
    0x1f, 0x65, 0xfa, 0x36, 0x68, 0x7f, 0xac, 0x8e,
    0xcb, 0x56, 0x01, 0xff, 0x00, 0x6c, 0x22, 0x72,
    0xab, 0xbc, 0x40, 0xe8, 0x13, 0xef, 0xf1, 0x58,
    0xfb, 0x43, 0xd1, 0x0e, 0x99, 0x3d, 0xb9, 0xc8,
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
static const rosidl_type_hash_t j2735_v2x_msgs__msg__HumanPropelledType__EXPECTED_HASH = {1, {
    0x91, 0xf1, 0x81, 0x10, 0x32, 0x52, 0x3d, 0xa6,
    0xfe, 0xce, 0xfe, 0x20, 0x5b, 0x3e, 0xd9, 0x6a,
    0x42, 0xb2, 0xfa, 0xb1, 0xe6, 0x0a, 0xf2, 0x3e,
    0xfe, 0x85, 0xd5, 0x72, 0xd7, 0x83, 0x00, 0x8c,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__Latitude__EXPECTED_HASH = {1, {
    0x98, 0x04, 0xa0, 0xc2, 0x9e, 0x8e, 0xba, 0xfa,
    0x62, 0xa6, 0x72, 0x4f, 0x39, 0xc2, 0x12, 0xfb,
    0x93, 0xae, 0x8d, 0x51, 0x54, 0x5f, 0x2e, 0x2c,
    0x28, 0x7e, 0x88, 0x3a, 0x33, 0xe4, 0x3b, 0xf3,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__Longitude__EXPECTED_HASH = {1, {
    0x40, 0xb0, 0xe5, 0x07, 0xbd, 0xa2, 0x4c, 0x74,
    0xd8, 0x9a, 0x7e, 0x0b, 0x3c, 0x76, 0x43, 0x9b,
    0xf1, 0xf8, 0x59, 0x6b, 0x9b, 0x45, 0x13, 0x55,
    0x9f, 0x42, 0x28, 0x49, 0x40, 0x9f, 0x0b, 0x00,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__MotorizedPropelledType__EXPECTED_HASH = {1, {
    0xea, 0xa7, 0x4d, 0x0c, 0x1e, 0xc3, 0xd1, 0x31,
    0x9f, 0x2d, 0x43, 0xfa, 0x33, 0xd1, 0xa5, 0xb8,
    0x6f, 0x6d, 0xdb, 0x29, 0x5e, 0x81, 0xc7, 0x03,
    0x69, 0x4b, 0x2d, 0x0e, 0xca, 0x2a, 0x4b, 0x50,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__MsgCount__EXPECTED_HASH = {1, {
    0x74, 0xb3, 0x08, 0xa5, 0xf9, 0x1f, 0xf9, 0xf3,
    0xff, 0xf5, 0x6d, 0x56, 0xef, 0xde, 0xcb, 0x89,
    0x80, 0x05, 0x23, 0x87, 0x01, 0x57, 0x54, 0xeb,
    0x37, 0x28, 0x26, 0x8c, 0x04, 0xbf, 0xe8, 0x0e,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NumberOfParticipantsInCluster__EXPECTED_HASH = {1, {
    0x78, 0x15, 0x52, 0x3a, 0xa2, 0xf3, 0x1f, 0xa4,
    0x46, 0xf5, 0x89, 0x9c, 0x00, 0x14, 0x21, 0x51,
    0xe5, 0x6e, 0x9a, 0x47, 0xf6, 0x4a, 0xfb, 0x72,
    0xd5, 0xf6, 0x36, 0x15, 0x20, 0x28, 0x53, 0x13,
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
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PersonalAssistive__EXPECTED_HASH = {1, {
    0x82, 0x7d, 0xbd, 0x5b, 0xbe, 0x06, 0x63, 0xa9,
    0xe1, 0x25, 0xb5, 0x58, 0xda, 0x7f, 0xeb, 0xb9,
    0xee, 0x0a, 0xd4, 0x2d, 0x02, 0x16, 0x20, 0x1b,
    0x6b, 0x27, 0xc0, 0x21, 0x02, 0x11, 0x79, 0x1c,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PersonalClusterRadius__EXPECTED_HASH = {1, {
    0xa1, 0x01, 0x7d, 0xd6, 0x74, 0x89, 0x5d, 0x86,
    0x83, 0x45, 0x0d, 0xd9, 0xb7, 0x69, 0x93, 0x87,
    0xb9, 0x8f, 0x4b, 0x03, 0x0b, 0xdf, 0x42, 0xd0,
    0x3e, 0xd5, 0x71, 0x24, 0x13, 0xbc, 0x21, 0xf9,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PersonalCrossingInProgress__EXPECTED_HASH = {1, {
    0x78, 0x72, 0xe5, 0x4b, 0xea, 0x46, 0x8e, 0xf5,
    0x34, 0xd4, 0x4a, 0x60, 0x35, 0xcd, 0x0f, 0x4c,
    0x1b, 0xd6, 0x5a, 0x75, 0xfa, 0x1b, 0xa0, 0x7c,
    0x57, 0x50, 0x74, 0x42, 0xac, 0xe0, 0x39, 0x06,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PersonalCrossingRequest__EXPECTED_HASH = {1, {
    0xe2, 0xe4, 0x35, 0x50, 0x58, 0x9f, 0xf5, 0xa1,
    0xbd, 0x34, 0x0f, 0x38, 0x1a, 0xec, 0x72, 0x01,
    0xa4, 0x6c, 0xa5, 0xaf, 0x6b, 0x35, 0x4d, 0x56,
    0xec, 0xd2, 0x71, 0x8b, 0xa8, 0x4b, 0x0d, 0x47,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PersonalDeviceUsageState__EXPECTED_HASH = {1, {
    0x67, 0x65, 0xa3, 0x65, 0xfe, 0x83, 0x77, 0x59,
    0xdd, 0xc3, 0xb9, 0x7e, 0x27, 0x13, 0xaa, 0xe9,
    0xb2, 0x90, 0x6f, 0x22, 0x25, 0x47, 0x26, 0x54,
    0x5f, 0xd3, 0xfa, 0xd8, 0xca, 0x3f, 0x7e, 0xb4,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PersonalDeviceUserType__EXPECTED_HASH = {1, {
    0x8f, 0x72, 0x39, 0x40, 0xae, 0x33, 0xd1, 0xb9,
    0xa2, 0x76, 0xfd, 0x06, 0x70, 0x68, 0x07, 0xea,
    0xeb, 0x27, 0xcf, 0xdb, 0xa8, 0x8b, 0x16, 0xe2,
    0x49, 0x4e, 0xcb, 0x6d, 0x2c, 0x43, 0xd0, 0x0e,
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
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PropelledInformation__EXPECTED_HASH = {1, {
    0xe3, 0x76, 0x17, 0xd3, 0xd7, 0xc9, 0xfd, 0xc3,
    0x46, 0xd4, 0xd1, 0x95, 0x64, 0xf6, 0xb1, 0x1e,
    0x21, 0xc3, 0xf0, 0xef, 0x79, 0xe8, 0xb8, 0x46,
    0xf3, 0x90, 0x11, 0x3d, 0x12, 0x69, 0x3e, 0x97,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__EXPECTED_HASH = {1, {
    0x83, 0x97, 0xdf, 0x31, 0x2b, 0x67, 0xb2, 0xb2,
    0x76, 0x50, 0x65, 0xc9, 0x1b, 0xa6, 0x2d, 0xea,
    0x09, 0xb5, 0x84, 0xc3, 0xe2, 0x65, 0x81, 0x75,
    0x09, 0x1c, 0x9d, 0x03, 0x4e, 0xd1, 0x23, 0x92,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__EXPECTED_HASH = {1, {
    0x7b, 0x2e, 0x06, 0x60, 0x0e, 0x8c, 0x78, 0xcc,
    0xd0, 0xdd, 0x96, 0xaf, 0xdb, 0xd2, 0xa3, 0xb9,
    0x62, 0x61, 0x70, 0xe8, 0xbc, 0x68, 0x92, 0x61,
    0x4e, 0xf7, 0x4e, 0x22, 0x47, 0xd6, 0x32, 0x1e,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__EXPECTED_HASH = {1, {
    0xb8, 0xdf, 0x89, 0xe4, 0x8d, 0x7c, 0x61, 0x94,
    0x1f, 0xba, 0xfa, 0xba, 0x06, 0x93, 0x83, 0x3d,
    0x63, 0xa2, 0x31, 0xec, 0xb6, 0xc3, 0x62, 0x70,
    0x0d, 0xcc, 0x83, 0x46, 0x8a, 0xff, 0xfd, 0x22,
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
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TemporaryID__EXPECTED_HASH = {1, {
    0xb0, 0xa7, 0x32, 0x3f, 0xdb, 0xa5, 0xee, 0xe4,
    0x35, 0xe5, 0x4f, 0x65, 0x18, 0xfe, 0x81, 0x9b,
    0x82, 0x5e, 0x16, 0x7a, 0x9e, 0x18, 0x12, 0x75,
    0xe6, 0x4e, 0x0b, 0xea, 0x38, 0xc2, 0xb6, 0x12,
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
static const rosidl_type_hash_t j2735_v2x_msgs__msg__UserSizeAndBehaviour__EXPECTED_HASH = {1, {
    0x19, 0x63, 0xc0, 0x50, 0xf7, 0x0e, 0xd2, 0x4f,
    0x2e, 0x88, 0x44, 0xdb, 0x87, 0xa1, 0xb2, 0x9f,
    0x7d, 0x2e, 0x51, 0xd3, 0x5b, 0x26, 0x43, 0x09,
    0x9f, 0xc8, 0xbf, 0xbc, 0x46, 0xa7, 0x89, 0x96,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__Velocity__EXPECTED_HASH = {1, {
    0x05, 0xe5, 0x1e, 0xa8, 0x34, 0x8a, 0x16, 0x2e,
    0x6b, 0xe6, 0xaa, 0xf0, 0x51, 0x9a, 0xc6, 0x20,
    0x41, 0x00, 0xcf, 0xad, 0x68, 0xb5, 0xfb, 0xe8,
    0xc3, 0x07, 0xd5, 0x72, 0x7a, 0x76, 0x9d, 0x76,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__VertOffsetB12__EXPECTED_HASH = {1, {
    0xbe, 0xf5, 0xf6, 0x06, 0x26, 0xd1, 0x52, 0x6e,
    0xfc, 0x08, 0xad, 0x64, 0x43, 0xb9, 0xca, 0xca,
    0x3d, 0x7e, 0xc3, 0x81, 0xe4, 0x40, 0x40, 0x95,
    0x1d, 0xbb, 0xd0, 0x3c, 0xb4, 0xe8, 0x6d, 0x34,
  }};
#endif

static char j2735_v2x_msgs__msg__PSM__TYPE_NAME[] = "j2735_v2x_msgs/msg/PSM";
static char j2735_v2x_msgs__msg__AccelerationSet4Way__TYPE_NAME[] = "j2735_v2x_msgs/msg/AccelerationSet4Way";
static char j2735_v2x_msgs__msg__AnimalPropelledType__TYPE_NAME[] = "j2735_v2x_msgs/msg/AnimalPropelledType";
static char j2735_v2x_msgs__msg__AnimalType__TYPE_NAME[] = "j2735_v2x_msgs/msg/AnimalType";
static char j2735_v2x_msgs__msg__Attachment__TYPE_NAME[] = "j2735_v2x_msgs/msg/Attachment";
static char j2735_v2x_msgs__msg__AttachmentRadius__TYPE_NAME[] = "j2735_v2x_msgs/msg/AttachmentRadius";
static char j2735_v2x_msgs__msg__CoarseHeading__TYPE_NAME[] = "j2735_v2x_msgs/msg/CoarseHeading";
static char j2735_v2x_msgs__msg__DDateTime__TYPE_NAME[] = "j2735_v2x_msgs/msg/DDateTime";
static char j2735_v2x_msgs__msg__DDay__TYPE_NAME[] = "j2735_v2x_msgs/msg/DDay";
static char j2735_v2x_msgs__msg__DHour__TYPE_NAME[] = "j2735_v2x_msgs/msg/DHour";
static char j2735_v2x_msgs__msg__DMinute__TYPE_NAME[] = "j2735_v2x_msgs/msg/DMinute";
static char j2735_v2x_msgs__msg__DMonth__TYPE_NAME[] = "j2735_v2x_msgs/msg/DMonth";
static char j2735_v2x_msgs__msg__DOffset__TYPE_NAME[] = "j2735_v2x_msgs/msg/DOffset";
static char j2735_v2x_msgs__msg__DSecond__TYPE_NAME[] = "j2735_v2x_msgs/msg/DSecond";
static char j2735_v2x_msgs__msg__DYear__TYPE_NAME[] = "j2735_v2x_msgs/msg/DYear";
static char j2735_v2x_msgs__msg__Elevation__TYPE_NAME[] = "j2735_v2x_msgs/msg/Elevation";
static char j2735_v2x_msgs__msg__ElevationConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/ElevationConfidence";
static char j2735_v2x_msgs__msg__FullPositionVector__TYPE_NAME[] = "j2735_v2x_msgs/msg/FullPositionVector";
static char j2735_v2x_msgs__msg__GNSSStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/GNSSStatus";
static char j2735_v2x_msgs__msg__Heading__TYPE_NAME[] = "j2735_v2x_msgs/msg/Heading";
static char j2735_v2x_msgs__msg__HeadingConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/HeadingConfidence";
static char j2735_v2x_msgs__msg__HumanPropelledType__TYPE_NAME[] = "j2735_v2x_msgs/msg/HumanPropelledType";
static char j2735_v2x_msgs__msg__Latitude__TYPE_NAME[] = "j2735_v2x_msgs/msg/Latitude";
static char j2735_v2x_msgs__msg__Longitude__TYPE_NAME[] = "j2735_v2x_msgs/msg/Longitude";
static char j2735_v2x_msgs__msg__MotorizedPropelledType__TYPE_NAME[] = "j2735_v2x_msgs/msg/MotorizedPropelledType";
static char j2735_v2x_msgs__msg__MsgCount__TYPE_NAME[] = "j2735_v2x_msgs/msg/MsgCount";
static char j2735_v2x_msgs__msg__NumberOfParticipantsInCluster__TYPE_NAME[] = "j2735_v2x_msgs/msg/NumberOfParticipantsInCluster";
static char j2735_v2x_msgs__msg__OffsetLLB18__TYPE_NAME[] = "j2735_v2x_msgs/msg/OffsetLLB18";
static char j2735_v2x_msgs__msg__PathHistory__TYPE_NAME[] = "j2735_v2x_msgs/msg/PathHistory";
static char j2735_v2x_msgs__msg__PathHistoryPoint__TYPE_NAME[] = "j2735_v2x_msgs/msg/PathHistoryPoint";
static char j2735_v2x_msgs__msg__PathHistoryPointList__TYPE_NAME[] = "j2735_v2x_msgs/msg/PathHistoryPointList";
static char j2735_v2x_msgs__msg__PathPrediction__TYPE_NAME[] = "j2735_v2x_msgs/msg/PathPrediction";
static char j2735_v2x_msgs__msg__PersonalAssistive__TYPE_NAME[] = "j2735_v2x_msgs/msg/PersonalAssistive";
static char j2735_v2x_msgs__msg__PersonalClusterRadius__TYPE_NAME[] = "j2735_v2x_msgs/msg/PersonalClusterRadius";
static char j2735_v2x_msgs__msg__PersonalCrossingInProgress__TYPE_NAME[] = "j2735_v2x_msgs/msg/PersonalCrossingInProgress";
static char j2735_v2x_msgs__msg__PersonalCrossingRequest__TYPE_NAME[] = "j2735_v2x_msgs/msg/PersonalCrossingRequest";
static char j2735_v2x_msgs__msg__PersonalDeviceUsageState__TYPE_NAME[] = "j2735_v2x_msgs/msg/PersonalDeviceUsageState";
static char j2735_v2x_msgs__msg__PersonalDeviceUserType__TYPE_NAME[] = "j2735_v2x_msgs/msg/PersonalDeviceUserType";
static char j2735_v2x_msgs__msg__Position3D__TYPE_NAME[] = "j2735_v2x_msgs/msg/Position3D";
static char j2735_v2x_msgs__msg__PositionConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/PositionConfidence";
static char j2735_v2x_msgs__msg__PositionConfidenceSet__TYPE_NAME[] = "j2735_v2x_msgs/msg/PositionConfidenceSet";
static char j2735_v2x_msgs__msg__PositionalAccuracy__TYPE_NAME[] = "j2735_v2x_msgs/msg/PositionalAccuracy";
static char j2735_v2x_msgs__msg__PropelledInformation__TYPE_NAME[] = "j2735_v2x_msgs/msg/PropelledInformation";
static char j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__TYPE_NAME[] = "j2735_v2x_msgs/msg/PublicSafetyAndRoadWorkerActivity";
static char j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__TYPE_NAME[] = "j2735_v2x_msgs/msg/PublicSafetyDirectingTrafficSubType";
static char j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__TYPE_NAME[] = "j2735_v2x_msgs/msg/PublicSafetyEventResponderWorkerType";
static char j2735_v2x_msgs__msg__Speed__TYPE_NAME[] = "j2735_v2x_msgs/msg/Speed";
static char j2735_v2x_msgs__msg__SpeedConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/SpeedConfidence";
static char j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/SpeedandHeadingandThrottleConfidence";
static char j2735_v2x_msgs__msg__TemporaryID__TYPE_NAME[] = "j2735_v2x_msgs/msg/TemporaryID";
static char j2735_v2x_msgs__msg__ThrottleConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/ThrottleConfidence";
static char j2735_v2x_msgs__msg__TimeConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/TimeConfidence";
static char j2735_v2x_msgs__msg__TimeOffset__TYPE_NAME[] = "j2735_v2x_msgs/msg/TimeOffset";
static char j2735_v2x_msgs__msg__TransmissionAndSpeed__TYPE_NAME[] = "j2735_v2x_msgs/msg/TransmissionAndSpeed";
static char j2735_v2x_msgs__msg__TransmissionState__TYPE_NAME[] = "j2735_v2x_msgs/msg/TransmissionState";
static char j2735_v2x_msgs__msg__UserSizeAndBehaviour__TYPE_NAME[] = "j2735_v2x_msgs/msg/UserSizeAndBehaviour";
static char j2735_v2x_msgs__msg__Velocity__TYPE_NAME[] = "j2735_v2x_msgs/msg/Velocity";
static char j2735_v2x_msgs__msg__VertOffsetB12__TYPE_NAME[] = "j2735_v2x_msgs/msg/VertOffsetB12";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__PSM__FIELD_NAME__presence_vector[] = "presence_vector";
static char j2735_v2x_msgs__msg__PSM__FIELD_NAME__basic_type[] = "basic_type";
static char j2735_v2x_msgs__msg__PSM__FIELD_NAME__sec_mark[] = "sec_mark";
static char j2735_v2x_msgs__msg__PSM__FIELD_NAME__msg_cnt[] = "msg_cnt";
static char j2735_v2x_msgs__msg__PSM__FIELD_NAME__id[] = "id";
static char j2735_v2x_msgs__msg__PSM__FIELD_NAME__position[] = "position";
static char j2735_v2x_msgs__msg__PSM__FIELD_NAME__accuracy[] = "accuracy";
static char j2735_v2x_msgs__msg__PSM__FIELD_NAME__speed[] = "speed";
static char j2735_v2x_msgs__msg__PSM__FIELD_NAME__heading[] = "heading";
static char j2735_v2x_msgs__msg__PSM__FIELD_NAME__accel_set[] = "accel_set";
static char j2735_v2x_msgs__msg__PSM__FIELD_NAME__path_history[] = "path_history";
static char j2735_v2x_msgs__msg__PSM__FIELD_NAME__path_prediction[] = "path_prediction";
static char j2735_v2x_msgs__msg__PSM__FIELD_NAME__propulsion[] = "propulsion";
static char j2735_v2x_msgs__msg__PSM__FIELD_NAME__use_state[] = "use_state";
static char j2735_v2x_msgs__msg__PSM__FIELD_NAME__cross_request[] = "cross_request";
static char j2735_v2x_msgs__msg__PSM__FIELD_NAME__cross_state[] = "cross_state";
static char j2735_v2x_msgs__msg__PSM__FIELD_NAME__cluster_size[] = "cluster_size";
static char j2735_v2x_msgs__msg__PSM__FIELD_NAME__cluster_radius[] = "cluster_radius";
static char j2735_v2x_msgs__msg__PSM__FIELD_NAME__event_responder_type[] = "event_responder_type";
static char j2735_v2x_msgs__msg__PSM__FIELD_NAME__activity_type[] = "activity_type";
static char j2735_v2x_msgs__msg__PSM__FIELD_NAME__activity_sub_type[] = "activity_sub_type";
static char j2735_v2x_msgs__msg__PSM__FIELD_NAME__assist_type[] = "assist_type";
static char j2735_v2x_msgs__msg__PSM__FIELD_NAME__sizing[] = "sizing";
static char j2735_v2x_msgs__msg__PSM__FIELD_NAME__attachment[] = "attachment";
static char j2735_v2x_msgs__msg__PSM__FIELD_NAME__attachment_radius[] = "attachment_radius";
static char j2735_v2x_msgs__msg__PSM__FIELD_NAME__animal_type[] = "animal_type";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__PSM__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__PSM__FIELD_NAME__presence_vector, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PSM__FIELD_NAME__basic_type, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__PersonalDeviceUserType__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PSM__FIELD_NAME__sec_mark, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__DSecond__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PSM__FIELD_NAME__msg_cnt, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__MsgCount__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PSM__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__TemporaryID__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PSM__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__Position3D__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PSM__FIELD_NAME__accuracy, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__PositionalAccuracy__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PSM__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__Velocity__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PSM__FIELD_NAME__heading, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__Heading__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PSM__FIELD_NAME__accel_set, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__AccelerationSet4Way__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PSM__FIELD_NAME__path_history, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__PathHistory__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PSM__FIELD_NAME__path_prediction, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__PathPrediction__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PSM__FIELD_NAME__propulsion, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__PropelledInformation__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PSM__FIELD_NAME__use_state, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__PersonalDeviceUsageState__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PSM__FIELD_NAME__cross_request, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__PersonalCrossingRequest__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PSM__FIELD_NAME__cross_state, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__PersonalCrossingInProgress__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PSM__FIELD_NAME__cluster_size, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__NumberOfParticipantsInCluster__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PSM__FIELD_NAME__cluster_radius, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__PersonalClusterRadius__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PSM__FIELD_NAME__event_responder_type, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__TYPE_NAME, 55, 55},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PSM__FIELD_NAME__activity_type, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PSM__FIELD_NAME__activity_sub_type, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__TYPE_NAME, 54, 54},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PSM__FIELD_NAME__assist_type, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__PersonalAssistive__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PSM__FIELD_NAME__sizing, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__UserSizeAndBehaviour__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PSM__FIELD_NAME__attachment, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__Attachment__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PSM__FIELD_NAME__attachment_radius, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__AttachmentRadius__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PSM__FIELD_NAME__animal_type, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__AnimalType__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__PSM__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__AccelerationSet4Way__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__AnimalPropelledType__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__AnimalType__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__Attachment__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__AttachmentRadius__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__CoarseHeading__TYPE_NAME, 32, 32},
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
    {j2735_v2x_msgs__msg__Elevation__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ElevationConfidence__TYPE_NAME, 38, 38},
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
    {j2735_v2x_msgs__msg__Heading__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__HeadingConfidence__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__HumanPropelledType__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__Latitude__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__Longitude__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__MotorizedPropelledType__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__MsgCount__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NumberOfParticipantsInCluster__TYPE_NAME, 48, 48},
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
    {j2735_v2x_msgs__msg__PersonalAssistive__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PersonalClusterRadius__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PersonalCrossingInProgress__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PersonalCrossingRequest__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PersonalDeviceUsageState__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PersonalDeviceUserType__TYPE_NAME, 41, 41},
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
    {j2735_v2x_msgs__msg__PropelledInformation__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__TYPE_NAME, 54, 54},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__TYPE_NAME, 55, 55},
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
    {j2735_v2x_msgs__msg__TemporaryID__TYPE_NAME, 30, 30},
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
    {j2735_v2x_msgs__msg__TransmissionAndSpeed__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TransmissionState__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__UserSizeAndBehaviour__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__Velocity__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__VertOffsetB12__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__PSM__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__PSM__TYPE_NAME, 22, 22},
      {j2735_v2x_msgs__msg__PSM__FIELDS, 26, 26},
    },
    {j2735_v2x_msgs__msg__PSM__REFERENCED_TYPE_DESCRIPTIONS, 57, 57},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AccelerationSet4Way__EXPECTED_HASH, j2735_v2x_msgs__msg__AccelerationSet4Way__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__AccelerationSet4Way__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AnimalPropelledType__EXPECTED_HASH, j2735_v2x_msgs__msg__AnimalPropelledType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__AnimalPropelledType__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AnimalType__EXPECTED_HASH, j2735_v2x_msgs__msg__AnimalType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__AnimalType__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Attachment__EXPECTED_HASH, j2735_v2x_msgs__msg__Attachment__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = j2735_v2x_msgs__msg__Attachment__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AttachmentRadius__EXPECTED_HASH, j2735_v2x_msgs__msg__AttachmentRadius__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = j2735_v2x_msgs__msg__AttachmentRadius__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__CoarseHeading__EXPECTED_HASH, j2735_v2x_msgs__msg__CoarseHeading__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = j2735_v2x_msgs__msg__CoarseHeading__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DDateTime__EXPECTED_HASH, j2735_v2x_msgs__msg__DDateTime__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = j2735_v2x_msgs__msg__DDateTime__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DDay__EXPECTED_HASH, j2735_v2x_msgs__msg__DDay__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = j2735_v2x_msgs__msg__DDay__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DHour__EXPECTED_HASH, j2735_v2x_msgs__msg__DHour__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = j2735_v2x_msgs__msg__DHour__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DMinute__EXPECTED_HASH, j2735_v2x_msgs__msg__DMinute__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = j2735_v2x_msgs__msg__DMinute__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DMonth__EXPECTED_HASH, j2735_v2x_msgs__msg__DMonth__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = j2735_v2x_msgs__msg__DMonth__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DOffset__EXPECTED_HASH, j2735_v2x_msgs__msg__DOffset__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = j2735_v2x_msgs__msg__DOffset__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DSecond__EXPECTED_HASH, j2735_v2x_msgs__msg__DSecond__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[12].fields = j2735_v2x_msgs__msg__DSecond__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DYear__EXPECTED_HASH, j2735_v2x_msgs__msg__DYear__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[13].fields = j2735_v2x_msgs__msg__DYear__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Elevation__EXPECTED_HASH, j2735_v2x_msgs__msg__Elevation__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[14].fields = j2735_v2x_msgs__msg__Elevation__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ElevationConfidence__EXPECTED_HASH, j2735_v2x_msgs__msg__ElevationConfidence__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[15].fields = j2735_v2x_msgs__msg__ElevationConfidence__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__FullPositionVector__EXPECTED_HASH, j2735_v2x_msgs__msg__FullPositionVector__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[16].fields = j2735_v2x_msgs__msg__FullPositionVector__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__GNSSStatus__EXPECTED_HASH, j2735_v2x_msgs__msg__GNSSStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[17].fields = j2735_v2x_msgs__msg__GNSSStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Heading__EXPECTED_HASH, j2735_v2x_msgs__msg__Heading__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[18].fields = j2735_v2x_msgs__msg__Heading__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__HeadingConfidence__EXPECTED_HASH, j2735_v2x_msgs__msg__HeadingConfidence__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[19].fields = j2735_v2x_msgs__msg__HeadingConfidence__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__HumanPropelledType__EXPECTED_HASH, j2735_v2x_msgs__msg__HumanPropelledType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[20].fields = j2735_v2x_msgs__msg__HumanPropelledType__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Latitude__EXPECTED_HASH, j2735_v2x_msgs__msg__Latitude__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[21].fields = j2735_v2x_msgs__msg__Latitude__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Longitude__EXPECTED_HASH, j2735_v2x_msgs__msg__Longitude__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[22].fields = j2735_v2x_msgs__msg__Longitude__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__MotorizedPropelledType__EXPECTED_HASH, j2735_v2x_msgs__msg__MotorizedPropelledType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[23].fields = j2735_v2x_msgs__msg__MotorizedPropelledType__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__MsgCount__EXPECTED_HASH, j2735_v2x_msgs__msg__MsgCount__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[24].fields = j2735_v2x_msgs__msg__MsgCount__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NumberOfParticipantsInCluster__EXPECTED_HASH, j2735_v2x_msgs__msg__NumberOfParticipantsInCluster__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[25].fields = j2735_v2x_msgs__msg__NumberOfParticipantsInCluster__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__OffsetLLB18__EXPECTED_HASH, j2735_v2x_msgs__msg__OffsetLLB18__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[26].fields = j2735_v2x_msgs__msg__OffsetLLB18__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PathHistory__EXPECTED_HASH, j2735_v2x_msgs__msg__PathHistory__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[27].fields = j2735_v2x_msgs__msg__PathHistory__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PathHistoryPoint__EXPECTED_HASH, j2735_v2x_msgs__msg__PathHistoryPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[28].fields = j2735_v2x_msgs__msg__PathHistoryPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PathHistoryPointList__EXPECTED_HASH, j2735_v2x_msgs__msg__PathHistoryPointList__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[29].fields = j2735_v2x_msgs__msg__PathHistoryPointList__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PathPrediction__EXPECTED_HASH, j2735_v2x_msgs__msg__PathPrediction__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[30].fields = j2735_v2x_msgs__msg__PathPrediction__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PersonalAssistive__EXPECTED_HASH, j2735_v2x_msgs__msg__PersonalAssistive__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[31].fields = j2735_v2x_msgs__msg__PersonalAssistive__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PersonalClusterRadius__EXPECTED_HASH, j2735_v2x_msgs__msg__PersonalClusterRadius__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[32].fields = j2735_v2x_msgs__msg__PersonalClusterRadius__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PersonalCrossingInProgress__EXPECTED_HASH, j2735_v2x_msgs__msg__PersonalCrossingInProgress__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[33].fields = j2735_v2x_msgs__msg__PersonalCrossingInProgress__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PersonalCrossingRequest__EXPECTED_HASH, j2735_v2x_msgs__msg__PersonalCrossingRequest__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[34].fields = j2735_v2x_msgs__msg__PersonalCrossingRequest__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PersonalDeviceUsageState__EXPECTED_HASH, j2735_v2x_msgs__msg__PersonalDeviceUsageState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[35].fields = j2735_v2x_msgs__msg__PersonalDeviceUsageState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PersonalDeviceUserType__EXPECTED_HASH, j2735_v2x_msgs__msg__PersonalDeviceUserType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[36].fields = j2735_v2x_msgs__msg__PersonalDeviceUserType__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Position3D__EXPECTED_HASH, j2735_v2x_msgs__msg__Position3D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[37].fields = j2735_v2x_msgs__msg__Position3D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PositionConfidence__EXPECTED_HASH, j2735_v2x_msgs__msg__PositionConfidence__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[38].fields = j2735_v2x_msgs__msg__PositionConfidence__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PositionConfidenceSet__EXPECTED_HASH, j2735_v2x_msgs__msg__PositionConfidenceSet__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[39].fields = j2735_v2x_msgs__msg__PositionConfidenceSet__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PositionalAccuracy__EXPECTED_HASH, j2735_v2x_msgs__msg__PositionalAccuracy__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[40].fields = j2735_v2x_msgs__msg__PositionalAccuracy__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PropelledInformation__EXPECTED_HASH, j2735_v2x_msgs__msg__PropelledInformation__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[41].fields = j2735_v2x_msgs__msg__PropelledInformation__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__EXPECTED_HASH, j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[42].fields = j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__EXPECTED_HASH, j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[43].fields = j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__EXPECTED_HASH, j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[44].fields = j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Speed__EXPECTED_HASH, j2735_v2x_msgs__msg__Speed__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[45].fields = j2735_v2x_msgs__msg__Speed__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__SpeedConfidence__EXPECTED_HASH, j2735_v2x_msgs__msg__SpeedConfidence__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[46].fields = j2735_v2x_msgs__msg__SpeedConfidence__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__EXPECTED_HASH, j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[47].fields = j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TemporaryID__EXPECTED_HASH, j2735_v2x_msgs__msg__TemporaryID__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[48].fields = j2735_v2x_msgs__msg__TemporaryID__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ThrottleConfidence__EXPECTED_HASH, j2735_v2x_msgs__msg__ThrottleConfidence__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[49].fields = j2735_v2x_msgs__msg__ThrottleConfidence__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TimeConfidence__EXPECTED_HASH, j2735_v2x_msgs__msg__TimeConfidence__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[50].fields = j2735_v2x_msgs__msg__TimeConfidence__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TimeOffset__EXPECTED_HASH, j2735_v2x_msgs__msg__TimeOffset__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[51].fields = j2735_v2x_msgs__msg__TimeOffset__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TransmissionAndSpeed__EXPECTED_HASH, j2735_v2x_msgs__msg__TransmissionAndSpeed__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[52].fields = j2735_v2x_msgs__msg__TransmissionAndSpeed__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TransmissionState__EXPECTED_HASH, j2735_v2x_msgs__msg__TransmissionState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[53].fields = j2735_v2x_msgs__msg__TransmissionState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__UserSizeAndBehaviour__EXPECTED_HASH, j2735_v2x_msgs__msg__UserSizeAndBehaviour__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[54].fields = j2735_v2x_msgs__msg__UserSizeAndBehaviour__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Velocity__EXPECTED_HASH, j2735_v2x_msgs__msg__Velocity__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[55].fields = j2735_v2x_msgs__msg__Velocity__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__VertOffsetB12__EXPECTED_HASH, j2735_v2x_msgs__msg__VertOffsetB12__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[56].fields = j2735_v2x_msgs__msg__VertOffsetB12__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# PSM.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of Personal Safety Message (PSM) from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "\n"
  "# A BIT STRING defining the presence of optional feilds.\n"
  "# Compare with bitwise-and\n"
  "# if (presence_vector & HAS_PATH_HISTORY) etc.\n"
  "# Create with bitwise-or\n"
  "# presence_vector = presence_vector | HAS_PATH_HISTORY\n"
  "uint32 presence_vector\n"
  "\n"
  "uint32 HAS_ACCEL_SET = 1\n"
  "uint32 HAS_PATH_HISTORY = 2\n"
  "uint32 HAS_PATH_PREDICTION = 4\n"
  "uint32 HAS_PROPULSION = 8\n"
  "uint32 HAS_USE_STATE = 16\n"
  "uint32 HAS_CROSS_REQUEST = 32\n"
  "uint32 HAS_CROSS_STATE = 64\n"
  "uint32 HAS_CLUSTER_SIZE = 128\n"
  "uint32 HAS_CLUSTER_RADIUS = 256\n"
  "uint32 HAS_EVENT_RESPONDER_TYPE = 512\n"
  "uint32 HAS_ACTIVITY_TYPE = 1024\n"
  "uint32 HAS_ACTIVITY_SUB_TYPE = 2048\n"
  "uint32 HAS_ASSIST_TYPE = 4096\n"
  "uint32 HAS_SIZING = 8192\n"
  "uint32 HAS_ATTACHMENT= 16384\n"
  "uint32 HAS_ATTACHMENT_RADIUS = 32768\n"
  "uint32 HAS_ANIMAL_TYPE = 65536\n"
  "uint32 HAS_REGIONAL_EXTENSION = 131072\n"
  "\n"
  "j2735_v2x_msgs/PersonalDeviceUserType basic_type\n"
  "\n"
  "j2735_v2x_msgs/DSecond sec_mark\n"
  "\n"
  "j2735_v2x_msgs/MsgCount msg_cnt\n"
  "\n"
  "j2735_v2x_msgs/TemporaryID id\n"
  "\n"
  "j2735_v2x_msgs/Position3D position\n"
  "\n"
  "j2735_v2x_msgs/PositionalAccuracy accuracy\n"
  "\n"
  "j2735_v2x_msgs/Velocity speed\n"
  "\n"
  "j2735_v2x_msgs/Heading heading\n"
  "\n"
  "####\n"
  "# OPTIONAL FIELDS\n"
  "# All fields below this section are optional.\n"
  "# The presence of a given field can be idenfied by checking the precense_vector\n"
  "####\n"
  "j2735_v2x_msgs/AccelerationSet4Way accel_set\n"
  "\n"
  "j2735_v2x_msgs/PathHistory path_history\n"
  "\n"
  "j2735_v2x_msgs/PathPrediction path_prediction\n"
  "\n"
  "j2735_v2x_msgs/PropelledInformation propulsion\n"
  "\n"
  "j2735_v2x_msgs/PersonalDeviceUsageState use_state\n"
  "\n"
  "j2735_v2x_msgs/PersonalCrossingRequest cross_request\n"
  "\n"
  "j2735_v2x_msgs/PersonalCrossingInProgress cross_state\n"
  "\n"
  "j2735_v2x_msgs/NumberOfParticipantsInCluster cluster_size\n"
  "\n"
  "j2735_v2x_msgs/PersonalClusterRadius cluster_radius\n"
  "\n"
  "j2735_v2x_msgs/PublicSafetyEventResponderWorkerType event_responder_type\n"
  "\n"
  "j2735_v2x_msgs/PublicSafetyAndRoadWorkerActivity activity_type\n"
  "\n"
  "j2735_v2x_msgs/PublicSafetyDirectingTrafficSubType activity_sub_type\n"
  "\n"
  "j2735_v2x_msgs/PersonalAssistive assist_type\n"
  "\n"
  "j2735_v2x_msgs/UserSizeAndBehaviour sizing\n"
  "\n"
  "j2735_v2x_msgs/Attachment attachment\n"
  "\n"
  "j2735_v2x_msgs/AttachmentRadius attachment_radius\n"
  "\n"
  "j2735_v2x_msgs/AnimalType animal_type\n"
  "\n"
  "# TODO Approach to defining regional extensions in ROS has not yet been idenfied. If it is, this field will be updated.\n"
  "# regional SEQUENCE (SIZE(1..4)) OF \n"
  "#            j2735_v2x_msgs/RegionalExtension {{REGION.Reg-PersonalSafetyMessage}} OPTIONAL,\n"
  "#   ...\n"
  "#   }";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__PSM__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__PSM__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2573, 2573},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__PSM__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[58];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 58, 58};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__PSM__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__AccelerationSet4Way__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__AnimalPropelledType__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__AnimalType__get_individual_type_description_source(NULL);
    sources[4] = *j2735_v2x_msgs__msg__Attachment__get_individual_type_description_source(NULL);
    sources[5] = *j2735_v2x_msgs__msg__AttachmentRadius__get_individual_type_description_source(NULL);
    sources[6] = *j2735_v2x_msgs__msg__CoarseHeading__get_individual_type_description_source(NULL);
    sources[7] = *j2735_v2x_msgs__msg__DDateTime__get_individual_type_description_source(NULL);
    sources[8] = *j2735_v2x_msgs__msg__DDay__get_individual_type_description_source(NULL);
    sources[9] = *j2735_v2x_msgs__msg__DHour__get_individual_type_description_source(NULL);
    sources[10] = *j2735_v2x_msgs__msg__DMinute__get_individual_type_description_source(NULL);
    sources[11] = *j2735_v2x_msgs__msg__DMonth__get_individual_type_description_source(NULL);
    sources[12] = *j2735_v2x_msgs__msg__DOffset__get_individual_type_description_source(NULL);
    sources[13] = *j2735_v2x_msgs__msg__DSecond__get_individual_type_description_source(NULL);
    sources[14] = *j2735_v2x_msgs__msg__DYear__get_individual_type_description_source(NULL);
    sources[15] = *j2735_v2x_msgs__msg__Elevation__get_individual_type_description_source(NULL);
    sources[16] = *j2735_v2x_msgs__msg__ElevationConfidence__get_individual_type_description_source(NULL);
    sources[17] = *j2735_v2x_msgs__msg__FullPositionVector__get_individual_type_description_source(NULL);
    sources[18] = *j2735_v2x_msgs__msg__GNSSStatus__get_individual_type_description_source(NULL);
    sources[19] = *j2735_v2x_msgs__msg__Heading__get_individual_type_description_source(NULL);
    sources[20] = *j2735_v2x_msgs__msg__HeadingConfidence__get_individual_type_description_source(NULL);
    sources[21] = *j2735_v2x_msgs__msg__HumanPropelledType__get_individual_type_description_source(NULL);
    sources[22] = *j2735_v2x_msgs__msg__Latitude__get_individual_type_description_source(NULL);
    sources[23] = *j2735_v2x_msgs__msg__Longitude__get_individual_type_description_source(NULL);
    sources[24] = *j2735_v2x_msgs__msg__MotorizedPropelledType__get_individual_type_description_source(NULL);
    sources[25] = *j2735_v2x_msgs__msg__MsgCount__get_individual_type_description_source(NULL);
    sources[26] = *j2735_v2x_msgs__msg__NumberOfParticipantsInCluster__get_individual_type_description_source(NULL);
    sources[27] = *j2735_v2x_msgs__msg__OffsetLLB18__get_individual_type_description_source(NULL);
    sources[28] = *j2735_v2x_msgs__msg__PathHistory__get_individual_type_description_source(NULL);
    sources[29] = *j2735_v2x_msgs__msg__PathHistoryPoint__get_individual_type_description_source(NULL);
    sources[30] = *j2735_v2x_msgs__msg__PathHistoryPointList__get_individual_type_description_source(NULL);
    sources[31] = *j2735_v2x_msgs__msg__PathPrediction__get_individual_type_description_source(NULL);
    sources[32] = *j2735_v2x_msgs__msg__PersonalAssistive__get_individual_type_description_source(NULL);
    sources[33] = *j2735_v2x_msgs__msg__PersonalClusterRadius__get_individual_type_description_source(NULL);
    sources[34] = *j2735_v2x_msgs__msg__PersonalCrossingInProgress__get_individual_type_description_source(NULL);
    sources[35] = *j2735_v2x_msgs__msg__PersonalCrossingRequest__get_individual_type_description_source(NULL);
    sources[36] = *j2735_v2x_msgs__msg__PersonalDeviceUsageState__get_individual_type_description_source(NULL);
    sources[37] = *j2735_v2x_msgs__msg__PersonalDeviceUserType__get_individual_type_description_source(NULL);
    sources[38] = *j2735_v2x_msgs__msg__Position3D__get_individual_type_description_source(NULL);
    sources[39] = *j2735_v2x_msgs__msg__PositionConfidence__get_individual_type_description_source(NULL);
    sources[40] = *j2735_v2x_msgs__msg__PositionConfidenceSet__get_individual_type_description_source(NULL);
    sources[41] = *j2735_v2x_msgs__msg__PositionalAccuracy__get_individual_type_description_source(NULL);
    sources[42] = *j2735_v2x_msgs__msg__PropelledInformation__get_individual_type_description_source(NULL);
    sources[43] = *j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__get_individual_type_description_source(NULL);
    sources[44] = *j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__get_individual_type_description_source(NULL);
    sources[45] = *j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__get_individual_type_description_source(NULL);
    sources[46] = *j2735_v2x_msgs__msg__Speed__get_individual_type_description_source(NULL);
    sources[47] = *j2735_v2x_msgs__msg__SpeedConfidence__get_individual_type_description_source(NULL);
    sources[48] = *j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__get_individual_type_description_source(NULL);
    sources[49] = *j2735_v2x_msgs__msg__TemporaryID__get_individual_type_description_source(NULL);
    sources[50] = *j2735_v2x_msgs__msg__ThrottleConfidence__get_individual_type_description_source(NULL);
    sources[51] = *j2735_v2x_msgs__msg__TimeConfidence__get_individual_type_description_source(NULL);
    sources[52] = *j2735_v2x_msgs__msg__TimeOffset__get_individual_type_description_source(NULL);
    sources[53] = *j2735_v2x_msgs__msg__TransmissionAndSpeed__get_individual_type_description_source(NULL);
    sources[54] = *j2735_v2x_msgs__msg__TransmissionState__get_individual_type_description_source(NULL);
    sources[55] = *j2735_v2x_msgs__msg__UserSizeAndBehaviour__get_individual_type_description_source(NULL);
    sources[56] = *j2735_v2x_msgs__msg__Velocity__get_individual_type_description_source(NULL);
    sources[57] = *j2735_v2x_msgs__msg__VertOffsetB12__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
