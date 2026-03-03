// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/TrailerWeight.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/trailer_weight__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__TrailerWeight__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2f, 0x7c, 0x4e, 0xc4, 0xeb, 0x12, 0xcd, 0x2a,
      0x3e, 0xa7, 0x7d, 0x46, 0xec, 0xac, 0xd9, 0x29,
      0xbf, 0x18, 0x4c, 0x95, 0xd2, 0x8f, 0x2c, 0x7e,
      0x28, 0x6e, 0xf2, 0xfd, 0xca, 0x00, 0xb4, 0x55,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__TrailerWeight__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrailerWeight";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__TrailerWeight__FIELD_NAME__trailer_weight[] = "trailer_weight";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__TrailerWeight__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__TrailerWeight__FIELD_NAME__trailer_weight, 14, 14},
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
j2735_v2x_msgs__msg__TrailerWeight__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__TrailerWeight__TYPE_NAME, 32, 32},
      {j2735_v2x_msgs__msg__TrailerWeight__FIELDS, 1, 1},
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
  "# TrailerWeight.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# TrailerWeight ::= INTEGER (0..64255)\n"
  "# A data element re-used from the SAE J1939 standard and encoded as: 2 kg/bit, 0 degree offset, Range: 0 to\n"
  "# +128510 kg. See SPN 180, PGN reference 65258.\n"
  "uint16 trailer_weight\n"
  "\n"
  "uint16 TRAILER_WEIGHT_MAX=64255";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__TrailerWeight__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__TrailerWeight__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 305, 305},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__TrailerWeight__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__TrailerWeight__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
