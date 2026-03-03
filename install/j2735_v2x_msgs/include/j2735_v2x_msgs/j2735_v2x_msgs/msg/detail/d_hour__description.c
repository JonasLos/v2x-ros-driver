// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/DHour.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/d_hour__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__DHour__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0b, 0x61, 0xb8, 0xa5, 0x7f, 0x7c, 0xd5, 0xc1,
      0xcc, 0x3f, 0xe5, 0x50, 0xa5, 0x19, 0xfd, 0xbf,
      0x42, 0xde, 0xe0, 0xe9, 0x08, 0xf0, 0xd8, 0x54,
      0x23, 0x46, 0x4d, 0x20, 0x59, 0xac, 0x75, 0x8f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__DHour__TYPE_NAME[] = "j2735_v2x_msgs/msg/DHour";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__DHour__FIELD_NAME__hour[] = "hour";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__DHour__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__DHour__FIELD_NAME__hour, 4, 4},
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
j2735_v2x_msgs__msg__DHour__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__DHour__TYPE_NAME, 24, 24},
      {j2735_v2x_msgs__msg__DHour__FIELDS, 1, 1},
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
  "# DHour.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of DHour from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# DHour ::= INTEGER (0..31) -- units of hours\n"
  "# Hour of day is 0-23, 31 denotes unvailable and 24-30 are reserved for transit schedule adherence\n"
  "uint8 hour\n"
  "\n"
  "uint8 HOUR_OF_DAY_MIN=0\n"
  "uint8 HOUR_OF_DAY_MAX=31\n"
  "uint8 TRANSITE_SCHEDULE_ADHERENCE_START=24\n"
  "uint8 TRANSITE_SCHEDULE_ADHERENCE_END=30\n"
  "uint8 UNAVAILABLE=31";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__DHour__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__DHour__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 483, 483},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__DHour__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__DHour__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
