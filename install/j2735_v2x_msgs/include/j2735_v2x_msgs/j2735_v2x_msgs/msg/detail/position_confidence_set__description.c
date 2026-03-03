// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/PositionConfidenceSet.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/position_confidence_set__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__PositionConfidenceSet__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8e, 0x1a, 0xf9, 0xc0, 0x0f, 0xf6, 0x51, 0x2f,
      0x59, 0x14, 0x5f, 0x4c, 0xa5, 0xa4, 0xdb, 0xee,
      0x90, 0xf5, 0x4a, 0xd6, 0xa9, 0x9d, 0xe4, 0xbf,
      0xf6, 0x46, 0x4a, 0xed, 0x56, 0x15, 0xd7, 0xf8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/position_confidence__functions.h"
#include "j2735_v2x_msgs/msg/detail/elevation_confidence__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ElevationConfidence__EXPECTED_HASH = {1, {
    0x00, 0xa2, 0x1c, 0xd6, 0xc7, 0x69, 0x48, 0xca,
    0xb7, 0x24, 0xb3, 0x6a, 0xa3, 0xb2, 0xdd, 0x8f,
    0x5f, 0x5a, 0x6d, 0xb4, 0x94, 0x6d, 0x79, 0x98,
    0xac, 0x9d, 0x6e, 0x00, 0x33, 0xbc, 0x4d, 0x70,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PositionConfidence__EXPECTED_HASH = {1, {
    0x61, 0x21, 0xfa, 0x3f, 0xed, 0x8e, 0x09, 0x3b,
    0xde, 0x31, 0x48, 0xa5, 0xb7, 0xd5, 0x21, 0x79,
    0x02, 0x69, 0x79, 0x4b, 0xb3, 0xce, 0xe6, 0x93,
    0xa0, 0xd8, 0x48, 0x6b, 0x34, 0xdb, 0x8b, 0x17,
  }};
#endif

static char j2735_v2x_msgs__msg__PositionConfidenceSet__TYPE_NAME[] = "j2735_v2x_msgs/msg/PositionConfidenceSet";
static char j2735_v2x_msgs__msg__ElevationConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/ElevationConfidence";
static char j2735_v2x_msgs__msg__PositionConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/PositionConfidence";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__PositionConfidenceSet__FIELD_NAME__pos[] = "pos";
static char j2735_v2x_msgs__msg__PositionConfidenceSet__FIELD_NAME__elevation[] = "elevation";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__PositionConfidenceSet__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__PositionConfidenceSet__FIELD_NAME__pos, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__PositionConfidence__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PositionConfidenceSet__FIELD_NAME__elevation, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__ElevationConfidence__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__PositionConfidenceSet__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__ElevationConfidence__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PositionConfidence__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__PositionConfidenceSet__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__PositionConfidenceSet__TYPE_NAME, 40, 40},
      {j2735_v2x_msgs__msg__PositionConfidenceSet__FIELDS, 2, 2},
    },
    {j2735_v2x_msgs__msg__PositionConfidenceSet__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ElevationConfidence__EXPECTED_HASH, j2735_v2x_msgs__msg__ElevationConfidence__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__ElevationConfidence__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PositionConfidence__EXPECTED_HASH, j2735_v2x_msgs__msg__PositionConfidence__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__PositionConfidence__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# PositionConfidenceSet.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of PositionConfidenceSet from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# PositionConfidenceSet ::= SEQUENCE {\n"
  "#    pos        PositionConfidence, -- for both horizontal directions\n"
  "#    elevation  ElevationConfidence \n"
  "#    }\n"
  "\n"
  "j2735_v2x_msgs/PositionConfidence pos\n"
  "\n"
  "j2735_v2x_msgs/ElevationConfidence elevation";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__PositionConfidenceSet__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__PositionConfidenceSet__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 442, 442},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__PositionConfidenceSet__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__PositionConfidenceSet__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__ElevationConfidence__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__PositionConfidence__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
