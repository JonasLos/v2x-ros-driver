// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/TrafficControlGeometry.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/traffic_control_geometry__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__TrafficControlGeometry__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9c, 0xb1, 0x66, 0x8f, 0xc2, 0x40, 0xac, 0x25,
      0x11, 0x46, 0x6c, 0xff, 0x32, 0xb4, 0x56, 0x08,
      0x20, 0x3c, 0x84, 0x91, 0xce, 0xbd, 0x52, 0xe6,
      0x1e, 0xe3, 0x6c, 0x3c, 0x9a, 0x43, 0x25, 0x19,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/path_node__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PathNode__EXPECTED_HASH = {1, {
    0x63, 0xc5, 0xf0, 0x4d, 0xa2, 0x7d, 0x4f, 0x88,
    0x32, 0x6a, 0x9b, 0xd6, 0xc4, 0x15, 0x15, 0x04,
    0xe0, 0xf7, 0xb0, 0x39, 0x43, 0x34, 0x3c, 0x71,
    0xda, 0x06, 0xb0, 0xe5, 0xf2, 0x11, 0x91, 0x6e,
  }};
#endif

static char j2735_v2x_msgs__msg__TrafficControlGeometry__TYPE_NAME[] = "j2735_v2x_msgs/msg/TrafficControlGeometry";
static char j2735_v2x_msgs__msg__PathNode__TYPE_NAME[] = "j2735_v2x_msgs/msg/PathNode";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__TrafficControlGeometry__FIELD_NAME__proj[] = "proj";
static char j2735_v2x_msgs__msg__TrafficControlGeometry__FIELD_NAME__datum[] = "datum";
static char j2735_v2x_msgs__msg__TrafficControlGeometry__FIELD_NAME__reftime[] = "reftime";
static char j2735_v2x_msgs__msg__TrafficControlGeometry__FIELD_NAME__reflon[] = "reflon";
static char j2735_v2x_msgs__msg__TrafficControlGeometry__FIELD_NAME__reflat[] = "reflat";
static char j2735_v2x_msgs__msg__TrafficControlGeometry__FIELD_NAME__refelv[] = "refelv";
static char j2735_v2x_msgs__msg__TrafficControlGeometry__FIELD_NAME__heading[] = "heading";
static char j2735_v2x_msgs__msg__TrafficControlGeometry__FIELD_NAME__nodes[] = "nodes";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__TrafficControlGeometry__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__TrafficControlGeometry__FIELD_NAME__proj, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlGeometry__FIELD_NAME__datum, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlGeometry__FIELD_NAME__reftime, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlGeometry__FIELD_NAME__reflon, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlGeometry__FIELD_NAME__reflat, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlGeometry__FIELD_NAME__refelv, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlGeometry__FIELD_NAME__heading, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__TrafficControlGeometry__FIELD_NAME__nodes, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {j2735_v2x_msgs__msg__PathNode__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__TrafficControlGeometry__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__PathNode__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__TrafficControlGeometry__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__TrafficControlGeometry__TYPE_NAME, 41, 41},
      {j2735_v2x_msgs__msg__TrafficControlGeometry__FIELDS, 8, 8},
    },
    {j2735_v2x_msgs__msg__TrafficControlGeometry__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PathNode__EXPECTED_HASH, j2735_v2x_msgs__msg__PathNode__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__PathNode__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# TrafficControlGeometry.msg\n"
  "#\n"
  "# Part of the CARMA Cloud geo-fence specification not part of the official SAE j2735 standard\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# \n"
  "# @version 0.1\n"
  "#\n"
  "# Description\n"
  "# ...\n"
  "\n"
  "# TrafficControlGeometry ::= SEQUENCE\n"
  "# {\n"
  "# \\tproj IA5String (SIZE(0..63)),\n"
  "# \\tdatum IA5String (SIZE(0..63)),\n"
  "# \\treftime EpochMins,\n"
  "# \\treflon Longitude,\n"
  "# \\treflat Latitude,\n"
  "# \\trefelv Elevation, -- decimeter offset -4096 from reference datum\n"
  "# \\theading INTEGER (0..3599), -- initial path heading clockwise from north in tenths of degrees\n"
  "# \\tnodes SEQUENCE (SIZE(1..255)) OF PathNode\n"
  "# }\n"
  "\n"
  "# proj IA5String (SIZE(0..63)),\n"
  "string proj\n"
  "\n"
  "# datum IA5String (SIZE(0..63)),\n"
  "string datum\n"
  "\n"
  "# reftime EpochMins INTEGER (0..153722867280912) -- minutes since epoch January 1, 1970 00:00 UTC\n"
  "uint64 reftime\n"
  "\n"
  "# reflon Longitude ::= INTEGER (-1799999999..1800000001)-- geographic longitude expressed in 1/10th microdegrees, 1800000001 represents null\n"
  "int32 reflon\n"
  "\n"
  "int32 REFLON_UNAVAILABLE = 1800000001\n"
  "int32 REFLON_MAX = 1800000000\n"
  "int32 REFLON_MIN = -1799999999\n"
  "\n"
  "# reflat Latitude ::= INTEGER (-900000000..900000001) -- geographic latitude expressed in 1/10th microdegrees, 900000001 represents null\n"
  "int32 reflat\n"
  "\n"
  "int32 REFLAT_UNAVAILABLE = 900000001\n"
  "int32 REFLAT_MAX = 900000000\n"
  "int32 REFLAT_MIN = -900000000\n"
  "\n"
  "# refelv Elevation ::= INTEGER (0..65535) -- offset by 4096, -4096 represents unknown, -409.5 to 6143.9 meters relative to referemce datum\n"
  "int32 refelv\n"
  "\n"
  "int32 REFELV_UNKNOWN = 0\n"
  "int32 REFELV_MAX = 65535\n"
  "int32 REFELV_MIN = 1\n"
  "\n"
  "# heading INTEGER (0..3599) -- initial path heading clockwise from north in tenths of degrees\n"
  "uint16 heading\n"
  "uint16 HEADING_MAX = 3599\n"
  "uint16 HEADING_MIN = 0\n"
  "\n"
  "# nodes SEQUENCE (SIZE(1..255)) OF PathNode\n"
  "j2735_v2x_msgs/PathNode[] nodes\n"
  "\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__TrafficControlGeometry__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__TrafficControlGeometry__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1758, 1758},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__TrafficControlGeometry__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__TrafficControlGeometry__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__PathNode__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
