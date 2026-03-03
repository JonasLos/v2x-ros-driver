// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from carma_driver_msgs:msg/LightBarStatus.idl
// generated code does not contain a copyright notice

#include "carma_driver_msgs/msg/detail/light_bar_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_type_hash_t *
carma_driver_msgs__msg__LightBarStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfe, 0x73, 0x38, 0x11, 0x0a, 0xb1, 0xb2, 0x7b,
      0x7d, 0x6e, 0xf3, 0xea, 0xb2, 0x3d, 0x95, 0x70,
      0x13, 0xf3, 0x20, 0xd7, 0xbe, 0x6e, 0xd7, 0xce,
      0x3d, 0x66, 0xb1, 0xd9, 0x8d, 0xdd, 0x90, 0xfd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char carma_driver_msgs__msg__LightBarStatus__TYPE_NAME[] = "carma_driver_msgs/msg/LightBarStatus";

// Define type names, field names, and default values
static char carma_driver_msgs__msg__LightBarStatus__FIELD_NAME__green_solid[] = "green_solid";
static char carma_driver_msgs__msg__LightBarStatus__FIELD_NAME__yellow_solid[] = "yellow_solid";
static char carma_driver_msgs__msg__LightBarStatus__FIELD_NAME__right_arrow[] = "right_arrow";
static char carma_driver_msgs__msg__LightBarStatus__FIELD_NAME__left_arrow[] = "left_arrow";
static char carma_driver_msgs__msg__LightBarStatus__FIELD_NAME__sides_solid[] = "sides_solid";
static char carma_driver_msgs__msg__LightBarStatus__FIELD_NAME__flash[] = "flash";
static char carma_driver_msgs__msg__LightBarStatus__FIELD_NAME__green_flash[] = "green_flash";
static char carma_driver_msgs__msg__LightBarStatus__FIELD_NAME__takedown[] = "takedown";

static rosidl_runtime_c__type_description__Field carma_driver_msgs__msg__LightBarStatus__FIELDS[] = {
  {
    {carma_driver_msgs__msg__LightBarStatus__FIELD_NAME__green_solid, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__LightBarStatus__FIELD_NAME__yellow_solid, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__LightBarStatus__FIELD_NAME__right_arrow, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__LightBarStatus__FIELD_NAME__left_arrow, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__LightBarStatus__FIELD_NAME__sides_solid, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__LightBarStatus__FIELD_NAME__flash, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__LightBarStatus__FIELD_NAME__green_flash, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__LightBarStatus__FIELD_NAME__takedown, 8, 8},
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
carma_driver_msgs__msg__LightBarStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_driver_msgs__msg__LightBarStatus__TYPE_NAME, 36, 36},
      {carma_driver_msgs__msg__LightBarStatus__FIELDS, 8, 8},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# LightBarStatus.msg\n"
  "\n"
  "# This message contains the state of the light bar \n"
  "# the states are set based off of front lightbar\n"
  "\n"
  "uint8 green_solid\n"
  "uint8 yellow_solid\n"
  "uint8 right_arrow\n"
  "uint8 left_arrow\n"
  "uint8 sides_solid\n"
  "uint8 flash\n"
  "uint8 green_flash\n"
  "\n"
  "uint8 OFF = 0\n"
  "uint8 ON = 1\n"
  "\n"
  "# following state(s) may not be supported anymore\n"
  "uint8 takedown\n"
  "\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
carma_driver_msgs__msg__LightBarStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_driver_msgs__msg__LightBarStatus__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 340, 340},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_driver_msgs__msg__LightBarStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_driver_msgs__msg__LightBarStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
