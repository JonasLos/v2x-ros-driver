// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/BumperHeights.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/bumper_heights__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__BumperHeights__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x82, 0x2c, 0x64, 0x57, 0x1c, 0xe9, 0xbe, 0xd0,
      0x17, 0xcd, 0x5a, 0x53, 0xf8, 0xc0, 0x68, 0x7e,
      0x05, 0xd9, 0xa9, 0x70, 0x18, 0x2e, 0xed, 0xe4,
      0x86, 0x79, 0x5a, 0x61, 0xfb, 0x36, 0x04, 0x16,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/bumper_height__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__BumperHeight__EXPECTED_HASH = {1, {
    0xfc, 0x35, 0xaf, 0x40, 0xa1, 0x1a, 0xac, 0x07,
    0x48, 0xb8, 0xe4, 0x34, 0xaf, 0x9b, 0x53, 0x78,
    0xe5, 0x94, 0xc8, 0x1c, 0x28, 0x43, 0x23, 0x10,
    0x09, 0xba, 0x6a, 0x42, 0xf8, 0x7b, 0xa2, 0x2d,
  }};
#endif

static char j2735_v2x_msgs__msg__BumperHeights__TYPE_NAME[] = "j2735_v2x_msgs/msg/BumperHeights";
static char j2735_v2x_msgs__msg__BumperHeight__TYPE_NAME[] = "j2735_v2x_msgs/msg/BumperHeight";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__BumperHeights__FIELD_NAME__front[] = "front";
static char j2735_v2x_msgs__msg__BumperHeights__FIELD_NAME__rear[] = "rear";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__BumperHeights__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__BumperHeights__FIELD_NAME__front, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__BumperHeight__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BumperHeights__FIELD_NAME__rear, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__BumperHeight__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__BumperHeights__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__BumperHeight__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__BumperHeights__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__BumperHeights__TYPE_NAME, 32, 32},
      {j2735_v2x_msgs__msg__BumperHeights__FIELDS, 2, 2},
    },
    {j2735_v2x_msgs__msg__BumperHeights__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__BumperHeight__EXPECTED_HASH, j2735_v2x_msgs__msg__BumperHeight__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__BumperHeight__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# BumperHeights.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# BumperHeights ::= SEQUENCE {\n"
  "#    front      BumperHeight, \n"
  "#    rear       BumperHeight\n"
  "#    }\n"
  "j2735_v2x_msgs/BumperHeight front\n"
  "j2735_v2x_msgs/BumperHeight rear";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__BumperHeights__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__BumperHeights__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 220, 220},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__BumperHeights__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__BumperHeights__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__BumperHeight__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
