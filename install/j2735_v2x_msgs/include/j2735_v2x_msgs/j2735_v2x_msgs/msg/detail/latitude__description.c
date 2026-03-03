// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/Latitude.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/latitude__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__Latitude__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x98, 0x04, 0xa0, 0xc2, 0x9e, 0x8e, 0xba, 0xfa,
      0x62, 0xa6, 0x72, 0x4f, 0x39, 0xc2, 0x12, 0xfb,
      0x93, 0xae, 0x8d, 0x51, 0x54, 0x5f, 0x2e, 0x2c,
      0x28, 0x7e, 0x88, 0x3a, 0x33, 0xe4, 0x3b, 0xf3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__Latitude__TYPE_NAME[] = "j2735_v2x_msgs/msg/Latitude";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__Latitude__FIELD_NAME__latitude[] = "latitude";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__Latitude__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__Latitude__FIELD_NAME__latitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__Latitude__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__Latitude__TYPE_NAME, 27, 27},
      {j2735_v2x_msgs__msg__Latitude__FIELDS, 1, 1},
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
  "# Latitude.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of Latitude from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# lat Latitude, -- in 1/10th micro degrees\n"
  "# Latitude ::= INTEGER (-900000000..900000001)\n"
  "#  -- LSB = 1/10 micro degree\n"
  "#  -- Providing a range of plus-minus 90 degrees\n"
  "#  -- Convert to degree with factor 0.0000001 when field is used\n"
  "int32 latitude\n"
  "\n"
  "int32 LATITUDE_UNAVAILABLE = 900000001\n"
  "int32 LATITUDE_MAX = 900000000\n"
  "int32 LATITUDE_MIN = -900000000";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__Latitude__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__Latitude__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 530, 530},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__Latitude__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__Latitude__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
