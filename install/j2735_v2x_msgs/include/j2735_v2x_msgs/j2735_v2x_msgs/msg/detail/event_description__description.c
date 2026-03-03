// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/EventDescription.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/event_description__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__EventDescription__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x70, 0x48, 0xe4, 0xd8, 0x7c, 0x8c, 0x4d, 0x39,
      0xe0, 0x36, 0x37, 0x3a, 0xb1, 0x8e, 0x08, 0x91,
      0x24, 0x97, 0x5d, 0xe6, 0x69, 0x64, 0xbc, 0xe2,
      0x0f, 0x0d, 0xaa, 0x35, 0x23, 0xe4, 0xcd, 0x8c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/heading_slice__functions.h"
#include "j2735_v2x_msgs/msg/detail/iti_scodes__functions.h"
#include "j2735_v2x_msgs/msg/detail/priority__functions.h"
#include "j2735_v2x_msgs/msg/detail/extent__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__Extent__EXPECTED_HASH = {1, {
    0xae, 0x06, 0xa4, 0x3f, 0x89, 0x96, 0x73, 0xb7,
    0x1b, 0xaf, 0x35, 0x96, 0x25, 0xa7, 0x17, 0x3f,
    0xd9, 0x4c, 0x08, 0x35, 0x5f, 0x0f, 0x5f, 0x3e,
    0xe7, 0x36, 0x5e, 0x3f, 0x90, 0xba, 0x6a, 0xb0,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__HeadingSlice__EXPECTED_HASH = {1, {
    0x06, 0x17, 0x9d, 0x8e, 0x81, 0xc8, 0xde, 0xcf,
    0x90, 0xc7, 0x71, 0xda, 0x83, 0x88, 0x59, 0x73,
    0xbc, 0xb2, 0x69, 0x2b, 0x48, 0xa8, 0x28, 0xda,
    0x58, 0x02, 0xe2, 0x00, 0x0d, 0xb4, 0x0d, 0x3b,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__ITIScodes__EXPECTED_HASH = {1, {
    0x5c, 0xe9, 0x4e, 0x8e, 0xb9, 0x8c, 0xd8, 0x67,
    0xc6, 0x1d, 0x9c, 0xe9, 0x75, 0xc2, 0xee, 0x55,
    0x04, 0x79, 0x97, 0xb6, 0xe9, 0x2d, 0xec, 0xda,
    0xeb, 0x57, 0xd9, 0xa6, 0x2e, 0x14, 0x09, 0x5e,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__Priority__EXPECTED_HASH = {1, {
    0x0c, 0xde, 0x86, 0xd3, 0x30, 0xf3, 0xba, 0x04,
    0x40, 0xb6, 0x1c, 0xf8, 0x36, 0x18, 0x18, 0x36,
    0x2a, 0x13, 0x98, 0x6b, 0x91, 0xd1, 0x53, 0x9b,
    0x23, 0x0a, 0x25, 0xa7, 0x91, 0xda, 0x65, 0x0a,
  }};
#endif

static char j2735_v2x_msgs__msg__EventDescription__TYPE_NAME[] = "j2735_v2x_msgs/msg/EventDescription";
static char j2735_v2x_msgs__msg__Extent__TYPE_NAME[] = "j2735_v2x_msgs/msg/Extent";
static char j2735_v2x_msgs__msg__HeadingSlice__TYPE_NAME[] = "j2735_v2x_msgs/msg/HeadingSlice";
static char j2735_v2x_msgs__msg__ITIScodes__TYPE_NAME[] = "j2735_v2x_msgs/msg/ITIScodes";
static char j2735_v2x_msgs__msg__Priority__TYPE_NAME[] = "j2735_v2x_msgs/msg/Priority";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__EventDescription__FIELD_NAME__presence_vector[] = "presence_vector";
static char j2735_v2x_msgs__msg__EventDescription__FIELD_NAME__type_event[] = "type_event";
static char j2735_v2x_msgs__msg__EventDescription__FIELD_NAME__priority[] = "priority";
static char j2735_v2x_msgs__msg__EventDescription__FIELD_NAME__heading[] = "heading";
static char j2735_v2x_msgs__msg__EventDescription__FIELD_NAME__extent[] = "extent";
static char j2735_v2x_msgs__msg__EventDescription__FIELD_NAME__description[] = "description";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__EventDescription__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__EventDescription__FIELD_NAME__presence_vector, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__EventDescription__FIELD_NAME__type_event, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__ITIScodes__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__EventDescription__FIELD_NAME__priority, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__Priority__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__EventDescription__FIELD_NAME__heading, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__HeadingSlice__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__EventDescription__FIELD_NAME__extent, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__Extent__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__EventDescription__FIELD_NAME__description, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {j2735_v2x_msgs__msg__ITIScodes__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__EventDescription__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__Extent__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__HeadingSlice__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__ITIScodes__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__Priority__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__EventDescription__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__EventDescription__TYPE_NAME, 35, 35},
      {j2735_v2x_msgs__msg__EventDescription__FIELDS, 6, 6},
    },
    {j2735_v2x_msgs__msg__EventDescription__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Extent__EXPECTED_HASH, j2735_v2x_msgs__msg__Extent__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__Extent__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__HeadingSlice__EXPECTED_HASH, j2735_v2x_msgs__msg__HeadingSlice__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__HeadingSlice__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__ITIScodes__EXPECTED_HASH, j2735_v2x_msgs__msg__ITIScodes__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__ITIScodes__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__Priority__EXPECTED_HASH, j2735_v2x_msgs__msg__Priority__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = j2735_v2x_msgs__msg__Priority__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# EventDescription.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# EventDescription ::= SEQUENCE {\n"
  "#    typeEvent     ITIS.ITIScodes,\n"
  "#                  -- A category and an item from that category \n"
  "#                  -- all ITS stds use the same types here\n"
  "#                  -- to explain the type of  the \n"
  "#                  -- alert / danger / hazard involved\n"
  "#    description   SEQUENCE (SIZE(1..8)) OF ITIS.ITIScodes OPTIONAL,\n"
  "#                  -- Up to eight ITIS code set entries to further\n"
  "#                  -- describe the event, give advice, or any \n"
  "#                  -- other ITIS codes\n"
  "#    priority      Priority OPTIONAL,  \n"
  "#                  -- The urgency of this message, a relative\n"
  "#                  -- degree of merit compared with other \n"
  "#                  -- similar messages for this type (not other\n"
  "#                  -- messages being sent by the device), nor  \n"
  "#                  -- is it a priority of display urgency\n"
  "#    heading       HeadingSlice  OPTIONAL,       \n"
  "#                  -- Applicable headings/direction\n"
  "#    extent        Extent OPTIONAL,  \n"
  "#                  -- The spatial distance over which this\n"
  "#                  -- message applies and should be presented to the driver\n"
  "#    regional      SEQUENCE (SIZE(1..4)) OF \n"
  "#                  RegionalExtension {{REGION.Reg-EventDescription}} OPTIONAL,\n"
  "#    ...\n"
  "#    }\n"
  "\n"
  "# A BIT STRING defining the presence of optional fields.\n"
  "# Compare with bitwise-and\n"
  "# if (presence_vector & HAS_PRIORITY) etc.\n"
  "# Create with bitwise-or\n"
  "# presence_vector = presence_vector | HAS_PRIORITY\n"
  "uint16 presence_vector\n"
  "\n"
  "uint16 HAS_PRIORITY = 1\n"
  "uint16 HAS_HEADING = 2\n"
  "uint16 HAS_EXTENT = 4\n"
  "uint16 HAS_DESCRIPTION = 8\n"
  "\n"
  "j2735_v2x_msgs/ITIScodes type_event\n"
  "\n"
  "####\n"
  "# OPTIONAL FIELDS\n"
  "# All fields below this section are optional.\n"
  "# The presence of a given field can be idenfied by checking the presence_vector\n"
  "####\n"
  "\n"
  "j2735_v2x_msgs/Priority priority\n"
  "\n"
  "j2735_v2x_msgs/HeadingSlice heading\n"
  "\n"
  "j2735_v2x_msgs/Extent extent\n"
  "\n"
  "j2735_v2x_msgs/ITIScodes[] description\n"
  "uint8 DESCRIPTION_SIZE_MIN = 1\n"
  "uint8 DESCRIPTION_SIZE_MAX = 8\n"
  "\n"
  "# regional #TODO: RegionalExtensions are not yet supported for this message type";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__EventDescription__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__EventDescription__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2158, 2158},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__EventDescription__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__EventDescription__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__Extent__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__HeadingSlice__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__ITIScodes__get_individual_type_description_source(NULL);
    sources[4] = *j2735_v2x_msgs__msg__Priority__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
