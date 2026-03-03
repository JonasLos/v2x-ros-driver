// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/TrafficControlPackage.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/traffic_control_package__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__TrafficControlPackage__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x57, 0x4d, 0xeb, 0x62, 0x8e, 0x86, 0x72, 0x6c,
      0x51, 0x8b, 0xc7, 0xe4, 0x64, 0xa2, 0x41, 0xab,
      0x9e, 0x34, 0x7e, 0x90, 0x18, 0x5e, 0xd5, 0xd5,
      0x6f, 0x6d, 0x52, 0x8c, 0x20, 0x5e, 0x13, 0xca,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/id128b__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__Id128b__EXPECTED_HASH = {1, {
    0x36, 0x29, 0xda, 0x21, 0x2b, 0x7d, 0x03, 0x0f,
    0x10, 0xb9, 0xf6, 0xc5, 0xad, 0xa6, 0xce, 0x41,
    0x86, 0xb8, 0x6a, 0x2c, 0xd8, 0x6d, 0x78, 0x17,
    0x97, 0x62, 0xa2, 0x9b, 0x01, 0x9c, 0x2a, 0xc5,
  }};
#endif

static char j2735_v2x_msgs__msg__TrafficControlPackage__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrafficControlPackage";
static char j2735_v2x_msgs__msg__Id128b__TYPE_NAME[] = "j2735_v2x_msgs/msg/Id128b";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__TrafficControlPackage__FIELD_NAME__label[] = "label";
static char j2735_v2x_msgs__msg__TrafficControlPackage__FIELD_NAME__label_exists[] = "label_exists";
static char j2735_v2x_msgs__msg__TrafficControlPackage__FIELD_NAME__tcids[] = "tcids";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__TrafficControlPackage__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__TrafficControlPackage__FIELD_NAME__label, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlPackage__FIELD_NAME__label_exists, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlPackage__FIELD_NAME__tcids, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {j2735_v2x_msgs__msg__Id128b__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__TrafficControlPackage__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__Id128b__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__TrafficControlPackage__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__TrafficControlPackage__TYPE_NAME, 40, 40},
      {j2735_v2x_msgs__msg__TrafficControlPackage__FIELDS, 3, 3},
    },
    {j2735_v2x_msgs__msg__TrafficControlPackage__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Id128b__EXPECTED_HASH, j2735_v2x_msgs__msg__Id128b__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__Id128b__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# TrafficControlPackage.msg\n"
  "#\n"
  "# Part of the CARMA Cloud geo-fence specification not part of the official SAE j2735 standard\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# \n"
  "# @version 0.1\n"
  "#\n"
  "# Description\n"
  "# ...\n"
  "\n"
  "# TrafficControlPackage ::= SEQUENCE\n"
  "# {\n"
  "# \\tlabel IA5String (SIZE(1..63)) OPTIONAL, -- label such as incident, workzone, etc.\n"
  "# \\ttcids SEQUENCE (SIZE(1..63)) OF Id128b -- related traffic control ids\n"
  "# }\n"
  "\n"
  "# label IA5String (SIZE(1..63)) OPTIONAL, -- label such as incident, workzone, etc.\n"
  "string label\n"
  "\n"
  "bool label_exists\n"
  "\n"
  "# tcids SEQUENCE (SIZE(1..63)) OF Id128b -- related traffic control ids\n"
  "j2735_v2x_msgs/Id128b[] tcids";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__TrafficControlPackage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__TrafficControlPackage__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 623, 623},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__TrafficControlPackage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__TrafficControlPackage__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__Id128b__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
