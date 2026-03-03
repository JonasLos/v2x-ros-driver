// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from carma_msgs:msg/CarlaEnabled.idl
// generated code does not contain a copyright notice

#include "carma_msgs/msg/detail/carla_enabled__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
const rosidl_type_hash_t *
carma_msgs__msg__CarlaEnabled__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf4, 0xc2, 0xcf, 0xae, 0xe9, 0xdc, 0xfa, 0x92,
      0x5c, 0x61, 0xa1, 0x77, 0xae, 0x64, 0xa4, 0x98,
      0xa9, 0x68, 0xa7, 0xa4, 0x90, 0x6d, 0xbf, 0x23,
      0xca, 0x0c, 0xb4, 0xc9, 0x69, 0x21, 0x9d, 0xed,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char carma_msgs__msg__CarlaEnabled__TYPE_NAME[] = "carma_msgs/msg/CarlaEnabled";

// Define type names, field names, and default values
static char carma_msgs__msg__CarlaEnabled__FIELD_NAME__carla_enabled[] = "carla_enabled";

static rosidl_runtime_c__type_description__Field carma_msgs__msg__CarlaEnabled__FIELDS[] = {
  {
    {carma_msgs__msg__CarlaEnabled__FIELD_NAME__carla_enabled, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
carma_msgs__msg__CarlaEnabled__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_msgs__msg__CarlaEnabled__TYPE_NAME, 27, 27},
      {carma_msgs__msg__CarlaEnabled__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# CarlaEnabled.msg\n"
  "\n"
  "# This message is feedback to the system to inform the ROS network that \n"
  "# Carla starts and is ready for the simulation\n"
  "\n"
  "# @author Fang Zhou\n"
  "\n"
  "#Status of carla_enabled\n"
  "bool carla_enabled";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
carma_msgs__msg__CarlaEnabled__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_msgs__msg__CarlaEnabled__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 205, 205},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_msgs__msg__CarlaEnabled__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_msgs__msg__CarlaEnabled__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
