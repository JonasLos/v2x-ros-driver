// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/WiperSet.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/wiper_set__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__WiperSet__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x83, 0x95, 0x31, 0xe9, 0xad, 0x33, 0xa9, 0x04,
      0xa0, 0x4e, 0x1d, 0x23, 0x34, 0xfd, 0xa8, 0xb5,
      0xba, 0x9b, 0xe4, 0xf1, 0xd5, 0xcd, 0x81, 0xd2,
      0x53, 0x7a, 0x57, 0x1d, 0xf5, 0x92, 0xa7, 0x3b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/wiper_status__functions.h"
#include "j2735_v2x_msgs/msg/detail/wiper_rate__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__WiperRate__EXPECTED_HASH = {1, {
    0x7a, 0x92, 0x19, 0x8c, 0x1d, 0x75, 0x12, 0xd3,
    0x12, 0xfb, 0x93, 0x2b, 0x07, 0xc0, 0x9e, 0x5f,
    0x58, 0x03, 0xb3, 0x3e, 0x0e, 0x99, 0xe1, 0x60,
    0xcd, 0x8d, 0x7f, 0x53, 0x1d, 0x1a, 0x9f, 0xfa,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__WiperStatus__EXPECTED_HASH = {1, {
    0xd1, 0xa2, 0x76, 0xb7, 0x40, 0xaa, 0x00, 0x2a,
    0xaa, 0x4b, 0x1d, 0xba, 0xdf, 0xb6, 0x69, 0xab,
    0x27, 0x1d, 0xf9, 0x1c, 0x91, 0xc2, 0xe4, 0xb4,
    0xa5, 0xcb, 0xee, 0x45, 0xee, 0x64, 0x0a, 0x0b,
  }};
#endif

static char j2735_v2x_msgs__msg__WiperSet__TYPE_NAME[] = "j2735_v2x_msgs/msg/WiperSet";
static char j2735_v2x_msgs__msg__WiperRate__TYPE_NAME[] = "j2735_v2x_msgs/msg/WiperRate";
static char j2735_v2x_msgs__msg__WiperStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/WiperStatus";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__WiperSet__FIELD_NAME__presence_vector[] = "presence_vector";
static char j2735_v2x_msgs__msg__WiperSet__FIELD_NAME__status_front[] = "status_front";
static char j2735_v2x_msgs__msg__WiperSet__FIELD_NAME__rate_front[] = "rate_front";
static char j2735_v2x_msgs__msg__WiperSet__FIELD_NAME__status_rear[] = "status_rear";
static char j2735_v2x_msgs__msg__WiperSet__FIELD_NAME__rate_rear[] = "rate_rear";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__WiperSet__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__WiperSet__FIELD_NAME__presence_vector, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__WiperSet__FIELD_NAME__status_front, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__WiperStatus__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__WiperSet__FIELD_NAME__rate_front, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__WiperRate__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__WiperSet__FIELD_NAME__status_rear, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__WiperStatus__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__WiperSet__FIELD_NAME__rate_rear, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__WiperRate__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__WiperSet__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__WiperRate__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__WiperStatus__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__WiperSet__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__WiperSet__TYPE_NAME, 27, 27},
      {j2735_v2x_msgs__msg__WiperSet__FIELDS, 5, 5},
    },
    {j2735_v2x_msgs__msg__WiperSet__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__WiperRate__EXPECTED_HASH, j2735_v2x_msgs__msg__WiperRate__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__WiperRate__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__WiperStatus__EXPECTED_HASH, j2735_v2x_msgs__msg__WiperStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__WiperStatus__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# WiperSet.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# WiperSet ::= SEQUENCE {\n"
  "#    statusFront    WiperStatus,\n"
  "#    rateFront      WiperRate,\n"
  "#    statusRear     WiperStatus      OPTIONAL,\n"
  "#    rateRear       WiperRate        OPTIONAL\n"
  "#    }   \n"
  "\n"
  "# A BIT STRING defining the presence of optional feilds.\n"
  "# Compare with bitwise-and\n"
  "# if (presence_vector & HAS_STATUS_REAR) etc.\n"
  "# Create with bitwise-or\n"
  "# presence_vector = presence_vector | HAS_STATUS_REAR\n"
  "uint16 presence_vector\n"
  "\n"
  "uint16 HAS_STATUS_REAR = 1\n"
  "uint16 HAS_RATE_REAR = 2\n"
  "\n"
  "j2735_v2x_msgs/WiperStatus status_front\n"
  "\n"
  "j2735_v2x_msgs/WiperRate rate_front\n"
  "\n"
  "####\n"
  "# OPTIONAL FIELDS\n"
  "# All fields below this section are optional.\n"
  "# The presence of a given field can be idenfied by checking the presence_vector\n"
  "####\n"
  "\n"
  "j2735_v2x_msgs/WiperStatus status_rear\n"
  "\n"
  "j2735_v2x_msgs/WiperRate rate_rear";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__WiperSet__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__WiperSet__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 838, 838},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__WiperSet__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__WiperSet__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__WiperRate__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__WiperStatus__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
