// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/ThrottleConfidence.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/throttle_confidence__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__ThrottleConfidence__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xeb, 0x4c, 0x08, 0x81, 0xa7, 0xd5, 0x0a, 0x4a,
      0xc8, 0xb4, 0x78, 0x99, 0xa6, 0x4b, 0x60, 0x24,
      0x19, 0xc5, 0x71, 0xee, 0xb7, 0x95, 0x99, 0x9e,
      0xf8, 0xb3, 0xc0, 0x6d, 0x75, 0x17, 0x84, 0xe5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__ThrottleConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/ThrottleConfidence";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__ThrottleConfidence__FIELD_NAME__confidence[] = "confidence";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__ThrottleConfidence__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__ThrottleConfidence__FIELD_NAME__confidence, 10, 10},
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
j2735_v2x_msgs__msg__ThrottleConfidence__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__ThrottleConfidence__TYPE_NAME, 37, 37},
      {j2735_v2x_msgs__msg__ThrottleConfidence__FIELDS, 1, 1},
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
  "# ThrottleConfidence.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of ThrottleConfidence from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# ThrottleConfidence ::= ENUMERATED {\n"
  "#    unavailable     (0), -- B'00  Not Equipped or unavailable\n"
  "#    prec10percent   (1), -- B'01  10  percent Confidence level\n"
  "#    prec1percent    (2), -- B'10  1   percent Confidence level\n"
  "#    prec0-5percent  (3)  -- B'11  0.5 percent Confidence level\n"
  "#    }\n"
  "\n"
  "uint8 confidence\n"
  "\n"
  "uint8 UNAVAILABLE = 0\n"
  "uint8 PREC_10_PERCENT = 1\n"
  "uint8 PREC_1_PERCENT = 2\n"
  "uint8 PREC_05_PERCENT = 3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__ThrottleConfidence__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__ThrottleConfidence__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 617, 617},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__ThrottleConfidence__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__ThrottleConfidence__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
