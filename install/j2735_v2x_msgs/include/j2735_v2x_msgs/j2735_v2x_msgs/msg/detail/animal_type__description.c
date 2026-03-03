// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/AnimalType.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/animal_type__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__AnimalType__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x77, 0xd2, 0xa3, 0xe1, 0x90, 0xee, 0x9a, 0xf7,
      0x2c, 0x34, 0xbb, 0x5b, 0xae, 0xb3, 0xd6, 0x38,
      0x13, 0xda, 0x5f, 0xc1, 0x18, 0x6d, 0x5e, 0x28,
      0x4d, 0xb5, 0x4b, 0xcb, 0xee, 0x04, 0x1d, 0x0d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__AnimalType__TYPE_NAME[] = "j2735_v2x_msgs/msg/AnimalType";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__AnimalType__FIELD_NAME__type[] = "type";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__AnimalType__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__AnimalType__FIELD_NAME__type, 4, 4},
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
j2735_v2x_msgs__msg__AnimalType__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__AnimalType__TYPE_NAME, 29, 29},
      {j2735_v2x_msgs__msg__AnimalType__FIELDS, 1, 1},
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
  "# AnimalType.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of AnimalType from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# AnimalType ::= ENUMERATED { \n"
  "#    unavailable    (0), \n"
  "#    serviceUse     (1),  -- Includes guide or police animals\n"
  "#    pet            (2),\n"
  "#    farm           (3),\n"
  "#    ...\n"
  "#    }\n"
  "\n"
  "uint8 type\n"
  "\n"
  "uint8 UNAVAILABLE=0\n"
  "uint8 SERVICE_USE=1\n"
  "uint8 PET=2\n"
  "uint8 FARM=3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__AnimalType__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__AnimalType__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 445, 445},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__AnimalType__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__AnimalType__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
