// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/SpeedLimitList.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/speed_limit_list__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__SpeedLimitList__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbd, 0x2c, 0x79, 0xa8, 0xcf, 0xeb, 0x3d, 0x56,
      0x4e, 0xd7, 0x1b, 0xe7, 0xe1, 0x71, 0x66, 0x73,
      0xb6, 0x5b, 0x0c, 0x17, 0x85, 0x17, 0x25, 0x4d,
      0x5b, 0x0d, 0x8e, 0xcc, 0x49, 0xe7, 0x49, 0x1b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/regulatory_speed_limit__functions.h"
#include "j2735_v2x_msgs/msg/detail/speed_limit_type__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__RegulatorySpeedLimit__EXPECTED_HASH = {1, {
    0x74, 0x39, 0x1f, 0x7d, 0x93, 0x52, 0x60, 0x91,
    0xcf, 0x37, 0xfe, 0xcd, 0x3b, 0xc7, 0xd9, 0xea,
    0x2b, 0xab, 0xf8, 0xcc, 0x58, 0x24, 0x00, 0xf5,
    0xc6, 0x99, 0xdc, 0x5e, 0x44, 0x95, 0x14, 0xf1,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__SpeedLimitType__EXPECTED_HASH = {1, {
    0x42, 0xa5, 0xa7, 0x71, 0x95, 0x8f, 0x1a, 0xba,
    0xa6, 0x19, 0x8a, 0xce, 0x4e, 0x77, 0x78, 0xee,
    0x70, 0x09, 0x87, 0x29, 0xaa, 0x8f, 0x14, 0x89,
    0x02, 0xab, 0xcd, 0xf8, 0x82, 0x98, 0xeb, 0x2a,
  }};
#endif

static char j2735_v2x_msgs__msg__SpeedLimitList__TYPE_NAME[] = "j2735_v2x_msgs/msg/SpeedLimitList";
static char j2735_v2x_msgs__msg__RegulatorySpeedLimit__TYPE_NAME[] = "j2735_v2x_msgs/msg/RegulatorySpeedLimit";
static char j2735_v2x_msgs__msg__SpeedLimitType__TYPE_NAME[] = "j2735_v2x_msgs/msg/SpeedLimitType";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__SpeedLimitList__FIELD_NAME__speed_limits[] = "speed_limits";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__SpeedLimitList__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__SpeedLimitList__FIELD_NAME__speed_limits, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {j2735_v2x_msgs__msg__RegulatorySpeedLimit__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__SpeedLimitList__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__RegulatorySpeedLimit__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__SpeedLimitType__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__SpeedLimitList__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__SpeedLimitList__TYPE_NAME, 33, 33},
      {j2735_v2x_msgs__msg__SpeedLimitList__FIELDS, 1, 1},
    },
    {j2735_v2x_msgs__msg__SpeedLimitList__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__RegulatorySpeedLimit__EXPECTED_HASH, j2735_v2x_msgs__msg__RegulatorySpeedLimit__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__RegulatorySpeedLimit__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__SpeedLimitType__EXPECTED_HASH, j2735_v2x_msgs__msg__SpeedLimitType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__SpeedLimitType__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# SpeedLimitList.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# SpeedLimitList ::= SEQUENCE (SIZE(1..9)) OF RegulatorySpeedLimit\n"
  "\n"
  "#A list of RegulatorySpeedLimit\n"
  "j2735_v2x_msgs/RegulatorySpeedLimit[] speed_limits";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__SpeedLimitList__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__SpeedLimitList__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 243, 243},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__SpeedLimitList__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__SpeedLimitList__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__RegulatorySpeedLimit__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__SpeedLimitType__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
