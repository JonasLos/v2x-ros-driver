// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/EmergencyDetails.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/emergency_details__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__EmergencyDetails__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3b, 0xff, 0xfd, 0x58, 0x25, 0x1b, 0xbe, 0xe1,
      0xa9, 0x2a, 0x5c, 0xbb, 0x80, 0xb3, 0x2f, 0x51,
      0xc7, 0xb5, 0xa8, 0x0f, 0xb8, 0xa8, 0x13, 0x69,
      0x15, 0x49, 0xfb, 0xce, 0xb2, 0xed, 0x5e, 0x5b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/privileged_event_flags__functions.h"
#include "j2735_v2x_msgs/msg/detail/multi_vehicle_response__functions.h"
#include "j2735_v2x_msgs/msg/detail/lightbar_in_use__functions.h"
#include "j2735_v2x_msgs/msg/detail/response_type__functions.h"
#include "j2735_v2x_msgs/msg/detail/privileged_events__functions.h"
#include "j2735_v2x_msgs/msg/detail/siren_in_use__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__LightbarInUse__EXPECTED_HASH = {1, {
    0xfb, 0xc6, 0x92, 0x45, 0x64, 0xe1, 0xde, 0xe8,
    0x8d, 0xd9, 0xc5, 0xe3, 0x87, 0x69, 0x4c, 0x2e,
    0x1b, 0xe2, 0x07, 0x75, 0x2e, 0xb5, 0x2c, 0xe4,
    0x95, 0xa2, 0xb1, 0x39, 0x0b, 0x7f, 0x14, 0x06,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__MultiVehicleResponse__EXPECTED_HASH = {1, {
    0xdd, 0x21, 0xa6, 0x6d, 0x3d, 0x15, 0xec, 0xb6,
    0xe1, 0xc4, 0xa7, 0xa3, 0x25, 0xcc, 0xfa, 0xeb,
    0x32, 0xf2, 0xfe, 0xa4, 0x0a, 0x32, 0xb0, 0x54,
    0x1c, 0xa2, 0xd1, 0x7d, 0x44, 0xb5, 0xd4, 0xe8,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PrivilegedEventFlags__EXPECTED_HASH = {1, {
    0x92, 0xcb, 0x49, 0x88, 0x6a, 0xef, 0x29, 0xc6,
    0xf1, 0x82, 0xe9, 0x09, 0xac, 0xb9, 0xe0, 0x13,
    0xa7, 0xa3, 0xea, 0x4a, 0xd7, 0x9e, 0xed, 0xb9,
    0xc5, 0xeb, 0x8d, 0x8f, 0x6e, 0x1b, 0x34, 0x60,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__PrivilegedEvents__EXPECTED_HASH = {1, {
    0x58, 0xc1, 0xab, 0x8a, 0xf1, 0x89, 0xc7, 0xda,
    0xcb, 0x70, 0x20, 0x71, 0xa3, 0xf5, 0x32, 0x2a,
    0x1f, 0x7d, 0x25, 0xbd, 0xe0, 0xa9, 0x87, 0x39,
    0xab, 0xce, 0x70, 0xad, 0x87, 0xe0, 0xdd, 0x27,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ResponseType__EXPECTED_HASH = {1, {
    0x2e, 0x51, 0xdb, 0xc0, 0x9d, 0x1f, 0xb6, 0x69,
    0xf4, 0xc2, 0x64, 0xe2, 0x51, 0x7e, 0xb3, 0x66,
    0xe4, 0x5e, 0x34, 0x5b, 0xcf, 0x12, 0x8d, 0x86,
    0x19, 0xa7, 0xd4, 0xff, 0xee, 0xc1, 0x78, 0x68,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__SirenInUse__EXPECTED_HASH = {1, {
    0x3a, 0xb5, 0x9e, 0x83, 0xc2, 0x25, 0x88, 0xc6,
    0x36, 0xa2, 0x41, 0x5e, 0xf4, 0xca, 0x22, 0x09,
    0x15, 0x1a, 0x67, 0x3c, 0xe1, 0x8e, 0xcc, 0xe4,
    0xe3, 0xd2, 0x3c, 0x61, 0xcc, 0x0b, 0x57, 0xd8,
  }};
#endif

static char j2735_v2x_msgs__msg__EmergencyDetails__TYPE_NAME[] = "j2735_v2x_msgs/msg/EmergencyDetails";
static char j2735_v2x_msgs__msg__LightbarInUse__TYPE_NAME[] = "j2735_v2x_msgs/msg/LightbarInUse";
static char j2735_v2x_msgs__msg__MultiVehicleResponse__TYPE_NAME[] = "j2735_v2x_msgs/msg/MultiVehicleResponse";
static char j2735_v2x_msgs__msg__PrivilegedEventFlags__TYPE_NAME[] = "j2735_v2x_msgs/msg/PrivilegedEventFlags";
static char j2735_v2x_msgs__msg__PrivilegedEvents__TYPE_NAME[] = "j2735_v2x_msgs/msg/PrivilegedEvents";
static char j2735_v2x_msgs__msg__ResponseType__TYPE_NAME[] = "j2735_v2x_msgs/msg/ResponseType";
static char j2735_v2x_msgs__msg__SirenInUse__TYPE_NAME[] = "j2735_v2x_msgs/msg/SirenInUse";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__EmergencyDetails__FIELD_NAME__presence_vector[] = "presence_vector";
static char j2735_v2x_msgs__msg__EmergencyDetails__FIELD_NAME__ssp_index[] = "ssp_index";
static char j2735_v2x_msgs__msg__EmergencyDetails__FIELD_NAME__siren_use[] = "siren_use";
static char j2735_v2x_msgs__msg__EmergencyDetails__FIELD_NAME__lights_use[] = "lights_use";
static char j2735_v2x_msgs__msg__EmergencyDetails__FIELD_NAME__multi[] = "multi";
static char j2735_v2x_msgs__msg__EmergencyDetails__FIELD_NAME__events[] = "events";
static char j2735_v2x_msgs__msg__EmergencyDetails__FIELD_NAME__response_type[] = "response_type";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__EmergencyDetails__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__EmergencyDetails__FIELD_NAME__presence_vector, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__EmergencyDetails__FIELD_NAME__ssp_index, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__EmergencyDetails__FIELD_NAME__siren_use, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__SirenInUse__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__EmergencyDetails__FIELD_NAME__lights_use, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__LightbarInUse__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__EmergencyDetails__FIELD_NAME__multi, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__MultiVehicleResponse__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__EmergencyDetails__FIELD_NAME__events, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__PrivilegedEvents__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__EmergencyDetails__FIELD_NAME__response_type, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__ResponseType__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__EmergencyDetails__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__LightbarInUse__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__MultiVehicleResponse__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PrivilegedEventFlags__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__PrivilegedEvents__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ResponseType__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__SirenInUse__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__EmergencyDetails__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__EmergencyDetails__TYPE_NAME, 35, 35},
      {j2735_v2x_msgs__msg__EmergencyDetails__FIELDS, 7, 7},
    },
    {j2735_v2x_msgs__msg__EmergencyDetails__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__LightbarInUse__EXPECTED_HASH, j2735_v2x_msgs__msg__LightbarInUse__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__LightbarInUse__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__MultiVehicleResponse__EXPECTED_HASH, j2735_v2x_msgs__msg__MultiVehicleResponse__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__MultiVehicleResponse__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PrivilegedEventFlags__EXPECTED_HASH, j2735_v2x_msgs__msg__PrivilegedEventFlags__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__PrivilegedEventFlags__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__PrivilegedEvents__EXPECTED_HASH, j2735_v2x_msgs__msg__PrivilegedEvents__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = j2735_v2x_msgs__msg__PrivilegedEvents__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ResponseType__EXPECTED_HASH, j2735_v2x_msgs__msg__ResponseType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = j2735_v2x_msgs__msg__ResponseType__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__SirenInUse__EXPECTED_HASH, j2735_v2x_msgs__msg__SirenInUse__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = j2735_v2x_msgs__msg__SirenInUse__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# EmergencyDetails.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# EmergencyDetails ::= SEQUENCE {\n"
  "#  notUsed SSPindex,\n"
  "# -- always set to 0 and carries no meaning;\n"
  "# -- legacy field maintained for backward compatibility\n"
  "#  sirenUse SirenInUse,\n"
  "#  lightsUse LightbarInUse,\n"
  "#  multi MultiVehicleResponse,\n"
  "#  events PrivilegedEvents OPTIONAL,\n"
  "#  responseType ResponseType OPTIONAL,\n"
  "#  ...\n"
  "# }\n"
  "\n"
  "# A BIT STRING defining the presence of optional fields.\n"
  "# Compare with bitwise-and\n"
  "# if (presence_vector & HAS_EVENTS) etc.\n"
  "# Create with bitwise-or\n"
  "# presence_vector = presence_vector | HAS_EVENTS\n"
  "uint16 presence_vector\n"
  "\n"
  "uint16 HAS_EVENTS = 1\n"
  "uint16 HAS_RESPONSE_TYPE = 2\n"
  "\n"
  "uint8 ssp_index\n"
  "\n"
  "# SirenInUse ::= ENUMERATED {\n"
  "#   unavailable (0), -- Not Equipped or unavailable\n"
  "#   notInUse (1),\n"
  "#   inUse (2),\n"
  "#   reserved (3) -- for future use\n"
  "# }\n"
  "\n"
  "j2735_v2x_msgs/SirenInUse siren_use\n"
  "\n"
  "j2735_v2x_msgs/LightbarInUse lights_use\n"
  "\n"
  "j2735_v2x_msgs/MultiVehicleResponse multi\n"
  "\n"
  "####\n"
  "# OPTIONAL FIELDS\n"
  "# All fields below this section are optional.\n"
  "# The presence of a given field can be idenfied by checking the presence_vector\n"
  "####\n"
  "\n"
  "j2735_v2x_msgs/PrivilegedEvents events\n"
  "\n"
  "j2735_v2x_msgs/ResponseType response_type";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__EmergencyDetails__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__EmergencyDetails__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1190, 1190},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__EmergencyDetails__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__EmergencyDetails__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__LightbarInUse__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__MultiVehicleResponse__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__PrivilegedEventFlags__get_individual_type_description_source(NULL);
    sources[4] = *j2735_v2x_msgs__msg__PrivilegedEvents__get_individual_type_description_source(NULL);
    sources[5] = *j2735_v2x_msgs__msg__ResponseType__get_individual_type_description_source(NULL);
    sources[6] = *j2735_v2x_msgs__msg__SirenInUse__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
