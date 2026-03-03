// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/DDateTime.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/d_date_time__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__DDateTime__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x20, 0x7d, 0x4a, 0x5e, 0xa7, 0x89, 0xa3, 0xfc,
      0xb5, 0x0a, 0x91, 0xb1, 0xa6, 0xcf, 0x8b, 0xe4,
      0x41, 0xb6, 0xfe, 0x07, 0x1e, 0x14, 0x44, 0x33,
      0x0f, 0x1a, 0x85, 0x0a, 0xa1, 0x93, 0x30, 0xc8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/d_day__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_offset__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_minute__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_hour__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_second__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_year__functions.h"
#include "j2735_v2x_msgs/msg/detail/d_month__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__DDay__EXPECTED_HASH = {1, {
    0x07, 0xee, 0x90, 0x8c, 0xb8, 0xfa, 0x01, 0x01,
    0x65, 0x42, 0x4f, 0x94, 0x79, 0x93, 0x0c, 0x20,
    0x5f, 0x19, 0xfa, 0x7f, 0xa8, 0x3d, 0x97, 0xfd,
    0xc8, 0x38, 0xa5, 0x2f, 0x1f, 0xeb, 0xba, 0xae,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__DHour__EXPECTED_HASH = {1, {
    0x0b, 0x61, 0xb8, 0xa5, 0x7f, 0x7c, 0xd5, 0xc1,
    0xcc, 0x3f, 0xe5, 0x50, 0xa5, 0x19, 0xfd, 0xbf,
    0x42, 0xde, 0xe0, 0xe9, 0x08, 0xf0, 0xd8, 0x54,
    0x23, 0x46, 0x4d, 0x20, 0x59, 0xac, 0x75, 0x8f,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__DMinute__EXPECTED_HASH = {1, {
    0x36, 0x2f, 0x1c, 0xf0, 0xcb, 0xb9, 0xba, 0x3f,
    0xdd, 0x53, 0xf8, 0xba, 0xe8, 0x58, 0x69, 0xbb,
    0x89, 0x63, 0x98, 0xb8, 0xeb, 0xb9, 0x19, 0x8a,
    0x04, 0xa5, 0x69, 0xb9, 0xdc, 0x96, 0x3f, 0xec,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__DMonth__EXPECTED_HASH = {1, {
    0x60, 0xf7, 0xdd, 0xa8, 0x95, 0xe8, 0x06, 0xe6,
    0xb5, 0xeb, 0x4d, 0x54, 0x9d, 0xed, 0xe7, 0xdf,
    0xec, 0xdc, 0x5d, 0xa3, 0x8d, 0xa5, 0x9a, 0xa8,
    0x27, 0x40, 0xd4, 0x14, 0x65, 0xac, 0xf4, 0x10,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__DOffset__EXPECTED_HASH = {1, {
    0xa9, 0xed, 0x8e, 0x6b, 0x5e, 0x57, 0x73, 0x09,
    0x5e, 0xcb, 0x92, 0xee, 0xd7, 0xd0, 0x38, 0x73,
    0xfc, 0x10, 0xea, 0x2d, 0x26, 0x25, 0xdc, 0x0a,
    0x23, 0x91, 0xf1, 0x3d, 0x0a, 0xbf, 0x62, 0x84,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__DSecond__EXPECTED_HASH = {1, {
    0x30, 0x1d, 0x97, 0x44, 0x35, 0x12, 0xb0, 0x3b,
    0xed, 0xf4, 0xa3, 0x19, 0x4e, 0x90, 0x4a, 0xb4,
    0x9f, 0xd6, 0x29, 0x54, 0xe6, 0xc0, 0x1a, 0x55,
    0x0f, 0x55, 0xb2, 0xc3, 0xd3, 0x15, 0x12, 0xc0,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__DYear__EXPECTED_HASH = {1, {
    0xa5, 0xab, 0x56, 0x67, 0x6a, 0xc6, 0xdb, 0x81,
    0xb2, 0xa4, 0xd5, 0x66, 0x01, 0xda, 0x13, 0xaa,
    0xfd, 0xfd, 0x79, 0x33, 0x25, 0x78, 0x22, 0x91,
    0x96, 0x69, 0xe3, 0xac, 0xfe, 0x9c, 0xd4, 0x26,
  }};
#endif

static char j2735_v2x_msgs__msg__DDateTime__TYPE_NAME[] = "j2735_v2x_msgs/msg/DDateTime";
static char j2735_v2x_msgs__msg__DDay__TYPE_NAME[] = "j2735_v2x_msgs/msg/DDay";
static char j2735_v2x_msgs__msg__DHour__TYPE_NAME[] = "j2735_v2x_msgs/msg/DHour";
static char j2735_v2x_msgs__msg__DMinute__TYPE_NAME[] = "j2735_v2x_msgs/msg/DMinute";
static char j2735_v2x_msgs__msg__DMonth__TYPE_NAME[] = "j2735_v2x_msgs/msg/DMonth";
static char j2735_v2x_msgs__msg__DOffset__TYPE_NAME[] = "j2735_v2x_msgs/msg/DOffset";
static char j2735_v2x_msgs__msg__DSecond__TYPE_NAME[] = "j2735_v2x_msgs/msg/DSecond";
static char j2735_v2x_msgs__msg__DYear__TYPE_NAME[] = "j2735_v2x_msgs/msg/DYear";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__DDateTime__FIELD_NAME__presence_vector[] = "presence_vector";
static char j2735_v2x_msgs__msg__DDateTime__FIELD_NAME__year[] = "year";
static char j2735_v2x_msgs__msg__DDateTime__FIELD_NAME__month[] = "month";
static char j2735_v2x_msgs__msg__DDateTime__FIELD_NAME__day[] = "day";
static char j2735_v2x_msgs__msg__DDateTime__FIELD_NAME__hour[] = "hour";
static char j2735_v2x_msgs__msg__DDateTime__FIELD_NAME__minute[] = "minute";
static char j2735_v2x_msgs__msg__DDateTime__FIELD_NAME__second[] = "second";
static char j2735_v2x_msgs__msg__DDateTime__FIELD_NAME__offset[] = "offset";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__DDateTime__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__DDateTime__FIELD_NAME__presence_vector, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DDateTime__FIELD_NAME__year, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__DYear__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DDateTime__FIELD_NAME__month, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__DMonth__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DDateTime__FIELD_NAME__day, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__DDay__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DDateTime__FIELD_NAME__hour, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__DHour__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DDateTime__FIELD_NAME__minute, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__DMinute__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DDateTime__FIELD_NAME__second, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__DSecond__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DDateTime__FIELD_NAME__offset, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__DOffset__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__DDateTime__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__DDay__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DHour__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DMinute__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DMonth__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DOffset__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DSecond__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__DYear__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__DDateTime__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__DDateTime__TYPE_NAME, 28, 28},
      {j2735_v2x_msgs__msg__DDateTime__FIELDS, 8, 8},
    },
    {j2735_v2x_msgs__msg__DDateTime__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DDay__EXPECTED_HASH, j2735_v2x_msgs__msg__DDay__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__DDay__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DHour__EXPECTED_HASH, j2735_v2x_msgs__msg__DHour__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__DHour__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DMinute__EXPECTED_HASH, j2735_v2x_msgs__msg__DMinute__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__DMinute__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DMonth__EXPECTED_HASH, j2735_v2x_msgs__msg__DMonth__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = j2735_v2x_msgs__msg__DMonth__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DOffset__EXPECTED_HASH, j2735_v2x_msgs__msg__DOffset__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = j2735_v2x_msgs__msg__DOffset__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DSecond__EXPECTED_HASH, j2735_v2x_msgs__msg__DSecond__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = j2735_v2x_msgs__msg__DSecond__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__DYear__EXPECTED_HASH, j2735_v2x_msgs__msg__DYear__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = j2735_v2x_msgs__msg__DYear__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# DDateTime.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "# Parsed description of DDateTime from the SAE J2735 2016 specification.\n"
  "# For further usage details consult the specification.\n"
  "#\n"
  "\n"
  "# DDateTime ::= SEQUENCE {\n"
  "#    year    DYear    OPTIONAL,    \n"
  "#    month   DMonth   OPTIONAL,   \n"
  "#    day     DDay     OPTIONAL,  \n"
  "#    hour    DHour    OPTIONAL,   \n"
  "#    minute  DMinute  OPTIONAL,  \n"
  "#    second  DSecond  OPTIONAL,  \n"
  "#    offset  DOffset  OPTIONAL -- time zone\n"
  "#    }\n"
  "\n"
  "# A BIT STRING defining the presence of optional fields.\n"
  "# Compare with bitwise-and\n"
  "# if (presence_vector & YEAR) etc.\n"
  "# Create with bitwise-or\n"
  "# presence_vector = presence_vector | YEAR\n"
  "uint8 presence_vector\n"
  "\n"
  "uint8 UNSET = 0\n"
  "uint8 YEAR=1\n"
  "uint8 MONTH=2\n"
  "uint8 DAY=4\n"
  "uint8 HOUR=8\n"
  "uint8 MINUTE=16\n"
  "uint8 SECOND=32\n"
  "uint8 OFFSET=64\n"
  "\n"
  "j2735_v2x_msgs/DYear year\n"
  "\n"
  "j2735_v2x_msgs/DMonth month\n"
  "\n"
  "j2735_v2x_msgs/DDay day\n"
  "\n"
  "j2735_v2x_msgs/DHour hour\n"
  "\n"
  "j2735_v2x_msgs/DMinute minute\n"
  "\n"
  "j2735_v2x_msgs/DSecond second\n"
  "\n"
  "j2735_v2x_msgs/DOffset offset\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__DDateTime__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__DDateTime__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 997, 997},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__DDateTime__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__DDateTime__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__DDay__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__DHour__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__DMinute__get_individual_type_description_source(NULL);
    sources[4] = *j2735_v2x_msgs__msg__DMonth__get_individual_type_description_source(NULL);
    sources[5] = *j2735_v2x_msgs__msg__DOffset__get_individual_type_description_source(NULL);
    sources[6] = *j2735_v2x_msgs__msg__DSecond__get_individual_type_description_source(NULL);
    sources[7] = *j2735_v2x_msgs__msg__DYear__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
