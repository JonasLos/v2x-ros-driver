// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/DDay.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/d_day__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__DDay__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x07, 0xee, 0x90, 0x8c, 0xb8, 0xfa, 0x01, 0x01,
      0x65, 0x42, 0x4f, 0x94, 0x79, 0x93, 0x0c, 0x20,
      0x5f, 0x19, 0xfa, 0x7f, 0xa8, 0x3d, 0x97, 0xfd,
      0xc8, 0x38, 0xa5, 0x2f, 0x1f, 0xeb, 0xba, 0xae,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__DDay__TYPE_NAME[] = "j2735_v2x_msgs/msg/DDay";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__DDay__FIELD_NAME__day[] = "day";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__DDay__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__DDay__FIELD_NAME__day, 3, 3},
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
j2735_v2x_msgs__msg__DDay__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__DDay__TYPE_NAME, 23, 23},
      {j2735_v2x_msgs__msg__DDay__FIELDS, 1, 1},
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
  "# DDay.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of DDay from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# DDay ::= INTEGER (0..31)  -- units of days\n"
  "uint8 day\n"
  "\n"
  "uint8 UNAVAILABLE=0\n"
  "uint8 MAX=31";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__DDay__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__DDay__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 259, 259},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__DDay__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__DDay__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
