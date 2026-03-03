// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/LayerType.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/layer_type__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__LayerType__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x90, 0x55, 0x33, 0x52, 0xd7, 0x42, 0x81, 0x20,
      0xf7, 0xac, 0x0f, 0xb4, 0x5a, 0xc6, 0xb4, 0xfa,
      0x37, 0x5e, 0x00, 0x59, 0xca, 0x51, 0x88, 0x5a,
      0x13, 0xc7, 0x29, 0x93, 0x95, 0xd4, 0xdf, 0x2d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__LayerType__TYPE_NAME[] = "j2735_v2x_msgs/msg/LayerType";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__LayerType__FIELD_NAME__layer_type[] = "layer_type";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__LayerType__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__LayerType__FIELD_NAME__layer_type, 10, 10},
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
j2735_v2x_msgs__msg__LayerType__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__LayerType__TYPE_NAME, 28, 28},
      {j2735_v2x_msgs__msg__LayerType__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# LayerType.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# Data element used to uniquely identify the type of information to be found in a layer of geographic map fragment\n"
  "# such as an intersection.\n"
  "#\n"
  "\n"
  "uint8 layer_type\n"
  "\n"
  "# LayerType ::= ENUMERATED {\n"
  "# none,\n"
  "# mixedContent, -- two or more of the below types\n"
  "# generalMapData,\n"
  "# intersectionData,\n"
  "# curveData,\n"
  "# roadwaySectionData,\n"
  "# parkingAreaData,\n"
  "# sharedLaneData,\n"
  "# ...\n"
  "# }\n"
  "\n"
  "# enumeration values for plan type:\n"
  "uint8       NONE = 0\n"
  "uint8       MIXED_CONTENT = 1\n"
  "uint8       GENERAL_MAP_DATA = 2\n"
  "uint8       INTERSECTION_DATA = 3\n"
  "uint8       CURVE_DATA = 4\n"
  "uint8       ROADWAY_SECTION_DATA = 5\n"
  "uint8       PARKING_AREA_DATA = 6\n"
  "uint8       SHARED_LANE_DATA = 7";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__LayerType__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__LayerType__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 741, 741},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__LayerType__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__LayerType__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
