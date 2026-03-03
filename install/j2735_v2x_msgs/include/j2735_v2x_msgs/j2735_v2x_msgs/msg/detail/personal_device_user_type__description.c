// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/PersonalDeviceUserType.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/personal_device_user_type__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__PersonalDeviceUserType__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8f, 0x72, 0x39, 0x40, 0xae, 0x33, 0xd1, 0xb9,
      0xa2, 0x76, 0xfd, 0x06, 0x70, 0x68, 0x07, 0xea,
      0xeb, 0x27, 0xcf, 0xdb, 0xa8, 0x8b, 0x16, 0xe2,
      0x49, 0x4e, 0xcb, 0x6d, 0x2c, 0x43, 0xd0, 0x0e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__PersonalDeviceUserType__TYPE_NAME[] = "j2735_v2x_msgs/msg/PersonalDeviceUserType";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__PersonalDeviceUserType__FIELD_NAME__type[] = "type";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__PersonalDeviceUserType__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__PersonalDeviceUserType__FIELD_NAME__type, 4, 4},
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
j2735_v2x_msgs__msg__PersonalDeviceUserType__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__PersonalDeviceUserType__TYPE_NAME, 41, 41},
      {j2735_v2x_msgs__msg__PersonalDeviceUserType__FIELDS, 1, 1},
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
  "# PersonalDeviceUserType.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of PersonalDeviceUserType from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "\n"
  "# PersonalDeviceUserType ::= ENUMERATED { \n"
  "#    unavailable           (0),\n"
  "#    aPEDESTRIAN           (1), -- Further details may be provided elsewhere\n"
  "#    aPEDALCYCLIST         (2), -- Presumed to be human propelled, \n"
  "#                               -- unless PropelledInformation indicates motorized\n"
  "#    aPUBLICSAFETYWORKER   (3),\n"
  "#    anANIMAL              (4),\n"
  "#    ...\n"
  "#    }\n"
  "\n"
  "uint8 type\n"
  "\n"
  "uint8 UNAVAILABLE=0\n"
  "uint8 A_PEDESTRIAN=1\n"
  "uint8 A_PEDALCYCLIST=2\n"
  "uint8 A_PUBLIC_SAFETY_WORKER=3\n"
  "uint8 AN_ANIMAL=4";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__PersonalDeviceUserType__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__PersonalDeviceUserType__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 716, 716},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__PersonalDeviceUserType__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__PersonalDeviceUserType__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
