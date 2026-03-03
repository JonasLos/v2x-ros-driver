// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/DataParameters.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/data_parameters__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__DataParameters__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x44, 0xef, 0xd5, 0x4e, 0xec, 0xa2, 0x86, 0x4e,
      0x19, 0xf6, 0x65, 0x81, 0x37, 0x2b, 0x64, 0x0c,
      0x2d, 0x38, 0xed, 0xc8, 0x50, 0x44, 0x4d, 0x2b,
      0x98, 0x61, 0x02, 0xf6, 0x47, 0x65, 0x02, 0xef,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__DataParameters__TYPE_NAME[] = "j2735_v2x_msgs/msg/DataParameters";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__DataParameters__FIELD_NAME__process_method[] = "process_method";
static char j2735_v2x_msgs__msg__DataParameters__FIELD_NAME__process_agency[] = "process_agency";
static char j2735_v2x_msgs__msg__DataParameters__FIELD_NAME__last_checked_date[] = "last_checked_date";
static char j2735_v2x_msgs__msg__DataParameters__FIELD_NAME__geoid_used[] = "geoid_used";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__DataParameters__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__DataParameters__FIELD_NAME__process_method, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DataParameters__FIELD_NAME__process_agency, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DataParameters__FIELD_NAME__last_checked_date, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DataParameters__FIELD_NAME__geoid_used, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__DataParameters__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__DataParameters__TYPE_NAME, 33, 33},
      {j2735_v2x_msgs__msg__DataParameters__FIELDS, 4, 4},
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
  "# MapData.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# The DataParameters data frame is used to provide basic (static) information\n"
  "# on how a map fragment was processed or determined.\n"
  "#\n"
  "# DataParameters ::= SEQUENCE {\n"
  "# processMethod IA5String(SIZE(1..255))\n"
  "# processAgency IA5String(SIZE(1..255))\n"
  "# lastCheckedDate IA5String(SIZE(1..255))\n"
  "# geoidUsed IA5String(SIZE(1..255))\n"
  "# ...\n"
  "# }\n"
  "#\n"
  "\n"
  "string process_method\n"
  "string process_agency\n"
  "string last_checked_date\n"
  "string geoid_used";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__DataParameters__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__DataParameters__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 508, 508},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__DataParameters__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__DataParameters__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
