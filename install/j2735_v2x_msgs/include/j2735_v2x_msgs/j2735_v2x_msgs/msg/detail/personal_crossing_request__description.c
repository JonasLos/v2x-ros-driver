// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/PersonalCrossingRequest.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/personal_crossing_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__PersonalCrossingRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe2, 0xe4, 0x35, 0x50, 0x58, 0x9f, 0xf5, 0xa1,
      0xbd, 0x34, 0x0f, 0x38, 0x1a, 0xec, 0x72, 0x01,
      0xa4, 0x6c, 0xa5, 0xaf, 0x6b, 0x35, 0x4d, 0x56,
      0xec, 0xd2, 0x71, 0x8b, 0xa8, 0x4b, 0x0d, 0x47,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__PersonalCrossingRequest__TYPE_NAME[] = "j2735_v2x_msgs/msg/PersonalCrossingRequest";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__PersonalCrossingRequest__FIELD_NAME__cross_request[] = "cross_request";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__PersonalCrossingRequest__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__PersonalCrossingRequest__FIELD_NAME__cross_request, 13, 13},
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
j2735_v2x_msgs__msg__PersonalCrossingRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__PersonalCrossingRequest__TYPE_NAME, 42, 42},
      {j2735_v2x_msgs__msg__PersonalCrossingRequest__FIELDS, 1, 1},
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
  "# PersonalCrossingRequest.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of PersonalCrossingRequest from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# PersonalCrossingRequest ::= BOOLEAN \n"
  "#    -- Use:\n"
  "#    -- True  = On  (request crossing)\n"
  "#    -- False = Off (no request)\n"
  "bool cross_request";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__PersonalCrossingRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__PersonalCrossingRequest__TYPE_NAME, 42, 42},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 351, 351},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__PersonalCrossingRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__PersonalCrossingRequest__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
