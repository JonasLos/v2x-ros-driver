// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from carma_msgs:msg/LightBarCDAType.idl
// generated code does not contain a copyright notice

#include "carma_msgs/msg/detail/light_bar_cda_type__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
const rosidl_type_hash_t *
carma_msgs__msg__LightBarCDAType__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9e, 0x9e, 0x49, 0xfc, 0x39, 0xbe, 0xc2, 0x6a,
      0xea, 0x7a, 0x24, 0xfe, 0x01, 0xdb, 0xfe, 0x9e,
      0xb7, 0x17, 0x59, 0xc9, 0x92, 0xb1, 0x18, 0x04,
      0x45, 0xf8, 0x89, 0xb8, 0x2c, 0x4b, 0x73, 0x8c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char carma_msgs__msg__LightBarCDAType__TYPE_NAME[] = "carma_msgs/msg/LightBarCDAType";

// Define type names, field names, and default values
static char carma_msgs__msg__LightBarCDAType__FIELD_NAME__type[] = "type";

static rosidl_runtime_c__type_description__Field carma_msgs__msg__LightBarCDAType__FIELDS[] = {
  {
    {carma_msgs__msg__LightBarCDAType__FIELD_NAME__type, 4, 4},
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
carma_msgs__msg__LightBarCDAType__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_msgs__msg__LightBarCDAType__TYPE_NAME, 30, 30},
      {carma_msgs__msg__LightBarCDAType__FIELDS, 1, 1},
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
  "# LightBarCDAType.msg\n"
  "#\n"
  "# @author Misheel Bayartsengel\n"
  "# @version 0.1\n"
  "# \n"
  "# A component interacting with the lightbar manager can request/release control and set \n"
  "# lightbar indicators by sending what type of Cooperative Driving Automation (CDA) msg \n"
  "# it is broadcasting. The lightbar manager would map that msg type with its corresponding\n"
  "# lightbar indicator.\n"
  "\n"
  "# Class A, Status sharing\n"
  "# Class B, Intent-Sharing information\n"
  "# Class C, Agreement Seeking\n"
  "# Class D, Prescriptive Information\n"
  "\n"
  "uint8 type\n"
  "\n"
  "uint8 TYPEA = 0\n"
  "uint8 TYPEB = 1\n"
  "uint8 TYPEC = 2\n"
  "uint8 TYPED = 3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
carma_msgs__msg__LightBarCDAType__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_msgs__msg__LightBarCDAType__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 571, 571},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_msgs__msg__LightBarCDAType__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_msgs__msg__LightBarCDAType__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
