// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/NodeSetXY.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/node_set_xy__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__NodeSetXY__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1e, 0xf4, 0xfd, 0x36, 0xdd, 0xc0, 0x31, 0x3e,
      0x7a, 0xec, 0xc4, 0x06, 0x6b, 0xe6, 0xbb, 0x21,
      0x01, 0xba, 0x41, 0xfe, 0x0e, 0x5d, 0xea, 0x0a,
      0x55, 0x46, 0x02, 0x34, 0x5c, 0x1a, 0xa5, 0x00,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/lane_data_attribute_list__functions.h"
#include "j2735_v2x_msgs/msg/detail/segment_attribute_xy__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_attribute_set_xy__functions.h"
#include "j2735_v2x_msgs/msg/detail/regulatory_speed_limit__functions.h"
#include "j2735_v2x_msgs/msg/detail/segment_attribute_xy_list__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_xy28b__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_l_lm_d64b__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_xy20b__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_offset_point_xy__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_attribute_xy__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_xy32b__functions.h"
#include "j2735_v2x_msgs/msg/detail/speed_limit_list__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_xy24b__functions.h"
#include "j2735_v2x_msgs/msg/detail/speed_limit_type__functions.h"
#include "j2735_v2x_msgs/msg/detail/lane_data_attribute__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_xy__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_attribute_xy_list__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_xy22b__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_xy26b__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
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
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NodeOffsetPointXY__EXPECTED_HASH = {1, {
    0x18, 0xed, 0xb5, 0x4c, 0xe5, 0x0f, 0x6c, 0x02,
    0x31, 0xa1, 0xf8, 0x52, 0x6d, 0xe1, 0x31, 0xa2,
    0xe3, 0xeb, 0xf9, 0x97, 0x1f, 0xb3, 0x9d, 0xf0,
    0x79, 0xd7, 0x68, 0xec, 0x23, 0x8c, 0xc8, 0x45,
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

static char j2735_v2x_msgs__msg__NodeSetXY__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeSetXY";
static char j2735_v2x_msgs__msg__LaneDataAttribute__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneDataAttribute";
static char j2735_v2x_msgs__msg__LaneDataAttributeList__TYPE_NAME[] = "j2735_v2x_msgs/msg/LaneDataAttributeList";
static char j2735_v2x_msgs__msg__NodeAttributeSetXY__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeAttributeSetXY";
static char j2735_v2x_msgs__msg__NodeAttributeXY__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeAttributeXY";
static char j2735_v2x_msgs__msg__NodeAttributeXYList__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeAttributeXYList";
static char j2735_v2x_msgs__msg__NodeLLmD64b__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeLLmD64b";
static char j2735_v2x_msgs__msg__NodeOffsetPointXY__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeOffsetPointXY";
static char j2735_v2x_msgs__msg__NodeXY__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeXY";
static char j2735_v2x_msgs__msg__NodeXY20b__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeXY20b";
static char j2735_v2x_msgs__msg__NodeXY22b__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeXY22b";
static char j2735_v2x_msgs__msg__NodeXY24b__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeXY24b";
static char j2735_v2x_msgs__msg__NodeXY26b__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeXY26b";
static char j2735_v2x_msgs__msg__NodeXY28b__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeXY28b";
static char j2735_v2x_msgs__msg__NodeXY32b__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeXY32b";
static char j2735_v2x_msgs__msg__RegulatorySpeedLimit__TYPE_NAME[] = "j2735_v2x_msgs/msg/RegulatorySpeedLimit";
static char j2735_v2x_msgs__msg__SegmentAttributeXY__TYPE_NAME[] = "j2735_v2x_msgs/msg/SegmentAttributeXY";
static char j2735_v2x_msgs__msg__SegmentAttributeXYList__TYPE_NAME[] = "j2735_v2x_msgs/msg/SegmentAttributeXYList";
static char j2735_v2x_msgs__msg__SpeedLimitList__TYPE_NAME[] = "j2735_v2x_msgs/msg/SpeedLimitList";
static char j2735_v2x_msgs__msg__SpeedLimitType__TYPE_NAME[] = "j2735_v2x_msgs/msg/SpeedLimitType";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__NodeSetXY__FIELD_NAME__node_set_xy[] = "node_set_xy";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__NodeSetXY__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__NodeSetXY__FIELD_NAME__node_set_xy, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {j2735_v2x_msgs__msg__NodeXY__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__NodeSetXY__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__LaneDataAttribute__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__LaneDataAttributeList__TYPE_NAME, 40, 40},
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
    {j2735_v2x_msgs__msg__NodeOffsetPointXY__TYPE_NAME, 36, 36},
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
j2735_v2x_msgs__msg__NodeSetXY__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__NodeSetXY__TYPE_NAME, 28, 28},
      {j2735_v2x_msgs__msg__NodeSetXY__FIELDS, 1, 1},
    },
    {j2735_v2x_msgs__msg__NodeSetXY__REFERENCED_TYPE_DESCRIPTIONS, 19, 19},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__LaneDataAttribute__EXPECTED_HASH, j2735_v2x_msgs__msg__LaneDataAttribute__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__LaneDataAttribute__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__LaneDataAttributeList__EXPECTED_HASH, j2735_v2x_msgs__msg__LaneDataAttributeList__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__LaneDataAttributeList__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeAttributeSetXY__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeAttributeSetXY__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__NodeAttributeSetXY__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeAttributeXY__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeAttributeXY__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = j2735_v2x_msgs__msg__NodeAttributeXY__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeAttributeXYList__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeAttributeXYList__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = j2735_v2x_msgs__msg__NodeAttributeXYList__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeLLmD64b__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeLLmD64b__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = j2735_v2x_msgs__msg__NodeLLmD64b__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeOffsetPointXY__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeOffsetPointXY__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = j2735_v2x_msgs__msg__NodeOffsetPointXY__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeXY__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeXY__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = j2735_v2x_msgs__msg__NodeXY__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeXY20b__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeXY20b__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = j2735_v2x_msgs__msg__NodeXY20b__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeXY22b__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeXY22b__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = j2735_v2x_msgs__msg__NodeXY22b__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeXY24b__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeXY24b__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = j2735_v2x_msgs__msg__NodeXY24b__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeXY26b__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeXY26b__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = j2735_v2x_msgs__msg__NodeXY26b__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeXY28b__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeXY28b__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[12].fields = j2735_v2x_msgs__msg__NodeXY28b__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeXY32b__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeXY32b__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[13].fields = j2735_v2x_msgs__msg__NodeXY32b__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__RegulatorySpeedLimit__EXPECTED_HASH, j2735_v2x_msgs__msg__RegulatorySpeedLimit__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[14].fields = j2735_v2x_msgs__msg__RegulatorySpeedLimit__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__SegmentAttributeXY__EXPECTED_HASH, j2735_v2x_msgs__msg__SegmentAttributeXY__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[15].fields = j2735_v2x_msgs__msg__SegmentAttributeXY__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__SegmentAttributeXYList__EXPECTED_HASH, j2735_v2x_msgs__msg__SegmentAttributeXYList__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[16].fields = j2735_v2x_msgs__msg__SegmentAttributeXYList__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__SpeedLimitList__EXPECTED_HASH, j2735_v2x_msgs__msg__SpeedLimitList__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[17].fields = j2735_v2x_msgs__msg__SpeedLimitList__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__SpeedLimitType__EXPECTED_HASH, j2735_v2x_msgs__msg__SpeedLimitType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[18].fields = j2735_v2x_msgs__msg__SpeedLimitType__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# NodeListXY.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The NodeSetXY data frame consists of a list of Node entries using XY offsets.\n"
  "#\n"
  "# NodeSetXY ::= SEQUENCE (SIZE(2..63)) OF NodeXY\n"
  "\n"
  "j2735_v2x_msgs/NodeXY[] node_set_xy";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__NodeSetXY__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__NodeSetXY__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 256, 256},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__NodeSetXY__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[20];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 20, 20};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__NodeSetXY__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__LaneDataAttribute__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__LaneDataAttributeList__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__NodeAttributeSetXY__get_individual_type_description_source(NULL);
    sources[4] = *j2735_v2x_msgs__msg__NodeAttributeXY__get_individual_type_description_source(NULL);
    sources[5] = *j2735_v2x_msgs__msg__NodeAttributeXYList__get_individual_type_description_source(NULL);
    sources[6] = *j2735_v2x_msgs__msg__NodeLLmD64b__get_individual_type_description_source(NULL);
    sources[7] = *j2735_v2x_msgs__msg__NodeOffsetPointXY__get_individual_type_description_source(NULL);
    sources[8] = *j2735_v2x_msgs__msg__NodeXY__get_individual_type_description_source(NULL);
    sources[9] = *j2735_v2x_msgs__msg__NodeXY20b__get_individual_type_description_source(NULL);
    sources[10] = *j2735_v2x_msgs__msg__NodeXY22b__get_individual_type_description_source(NULL);
    sources[11] = *j2735_v2x_msgs__msg__NodeXY24b__get_individual_type_description_source(NULL);
    sources[12] = *j2735_v2x_msgs__msg__NodeXY26b__get_individual_type_description_source(NULL);
    sources[13] = *j2735_v2x_msgs__msg__NodeXY28b__get_individual_type_description_source(NULL);
    sources[14] = *j2735_v2x_msgs__msg__NodeXY32b__get_individual_type_description_source(NULL);
    sources[15] = *j2735_v2x_msgs__msg__RegulatorySpeedLimit__get_individual_type_description_source(NULL);
    sources[16] = *j2735_v2x_msgs__msg__SegmentAttributeXY__get_individual_type_description_source(NULL);
    sources[17] = *j2735_v2x_msgs__msg__SegmentAttributeXYList__get_individual_type_description_source(NULL);
    sources[18] = *j2735_v2x_msgs__msg__SpeedLimitList__get_individual_type_description_source(NULL);
    sources[19] = *j2735_v2x_msgs__msg__SpeedLimitType__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
