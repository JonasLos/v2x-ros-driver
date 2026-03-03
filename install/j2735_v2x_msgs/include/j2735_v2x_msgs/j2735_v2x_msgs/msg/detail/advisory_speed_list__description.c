// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/AdvisorySpeedList.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/advisory_speed_list__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__AdvisorySpeedList__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7f, 0xf1, 0x2d, 0xc8, 0x5e, 0x97, 0xc5, 0xd4,
      0x50, 0x81, 0x5f, 0x44, 0x1c, 0x60, 0xc2, 0x50,
      0x27, 0xf8, 0x74, 0x55, 0x97, 0x1d, 0xa0, 0x05,
      0xb7, 0x1f, 0xc2, 0xe4, 0x87, 0x22, 0xc0, 0x21,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/advisory_speed__functions.h"
#include "j2735_v2x_msgs/msg/detail/speed_confidence__functions.h"
#include "j2735_v2x_msgs/msg/detail/advisory_speed_type__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__AdvisorySpeed__EXPECTED_HASH = {1, {
    0x05, 0x16, 0x3d, 0x12, 0xed, 0x6c, 0xe3, 0x79,
    0xf0, 0xc5, 0x41, 0x46, 0xf4, 0xf9, 0xc9, 0x98,
    0x69, 0x06, 0xea, 0x43, 0x3a, 0x87, 0xce, 0x3e,
    0x37, 0x35, 0x3e, 0x67, 0x46, 0xa5, 0xab, 0xb2,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__AdvisorySpeedType__EXPECTED_HASH = {1, {
    0x82, 0xbc, 0xdb, 0x3e, 0x13, 0xa7, 0x4e, 0x6e,
    0xe1, 0xe5, 0x3f, 0x03, 0xc5, 0x51, 0xfe, 0x3b,
    0xe2, 0xc1, 0x1f, 0xae, 0x97, 0x44, 0xdb, 0x46,
    0x2a, 0x21, 0x08, 0x06, 0x41, 0x8e, 0x0c, 0x8b,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__SpeedConfidence__EXPECTED_HASH = {1, {
    0x60, 0x1a, 0x6a, 0xf8, 0x51, 0xec, 0x0e, 0x4d,
    0xfc, 0x8b, 0x6a, 0x0c, 0x60, 0x8f, 0x60, 0xb6,
    0xbe, 0x2d, 0xc5, 0x7b, 0x58, 0x7d, 0x3e, 0x76,
    0x56, 0xb2, 0x1c, 0x09, 0xd8, 0x59, 0x20, 0xa0,
  }};
#endif

static char j2735_v2x_msgs__msg__AdvisorySpeedList__TYPE_NAME[] = "j2735_v2x_msgs/msg/AdvisorySpeedList";
static char j2735_v2x_msgs__msg__AdvisorySpeed__TYPE_NAME[] = "j2735_v2x_msgs/msg/AdvisorySpeed";
static char j2735_v2x_msgs__msg__AdvisorySpeedType__TYPE_NAME[] = "j2735_v2x_msgs/msg/AdvisorySpeedType";
static char j2735_v2x_msgs__msg__SpeedConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/SpeedConfidence";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__AdvisorySpeedList__FIELD_NAME__advisory_speed_list[] = "advisory_speed_list";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__AdvisorySpeedList__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__AdvisorySpeedList__FIELD_NAME__advisory_speed_list, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {j2735_v2x_msgs__msg__AdvisorySpeed__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__AdvisorySpeedList__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__AdvisorySpeed__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__AdvisorySpeedType__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__SpeedConfidence__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__AdvisorySpeedList__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__AdvisorySpeedList__TYPE_NAME, 36, 36},
      {j2735_v2x_msgs__msg__AdvisorySpeedList__FIELDS, 1, 1},
    },
    {j2735_v2x_msgs__msg__AdvisorySpeedList__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AdvisorySpeed__EXPECTED_HASH, j2735_v2x_msgs__msg__AdvisorySpeed__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__AdvisorySpeed__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__AdvisorySpeedType__EXPECTED_HASH, j2735_v2x_msgs__msg__AdvisorySpeedType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__AdvisorySpeedType__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__SpeedConfidence__EXPECTED_HASH, j2735_v2x_msgs__msg__SpeedConfidence__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__SpeedConfidence__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# AdvisorySpeedList.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The AdvisorySpeedList data frame consists of a list of AdvisorySpeed entries.\n"
  "#\n"
  "# AdvisorySpeedList ::= SEQUENCE (SIZE(1..16)) OF AdvisorySpeed\n"
  "\n"
  "j2735_v2x_msgs/AdvisorySpeed[] advisory_speed_list";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__AdvisorySpeedList__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__AdvisorySpeedList__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 293, 293},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__AdvisorySpeedList__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__AdvisorySpeedList__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__AdvisorySpeed__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__AdvisorySpeedType__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__SpeedConfidence__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
