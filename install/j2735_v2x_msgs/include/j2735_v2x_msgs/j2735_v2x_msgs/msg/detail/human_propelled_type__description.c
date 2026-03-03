// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/HumanPropelledType.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/human_propelled_type__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__HumanPropelledType__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x91, 0xf1, 0x81, 0x10, 0x32, 0x52, 0x3d, 0xa6,
      0xfe, 0xce, 0xfe, 0x20, 0x5b, 0x3e, 0xd9, 0x6a,
      0x42, 0xb2, 0xfa, 0xb1, 0xe6, 0x0a, 0xf2, 0x3e,
      0xfe, 0x85, 0xd5, 0x72, 0xd7, 0x83, 0x00, 0x8c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__HumanPropelledType__TYPE_NAME[] = "j2735_v2x_msgs/msg/HumanPropelledType";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__HumanPropelledType__FIELD_NAME__type[] = "type";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__HumanPropelledType__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__HumanPropelledType__FIELD_NAME__type, 4, 4},
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
j2735_v2x_msgs__msg__HumanPropelledType__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__HumanPropelledType__TYPE_NAME, 37, 37},
      {j2735_v2x_msgs__msg__HumanPropelledType__FIELDS, 1, 1},
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
  "# HumanPropelledType.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of HumanPropelledType from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# HumanPropelledType ::= ENUMERATED {   \n"
  "#    unavailable        (0),\n"
  "#    otherTypes         (1), -- any method not listed below\n"
  "#    onFoot             (2),\n"
  "#    skateboard         (3),\n"
  "#    pushOrKickScooter  (4),\n"
  "#    wheelchair         (5), -- implies manually powered\n"
  "#    ...\n"
  "# }\n"
  "\n"
  "uint8 type\n"
  "uint8 UNAVAILABLE=0\n"
  "uint8 OTHER_TYPES=1\n"
  "uint8 ON_FOOT=2\n"
  "uint8 SKATEBOARD=3\n"
  "uint8 PUSH_OR_KICK_SCOOTER=4\n"
  "uint8 WHEELCHAIR=5\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__HumanPropelledType__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__HumanPropelledType__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 622, 622},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__HumanPropelledType__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__HumanPropelledType__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
