// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from carma_driver_msgs:msg/TurnSignal.idl
// generated code does not contain a copyright notice

#include "carma_driver_msgs/msg/detail/turn_signal__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_type_hash_t *
carma_driver_msgs__msg__TurnSignal__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb2, 0xf6, 0x2b, 0x42, 0xec, 0x91, 0xe5, 0xd5,
      0xa6, 0x00, 0x44, 0xb3, 0xb3, 0x11, 0x93, 0x7d,
      0x90, 0xac, 0x89, 0x98, 0x12, 0xb2, 0xa5, 0xae,
      0xd6, 0xaf, 0x66, 0x71, 0xff, 0x86, 0x71, 0x39,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char carma_driver_msgs__msg__TurnSignal__TYPE_NAME[] = "carma_driver_msgs/msg/TurnSignal";

// Define type names, field names, and default values
static char carma_driver_msgs__msg__TurnSignal__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field carma_driver_msgs__msg__TurnSignal__FIELDS[] = {
  {
    {carma_driver_msgs__msg__TurnSignal__FIELD_NAME__state, 5, 5},
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
carma_driver_msgs__msg__TurnSignal__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_driver_msgs__msg__TurnSignal__TYPE_NAME, 32, 32},
      {carma_driver_msgs__msg__TurnSignal__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# TurnSignal.msg\n"
  "\n"
  "# Message with the state of the TurnSignal Lever\n"
  "\n"
  "uint8 state\n"
  "\n"
  "uint8 LEFT = 0\n"
  "uint8 RIGHT = 1\n"
  "uint8 NEUTRAL = 2";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
carma_driver_msgs__msg__TurnSignal__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_driver_msgs__msg__TurnSignal__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 130, 130},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_driver_msgs__msg__TurnSignal__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_driver_msgs__msg__TurnSignal__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
