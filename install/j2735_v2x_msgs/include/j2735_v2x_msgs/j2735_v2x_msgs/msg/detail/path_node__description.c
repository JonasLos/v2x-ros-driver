// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/PathNode.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/path_node__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__PathNode__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x63, 0xc5, 0xf0, 0x4d, 0xa2, 0x7d, 0x4f, 0x88,
      0x32, 0x6a, 0x9b, 0xd6, 0xc4, 0x15, 0x15, 0x04,
      0xe0, 0xf7, 0xb0, 0x39, 0x43, 0x34, 0x3c, 0x71,
      0xda, 0x06, 0xb0, 0xe5, 0xf2, 0x11, 0x91, 0x6e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__PathNode__TYPE_NAME[] = "j2735_v2x_msgs/msg/PathNode";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__PathNode__FIELD_NAME__x[] = "x";
static char j2735_v2x_msgs__msg__PathNode__FIELD_NAME__y[] = "y";
static char j2735_v2x_msgs__msg__PathNode__FIELD_NAME__z[] = "z";
static char j2735_v2x_msgs__msg__PathNode__FIELD_NAME__z_exists[] = "z_exists";
static char j2735_v2x_msgs__msg__PathNode__FIELD_NAME__width[] = "width";
static char j2735_v2x_msgs__msg__PathNode__FIELD_NAME__width_exists[] = "width_exists";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__PathNode__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__PathNode__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PathNode__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PathNode__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PathNode__FIELD_NAME__z_exists, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PathNode__FIELD_NAME__width, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PathNode__FIELD_NAME__width_exists, 12, 12},
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
j2735_v2x_msgs__msg__PathNode__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__PathNode__TYPE_NAME, 27, 27},
      {j2735_v2x_msgs__msg__PathNode__FIELDS, 6, 6},
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
  "# PathNode.msg\n"
  "#\n"
  "# Part of the CARMA Cloud geo-fence specification not part of the official SAE j2735 standard\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Misheel Bayartsengel\n"
  "# @version 0.1\n"
  "#\n"
  "# The positive x direction proceeds eastward, positive y proceeds\n"
  "# northward, and positive z proceeds away from the center of the Earth. \n"
  "\n"
  "# X ::= INTEGER (-32768..32767)\n"
  "#   -- units are in cm\n"
  "int16 x\n"
  "int16 y\n"
  "int16 z\n"
  "\n"
  "bool z_exists\n"
  "\n"
  "# Width ::= INTEGER (-128..127)\n"
  "#   -- units are in cm\n"
  "int8 width\n"
  "bool width_exists";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__PathNode__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__PathNode__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 512, 512},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__PathNode__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__PathNode__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
