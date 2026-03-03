// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/BSMRegionalExtension.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/bsm_regional_extension__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__BSMRegionalExtension__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe9, 0x5b, 0x83, 0x9a, 0xe1, 0x4d, 0xe4, 0xb0,
      0x2f, 0xdb, 0x8e, 0x4b, 0x0e, 0x04, 0x9a, 0x14,
      0xa3, 0xed, 0x93, 0x28, 0x95, 0x27, 0x9e, 0xab,
      0x15, 0xdc, 0x7c, 0xd5, 0xa1, 0xf9, 0x34, 0x6d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/position3_d__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__Position3D__EXPECTED_HASH = {1, {
    0xa1, 0x45, 0x55, 0x07, 0x95, 0x8a, 0xec, 0x9b,
    0x3c, 0x0d, 0xac, 0x63, 0x0e, 0x0a, 0xb4, 0x03,
    0x4d, 0xd7, 0x9b, 0xa9, 0x75, 0x33, 0x32, 0x89,
    0x3e, 0xc8, 0x3f, 0x12, 0xe3, 0x02, 0xdd, 0x5c,
  }};
#endif

static char j2735_v2x_msgs__msg__BSMRegionalExtension__TYPE_NAME[] = "j2735_v2x_msgs/msg/BSMRegionalExtension";
static char j2735_v2x_msgs__msg__Position3D__TYPE_NAME[] = "j2735_v2x_msgs/msg/Position3D";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__BSMRegionalExtension__FIELD_NAME__regional_extension_id[] = "regional_extension_id";
static char j2735_v2x_msgs__msg__BSMRegionalExtension__FIELD_NAME__route_destination_points[] = "route_destination_points";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__BSMRegionalExtension__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__BSMRegionalExtension__FIELD_NAME__regional_extension_id, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__BSMRegionalExtension__FIELD_NAME__route_destination_points, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {j2735_v2x_msgs__msg__Position3D__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__BSMRegionalExtension__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__Position3D__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__BSMRegionalExtension__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__BSMRegionalExtension__TYPE_NAME, 39, 39},
      {j2735_v2x_msgs__msg__BSMRegionalExtension__FIELDS, 2, 2},
    },
    {j2735_v2x_msgs__msg__BSMRegionalExtension__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Position3D__EXPECTED_HASH, j2735_v2x_msgs__msg__Position3D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__Position3D__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# BSMRegionalExtension.msg\n"
  "#\n"
  "\n"
  "# This message includes the BSM RegionalExtensions supported by CARMA.\n"
  "\n"
  "# ID pertaining to the type of regional extension that is populated in this message\n"
  "uint16 regional_extension_id\n"
  "\n"
  "# Enumeration values for regional_extension_id\n"
  "uint16 ROUTE_DESTINATIONS = 1\n"
  "\n"
  "# Array of waypoints describing a vehicle's route\n"
  "# Note: Receiving vehicle will generate a route using these points\n"
  "j2735_v2x_msgs/Position3D[] route_destination_points";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__BSMRegionalExtension__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__BSMRegionalExtension__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 465, 465},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__BSMRegionalExtension__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__BSMRegionalExtension__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__Position3D__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
