// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/AttachmentRadius.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/attachment_radius__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__AttachmentRadius__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5c, 0xaa, 0x1e, 0x8c, 0xd3, 0x87, 0xa0, 0x66,
      0x34, 0x43, 0x38, 0x4d, 0x7c, 0xbc, 0x9b, 0x8c,
      0xbc, 0x4b, 0xf2, 0xf2, 0xa9, 0x29, 0x7d, 0x9c,
      0x1b, 0x1f, 0x86, 0x79, 0xa4, 0xe0, 0xfe, 0x55,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__AttachmentRadius__TYPE_NAME[] = "j2735_v2x_msgs/msg/AttachmentRadius";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__AttachmentRadius__FIELD_NAME__attachment_radius[] = "attachment_radius";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__AttachmentRadius__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__AttachmentRadius__FIELD_NAME__attachment_radius, 17, 17},
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
j2735_v2x_msgs__msg__AttachmentRadius__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__AttachmentRadius__TYPE_NAME, 35, 35},
      {j2735_v2x_msgs__msg__AttachmentRadius__FIELDS, 1, 1},
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
  "# AttachmentRadius.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of AttachmentRadius from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# AttachmentRadius ::= INTEGER (0..200) -- In LSB units of one decimeter\n"
  "uint8 attachment_radius\n"
  "\n"
  "uint8 ATTACHMENT_RADIUS_MAX = 200";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__AttachmentRadius__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__AttachmentRadius__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 326, 326},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__AttachmentRadius__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__AttachmentRadius__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
