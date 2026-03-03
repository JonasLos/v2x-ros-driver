// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from carma_msgs:msg/LightBarIndicator.idl
// generated code does not contain a copyright notice

#include "carma_msgs/msg/detail/light_bar_indicator__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
const rosidl_type_hash_t *
carma_msgs__msg__LightBarIndicator__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe9, 0xe9, 0xb8, 0xa6, 0x9a, 0x03, 0x2f, 0x35,
      0x10, 0x46, 0x65, 0xfb, 0x25, 0x20, 0xf6, 0xda,
      0xc8, 0x67, 0xc9, 0x5a, 0xea, 0xae, 0x1f, 0x33,
      0x2b, 0x90, 0x33, 0x42, 0xe8, 0xca, 0xfe, 0x8c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char carma_msgs__msg__LightBarIndicator__TYPE_NAME[] = "carma_msgs/msg/LightBarIndicator";

// Define type names, field names, and default values
static char carma_msgs__msg__LightBarIndicator__FIELD_NAME__indicator[] = "indicator";

static rosidl_runtime_c__type_description__Field carma_msgs__msg__LightBarIndicator__FIELDS[] = {
  {
    {carma_msgs__msg__LightBarIndicator__FIELD_NAME__indicator, 9, 9},
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
carma_msgs__msg__LightBarIndicator__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_msgs__msg__LightBarIndicator__TYPE_NAME, 32, 32},
      {carma_msgs__msg__LightBarIndicator__FIELDS, 1, 1},
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
  "# LightBarIndicator.msg\n"
  "#\n"
  "# @author Misheel Bayartsengel\n"
  "# @version 0.1\n"
  "# \n"
  "# A component interacting with the lightbar manager can request/release control and set \n"
  "# lightbar indicators by specifying its IDs in here. \n"
  "\n"
  "uint8 indicator\n"
  "\n"
  "uint8 GREEN_SOLID = 0\n"
  "uint8 GREEN_FLASH = 1\n"
  "uint8 YELLOW_SIDES = 2\n"
  "uint8 YELLOW_DIM = 3\n"
  "uint8 YELLOW_FLASH = 4\n"
  "uint8 YELLOW_ARROW_LEFT = 5\n"
  "uint8 YELLOW_ARROW_RIGHT = 6\n"
  "uint8 YELLOW_ARROW_OUT = 7";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
carma_msgs__msg__LightBarIndicator__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_msgs__msg__LightBarIndicator__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 432, 432},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_msgs__msg__LightBarIndicator__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_msgs__msg__LightBarIndicator__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
