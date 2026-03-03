// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/NodeOffsetPointXY.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/node_offset_point_xy__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__NodeOffsetPointXY__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x18, 0xed, 0xb5, 0x4c, 0xe5, 0x0f, 0x6c, 0x02,
      0x31, 0xa1, 0xf8, 0x52, 0x6d, 0xe1, 0x31, 0xa2,
      0xe3, 0xeb, 0xf9, 0x97, 0x1f, 0xb3, 0x9d, 0xf0,
      0x79, 0xd7, 0x68, 0xec, 0x23, 0x8c, 0xc8, 0x45,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/node_xy22b__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_xy26b__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_xy28b__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_l_lm_d64b__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_xy20b__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_xy24b__functions.h"
#include "j2735_v2x_msgs/msg/detail/node_xy32b__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NodeLLmD64b__EXPECTED_HASH = {1, {
    0x12, 0x05, 0x5b, 0xca, 0xb5, 0x09, 0xde, 0x4d,
    0x0f, 0x1f, 0x28, 0xf5, 0xbb, 0x44, 0x66, 0xad,
    0x07, 0xbc, 0xc5, 0x35, 0x3a, 0x3f, 0x11, 0xbb,
    0x6c, 0xfe, 0x2c, 0x00, 0x3f, 0xc9, 0xff, 0xb3,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NodeXY20b__EXPECTED_HASH = {1, {
    0xc4, 0xe1, 0x1b, 0xb4, 0x5e, 0x64, 0x79, 0xd8,
    0x00, 0x5b, 0x4c, 0x86, 0x14, 0xd3, 0x85, 0x51,
    0xe9, 0x84, 0x8a, 0x93, 0x78, 0x52, 0x70, 0x81,
    0xaa, 0xd6, 0xa1, 0x51, 0xe6, 0xd8, 0xe0, 0xc4,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NodeXY22b__EXPECTED_HASH = {1, {
    0x45, 0x25, 0xdc, 0x9b, 0x95, 0x64, 0xbd, 0x58,
    0x0d, 0x9e, 0xc5, 0xf9, 0x70, 0x41, 0x44, 0x39,
    0x8f, 0x82, 0xc7, 0x17, 0x47, 0x05, 0x5e, 0xef,
    0x2b, 0x08, 0x8b, 0xb8, 0x28, 0x60, 0x12, 0x6a,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NodeXY24b__EXPECTED_HASH = {1, {
    0xe7, 0xb7, 0x0d, 0x99, 0x15, 0xcd, 0x02, 0xbf,
    0x77, 0xde, 0xd9, 0x29, 0x4f, 0xf0, 0xa5, 0x12,
    0x03, 0xac, 0x3d, 0xa5, 0xb5, 0x93, 0x93, 0xaf,
    0x8a, 0x00, 0x6c, 0x47, 0x60, 0xc6, 0x23, 0x2c,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NodeXY26b__EXPECTED_HASH = {1, {
    0xea, 0x44, 0xeb, 0x8e, 0x26, 0x08, 0x8d, 0xb0,
    0x85, 0x7b, 0xb2, 0xff, 0xdd, 0x0f, 0x75, 0x0c,
    0x3e, 0x8c, 0xd2, 0xd3, 0x21, 0x22, 0x67, 0x0b,
    0x54, 0x22, 0xf0, 0x9d, 0xa3, 0x1e, 0x29, 0x49,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NodeXY28b__EXPECTED_HASH = {1, {
    0x82, 0xd5, 0x0a, 0x59, 0x5f, 0x16, 0xbd, 0xe6,
    0x68, 0xda, 0x2b, 0xc0, 0x52, 0x2c, 0x23, 0xba,
    0xb1, 0xff, 0x1f, 0xad, 0x23, 0x75, 0xa9, 0x4e,
    0x63, 0xe3, 0xbd, 0xb6, 0x66, 0xd9, 0xcd, 0x43,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__NodeXY32b__EXPECTED_HASH = {1, {
    0x81, 0xcb, 0xf6, 0xdb, 0xfe, 0xc9, 0xb6, 0x8c,
    0xa2, 0xdf, 0x13, 0x9c, 0xe6, 0xa2, 0x01, 0x66,
    0xe1, 0x14, 0xe0, 0xb8, 0x56, 0x9b, 0xa3, 0xa9,
    0xde, 0xfb, 0x0e, 0x13, 0xb0, 0xb4, 0xf5, 0x05,
  }};
#endif

static char j2735_v2x_msgs__msg__NodeOffsetPointXY__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeOffsetPointXY";
static char j2735_v2x_msgs__msg__NodeLLmD64b__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeLLmD64b";
static char j2735_v2x_msgs__msg__NodeXY20b__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeXY20b";
static char j2735_v2x_msgs__msg__NodeXY22b__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeXY22b";
static char j2735_v2x_msgs__msg__NodeXY24b__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeXY24b";
static char j2735_v2x_msgs__msg__NodeXY26b__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeXY26b";
static char j2735_v2x_msgs__msg__NodeXY28b__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeXY28b";
static char j2735_v2x_msgs__msg__NodeXY32b__TYPE_NAME[] = "j2735_v2x_msgs/msg/NodeXY32b";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__NodeOffsetPointXY__FIELD_NAME__choice[] = "choice";
static char j2735_v2x_msgs__msg__NodeOffsetPointXY__FIELD_NAME__node_xy1[] = "node_xy1";
static char j2735_v2x_msgs__msg__NodeOffsetPointXY__FIELD_NAME__node_xy2[] = "node_xy2";
static char j2735_v2x_msgs__msg__NodeOffsetPointXY__FIELD_NAME__node_xy3[] = "node_xy3";
static char j2735_v2x_msgs__msg__NodeOffsetPointXY__FIELD_NAME__node_xy4[] = "node_xy4";
static char j2735_v2x_msgs__msg__NodeOffsetPointXY__FIELD_NAME__node_xy5[] = "node_xy5";
static char j2735_v2x_msgs__msg__NodeOffsetPointXY__FIELD_NAME__node_xy6[] = "node_xy6";
static char j2735_v2x_msgs__msg__NodeOffsetPointXY__FIELD_NAME__node_latlon[] = "node_latlon";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__NodeOffsetPointXY__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__NodeOffsetPointXY__FIELD_NAME__choice, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeOffsetPointXY__FIELD_NAME__node_xy1, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__NodeXY20b__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeOffsetPointXY__FIELD_NAME__node_xy2, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__NodeXY22b__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeOffsetPointXY__FIELD_NAME__node_xy3, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__NodeXY24b__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeOffsetPointXY__FIELD_NAME__node_xy4, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__NodeXY26b__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeOffsetPointXY__FIELD_NAME__node_xy5, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__NodeXY28b__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeOffsetPointXY__FIELD_NAME__node_xy6, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__NodeXY32b__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeOffsetPointXY__FIELD_NAME__node_latlon, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__NodeLLmD64b__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__NodeOffsetPointXY__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__NodeLLmD64b__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeXY20b__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeXY22b__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeXY24b__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeXY26b__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeXY28b__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__NodeXY32b__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__NodeOffsetPointXY__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__NodeOffsetPointXY__TYPE_NAME, 36, 36},
      {j2735_v2x_msgs__msg__NodeOffsetPointXY__FIELDS, 8, 8},
    },
    {j2735_v2x_msgs__msg__NodeOffsetPointXY__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeLLmD64b__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeLLmD64b__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__NodeLLmD64b__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeXY20b__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeXY20b__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__NodeXY20b__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeXY22b__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeXY22b__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__NodeXY22b__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeXY24b__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeXY24b__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = j2735_v2x_msgs__msg__NodeXY24b__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeXY26b__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeXY26b__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = j2735_v2x_msgs__msg__NodeXY26b__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeXY28b__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeXY28b__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = j2735_v2x_msgs__msg__NodeXY28b__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__NodeXY32b__EXPECTED_HASH, j2735_v2x_msgs__msg__NodeXY32b__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = j2735_v2x_msgs__msg__NodeXY32b__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# NodeOffsetPointXY.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The DF_NodeOffsetPointXY data frame presents a structure to hold different sized data frames for a single node\n"
  "# point in a lane. Nodes are described in terms of X and Y offsets in units of 1 centimeter (when zoom is 1:1).\n"
  "#\n"
  "# NodeOffsetPointXY ::= CHOICE {\n"
  "# -- Nodes with X,Y content\n"
  "# node-XY1 Node-XY-20b, -- node is within 5.11m of last node\n"
  "# node-XY2 Node-XY-22b, -- node is within 10.23m of last node\n"
  "# node-XY3 Node-XY-24b, -- node is within 20.47m of last node\n"
  "# node-XY4 Node-XY-26b, -- node is within 40.96m of last node\n"
  "# node-XY5 Node-XY-28b, -- node is within 81.91m of last node\n"
  "# node-XY6 Node-XY-32b, -- node is within 327.67m of last node\n"
  "# node-LatLon Node-LLmD-64b, -- node is a full 32b Lat/Lon range\n"
  "# regional RegionalExtension {{REGION.Reg-NodeOffsetPointXY}}\n"
  "# \\t-- node which follows is of a\n"
  "# \\t-- regional definition type\n"
  "# }\n"
  "#\n"
  "\n"
  "uint8 choice\n"
  "uint8 NODE_XY1=0\n"
  "uint8 NODE_XY2=1\n"
  "uint8 NODE_XY3=2\n"
  "uint8 NODE_XY4=3\n"
  "uint8 NODE_XY5=4\n"
  "uint8 NODE_XY6=5\n"
  "uint8 NODE_LATLON=6\n"
  "\n"
  "j2735_v2x_msgs/NodeXY20b node_xy1\n"
  "j2735_v2x_msgs/NodeXY22b node_xy2\n"
  "j2735_v2x_msgs/NodeXY24b node_xy3\n"
  "j2735_v2x_msgs/NodeXY26b node_xy4\n"
  "j2735_v2x_msgs/NodeXY28b node_xy5\n"
  "j2735_v2x_msgs/NodeXY32b node_xy6\n"
  "j2735_v2x_msgs/NodeLLmD64b node_latlon\n"
  "# regional #TODO: RegionalExtensions are not yet implemented in asn1c";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__NodeOffsetPointXY__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__NodeOffsetPointXY__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1402, 1402},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__NodeOffsetPointXY__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__NodeOffsetPointXY__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__NodeLLmD64b__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__NodeXY20b__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__NodeXY22b__get_individual_type_description_source(NULL);
    sources[4] = *j2735_v2x_msgs__msg__NodeXY24b__get_individual_type_description_source(NULL);
    sources[5] = *j2735_v2x_msgs__msg__NodeXY26b__get_individual_type_description_source(NULL);
    sources[6] = *j2735_v2x_msgs__msg__NodeXY28b__get_individual_type_description_source(NULL);
    sources[7] = *j2735_v2x_msgs__msg__NodeXY32b__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
