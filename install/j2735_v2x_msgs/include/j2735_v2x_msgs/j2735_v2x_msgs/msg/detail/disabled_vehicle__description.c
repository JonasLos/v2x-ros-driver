// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/DisabledVehicle.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/disabled_vehicle__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__DisabledVehicle__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x54, 0x97, 0x98, 0x1d, 0x93, 0x51, 0x92, 0x37,
      0x69, 0x58, 0x98, 0x39, 0xd7, 0xe8, 0x2d, 0x20,
      0xe3, 0x4f, 0x05, 0x29, 0x31, 0x29, 0x78, 0x70,
      0x53, 0x4c, 0x4c, 0x8e, 0x52, 0xaf, 0x50, 0xab,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/itis_generic_locations__functions.h"
#include "j2735_v2x_msgs/msg/detail/iti_scodes__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ITISGenericLocations__EXPECTED_HASH = {1, {
    0x10, 0x13, 0x26, 0xf3, 0x6d, 0x6b, 0x8c, 0x2f,
    0xef, 0x25, 0xcd, 0x5b, 0x67, 0x9e, 0x05, 0xf9,
    0xc4, 0x32, 0xdf, 0x5f, 0xf1, 0xfd, 0xf3, 0xa4,
    0xe3, 0xf3, 0x47, 0xc2, 0xb2, 0x7b, 0x09, 0x9e,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ITIScodes__EXPECTED_HASH = {1, {
    0x5c, 0xe9, 0x4e, 0x8e, 0xb9, 0x8c, 0xd8, 0x67,
    0xc6, 0x1d, 0x9c, 0xe9, 0x75, 0xc2, 0xee, 0x55,
    0x04, 0x79, 0x97, 0xb6, 0xe9, 0x2d, 0xec, 0xda,
    0xeb, 0x57, 0xd9, 0xa6, 0x2e, 0x14, 0x09, 0x5e,
  }};
#endif

static char j2735_v2x_msgs__msg__DisabledVehicle__TYPE_NAME[] = "j2735_v2x_msgs/msg/DisabledVehicle";
static char j2735_v2x_msgs__msg__ITISGenericLocations__TYPE_NAME[] = "j2735_v2x_msgs/msg/ITISGenericLocations";
static char j2735_v2x_msgs__msg__ITIScodes__TYPE_NAME[] = "j2735_v2x_msgs/msg/ITIScodes";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__DisabledVehicle__FIELD_NAME__presence_vector[] = "presence_vector";
static char j2735_v2x_msgs__msg__DisabledVehicle__FIELD_NAME__status_details[] = "status_details";
static char j2735_v2x_msgs__msg__DisabledVehicle__FIELD_NAME__location_details[] = "location_details";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__DisabledVehicle__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__DisabledVehicle__FIELD_NAME__presence_vector, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DisabledVehicle__FIELD_NAME__status_details, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__ITIScodes__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DisabledVehicle__FIELD_NAME__location_details, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__ITISGenericLocations__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__DisabledVehicle__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__ITISGenericLocations__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ITIScodes__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__DisabledVehicle__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__DisabledVehicle__TYPE_NAME, 34, 34},
      {j2735_v2x_msgs__msg__DisabledVehicle__FIELDS, 3, 3},
    },
    {j2735_v2x_msgs__msg__DisabledVehicle__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ITISGenericLocations__EXPECTED_HASH, j2735_v2x_msgs__msg__ITISGenericLocations__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__ITISGenericLocations__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ITIScodes__EXPECTED_HASH, j2735_v2x_msgs__msg__ITIScodes__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__ITIScodes__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# DisabledVehicle.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# DisabledVehicle ::= SEQUENCE {\n"
  "#    statusDetails     ITIS.ITIScodes(523..541),   \n"
  "#                      -- Codes 532 to 541, as taken from J2540:\n"
  "#                      -- Disabled, etc.\n"
  "#                        -- stalled-vehicle (532),\n"
  "#                        -- abandoned-vehicle (533),\n"
  "#                        -- disabled-vehicle (534),\n"
  "#                        -- disabled-truck (535),\n"
  "#                        -- disabled-semi-trailer (536), -^- Alt: disabled\n"
  "#                      -- tractor-trailer\n"
  "#                        -- disabled-bus (537),\n"
  "#                        -- disabled-train (538),\n"
  "#                        -- vehicle-spun-out (539),\n"
  "#                        -- vehicle-on-fire (540),\n"
  "#                        -- vehicle-in-water (541),\n"
  "#    locationDetails   ITIS.GenericLocations   OPTIONAL, \n"
  "#    ...       \n"
  "#    }\n"
  "\n"
  "# A BIT STRING defining the presence of optional fields.\n"
  "# Compare with bitwise-and\n"
  "# if (presence_vector & HAS_LOCATION_DETAILS) etc.\n"
  "# Create with bitwise-or\n"
  "# presence_vector = presence_vector | HAS_LOCATION_DETAILS\n"
  "uint16 presence_vector\n"
  "\n"
  "uint16 HAS_LOCATION_DETAILS = 1\n"
  "\n"
  "j2735_v2x_msgs/ITIScodes status_details\n"
  "uint16 STATUS_DETAILS_MIN = 532\n"
  "uint16 STATUS_DETAILS_MAX = 541\n"
  "\n"
  "j2735_v2x_msgs/ITISGenericLocations location_details";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__DisabledVehicle__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__DisabledVehicle__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1341, 1341},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__DisabledVehicle__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__DisabledVehicle__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__ITISGenericLocations__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__ITIScodes__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
