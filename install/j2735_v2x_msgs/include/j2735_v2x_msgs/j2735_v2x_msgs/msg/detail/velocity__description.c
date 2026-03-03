// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/Velocity.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/velocity__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__Velocity__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x05, 0xe5, 0x1e, 0xa8, 0x34, 0x8a, 0x16, 0x2e,
      0x6b, 0xe6, 0xaa, 0xf0, 0x51, 0x9a, 0xc6, 0x20,
      0x41, 0x00, 0xcf, 0xad, 0x68, 0xb5, 0xfb, 0xe8,
      0xc3, 0x07, 0xd5, 0x72, 0x7a, 0x76, 0x9d, 0x76,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__Velocity__TYPE_NAME[] = "j2735_v2x_msgs/msg/Velocity";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__Velocity__FIELD_NAME__velocity[] = "velocity";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__Velocity__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__Velocity__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__Velocity__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__Velocity__TYPE_NAME, 27, 27},
      {j2735_v2x_msgs__msg__Velocity__FIELDS, 1, 1},
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
  "# Velocity.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of Velocity from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# Velocity ::= INTEGER (0..8191) -- Units of 0.02 m/s\n"
  "#     -- The value 8191 indicates that \n"
  "#     -- velocity is unavailable\n"
  "\n"
  "uint16 velocity\n"
  "\n"
  "uint16 MIN=0\n"
  "uint16 MAX=8190\n"
  "uint16 UNAVAILABLE=8191\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__Velocity__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__Velocity__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 378, 378},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__Velocity__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__Velocity__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
