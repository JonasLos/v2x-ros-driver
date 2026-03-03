// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from carma_driver_msgs:msg/ByteArray.idl
// generated code does not contain a copyright notice

#include "carma_driver_msgs/msg/detail/byte_array__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_type_hash_t *
carma_driver_msgs__msg__ByteArray__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb7, 0x99, 0x00, 0xe1, 0x97, 0xc7, 0xd7, 0xc0,
      0xfc, 0x24, 0xd3, 0xdc, 0x69, 0xa3, 0x03, 0x3e,
      0x2c, 0x2c, 0xb6, 0x2a, 0xb8, 0xc4, 0x95, 0x63,
      0x42, 0x64, 0xa7, 0x96, 0x51, 0x84, 0xea, 0xfd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char carma_driver_msgs__msg__ByteArray__TYPE_NAME[] = "carma_driver_msgs/msg/ByteArray";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char carma_driver_msgs__msg__ByteArray__FIELD_NAME__header[] = "header";
static char carma_driver_msgs__msg__ByteArray__FIELD_NAME__message_type[] = "message_type";
static char carma_driver_msgs__msg__ByteArray__FIELD_NAME__content[] = "content";

static rosidl_runtime_c__type_description__Field carma_driver_msgs__msg__ByteArray__FIELDS[] = {
  {
    {carma_driver_msgs__msg__ByteArray__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__ByteArray__FIELD_NAME__message_type, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__msg__ByteArray__FIELD_NAME__content, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription carma_driver_msgs__msg__ByteArray__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
carma_driver_msgs__msg__ByteArray__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_driver_msgs__msg__ByteArray__TYPE_NAME, 31, 31},
      {carma_driver_msgs__msg__ByteArray__FIELDS, 3, 3},
    },
    {carma_driver_msgs__msg__ByteArray__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# ByteArray.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# @author Mae Fromm\n"
  "# @version 0.1\n"
  "#\n"
  "# Raw binary blobs from Drivers.Comms package and then parse the raw data according to the header. \n"
  "# Currently all messages are DSRC message. \n"
  "# \n"
  "# NOTE: Initial version only considers Part I. Part II will be defined for later use. \n"
  "\n"
  "std_msgs/Header header\n"
  "\n"
  "# Need to know the type before parsing. MessageTypes are MAP, SPAT, TIM, BSM, Mobility.\n"
  "string message_type\n"
  "\n"
  "# The DSRC message content\n"
  "uint8[] content";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
carma_driver_msgs__msg__ByteArray__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_driver_msgs__msg__ByteArray__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 499, 499},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_driver_msgs__msg__ByteArray__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_driver_msgs__msg__ByteArray__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
