// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from carma_msgs:msg/UIInstructions.idl
// generated code does not contain a copyright notice

#include "carma_msgs/msg/detail/ui_instructions__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
const rosidl_type_hash_t *
carma_msgs__msg__UIInstructions__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe3, 0x51, 0xdb, 0x35, 0xf4, 0x8d, 0x3a, 0x20,
      0x96, 0xb4, 0xab, 0xbf, 0x97, 0x72, 0x0c, 0xea,
      0xa2, 0xfd, 0x6a, 0xa8, 0xfc, 0x48, 0xd2, 0xfb,
      0xbd, 0x6f, 0xae, 0x51, 0xa1, 0xad, 0x63, 0xce,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char carma_msgs__msg__UIInstructions__TYPE_NAME[] = "carma_msgs/msg/UIInstructions";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char carma_msgs__msg__UIInstructions__FIELD_NAME__stamp[] = "stamp";
static char carma_msgs__msg__UIInstructions__FIELD_NAME__msg[] = "msg";
static char carma_msgs__msg__UIInstructions__FIELD_NAME__type[] = "type";
static char carma_msgs__msg__UIInstructions__FIELD_NAME__response_service[] = "response_service";

static rosidl_runtime_c__type_description__Field carma_msgs__msg__UIInstructions__FIELDS[] = {
  {
    {carma_msgs__msg__UIInstructions__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {carma_msgs__msg__UIInstructions__FIELD_NAME__msg, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_msgs__msg__UIInstructions__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_msgs__msg__UIInstructions__FIELD_NAME__response_service, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription carma_msgs__msg__UIInstructions__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
carma_msgs__msg__UIInstructions__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_msgs__msg__UIInstructions__TYPE_NAME, 29, 29},
      {carma_msgs__msg__UIInstructions__FIELDS, 4, 4},
    },
    {carma_msgs__msg__UIInstructions__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# UIInstructions.msg\n"
  "# \n"
  "# Describes simple instructions for the CARMA UI to preform\n"
  "#\n"
  "# @version 0.1\n"
  "#\n"
  "\n"
  "# Time stamp\n"
  "builtin_interfaces/Time stamp\n"
  "\n"
  "# The message to send\n"
  "string msg\n"
  "\n"
  "# Enum identifying the contents of this message as informational or requireing acknowledgement\n"
  "uint8 type\n"
  "\n"
  "uint8 INFO=0 # Notification of status or state change\n"
  "uint8 ACK_REQUIRED=1 # A command requiring driver acknowledgement\n"
  "uint8 NO_ACK_REQUIRED=2 # A command that does not require driver acknowledgement\n"
  "\n"
  "# Name of a simple service to be called when a acknowledgement is required (service must be std_msgs/Bool)\n"
  "string response_service";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
carma_msgs__msg__UIInstructions__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_msgs__msg__UIInstructions__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 624, 624},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_msgs__msg__UIInstructions__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_msgs__msg__UIInstructions__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
