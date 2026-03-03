// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/AnimalPropelledType.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/animal_propelled_type__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__AnimalPropelledType__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x95, 0x80, 0x0a, 0xb8, 0x8d, 0xe8, 0x6c, 0x41,
      0x4f, 0xa1, 0x35, 0x20, 0xbd, 0xff, 0x97, 0xb0,
      0x02, 0x20, 0xaa, 0xae, 0x3b, 0x6c, 0x35, 0x09,
      0x6e, 0xd3, 0xf6, 0x9e, 0x06, 0x8f, 0x46, 0x0e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__AnimalPropelledType__TYPE_NAME[] = "j2735_v2x_msgs/msg/AnimalPropelledType";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__AnimalPropelledType__FIELD_NAME__type[] = "type";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__AnimalPropelledType__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__AnimalPropelledType__FIELD_NAME__type, 4, 4},
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
j2735_v2x_msgs__msg__AnimalPropelledType__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__AnimalPropelledType__TYPE_NAME, 38, 38},
      {j2735_v2x_msgs__msg__AnimalPropelledType__FIELDS, 1, 1},
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
  "# AnimalPropelledType.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of AnimalPropelledType from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# AnimalPropelledType ::= ENUMERATED {   \n"
  "#    unavailable         (0),\n"
  "#    otherTypes          (1), -- any method not listed below\n"
  "#    animalMounted       (2), -- as in horseback          \n"
  "#    animalDrawnCarriage (3),\n"
  "#    ...\n"
  "# }\n"
  "\n"
  "uint8 type\n"
  "\n"
  "uint8 UNAVAILABLE=0\n"
  "uint8 OTHER_TYPES=1\n"
  "uint8 ANIMAL_MOUNTED=2\n"
  "uint8 ANIMAL_DRAWN_CARRIAGE=3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__AnimalPropelledType__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__AnimalPropelledType__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 541, 541},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__AnimalPropelledType__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__AnimalPropelledType__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
