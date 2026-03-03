// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/SpeedandHeadingandThrottleConfidence.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/speedand_headingand_throttle_confidence__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x20, 0x00, 0x0e, 0x4a, 0xd6, 0x38, 0xdb, 0x6b,
      0xc2, 0x1e, 0x53, 0xa2, 0x2b, 0x77, 0x4b, 0x84,
      0x50, 0xc5, 0x68, 0x02, 0x2d, 0x3f, 0x0d, 0xc1,
      0xeb, 0xf3, 0x54, 0x46, 0x14, 0x4f, 0x37, 0x71,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/speed_confidence__functions.h"
#include "j2735_v2x_msgs/msg/detail/heading_confidence__functions.h"
#include "j2735_v2x_msgs/msg/detail/throttle_confidence__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__HeadingConfidence__EXPECTED_HASH = {1, {
    0xd7, 0x91, 0xea, 0xa1, 0x47, 0xac, 0xce, 0xa9,
    0xd0, 0x8d, 0x54, 0xa3, 0x57, 0xcd, 0xdc, 0x01,
    0x28, 0xde, 0x2e, 0x2b, 0xd0, 0x49, 0x02, 0xd5,
    0x3f, 0x89, 0xce, 0x79, 0x69, 0x4a, 0xda, 0x27,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__SpeedConfidence__EXPECTED_HASH = {1, {
    0x60, 0x1a, 0x6a, 0xf8, 0x51, 0xec, 0x0e, 0x4d,
    0xfc, 0x8b, 0x6a, 0x0c, 0x60, 0x8f, 0x60, 0xb6,
    0xbe, 0x2d, 0xc5, 0x7b, 0x58, 0x7d, 0x3e, 0x76,
    0x56, 0xb2, 0x1c, 0x09, 0xd8, 0x59, 0x20, 0xa0,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ThrottleConfidence__EXPECTED_HASH = {1, {
    0xeb, 0x4c, 0x08, 0x81, 0xa7, 0xd5, 0x0a, 0x4a,
    0xc8, 0xb4, 0x78, 0x99, 0xa6, 0x4b, 0x60, 0x24,
    0x19, 0xc5, 0x71, 0xee, 0xb7, 0x95, 0x99, 0x9e,
    0xf8, 0xb3, 0xc0, 0x6d, 0x75, 0x17, 0x84, 0xe5,
  }};
#endif

static char j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/SpeedandHeadingandThrottleConfidence";
static char j2735_v2x_msgs__msg__HeadingConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/HeadingConfidence";
static char j2735_v2x_msgs__msg__SpeedConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/SpeedConfidence";
static char j2735_v2x_msgs__msg__ThrottleConfidence__TYPE_NAME[] = "j2735_v2x_msgs/msg/ThrottleConfidence";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__FIELD_NAME__heading[] = "heading";
static char j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__FIELD_NAME__speed[] = "speed";
static char j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__FIELD_NAME__throttle[] = "throttle";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__FIELD_NAME__heading, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__HeadingConfidence__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__SpeedConfidence__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__FIELD_NAME__throttle, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__ThrottleConfidence__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__HeadingConfidence__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__SpeedConfidence__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ThrottleConfidence__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__TYPE_NAME, 55, 55},
      {j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__FIELDS, 3, 3},
    },
    {j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__HeadingConfidence__EXPECTED_HASH, j2735_v2x_msgs__msg__HeadingConfidence__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__HeadingConfidence__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__SpeedConfidence__EXPECTED_HASH, j2735_v2x_msgs__msg__SpeedConfidence__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__SpeedConfidence__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ThrottleConfidence__EXPECTED_HASH, j2735_v2x_msgs__msg__ThrottleConfidence__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__ThrottleConfidence__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# SpeedandHeadingandThrottleConfidence.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of SpeedandHeadingandThrottleConfidence from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# SpeedandHeadingandThrottleConfidence ::= SEQUENCE {\n"
  "#    heading   HeadingConfidence,    \n"
  "#    speed     SpeedConfidence,      \n"
  "#    throttle  ThrottleConfidence    \n"
  "#    }\n"
  "\n"
  "j2735_v2x_msgs/HeadingConfidence heading\n"
  "j2735_v2x_msgs/SpeedConfidence speed\n"
  "j2735_v2x_msgs/ThrottleConfidence throttle";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__TYPE_NAME, 55, 55},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 531, 531},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__HeadingConfidence__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__SpeedConfidence__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__ThrottleConfidence__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
