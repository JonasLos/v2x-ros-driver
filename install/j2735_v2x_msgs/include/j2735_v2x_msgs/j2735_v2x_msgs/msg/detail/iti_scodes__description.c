// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/ITIScodes.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/iti_scodes__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__ITIScodes__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5c, 0xe9, 0x4e, 0x8e, 0xb9, 0x8c, 0xd8, 0x67,
      0xc6, 0x1d, 0x9c, 0xe9, 0x75, 0xc2, 0xee, 0x55,
      0x04, 0x79, 0x97, 0xb6, 0xe9, 0x2d, 0xec, 0xda,
      0xeb, 0x57, 0xd9, 0xa6, 0x2e, 0x14, 0x09, 0x5e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__ITIScodes__TYPE_NAME[] = "j2735_v2x_msgs/msg/ITIScodes";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__ITIScodes__FIELD_NAME__code[] = "code";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__ITIScodes__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__ITIScodes__FIELD_NAME__code, 4, 4},
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
j2735_v2x_msgs__msg__ITIScodes__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__ITIScodes__TYPE_NAME, 28, 28},
      {j2735_v2x_msgs__msg__ITIScodes__FIELDS, 1, 1},
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
  "# ITIScodes.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# ITIScodes ::= INTEGER (0.. 65535)\n"
  "# -- The defined list of ITIS codes is too long to list here\n"
  "# -- Many smaller lists use a sub-set of these codes as defined elements\n"
  "# -- Also enumerated values expressed as text constant are very common,\n"
  "# -- and in many deployments the list codes are used as a shorthand for\n"
  "# -- this text. Also the XML expressions commonly use a union of the\n"
  "# -- code values and the textual expressions.\n"
  "# -- Consult SAE J2540 for further details.\n"
  "\n"
  "uint16 code";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__ITIScodes__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__ITIScodes__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 537, 537},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__ITIScodes__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__ITIScodes__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
