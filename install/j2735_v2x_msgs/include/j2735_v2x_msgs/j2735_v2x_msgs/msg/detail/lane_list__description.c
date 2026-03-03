// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/LaneList.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/lane_list__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__LaneList__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc3, 0x04, 0x9d, 0x81, 0x0f, 0x0c, 0x30, 0xab,
      0xa9, 0xdd, 0x83, 0xd3, 0x0e, 0x61, 0xe6, 0xe7,
      0x97, 0xfc, 0x03, 0x1c, 0x53, 0xac, 0x7a, 0x8b,
      0xd7, 0x8f, 0x07, 0xc1, 0xd4, 0xf3, 0xe3, 0xbb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/allowed_maneuvers__functions.h"
#include "j2735_v2x_msgs/msg/detail/intersection_reference_id__functions.h"
#include "j2735_v2x_msgs/msg/detail/lane_data_attribute_list__functions.h"
#include "j2735_v2x_msgs/msg/detail/segment_attribute_xy__functions.h"
#include "j2735_v2x_msgs/msg/detail/lane_attributes_crosswalk__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_attribute_set_xy__functions.h"
#include "j2735_v2x_msgs/msg/detail/regulatory_speed_limit__functions.h"
#include "j2735_v2x_msgs/msg/detail/connection__functions.h"
#include "j2735_v2x_msgs/msg/detail/offset_yaxis__functions.h"
#include "j2735_v2x_msgs/msg/detail/lane_attributes_tracked_vehicle__functions.h"
#include "j2735_v2x_msgs/msg/detail/lane_attributes_sidewalk__functions.h"
#include "j2735_v2x_msgs/msg/detail/overlay_lane_list__functions.h"
#include "j2735_v2x_msgs/msg/detail/lane_attributes_parking__functions.h"
#include "j2735_v2x_msgs/msg/detail/segment_attribute_xy_list__functions.h"
#include "j2735_v2x_msgs/msg/detail/lane_sharing__functions.h"
#include "j2735_v2x_msgs/msg/detail/generic_lane__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_xy28b__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_l_lm_d64b__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_xy20b__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_offset_point_xy__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_attribute_xy__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_xy32b__functions.h"
#include "j2735_v2x_msgs/msg/detail/lane_attributes__functions.h"
#include "j2735_v2x_msgs/msg/detail/connects_to_list__functions.h"
#include "j2735_v2x_msgs/msg/detail/lane_type_attributes__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_set_xy__functions.h"
#include "j2735_v2x_msgs/msg/detail/speed_limit_list__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_xy24b__functions.h"
#include "j2735_v2x_msgs/msg/detail/connecting_lane__functions.h"
#include "j2735_v2x_msgs/msg/detail/lane_attributes_vehicle__functions.h"
#include "j2735_v2x_msgs/msg/detail/speed_limit_type__functions.h"
#include "j2735_v2x_msgs/msg/detail/lane_data_attribute__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_list_xy__functions.h"
#include "j2735_v2x_msgs/msg/detail/offset_xaxis__functions.h"
#include "j2735_v2x_msgs/msg/detail/lane_direction__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_xy__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_attribute_xy_list__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_xy22b__functions.h"
#include "j2735_v2x_msgs/msg/detail/lane_attributes_bike__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_xy26b__functions.h"
#include "j2735_v2x_msgs/msg/detail/lane_attributes_striping__functions.h"
#include "j2735_v2x_msgs/msg/detail/computed_lane__functions.h"
#include "j2735_v2x_msgs/msg/detail/lane_attributes_barrier__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__AllowedManeuvers__EXPECTED_HASH = {1, {
    0x88, 0x10, 0x46, 0x7e, 0x1b, 0xf6, 0x40, 0x6f,
    0x24, 0x4a, 0x8f, 0xcf, 0x3c, 0x7d, 0xfb, 0x07,
    0x3f, 0xeb, 0x18, 0x34, 0xf7, 0x84, 0xda, 0xb5,
    0x70, 0x37, 0x05, 0x14, 0x4d, 0xcf, 0x62, 0x7e,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ComputedLane__EXPECTED_HASH = {1, {
    0x1e, 0x3d, 0x9c, 0x11, 0xd2, 0x70, 0x04, 0x08,
    0xd5, 0x8a, 0xec, 0xae, 0x4c, 0xd1, 0x4d, 0x40,
    0xbf, 0xa6, 0x7a, 0xfa, 0x98, 0x77, 0x03, 0xa6,
    0xc3, 0x75, 0xb6, 0xc0, 0xad, 0x21, 0xea, 0xff,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ConnectingLane__EXPECTED_HASH = {1, {
    0xa8, 0xe3, 0xc4, 0x7b, 0xb0, 0xff, 0x57, 0x0d,
    0x48, 0x21, 0x01, 0x5c, 0x86, 0xa0, 0xdf, 0x53,
    0x9a, 0x4c, 0x8e, 0xf5, 0x9c, 0x0d, 0x44, 0xb7,
    0xdc, 0x48, 0xc0, 0xd0, 0x4b, 0x67, 0x51, 0xd0,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__Connection__EXPECTED_HASH = {1, {
    0x9b, 0x2f, 0x8f, 0x7b, 0x08, 0x61, 0x53, 0x13,
    0xd4, 0xa2, 0x9c, 0xdc, 0x90, 0x4c, 0xf8, 0x45,
    0x17, 0xf9, 0x07, 0x74, 0x47, 0x95, 0x85, 0xd5,
    0x1e, 0x22, 0x1b, 0xe5, 0x30, 0xc3, 0xe4, 0xee,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ConnectsToList__EXPECTED_HASH = {1, {
    0x5c, 0x5b, 0xb0, 0xd4, 0x3a, 0xf5, 0xb7, 0xff,
    0x0e, 0x57, 0x2a, 0x59, 0xdc, 0x04, 0x62, 0x6a,
    0x55, 0xae, 0xde, 0x11, 0x23, 0x1b, 0xef, 0xb0,
    0x6a, 0xbd, 0xf8, 0xd5, 0x92, 0x94, 0xe8, 0xff,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__GenericLane__EXPECTED_HASH = {1, {
    0xb4, 0xad, 0x5c, 0xac, 0x33, 0x21, 0x28, 0xa7,
    0xf8, 0x62, 0x48, 0xf7, 0x04, 0x34, 0x56, 0x0d,
    0x2b, 0x18, 0xd7, 0xd3, 0x98, 0xa9, 0xe1, 0xdf,
    0x14, 0xe1, 0xac, 0xe0, 0x6f, 0x25, 0xf7, 0xbf,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__IntersectionReferenceID__EXPECTED_HASH = {1, {
    0x07, 0x43, 0x20, 0x64, 0x4a, 0xef, 0xab, 0x7c,
    0xf7, 0xfa, 0xba, 0x08, 0xc7, 0x88, 0xde, 0x34,
    0xcf, 0x44, 0x61, 0x80, 0x66, 0x57, 0x60, 0x47,
    0x7b, 0x2f, 0x74, 0x08, 0x80, 0xc3, 0x55, 0x29,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__LaneAttributes__EXPECTED_HASH = {1, {
    0x22, 0x58, 0xc7, 0x0b, 0xdb, 0xbc, 0x33, 0x3c,
    0xe6, 0x36, 0x40, 0x33, 0x4d, 0x3b, 0x1a, 0xfd,
    0x09, 0x48, 0x5a, 0x2b, 0x82, 0x97, 0x69, 0xfb,
    0x7a, 0x00, 0xc3, 0x27, 0x06, 0x21, 0x83, 0x3e,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__LaneAttributesBarrier__EXPECTED_HASH = {1, {
    0xfe, 0x33, 0x2c, 0x3b, 0x4d, 0xf1, 0x7a, 0xa7,
    0x34, 0xcb, 0x25, 0x5f, 0xd7, 0xa0, 0xc2, 0x4e,
    0x40, 0x93, 0x64, 0xc2, 0x4d, 0x89, 0xa2, 0xc5,
    0xff, 0x6c, 0xa8, 0xd4, 0x16, 0xf0, 0xcc, 0xbe,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__LaneAttributesBike__EXPECTED_HASH = {1, {
    0xb2, 0xb4, 0xa3, 0x7c, 0xdc, 0x2c, 0xa5, 0xf4,
    0x94, 0xed, 0xfb, 0x6a, 0xd0, 0x36, 0x7d, 0x3c,
    0x2a, 0x67, 0xc8, 0xcd, 0xbb, 0x20, 0xc4, 0x26,
    0x95, 0x98, 0x4b, 0xf6, 0x82, 0xe6, 0xdd, 0x76,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__LaneAttributesCrosswalk__EXPECTED_HASH = {1, {
    0x5f, 0x50, 0x48, 0xe1, 0xd4, 0x5a, 0x51, 0xc6,
    0x2a, 0xdc, 0x3c, 0x5f, 0x49, 0x11, 0xca, 0xa0,
    0x7b, 0x79, 0x87, 0x08, 0x0c, 0xe4, 0x67, 0x0b,
    0xad, 0xdb, 0xe8, 0x8a, 0xe5, 0x3d, 0x85, 0x4c,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__LaneAttributesParking__EXPECTED_HASH = {1, {
    0xdd, 0x93, 0x6e, 0x30, 0x63, 0xac, 0x8c, 0x0f,
    0x26, 0xff, 0x0e, 0x2b, 0x1c, 0xd4, 0x38, 0x1c,
    0x29, 0x1c, 0xc1, 0xd4, 0xf9, 0xa4, 0x57, 0x3d,
    0x02, 0x41, 0xb7, 0x4d, 0x63, 0x26, 0xa4, 0x4b,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__LaneAttributesSidewalk__EXPECTED_HASH = {1, {
    0xd3, 0xcc, 0xa3, 0x33, 0x7d, 0xb9, 0x67, 0x06,
    0x49, 0x6f, 0xe3, 0x00, 0x95, 0x35, 0x8d, 0xec,
    0x1c, 0x3e, 0x47, 0x68, 0x65, 0x64, 0x44, 0x1c,
    0xad, 0x65, 0xcd, 0xc7, 0x5f, 0xf4, 0xe8, 0xda,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__LaneAttributesStriping__EXPECTED_HASH = {1, {
    0x99, 0x9e, 0x11, 0xa3, 0xc2, 0xb6, 0xf5, 0x4d,
    0x9e, 0xdb, 0xfa, 0x6b, 0xca, 0xa8, 0xa9, 0x65,
    0xb8, 0xbe, 0x4a, 0xa2, 0x2e, 0xc0, 0xbb, 0x85,
    0x46, 0x3d, 0xb6, 0x18, 0xfb, 0x2b, 0x75, 0xee,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__EXPECTED_HASH = {1, {
    0x0c, 0xbf, 0x2e, 0xfe, 0x1e, 0x3a, 0x57, 0xe4,
    0x5a, 0xa2, 0x18, 0xd7, 0xe0, 0xc3, 0x7f, 0x72,
    0x6d, 0xd3, 0x24, 0x46, 0xd5, 0xad, 0xcc, 0xb7,
    0xe8, 0x94, 0xeb, 0x2f, 0xe3, 0x7b, 0x15, 0xaf,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__LaneAttributesVehicle__EXPECTED_HASH = {1, {
    0x77, 0x54, 0xcd, 0xb7, 0xed, 0xb4, 0xb2, 0x3e,
    0x13, 0xc2, 0xb4, 0x4c, 0xf1, 0xca, 0x4d, 0xe3,
    0x98, 0x2f, 0x61, 0x4d, 0x52, 0x20, 0x72, 0x68,
    0x82, 0xe6, 0x7a, 0x14, 0x7e, 0x43, 0x22, 0x00,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__LaneDataAttribute__EXPECTED_HASH = {1, {
    0x6e, 0x84, 0x50, 0xa7, 0xca, 0xae, 0xff, 0x58,
    0xce, 0x1f, 0xba, 0x8f, 0x27, 0xe6, 0xe4, 0x1c,
    0xd8, 0x8a, 0x6e, 0x29, 0x71, 0xb8, 0x2b, 0xb9,
    0xdf, 0x0e, 0x43, 0xaa, 0x46, 0x86, 0xd8, 0x7e,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__LaneDataAttributeList__EXPECTED_HASH = {1, {
    0x11, 0xba, 0x3d, 0x31, 0x11, 0x71, 0x1c, 0x0f,
    0x75, 0x0f, 0x16, 0xcc, 0x75, 0xec, 0x98, 0x6f,
    0xda, 0xfe, 0xcc, 0xf2, 0x94, 0xa0, 0xa8, 0x75,
    0xf1, 0x76, 0x6d, 0x43, 0x81, 0x5e, 0x3a, 0x7f,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__LaneDirection__EXPECTED_HASH = {1, {
    0xa9, 0xbc, 0x9d, 0x98, 0x88, 0xba, 0x31, 0xbe,
    0x5a, 0x03, 0x5f, 0xaf, 0xa3, 0xf2, 0xf5, 0x1e,
    0x7e, 0xa3, 0x58, 0xa9, 0xca, 0xb9, 0xf6, 0xb5,
    0xf2, 0x87, 0xc6, 0xbf, 0x95, 0xab, 0x92, 0x99,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__LaneSharing__EXPECTED_HASH = {1, {
    0x54, 0x9a, 0x83, 0xb0, 0x4b, 0x77, 0x93, 0x90,
    0x5e, 0x94, 0xac, 0x40, 0x29, 0x27, 0x60, 0x70,
    0x88, 0x1d, 0x8f, 0x5f, 0xc9, 0x40, 0xb4, 0x02,
    0x2e, 0x03, 0xa9, 0x21, 0xd0, 0x60, 0xb2, 0x07,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__LaneTypeAttributes__EXPECTED_HASH = {1, {
    0x79, 0x05, 0x68, 0xd6, 0x46, 0xe4, 0x48, 0x73,
    0x59, 0x78, 0x30, 0x5b, 0x80, 0xf5, 0x15, 0x87,
    0x8b, 0x53, 0xb3, 0x39, 0x0a, 0xea, 0x19, 0xf7,
    0xd2, 0xe4, 0x6c, 0x39, 0x80, 0x60, 0x63, 0x0d,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NodeAttributeSetXY__EXPECTED_HASH = {1, {
    0x02, 0x43, 0xd0, 0x2f, 0x12, 0x2e, 0x38, 0x3d,
    0x4b, 0x2c, 0x2b, 0x4a, 0x59, 0x0a, 0x2a, 0x47,
    0x04, 0x81, 0xbd, 0x66, 0x74, 0x03, 0x99, 0x79,
    0x14, 0x5d, 0xca, 0x88, 0x31, 0x44, 0xe4, 0x6d,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NodeAttributeXY__EXPECTED_HASH = {1, {
    0xb1, 0xfa, 0x33, 0x8f, 0x27, 0x8e, 0x54, 0xa9,
    0x2c, 0x2f, 0x45, 0x89, 0xb2, 0x56, 0x29, 0x88,
    0x35, 0x5a, 0x1c, 0x4f, 0x8e, 0x79, 0xc5, 0x19,
    0xc1, 0x56, 0xbc, 0x3e, 0x7e, 0x75, 0xa7, 0x52,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NodeAttributeXYList__EXPECTED_HASH = {1, {
    0x4d, 0x5f, 0x82, 0x14, 0x45, 0x92, 0xef, 0xdc,
    0xca, 0x4d, 0xb1, 0x47, 0xba, 0x70, 0xd5, 0xbb,
    0xd3, 0x91, 0x11, 0x6f, 0xf6, 0xd6, 0x04, 0x20,
    0x38, 0x6a, 0x46, 0x51, 0x78, 0x60, 0x81, 0xe4,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NodeLLmD64b__EXPECTED_HASH = {1, {
    0x12, 0x05, 0x5b, 0xca, 0xb5, 0x09, 0xde, 0x4d,
    0x0f, 0x1f, 0x28, 0xf5, 0xbb, 0x44, 0x66, 0xad,
    0x07, 0xbc, 0xc5, 0x35, 0x3a, 0x3f, 0x11, 0xbb,
    0x6c, 0xfe, 0x2c, 0x00, 0x3f, 0xc9, 0xff, 0xb3,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NodeListXY__EXPECTED_HASH = {1, {
    0xa2, 0x0a, 0x23, 0x17, 0x65, 0x2f, 0xb9, 0x13,
    0xae, 0x11, 0xb8, 0x6f, 0xe9, 0x8a, 0x89, 0xb8,
    0xd4, 0xb5, 0xfe, 0xd2, 0xfa, 0x1a, 0x71, 0xe8,
    0x0b, 0x10, 0x42, 0xb4, 0x92, 0x45, 0xca, 0xd7,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NodeOffsetPointXY__EXPECTED_HASH = {1, {
    0x18, 0xed, 0xb5, 0x4c, 0xe5, 0x0f, 0x6c, 0x02,
    0x31, 0xa1, 0xf8, 0x52, 0x6d, 0xe1, 0x31, 0xa2,
    0xe3, 0xeb, 0xf9, 0x97, 0x1f, 0xb3, 0x9d, 0xf0,
    0x79, 0xd7, 0x68, 0xec, 0x23, 0x8c, 0xc8, 0x45,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NodeSetXY__EXPECTED_HASH = {1, {
    0x1e, 0xf4, 0xfd, 0x36, 0xdd, 0xc0, 0x31, 0x3e,
    0x7a, 0xec, 0xc4, 0x06, 0x6b, 0xe6, 0xbb, 0x21,
    0x01, 0xba, 0x41, 0xfe, 0x0e, 0x5d, 0xea, 0x0a,
    0x55, 0x46, 0x02, 0x34, 0x5c, 0x1a, 0xa5, 0x00,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NodeXY__EXPECTED_HASH = {1, {
    0xe8, 0xa4, 0x3c, 0xdf, 0x37, 0x78, 0x69, 0x38,
    0x89, 0x3e, 0x62, 0x59, 0xe2, 0xf2, 0xbc, 0xc2,
    0x1f, 0xc1, 0x65, 0x15, 0xc4, 0xe9, 0xef, 0xac,
    0x1a, 0x58, 0xb0, 0xba, 0x55, 0xdc, 0x23, 0xa2,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NodeXY20b__EXPECTED_HASH = {1, {
    0xc4, 0xe1, 0x1b, 0xb4, 0x5e, 0x64, 0x79, 0xd8,
    0x00, 0x5b, 0x4c, 0x86, 0x14, 0xd3, 0x85, 0x51,
    0xe9, 0x84, 0x8a, 0x93, 0x78, 0x52, 0x70, 0x81,
    0xaa, 0xd6, 0xa1, 0x51, 0xe6, 0xd8, 0xe0, 0xc4,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NodeXY22b__EXPECTED_HASH = {1, {
    0x45, 0x25, 0xdc, 0x9b, 0x95, 0x64, 0xbd, 0x58,
    0x0d, 0x9e, 0xc5, 0xf9, 0x70, 0x41, 0x44, 0x39,
    0x8f, 0x82, 0xc7, 0x17, 0x47, 0x05, 0x5e, 0xef,
    0x2b, 0x08, 0x8b, 0xb8, 0x28, 0x60, 0x12, 0x6a,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NodeXY24b__EXPECTED_HASH = {1, {
    0xe7, 0xb7, 0x0d, 0x99, 0x15, 0xcd, 0x02, 0xbf,
    0x77, 0xde, 0xd9, 0x29, 0x4f, 0xf0, 0xa5, 0x12,
    0x03, 0xac, 0x3d, 0xa5, 0xb5, 0x93, 0x93, 0xaf,
    0x8a, 0x00, 0x6c, 0x47, 0x60, 0xc6, 0x23, 0x2c,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NodeXY26b__EXPECTED_HASH = {1, {
    0xea, 0x44, 0xeb, 0x8e, 0x26, 0x08, 0x8d, 0xb0,
    0x85, 0x7b, 0xb2, 0xff, 0xdd, 0x0f, 0x75, 0x0c,
    0x3e, 0x8c, 0xd2, 0xd3, 0x21, 0x22, 0x67, 0x0b,
    0x54, 0x22, 0xf0, 0x9d, 0xa3, 0x1e, 0x29, 0x49,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NodeXY28b__EXPECTED_HASH = {1, {
    0x82, 0xd5, 0x0a, 0x59, 0x5f, 0x16, 0xbd, 0xe6,
    0x68, 0xda, 0x2b, 0xc0, 0x52, 0x2c, 0x23, 0xba,
    0xb1, 0xff, 0x1f, 0xad, 0x23, 0x75, 0xa9, 0x4e,
    0x63, 0xe3, 0xbd, 0xb6, 0x66, 0xd9, 0xcd, 0x43,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NodeXY32b__EXPECTED_HASH = {1, {
    0x81, 0xcb, 0xf6, 0xdb, 0xfe, 0xc9, 0xb6, 0x8c,
    0xa2, 0xdf, 0x13, 0x9c, 0xe6, 0xa2, 0x01, 0x66,
    0xe1, 0x14, 0xe0, 0xb8, 0x56, 0x9b, 0xa3, 0xa9,
    0xde, 0xfb, 0x0e, 0x13, 0xb0, 0xb4, 0xf5, 0x05,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__OffsetXaxis__EXPECTED_HASH = {1, {
    0xd9, 0xdc, 0x93, 0xb3, 0xea, 0x9a, 0x6f, 0x55,
    0x48, 0xa4, 0x37, 0xac, 0x5f, 0xb9, 0x53, 0xa3,
    0x75, 0xd6, 0x9a, 0x8c, 0x24, 0x77, 0x83, 0x67,
    0xb8, 0x05, 0x4a, 0x3c, 0x6a, 0xfb, 0x1a, 0xe5,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__OffsetYaxis__EXPECTED_HASH = {1, {
    0x80, 0x40, 0x3a, 0x7c, 0x52, 0x01, 0x21, 0x54,
    0xdf, 0x15, 0xcd, 0x76, 0xc5, 0x97, 0x3a, 0x0f,
    0x17, 0xcc, 0x04, 0x6b, 0x70, 0x67, 0xfa, 0x86,
    0x20, 0x13, 0x34, 0x23, 0xf1, 0xaa, 0xd9, 0x35,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__OverlayLaneList__EXPECTED_HASH = {1, {
    0xa4, 0xe2, 0xb6, 0xac, 0xe3, 0x55, 0x0b, 0x6c,
    0x43, 0x1c, 0x18, 0x71, 0x34, 0x15, 0x4f, 0x7e,
    0xc7, 0x92, 0xbd, 0x04, 0x42, 0x47, 0x07, 0x7f,
    0xaa, 0x41, 0x89, 0x62, 0x18, 0xa8, 0x57, 0x32,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__RegulatorySpeedLimit__EXPECTED_HASH = {1, {
    0x74, 0x39, 0x1f, 0x7d, 0x93, 0x52, 0x60, 0x91,
    0xcf, 0x37, 0xfe, 0xcd, 0x3b, 0xc7, 0xd9, 0xea,
    0x2b, 0xab, 0xf8, 0xcc, 0x58, 0x24, 0x00, 0xf5,
    0xc6, 0x99, 0xdc, 0x5e, 0x44, 0x95, 0x14, 0xf1,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__SegmentAttributeXY__EXPECTED_HASH = {1, {
    0xde, 0x72, 0xc9, 0xca, 0x8e, 0x75, 0xaa, 0xe9,
    0x7d, 0x26, 0xc1, 0x3f, 0x63, 0xba, 0x1b, 0xe6,
    0xd9, 0x61, 0xee, 0x85, 0x3a, 0xbd, 0xa5, 0x69,
    0xbc, 0x4e, 0x94, 0xb3, 0x38, 0x6e, 0x88, 0x5e,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__SegmentAttributeXYList__EXPECTED_HASH = {1, {
    0x33, 0x34, 0xc5, 0x83, 0xc9, 0x60, 0xb2, 0x06,
    0x38, 0x3d, 0x82, 0x15, 0xd4, 0xed, 0xf8, 0xa2,
    0x97, 0x8a, 0x67, 0xa2, 0xa6, 0x7f, 0xb8, 0x92,
    0x86, 0x03, 0x24, 0x5b, 0x7c, 0x57, 0x41, 0x3f,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__SpeedLimitList__EXPECTED_HASH = {1, {
    0xbd, 0x2c, 0x79, 0xa8, 0xcf, 0xeb, 0x3d, 0x56,
    0x4e, 0xd7, 0x1b, 0xe7, 0xe1, 0x71, 0x66, 0x73,
    0xb6, 0x5b, 0x0c, 0x17, 0x85, 0x17, 0x25, 0x4d,
    0x5b, 0x0d, 0x8e, 0xcc, 0x49, 0xe7, 0x49, 0x1b,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__SpeedLimitType__EXPECTED_HASH = {1, {
    0x42, 0xa5, 0xa7, 0x71, 0x95, 0x8f, 0x1a, 0xba,
    0xa6, 0x19, 0x8a, 0xce, 0x4e, 0x77, 0x78, 0xee,
    0x70, 0x09, 0x87, 0x29, 0xaa, 0x8f, 0x14, 0x89,
    0x02, 0xab, 0xcd, 0xf8, 0x82, 0x98, 0xeb, 0x2a,
  }};
#endif

static char j2735_v2x_msgs__msg__LaneList__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneList";
static char j2735_v2x_msgs__msg__AllowedManeuvers__TYPE_NAME[] = "j2735_v2x_msgs/msg/AllowedManeuvers";
static char j2735_v2x_msgs__msg__ComputedLane__TYPE_NAME[] = "j2735_v2x_msgs/msg/ComputedLane";
static char j2735_v2x_msgs__msg__ConnectingLane__TYPE_NAME[] = "j2735_v2x_msgs/msg/ConnectingLane";
static char j2735_v2x_msgs__msg__Connection__TYPE_NAME[] = "j2735_v2x_msgs/msg/Connection";
static char j2735_v2x_msgs__msg__ConnectsToList__TYPE_NAME[] = "j2735_v2x_msgs/msg/ConnectsToList";
static char j2735_v2x_msgs__msg__GenericLane__TYPE_NAME[] = "j2735_v2x_msgs/msg/GenericLane";
static char j2735_v2x_msgs__msg__IntersectionReferenceID__TYPE_NAME[] = "j2735_v2x_msgs/msg/IntersectionReferenceID";
static char j2735_v2x_msgs__msg__LaneAttributes__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneAttributes";
static char j2735_v2x_msgs__msg__LaneAttributesBarrier__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneAttributesBarrier";
static char j2735_v2x_msgs__msg__LaneAttributesBike__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneAttributesBike";
static char j2735_v2x_msgs__msg__LaneAttributesCrosswalk__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneAttributesCrosswalk";
static char j2735_v2x_msgs__msg__LaneAttributesParking__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneAttributesParking";
static char j2735_v2x_msgs__msg__LaneAttributesSidewalk__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneAttributesSidewalk";
static char j2735_v2x_msgs__msg__LaneAttributesStriping__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneAttributesStriping";
static char j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneAttributesTrackedVehicle";
static char j2735_v2x_msgs__msg__LaneAttributesVehicle__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneAttributesVehicle";
static char j2735_v2x_msgs__msg__LaneDataAttribute__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneDataAttribute";
static char j2735_v2x_msgs__msg__LaneDataAttributeList__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneDataAttributeList";
static char j2735_v2x_msgs__msg__LaneDirection__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneDirection";
static char j2735_v2x_msgs__msg__LaneSharing__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneSharing";
static char j2735_v2x_msgs__msg__LaneTypeAttributes__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneTypeAttributes";
static char j2735_v2x_msgs__msg__NodeAttributeSetXY__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeAttributeSetXY";
static char j2735_v2x_msgs__msg__NodeAttributeXY__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeAttributeXY";
static char j2735_v2x_msgs__msg__NodeAttributeXYList__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeAttributeXYList";
static char j2735_v2x_msgs__msg__NodeLLmD64b__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeLLmD64b";
static char j2735_v2x_msgs__msg__NodeListXY__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeListXY";
static char j2735_v2x_msgs__msg__NodeOffsetPointXY__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeOffsetPointXY";
static char j2735_v2x_msgs__msg__NodeSetXY__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeSetXY";
static char j2735_v2x_msgs__msg__NodeXY__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeXY";
static char j2735_v2x_msgs__msg__NodeXY20b__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeXY20b";
static char j2735_v2x_msgs__msg__NodeXY22b__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeXY22b";
static char j2735_v2x_msgs__msg__NodeXY24b__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeXY24b";
static char j2735_v2x_msgs__msg__NodeXY26b__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeXY26b";
static char j2735_v2x_msgs__msg__NodeXY28b__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeXY28b";
static char j2735_v2x_msgs__msg__NodeXY32b__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeXY32b";
static char j2735_v2x_msgs__msg__OffsetXaxis__TYPE_NAME[] = "j2735_v2x_msgs/msg/OffsetXaxis";
static char j2735_v2x_msgs__msg__OffsetYaxis__TYPE_NAME[] = "j2735_v2x_msgs/msg/OffsetYaxis";
static char j2735_v2x_msgs__msg__OverlayLaneList__TYPE_NAME[] = "j2735_v2x_msgs/msg/OverlayLaneList";
static char j2735_v2x_msgs__msg__RegulatorySpeedLimit__TYPE_NAME[] = "j2735_v2x_msgs/msg/RegulatorySpeedLimit";
static char j2735_v2x_msgs__msg__SegmentAttributeXY__TYPE_NAME[] = "j2735_v2x_msgs/msg/SegmentAttributeXY";
static char j2735_v2x_msgs__msg__SegmentAttributeXYList__TYPE_NAME[] = "j2735_v2x_msgs/msg/SegmentAttributeXYList";
static char j2735_v2x_msgs__msg__SpeedLimitList__TYPE_NAME[] = "j2735_v2x_msgs/msg/SpeedLimitList";
static char j2735_v2x_msgs__msg__SpeedLimitType__TYPE_NAME[] = "j2735_v2x_msgs/msg/SpeedLimitType";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__LaneList__FIELD_NAME__lane_list[] = "lane_list";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__LaneList__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__LaneList__FIELD_NAME__lane_list, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {j2735_v2x_msgs__msg__GenericLane__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__LaneList__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__AllowedManeuvers__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ComputedLane__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ConnectingLane__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__Connection__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ConnectsToList__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__GenericLane__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__IntersectionReferenceID__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneAttributes__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneAttributesBarrier__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneAttributesBike__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneAttributesCrosswalk__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneAttributesParking__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneAttributesSidewalk__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneAttributesStriping__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneAttributesVehicle__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneDataAttribute__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneDataAttributeList__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneDirection__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneSharing__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneTypeAttributes__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeAttributeSetXY__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeAttributeXY__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeAttributeXYList__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeLLmD64b__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeListXY__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeOffsetPointXY__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeSetXY__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeXY__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeXY20b__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeXY22b__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeXY24b__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeXY26b__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeXY28b__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeXY32b__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__OffsetXaxis__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__OffsetYaxis__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__OverlayLaneList__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__RegulatorySpeedLimit__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__SegmentAttributeXY__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__SegmentAttributeXYList__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__SpeedLimitList__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__SpeedLimitType__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__LaneList__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__LaneList__TYPE_NAME, 27, 27},
      {j2735_v2x_msgs__msg__LaneList__FIELDS, 1, 1},
    },
    {j2735_v2x_msgs__msg__LaneList__REFERENCED_TYPE_DESCRIPTIONS, 43, 43},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AllowedManeuvers__EXPECTED_HASH, j2735_v2x_msgs__msg__AllowedManeuvers__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__AllowedManeuvers__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ComputedLane__EXPECTED_HASH, j2735_v2x_msgs__msg__ComputedLane__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__ComputedLane__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ConnectingLane__EXPECTED_HASH, j2735_v2x_msgs__msg__ConnectingLane__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__ConnectingLane__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Connection__EXPECTED_HASH, j2735_v2x_msgs__msg__Connection__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = j2735_v2x_msgs__msg__Connection__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ConnectsToList__EXPECTED_HASH, j2735_v2x_msgs__msg__ConnectsToList__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = j2735_v2x_msgs__msg__ConnectsToList__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__GenericLane__EXPECTED_HASH, j2735_v2x_msgs__msg__GenericLane__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = j2735_v2x_msgs__msg__GenericLane__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__IntersectionReferenceID__EXPECTED_HASH, j2735_v2x_msgs__msg__IntersectionReferenceID__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = j2735_v2x_msgs__msg__IntersectionReferenceID__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__LaneAttributes__EXPECTED_HASH, j2735_v2x_msgs__msg__LaneAttributes__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = j2735_v2x_msgs__msg__LaneAttributes__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__LaneAttributesBarrier__EXPECTED_HASH, j2735_v2x_msgs__msg__LaneAttributesBarrier__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = j2735_v2x_msgs__msg__LaneAttributesBarrier__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__LaneAttributesBike__EXPECTED_HASH, j2735_v2x_msgs__msg__LaneAttributesBike__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = j2735_v2x_msgs__msg__LaneAttributesBike__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__LaneAttributesCrosswalk__EXPECTED_HASH, j2735_v2x_msgs__msg__LaneAttributesCrosswalk__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = j2735_v2x_msgs__msg__LaneAttributesCrosswalk__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__LaneAttributesParking__EXPECTED_HASH, j2735_v2x_msgs__msg__LaneAttributesParking__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = j2735_v2x_msgs__msg__LaneAttributesParking__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__LaneAttributesSidewalk__EXPECTED_HASH, j2735_v2x_msgs__msg__LaneAttributesSidewalk__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[12].fields = j2735_v2x_msgs__msg__LaneAttributesSidewalk__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__LaneAttributesStriping__EXPECTED_HASH, j2735_v2x_msgs__msg__LaneAttributesStriping__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[13].fields = j2735_v2x_msgs__msg__LaneAttributesStriping__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__EXPECTED_HASH, j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[14].fields = j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__LaneAttributesVehicle__EXPECTED_HASH, j2735_v2x_msgs__msg__LaneAttributesVehicle__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[15].fields = j2735_v2x_msgs__msg__LaneAttributesVehicle__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__LaneDataAttribute__EXPECTED_HASH, j2735_v2x_msgs__msg__LaneDataAttribute__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[16].fields = j2735_v2x_msgs__msg__LaneDataAttribute__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__LaneDataAttributeList__EXPECTED_HASH, j2735_v2x_msgs__msg__LaneDataAttributeList__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[17].fields = j2735_v2x_msgs__msg__LaneDataAttributeList__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__LaneDirection__EXPECTED_HASH, j2735_v2x_msgs__msg__LaneDirection__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[18].fields = j2735_v2x_msgs__msg__LaneDirection__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__LaneSharing__EXPECTED_HASH, j2735_v2x_msgs__msg__LaneSharing__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[19].fields = j2735_v2x_msgs__msg__LaneSharing__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__LaneTypeAttributes__EXPECTED_HASH, j2735_v2x_msgs__msg__LaneTypeAttributes__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[20].fields = j2735_v2x_msgs__msg__LaneTypeAttributes__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeAttributeSetXY__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeAttributeSetXY__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[21].fields = j2735_v2x_msgs__msg__NodeAttributeSetXY__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeAttributeXY__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeAttributeXY__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[22].fields = j2735_v2x_msgs__msg__NodeAttributeXY__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeAttributeXYList__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeAttributeXYList__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[23].fields = j2735_v2x_msgs__msg__NodeAttributeXYList__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeLLmD64b__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeLLmD64b__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[24].fields = j2735_v2x_msgs__msg__NodeLLmD64b__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeListXY__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeListXY__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[25].fields = j2735_v2x_msgs__msg__NodeListXY__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeOffsetPointXY__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeOffsetPointXY__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[26].fields = j2735_v2x_msgs__msg__NodeOffsetPointXY__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeSetXY__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeSetXY__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[27].fields = j2735_v2x_msgs__msg__NodeSetXY__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeXY__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeXY__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[28].fields = j2735_v2x_msgs__msg__NodeXY__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeXY20b__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeXY20b__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[29].fields = j2735_v2x_msgs__msg__NodeXY20b__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeXY22b__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeXY22b__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[30].fields = j2735_v2x_msgs__msg__NodeXY22b__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeXY24b__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeXY24b__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[31].fields = j2735_v2x_msgs__msg__NodeXY24b__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeXY26b__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeXY26b__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[32].fields = j2735_v2x_msgs__msg__NodeXY26b__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeXY28b__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeXY28b__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[33].fields = j2735_v2x_msgs__msg__NodeXY28b__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeXY32b__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeXY32b__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[34].fields = j2735_v2x_msgs__msg__NodeXY32b__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__OffsetXaxis__EXPECTED_HASH, j2735_v2x_msgs__msg__OffsetXaxis__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[35].fields = j2735_v2x_msgs__msg__OffsetXaxis__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__OffsetYaxis__EXPECTED_HASH, j2735_v2x_msgs__msg__OffsetYaxis__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[36].fields = j2735_v2x_msgs__msg__OffsetYaxis__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__OverlayLaneList__EXPECTED_HASH, j2735_v2x_msgs__msg__OverlayLaneList__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[37].fields = j2735_v2x_msgs__msg__OverlayLaneList__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__RegulatorySpeedLimit__EXPECTED_HASH, j2735_v2x_msgs__msg__RegulatorySpeedLimit__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[38].fields = j2735_v2x_msgs__msg__RegulatorySpeedLimit__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__SegmentAttributeXY__EXPECTED_HASH, j2735_v2x_msgs__msg__SegmentAttributeXY__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[39].fields = j2735_v2x_msgs__msg__SegmentAttributeXY__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__SegmentAttributeXYList__EXPECTED_HASH, j2735_v2x_msgs__msg__SegmentAttributeXYList__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[40].fields = j2735_v2x_msgs__msg__SegmentAttributeXYList__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__SpeedLimitList__EXPECTED_HASH, j2735_v2x_msgs__msg__SpeedLimitList__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[41].fields = j2735_v2x_msgs__msg__SpeedLimitList__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__SpeedLimitType__EXPECTED_HASH, j2735_v2x_msgs__msg__SpeedLimitType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[42].fields = j2735_v2x_msgs__msg__SpeedLimitType__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# LaneList.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The LaneList data frame consists of a list of GenericLane entries.\n"
  "# LaneList ::= SEQUENCE (SIZE(1..255)) OF GenericLane\n"
  "#\n"
  "\n"
  "j2735_v2x_msgs/GenericLane[] lane_list";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__LaneList__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__LaneList__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 252, 252},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__LaneList__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[44];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 44, 44};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__LaneList__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__AllowedManeuvers__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__ComputedLane__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__ConnectingLane__get_individual_type_description_source(NULL);
    sources[4] = *j2735_v2x_msgs__msg__Connection__get_individual_type_description_source(NULL);
    sources[5] = *j2735_v2x_msgs__msg__ConnectsToList__get_individual_type_description_source(NULL);
    sources[6] = *j2735_v2x_msgs__msg__GenericLane__get_individual_type_description_source(NULL);
    sources[7] = *j2735_v2x_msgs__msg__IntersectionReferenceID__get_individual_type_description_source(NULL);
    sources[8] = *j2735_v2x_msgs__msg__LaneAttributes__get_individual_type_description_source(NULL);
    sources[9] = *j2735_v2x_msgs__msg__LaneAttributesBarrier__get_individual_type_description_source(NULL);
    sources[10] = *j2735_v2x_msgs__msg__LaneAttributesBike__get_individual_type_description_source(NULL);
    sources[11] = *j2735_v2x_msgs__msg__LaneAttributesCrosswalk__get_individual_type_description_source(NULL);
    sources[12] = *j2735_v2x_msgs__msg__LaneAttributesParking__get_individual_type_description_source(NULL);
    sources[13] = *j2735_v2x_msgs__msg__LaneAttributesSidewalk__get_individual_type_description_source(NULL);
    sources[14] = *j2735_v2x_msgs__msg__LaneAttributesStriping__get_individual_type_description_source(NULL);
    sources[15] = *j2735_v2x_msgs__msg__LaneAttributesTrackedVehicle__get_individual_type_description_source(NULL);
    sources[16] = *j2735_v2x_msgs__msg__LaneAttributesVehicle__get_individual_type_description_source(NULL);
    sources[17] = *j2735_v2x_msgs__msg__LaneDataAttribute__get_individual_type_description_source(NULL);
    sources[18] = *j2735_v2x_msgs__msg__LaneDataAttributeList__get_individual_type_description_source(NULL);
    sources[19] = *j2735_v2x_msgs__msg__LaneDirection__get_individual_type_description_source(NULL);
    sources[20] = *j2735_v2x_msgs__msg__LaneSharing__get_individual_type_description_source(NULL);
    sources[21] = *j2735_v2x_msgs__msg__LaneTypeAttributes__get_individual_type_description_source(NULL);
    sources[22] = *j2735_v2x_msgs__msg__NodeAttributeSetXY__get_individual_type_description_source(NULL);
    sources[23] = *j2735_v2x_msgs__msg__NodeAttributeXY__get_individual_type_description_source(NULL);
    sources[24] = *j2735_v2x_msgs__msg__NodeAttributeXYList__get_individual_type_description_source(NULL);
    sources[25] = *j2735_v2x_msgs__msg__NodeLLmD64b__get_individual_type_description_source(NULL);
    sources[26] = *j2735_v2x_msgs__msg__NodeListXY__get_individual_type_description_source(NULL);
    sources[27] = *j2735_v2x_msgs__msg__NodeOffsetPointXY__get_individual_type_description_source(NULL);
    sources[28] = *j2735_v2x_msgs__msg__NodeSetXY__get_individual_type_description_source(NULL);
    sources[29] = *j2735_v2x_msgs__msg__NodeXY__get_individual_type_description_source(NULL);
    sources[30] = *j2735_v2x_msgs__msg__NodeXY20b__get_individual_type_description_source(NULL);
    sources[31] = *j2735_v2x_msgs__msg__NodeXY22b__get_individual_type_description_source(NULL);
    sources[32] = *j2735_v2x_msgs__msg__NodeXY24b__get_individual_type_description_source(NULL);
    sources[33] = *j2735_v2x_msgs__msg__NodeXY26b__get_individual_type_description_source(NULL);
    sources[34] = *j2735_v2x_msgs__msg__NodeXY28b__get_individual_type_description_source(NULL);
    sources[35] = *j2735_v2x_msgs__msg__NodeXY32b__get_individual_type_description_source(NULL);
    sources[36] = *j2735_v2x_msgs__msg__OffsetXaxis__get_individual_type_description_source(NULL);
    sources[37] = *j2735_v2x_msgs__msg__OffsetYaxis__get_individual_type_description_source(NULL);
    sources[38] = *j2735_v2x_msgs__msg__OverlayLaneList__get_individual_type_description_source(NULL);
    sources[39] = *j2735_v2x_msgs__msg__RegulatorySpeedLimit__get_individual_type_description_source(NULL);
    sources[40] = *j2735_v2x_msgs__msg__SegmentAttributeXY__get_individual_type_description_source(NULL);
    sources[41] = *j2735_v2x_msgs__msg__SegmentAttributeXYList__get_individual_type_description_source(NULL);
    sources[42] = *j2735_v2x_msgs__msg__SpeedLimitList__get_individual_type_description_source(NULL);
    sources[43] = *j2735_v2x_msgs__msg__SpeedLimitType__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
