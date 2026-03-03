// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/Attachment.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/attachment__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__Attachment__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc7, 0xe1, 0x20, 0x74, 0xef, 0x58, 0xc9, 0xbc,
      0x99, 0xb0, 0xcf, 0x73, 0xf1, 0x7b, 0x4f, 0x8b,
      0x08, 0xbe, 0x12, 0x1f, 0x11, 0x48, 0x14, 0x3e,
      0x65, 0x1a, 0x6a, 0x40, 0x4b, 0xf2, 0x9c, 0x54,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__Attachment__TYPE_NAME[] = "j2735_v2x_msgs/msg/Attachment";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__Attachment__FIELD_NAME__type[] = "type";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__Attachment__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__Attachment__FIELD_NAME__type, 4, 4},
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
j2735_v2x_msgs__msg__Attachment__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__Attachment__TYPE_NAME, 29, 29},
      {j2735_v2x_msgs__msg__Attachment__FIELDS, 1, 1},
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
  "# Attachment.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of Attachment from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "# Attachment ::= ENUMERATED { \n"
  "#    unavailable                  (0), -- has some unknown attachment type\n"
  "#    stroller                     (1),\n"
  "#    bicycleTrailer               (2),\n"
  "#    cart                         (3),\n"
  "#    wheelchair                   (4), \n"
  "#    otherWalkAssistAttachments   (5),\n"
  "#    pet                          (6),\n"
  "#    ...\n"
  "#    }\n"
  "\n"
  "uint8 type\n"
  "\n"
  "uint8 UNAVAILABLE = 0\n"
  "uint8 STROLLER = 1\n"
  "uint8 BICYCLE_TRAILER = 2\n"
  "uint8 CART = 3\n"
  "uint8 WHEELCHAIR = 4\n"
  "uint8 OTHER_WALK_ASSIST_ATTACHMENTS = 5\n"
  "uint8 PET = 6";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__Attachment__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__Attachment__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 709, 709},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__Attachment__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__Attachment__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
