// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from carma_msgs:msg/LightBarIndicatorControllers.idl
// generated code does not contain a copyright notice

#include "carma_msgs/msg/detail/light_bar_indicator_controllers__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
const rosidl_type_hash_t *
carma_msgs__msg__LightBarIndicatorControllers__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x40, 0x38, 0x4e, 0x49, 0xc7, 0xd4, 0x38, 0x60,
      0x10, 0xd0, 0x8f, 0x35, 0x9c, 0x8a, 0x90, 0xca,
      0x8c, 0x72, 0xf8, 0x1d, 0xc6, 0x17, 0x82, 0x46,
      0x0d, 0x4a, 0xcb, 0xf1, 0xfe, 0x40, 0x4b, 0x7e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char carma_msgs__msg__LightBarIndicatorControllers__TYPE_NAME[] = "carma_msgs/msg/LightBarIndicatorControllers";

// Define type names, field names, and default values
static char carma_msgs__msg__LightBarIndicatorControllers__FIELD_NAME__green_solid_owner[] = "green_solid_owner";
static char carma_msgs__msg__LightBarIndicatorControllers__FIELD_NAME__green_flash_owner[] = "green_flash_owner";
static char carma_msgs__msg__LightBarIndicatorControllers__FIELD_NAME__yellow_sides_owner[] = "yellow_sides_owner";
static char carma_msgs__msg__LightBarIndicatorControllers__FIELD_NAME__yellow_dim_owner[] = "yellow_dim_owner";
static char carma_msgs__msg__LightBarIndicatorControllers__FIELD_NAME__yellow_flash_owner[] = "yellow_flash_owner";
static char carma_msgs__msg__LightBarIndicatorControllers__FIELD_NAME__yellow_arrow_left_owner[] = "yellow_arrow_left_owner";
static char carma_msgs__msg__LightBarIndicatorControllers__FIELD_NAME__yellow_arrow_right_owner[] = "yellow_arrow_right_owner";
static char carma_msgs__msg__LightBarIndicatorControllers__FIELD_NAME__yellow_arrow_out_owner[] = "yellow_arrow_out_owner";

static rosidl_runtime_c__type_description__Field carma_msgs__msg__LightBarIndicatorControllers__FIELDS[] = {
  {
    {carma_msgs__msg__LightBarIndicatorControllers__FIELD_NAME__green_solid_owner, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_msgs__msg__LightBarIndicatorControllers__FIELD_NAME__green_flash_owner, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_msgs__msg__LightBarIndicatorControllers__FIELD_NAME__yellow_sides_owner, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_msgs__msg__LightBarIndicatorControllers__FIELD_NAME__yellow_dim_owner, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_msgs__msg__LightBarIndicatorControllers__FIELD_NAME__yellow_flash_owner, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_msgs__msg__LightBarIndicatorControllers__FIELD_NAME__yellow_arrow_left_owner, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_msgs__msg__LightBarIndicatorControllers__FIELD_NAME__yellow_arrow_right_owner, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_msgs__msg__LightBarIndicatorControllers__FIELD_NAME__yellow_arrow_out_owner, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
carma_msgs__msg__LightBarIndicatorControllers__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_msgs__msg__LightBarIndicatorControllers__TYPE_NAME, 43, 43},
      {carma_msgs__msg__LightBarIndicatorControllers__FIELDS, 8, 8},
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
  "# LightBarIndicatorControllers.msg\n"
  "#\n"
  "# @author Misheel Bayartsengel\n"
  "# @version 0.1\n"
  "# \n"
  "# Published by LightBarManager.\n"
  "# This msg indicates which indicators are controlled by which component\n"
  "# \n"
  "string green_solid_owner\n"
  "string green_flash_owner\n"
  "string yellow_sides_owner\n"
  "string yellow_dim_owner\n"
  "string yellow_flash_owner\n"
  "string yellow_arrow_left_owner\n"
  "string yellow_arrow_right_owner\n"
  "string yellow_arrow_out_owner";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
carma_msgs__msg__LightBarIndicatorControllers__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_msgs__msg__LightBarIndicatorControllers__TYPE_NAME, 43, 43},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 414, 414},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_msgs__msg__LightBarIndicatorControllers__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_msgs__msg__LightBarIndicatorControllers__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
