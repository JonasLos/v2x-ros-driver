// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/HeadingConfidence.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/heading_confidence__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__HeadingConfidence__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd7, 0x91, 0xea, 0xa1, 0x47, 0xac, 0xce, 0xa9,
      0xd0, 0x8d, 0x54, 0xa3, 0x57, 0xcd, 0xdc, 0x01,
      0x28, 0xde, 0x2e, 0x2b, 0xd0, 0x49, 0x02, 0xd5,
      0x3f, 0x89, 0xce, 0x79, 0x69, 0x4a, 0xda, 0x27,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__HeadingConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/HeadingConfidence";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__HeadingConfidence__FIELD_NAME__confidence[] = "confidence";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__HeadingConfidence__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__HeadingConfidence__FIELD_NAME__confidence, 10, 10},
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
j2735_v2x_msgs__msg__HeadingConfidence__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__HeadingConfidence__TYPE_NAME, 36, 36},
      {j2735_v2x_msgs__msg__HeadingConfidence__FIELDS, 1, 1},
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
  "# HeadingConfidence.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of HeadingConfidence from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# HeadingConfidence ::= ENUMERATED {\n"
  "#    unavailable   (0), -- B'000  Not Equipped or unavailable\n"
  "#    prec10deg     (1), -- B'010  10     degrees\n"
  "#    prec05deg     (2), -- B'011  5      degrees\n"
  "#    prec01deg     (3), -- B'100  1      degrees\n"
  "#    prec0-1deg    (4), -- B'101  0.1    degrees\n"
  "#    prec0-05deg   (5), -- B'110  0.05   degrees\n"
  "#    prec0-01deg   (6), -- B'110  0.01   degrees\n"
  "#    prec0-0125deg (7)  -- B'111  0.0125 degrees, aligned with heading LSB\n"
  "#    }  -- Encoded as a 3 bit value\n"
  "\n"
  "uint8 confidence\n"
  "\n"
  "uint8 UNAVAILABLE = 0\n"
  "uint8 PREC_10_DEG = 1\n"
  "uint8 PREC_05_DEG = 2\n"
  "uint8 PREC_01_DEG = 3\n"
  "uint8 PREC_001_DEG = 4\n"
  "uint8 PREC_0005_DEG = 5\n"
  "uint8 PREC_0001_DEG = 6\n"
  "uint8 PREC_000125_DEG = 7";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__HeadingConfidence__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__HeadingConfidence__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 905, 905},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__HeadingConfidence__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__HeadingConfidence__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
