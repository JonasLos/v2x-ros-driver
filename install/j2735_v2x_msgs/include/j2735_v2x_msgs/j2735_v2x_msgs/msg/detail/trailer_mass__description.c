// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/TrailerMass.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/trailer_mass__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__TrailerMass__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8c, 0xba, 0x28, 0xbd, 0xf6, 0xba, 0x3a, 0x55,
      0x43, 0xcb, 0x70, 0x1f, 0xde, 0xa5, 0xe0, 0xb4,
      0x92, 0x31, 0xe7, 0x80, 0x01, 0xcf, 0x14, 0x78,
      0x91, 0x2f, 0xd7, 0x98, 0x47, 0x80, 0xdd, 0x8e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__TrailerMass__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrailerMass";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__TrailerMass__FIELD_NAME__trailer_mass[] = "trailer_mass";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__TrailerMass__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__TrailerMass__FIELD_NAME__trailer_mass, 12, 12},
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
j2735_v2x_msgs__msg__TrailerMass__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__TrailerMass__TYPE_NAME, 30, 30},
      {j2735_v2x_msgs__msg__TrailerMass__FIELDS, 1, 1},
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
  "# TrailerMass.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# TrailerMass ::= INTEGER (0..255) \n"
  "#    -- object mass with LSB steps of 500 kg (~1100 lbs)\n"
  "#    -- the value zero shall be used for an unknown mass value\n"
  "#    -- the value 255 shall be used any mass larger than 127,500kg\n"
  "#    -- a useful range of 0~127.5 metric tons. \n"
  "uint8 trailer_mass\n"
  "\n"
  "uint8 TRAILER_MASS_UNKNOWN=0\n"
  "uint8 TRAILER_MASS_MAX=255\n"
  "uint8 TRAILER_MASS_MIN=1";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__TrailerMass__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__TrailerMass__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 425, 425},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__TrailerMass__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__TrailerMass__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
