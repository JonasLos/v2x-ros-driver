// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/SirenInUse.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/siren_in_use__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__SirenInUse__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3a, 0xb5, 0x9e, 0x83, 0xc2, 0x25, 0x88, 0xc6,
      0x36, 0xa2, 0x41, 0x5e, 0xf4, 0xca, 0x22, 0x09,
      0x15, 0x1a, 0x67, 0x3c, 0xe1, 0x8e, 0xcc, 0xe4,
      0xe3, 0xd2, 0x3c, 0x61, 0xcc, 0x0b, 0x57, 0xd8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__SirenInUse__TYPE_NAME[] = "j2735_v2x_msgs/msg/SirenInUse";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__SirenInUse__FIELD_NAME__siren_in_use[] = "siren_in_use";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__SirenInUse__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__SirenInUse__FIELD_NAME__siren_in_use, 12, 12},
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
j2735_v2x_msgs__msg__SirenInUse__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__SirenInUse__TYPE_NAME, 29, 29},
      {j2735_v2x_msgs__msg__SirenInUse__FIELDS, 1, 1},
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
  "# SirenInUse.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# SirenInUse ::= ENUMERATED {\n"
  "#   unavailable (0), -- Not Equipped or unavailable\n"
  "#   notInUse (1),\n"
  "#   inUse (2),\n"
  "#   reserved (3) -- for future use\n"
  "# }\n"
  "\n"
  "uint8  siren_in_use\n"
  "\n"
  "# enumeration values for siren_in_use:\n"
  "uint8  UNAVAILABLE=0\n"
  "uint8  NOT_IN_USE=1\n"
  "uint8  IN_USE=2\n"
  "uint8  RESERVED=3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__SirenInUse__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__SirenInUse__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 342, 342},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__SirenInUse__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__SirenInUse__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
