// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/AuxiliaryBrakeStatus.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/auxiliary_brake_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x09, 0x2c, 0xba, 0x7e, 0x4e, 0x9e, 0x07, 0xbc,
      0x42, 0xf6, 0x3d, 0x5d, 0x30, 0xed, 0xed, 0x9f,
      0x80, 0x55, 0x26, 0xaf, 0x04, 0xc4, 0x50, 0x61,
      0x6f, 0x0b, 0x4d, 0x61, 0x59, 0x8c, 0x6b, 0x79,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/AuxiliaryBrakeStatus";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__FIELD_NAME__auxiliary_brake_status[] = "auxiliary_brake_status";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__FIELD_NAME__auxiliary_brake_status, 22, 22},
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
j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__TYPE_NAME, 39, 39},
      {j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__FIELDS, 1, 1},
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
  "# AuxiliaryBrakeStatus.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "\n"
  "#AuxiliaryBrakeStatus ::= ENUMERATED {\n"
  "#   unavailable (0), -- B'00  Vehicle Not Equipped with Aux Brakes \n"
  "#                    --       or Aux Brakes status is unavailable\n"
  "#   off         (1), -- B'01  Vehicle's Aux Brakes are Off\n"
  "#   on          (2), -- B'10  Vehicle's Aux Brakes are On ( Engaged )\n"
  "#   reserved    (3)  -- B'11 \n"
  "#   }   \n"
  "\n"
  "uint8  auxiliary_brake_status\n"
  "\n"
  "# enumeration values for status:\n"
  "uint8  UNAVAILABLE=0\n"
  "uint8  OFF=1\n"
  "uint8  ON=2\n"
  "uint8  RESERVED=3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 568, 568},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
