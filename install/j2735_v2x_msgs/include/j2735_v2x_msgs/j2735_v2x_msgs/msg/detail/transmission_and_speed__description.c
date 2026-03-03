// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/TransmissionAndSpeed.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/transmission_and_speed__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__TransmissionAndSpeed__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x82, 0xd2, 0x34, 0x5a, 0xda, 0x0f, 0xaa, 0x69,
      0xaa, 0x92, 0x23, 0x9b, 0xb0, 0x48, 0xcb, 0xbe,
      0x3c, 0x02, 0x9e, 0x05, 0xeb, 0xb9, 0xca, 0xae,
      0xf5, 0x11, 0xcd, 0x7d, 0x9e, 0x95, 0x34, 0x10,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/velocity__functions.h"
#include "j2735_v2x_msgs/msg/detail/transmission_state__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__TransmissionState__EXPECTED_HASH = {1, {
    0x50, 0xd7, 0xde, 0x5a, 0x14, 0x37, 0xc5, 0x6a,
    0x34, 0x76, 0x3d, 0x70, 0xce, 0xe2, 0x12, 0xbe,
    0x56, 0xfc, 0x62, 0x1b, 0xb4, 0x34, 0x41, 0x63,
    0xa8, 0x34, 0x5d, 0x80, 0x64, 0x15, 0x53, 0x5c,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__Velocity__EXPECTED_HASH = {1, {
    0x05, 0xe5, 0x1e, 0xa8, 0x34, 0x8a, 0x16, 0x2e,
    0x6b, 0xe6, 0xaa, 0xf0, 0x51, 0x9a, 0xc6, 0x20,
    0x41, 0x00, 0xcf, 0xad, 0x68, 0xb5, 0xfb, 0xe8,
    0xc3, 0x07, 0xd5, 0x72, 0x7a, 0x76, 0x9d, 0x76,
  }};
#endif

static char j2735_v2x_msgs__msg__TransmissionAndSpeed__TYPE_NAME[] = "j2735_v2x_msgs/msg/TransmissionAndSpeed";
static char j2735_v2x_msgs__msg__TransmissionState__TYPE_NAME[] = "j2735_v2x_msgs/msg/TransmissionState";
static char j2735_v2x_msgs__msg__Velocity__TYPE_NAME[] = "j2735_v2x_msgs/msg/Velocity";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__TransmissionAndSpeed__FIELD_NAME__transmission[] = "transmission";
static char j2735_v2x_msgs__msg__TransmissionAndSpeed__FIELD_NAME__speed[] = "speed";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__TransmissionAndSpeed__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__TransmissionAndSpeed__FIELD_NAME__transmission, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__TransmissionState__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TransmissionAndSpeed__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__Velocity__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__TransmissionAndSpeed__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__TransmissionState__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__Velocity__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__TransmissionAndSpeed__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__TransmissionAndSpeed__TYPE_NAME, 39, 39},
      {j2735_v2x_msgs__msg__TransmissionAndSpeed__FIELDS, 2, 2},
    },
    {j2735_v2x_msgs__msg__TransmissionAndSpeed__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__TransmissionState__EXPECTED_HASH, j2735_v2x_msgs__msg__TransmissionState__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__TransmissionState__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Velocity__EXPECTED_HASH, j2735_v2x_msgs__msg__Velocity__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__Velocity__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# TransmissionAndSpeed.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of TransmissionAndSpeed from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# TransmissionAndSpeed ::= SEQUENCE {\n"
  "#    transmisson   TransmissionState,\n"
  "#    speed         Velocity\n"
  "#    }\n"
  "\n"
  "j2735_v2x_msgs/TransmissionState transmission\n"
  "\n"
  "j2735_v2x_msgs/Velocity speed";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__TransmissionAndSpeed__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__TransmissionAndSpeed__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 391, 391},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__TransmissionAndSpeed__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__TransmissionAndSpeed__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__TransmissionState__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__Velocity__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
