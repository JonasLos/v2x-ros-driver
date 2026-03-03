// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/PersonalClusterRadius.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/personal_cluster_radius__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__PersonalClusterRadius__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa1, 0x01, 0x7d, 0xd6, 0x74, 0x89, 0x5d, 0x86,
      0x83, 0x45, 0x0d, 0xd9, 0xb7, 0x69, 0x93, 0x87,
      0xb9, 0x8f, 0x4b, 0x03, 0x0b, 0xdf, 0x42, 0xd0,
      0x3e, 0xd5, 0x71, 0x24, 0x13, 0xbc, 0x21, 0xf9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__PersonalClusterRadius__TYPE_NAME[] = "j2735_v2x_msgs/msg/PersonalClusterRadius";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__PersonalClusterRadius__FIELD_NAME__cluster_radius[] = "cluster_radius";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__PersonalClusterRadius__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__PersonalClusterRadius__FIELD_NAME__cluster_radius, 14, 14},
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
j2735_v2x_msgs__msg__PersonalClusterRadius__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__PersonalClusterRadius__TYPE_NAME, 40, 40},
      {j2735_v2x_msgs__msg__PersonalClusterRadius__FIELDS, 1, 1},
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
  "# PersonalClusterRadius.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of PersonalClusterRadius from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# PersonalClusterRadius ::= INTEGER (0..100) -- units of meters\n"
  "uint8 cluster_radius\n"
  "uint8 CLUSTER_RADIUS_MAX = 100";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__PersonalClusterRadius__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__PersonalClusterRadius__TYPE_NAME, 40, 40},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 320, 320},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__PersonalClusterRadius__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__PersonalClusterRadius__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
