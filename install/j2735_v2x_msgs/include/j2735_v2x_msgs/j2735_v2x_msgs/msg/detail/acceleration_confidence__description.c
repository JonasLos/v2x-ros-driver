// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/AccelerationConfidence.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/acceleration_confidence__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__AccelerationConfidence__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe9, 0x4e, 0x6d, 0x01, 0x50, 0xa1, 0x4e, 0x45,
      0x50, 0xc2, 0xa6, 0x31, 0x22, 0xa5, 0x39, 0xee,
      0xed, 0x2f, 0x51, 0x2f, 0x0d, 0x9d, 0xc7, 0xf6,
      0x67, 0x54, 0x05, 0x90, 0x79, 0x3d, 0x02, 0x1c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__AccelerationConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/AccelerationConfidence";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__AccelerationConfidence__FIELD_NAME__acceleration_confidence[] = "acceleration_confidence";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__AccelerationConfidence__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__AccelerationConfidence__FIELD_NAME__acceleration_confidence, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__AccelerationConfidence__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__AccelerationConfidence__TYPE_NAME, 41, 41},
      {j2735_v2x_msgs__msg__AccelerationConfidence__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# AccelerationConfidence.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# AccelerationConfidence ::= ENUMERATED {\n"
  "#    unavailable (0), -- Not Equipped or data is unavailable\n"
  "#    accl-100-00 (1), -- 100 meters/second squared\n"
  "#    accl-010-00 (2), -- 10 meters/second squared\n"
  "#    accl-005-00 (3), -- 5 meters/second squared\n"
  "#    accl-001-00 (4), -- 1 meters/second squared\n"
  "#    accl-000-10 (5), -- 0.1 meters/second squared\n"
  "#    accl-000-05 (6), -- 0.05 meters/second squared\n"
  "#    accl-000-01 (7) -- 0.01 meters/second squared\n"
  "# } -- Encoded as a 3 bit value\n"
  "\n"
  "uint8 acceleration_confidence\n"
  "\n"
  "# Enumeration values for acceleration_confidence\n"
  "uint8 UNAVAILABLE = 0\n"
  "uint8 ACCL_100_00 = 1\n"
  "uint8 ACCL_010_00 = 2\n"
  "uint8 ACCL_005_00 = 3\n"
  "uint8 ACCL_001_00 = 4\n"
  "uint8 ACCL_000_10 = 5\n"
  "uint8 ACCL_000_05 = 6\n"
  "uint8 ACCL_000_01 = 7";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__AccelerationConfidence__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__AccelerationConfidence__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 809, 809},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__AccelerationConfidence__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__AccelerationConfidence__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
