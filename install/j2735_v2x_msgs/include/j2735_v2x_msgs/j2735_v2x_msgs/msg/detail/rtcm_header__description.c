// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/RTCMHeader.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/rtcm_header__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__RTCMHeader__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x85, 0xeb, 0xbb, 0x0f, 0x15, 0x43, 0xb6, 0xc1,
      0xdf, 0xa6, 0xc0, 0x75, 0x39, 0x4b, 0x22, 0xf4,
      0x5a, 0xe5, 0x3c, 0x23, 0x06, 0xef, 0xc6, 0x02,
      0x5e, 0x3a, 0x93, 0x4e, 0xe0, 0x34, 0xe5, 0x5b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/offset_b10__functions.h"
#include "j2735_v2x_msgs/msg/detail/offset_b12__functions.h"
#include "j2735_v2x_msgs/msg/detail/offset_b09__functions.h"
#include "j2735_v2x_msgs/msg/detail/gnss_status__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__GNSSStatus__EXPECTED_HASH = {1, {
    0x4d, 0xa6, 0x63, 0xdd, 0x67, 0x4c, 0x15, 0x9d,
    0xb1, 0x67, 0xf4, 0xdd, 0xf6, 0x36, 0xb8, 0x24,
    0x6a, 0xde, 0x50, 0xe9, 0xd3, 0x2f, 0x9c, 0x55,
    0xe8, 0x2a, 0x13, 0xf3, 0x8d, 0xd9, 0xf1, 0x99,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__OffsetB09__EXPECTED_HASH = {1, {
    0x6c, 0x43, 0x98, 0x38, 0xcc, 0xb3, 0xb4, 0xb5,
    0xe0, 0x8d, 0x1c, 0xd3, 0x87, 0x9b, 0x90, 0xdc,
    0x6a, 0xbc, 0x11, 0x2e, 0xfc, 0xdd, 0x17, 0xda,
    0xcf, 0x3a, 0x92, 0x43, 0x78, 0x75, 0x27, 0x23,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__OffsetB10__EXPECTED_HASH = {1, {
    0xf1, 0x54, 0x5e, 0x45, 0x22, 0x1b, 0xbb, 0xd6,
    0x68, 0xd6, 0x4b, 0x1a, 0x04, 0xb5, 0x5a, 0x7f,
    0x75, 0x0c, 0x80, 0x3b, 0x46, 0xc3, 0x5f, 0x0c,
    0x4a, 0x71, 0xb2, 0xa5, 0xad, 0x88, 0x12, 0xc2,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__OffsetB12__EXPECTED_HASH = {1, {
    0x68, 0x42, 0xcd, 0x20, 0xa9, 0x18, 0x46, 0xec,
    0xb7, 0x01, 0xbc, 0x09, 0x3a, 0xdc, 0x8f, 0xfa,
    0xb9, 0x2b, 0x58, 0x72, 0xb9, 0x8e, 0x37, 0x38,
    0xd8, 0x41, 0x06, 0xc4, 0x85, 0x17, 0x1d, 0x76,
  }};
#endif

static char j2735_v2x_msgs__msg__RTCMHeader__TYPE_NAME[] = "j2735_v2x_msgs/msg/RTCMHeader";
static char j2735_v2x_msgs__msg__GNSSStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/GNSSStatus";
static char j2735_v2x_msgs__msg__OffsetB09__TYPE_NAME[] = "j2735_v2x_msgs/msg/OffsetB09";
static char j2735_v2x_msgs__msg__OffsetB10__TYPE_NAME[] = "j2735_v2x_msgs/msg/OffsetB10";
static char j2735_v2x_msgs__msg__OffsetB12__TYPE_NAME[] = "j2735_v2x_msgs/msg/OffsetB12";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__RTCMHeader__FIELD_NAME__status[] = "status";
static char j2735_v2x_msgs__msg__RTCMHeader__FIELD_NAME__ant_offset_x[] = "ant_offset_x";
static char j2735_v2x_msgs__msg__RTCMHeader__FIELD_NAME__ant_offset_y[] = "ant_offset_y";
static char j2735_v2x_msgs__msg__RTCMHeader__FIELD_NAME__ant_offset_z[] = "ant_offset_z";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__RTCMHeader__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__RTCMHeader__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__GNSSStatus__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__RTCMHeader__FIELD_NAME__ant_offset_x, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__OffsetB12__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__RTCMHeader__FIELD_NAME__ant_offset_y, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__OffsetB09__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__RTCMHeader__FIELD_NAME__ant_offset_z, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__OffsetB10__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__RTCMHeader__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__GNSSStatus__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__OffsetB09__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__OffsetB10__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__OffsetB12__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__RTCMHeader__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__RTCMHeader__TYPE_NAME, 29, 29},
      {j2735_v2x_msgs__msg__RTCMHeader__FIELDS, 4, 4},
    },
    {j2735_v2x_msgs__msg__RTCMHeader__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__GNSSStatus__EXPECTED_HASH, j2735_v2x_msgs__msg__GNSSStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__GNSSStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__OffsetB09__EXPECTED_HASH, j2735_v2x_msgs__msg__OffsetB09__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__OffsetB09__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__OffsetB10__EXPECTED_HASH, j2735_v2x_msgs__msg__OffsetB10__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__OffsetB10__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__OffsetB12__EXPECTED_HASH, j2735_v2x_msgs__msg__OffsetB12__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = j2735_v2x_msgs__msg__OffsetB12__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# RTCMHeader.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# RTCMheader ::= SEQUENCE {\n"
  "#    status     GNSSstatus,\n"
  "#    offsetSet  AntennaOffsetSet\n"
  "#    }\n"
  "j2735_v2x_msgs/GNSSStatus status\n"
  "\n"
  "# AntennaOffsetSet ::= SEQUENCE { \n"
  "#    antOffsetX  Offset-B12, -- a range of +- 20.47 meters\n"
  "#    antOffsetY  Offset-B09, -- a range of +- 2.55 meters\n"
  "#    antOffsetZ  Offset-B10  -- a range of +- 5.11 meters\n"
  "#   }\n"
  "j2735_v2x_msgs/OffsetB12 ant_offset_x\n"
  "j2735_v2x_msgs/OffsetB09 ant_offset_y\n"
  "j2735_v2x_msgs/OffsetB10 ant_offset_z";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__RTCMHeader__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__RTCMHeader__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 512, 512},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__RTCMHeader__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__RTCMHeader__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__GNSSStatus__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__OffsetB09__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__OffsetB10__get_individual_type_description_source(NULL);
    sources[4] = *j2735_v2x_msgs__msg__OffsetB12__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
