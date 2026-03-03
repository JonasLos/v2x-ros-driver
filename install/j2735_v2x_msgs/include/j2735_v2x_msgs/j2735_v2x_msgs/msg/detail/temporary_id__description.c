// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/TemporaryID.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/temporary_id__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__TemporaryID__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb0, 0xa7, 0x32, 0x3f, 0xdb, 0xa5, 0xee, 0xe4,
      0x35, 0xe5, 0x4f, 0x65, 0x18, 0xfe, 0x81, 0x9b,
      0x82, 0x5e, 0x16, 0x7a, 0x9e, 0x18, 0x12, 0x75,
      0xe6, 0x4e, 0x0b, 0xea, 0x38, 0xc2, 0xb6, 0x12,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__TemporaryID__TYPE_NAME[] = "j2735_v2x_msgs/msg/TemporaryID";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__TemporaryID__FIELD_NAME__id[] = "id";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__TemporaryID__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__TemporaryID__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__TemporaryID__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__TemporaryID__TYPE_NAME, 30, 30},
      {j2735_v2x_msgs__msg__TemporaryID__FIELDS, 1, 1},
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
  "# TemporaryID.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of TemporaryID from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# TemporaryID ::= OCTET STRING (SIZE(4))\n"
  "\n"
  "uint8[] id\n"
  "\n"
  "#TemporaryID will change every 3000 seconds.\n"
  "uint16 ID_TIME_MAX = 3000";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__TemporaryID__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__TemporaryID__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 309, 309},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__TemporaryID__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__TemporaryID__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
