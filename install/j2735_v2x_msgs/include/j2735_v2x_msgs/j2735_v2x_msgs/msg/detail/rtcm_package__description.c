// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/RTCMPackage.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/rtcm_package__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__RTCMPackage__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x43, 0x05, 0xd7, 0xe7, 0x1a, 0x8b, 0xea, 0x42,
      0x8a, 0xea, 0xc7, 0x45, 0xf8, 0xd3, 0xfa, 0x77,
      0x1a, 0xe0, 0xbb, 0x23, 0xaf, 0xa1, 0x10, 0x98,
      0x07, 0xe8, 0x8f, 0xc6, 0xea, 0x3b, 0xbb, 0x63,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "j2735_v2x_msgs/msg/detail/offset_b09__functions.h"
#include "j2735_v2x_msgs/msg/detail/gnss_status__functions.h"
#include "j2735_v2x_msgs/msg/detail/rtcm_header__functions.h"
#include "j2735_v2x_msgs/msg/detail/offset_b10__functions.h"
#include "j2735_v2x_msgs/msg/detail/offset_b12__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t j2735_v2x_msgs__msg__GNSSStatus__EXPECTED_HASH = {1, {
    0x4d, 0xa6, 0x63, 0xdd, 0x67, 0x4c, 0x15, 0x9d,
    0xb1, 0x67, 0xf4, 0xdd, 0xf6, 0x36, 0xb8, 0x24,
    0x6a, 0xde, 0x50, 0xe9, 0xd3, 0x2f, 0x9c, 0x55,
    0xe8, 0x2a, 0x13, 0xf3, 0x8d, 0xd9, 0xf1, 0x99,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__OffsetB09__EXPECTED_HASH = {1, {
    0x6c, 0x43, 0x98, 0x38, 0xcc, 0xb3, 0xb4, 0xb5,
    0xe0, 0x8d, 0x1c, 0xd3, 0x87, 0x9b, 0x90, 0xdc,
    0x6a, 0xbc, 0x11, 0x2e, 0xfc, 0xdd, 0x17, 0xda,
    0xcf, 0x3a, 0x92, 0x43, 0x78, 0x75, 0x27, 0x23,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__OffsetB10__EXPECTED_HASH = {1, {
    0xf1, 0x54, 0x5e, 0x45, 0x22, 0x1b, 0xbb, 0xd6,
    0x68, 0xd6, 0x4b, 0x1a, 0x04, 0xb5, 0x5a, 0x7f,
    0x75, 0x0c, 0x80, 0x3b, 0x46, 0xc3, 0x5f, 0x0c,
    0x4a, 0x71, 0xb2, 0xa5, 0xad, 0x88, 0x12, 0xc2,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__OffsetB12__EXPECTED_HASH = {1, {
    0x68, 0x42, 0xcd, 0x20, 0xa9, 0x18, 0x46, 0xec,
    0xb7, 0x01, 0xbc, 0x09, 0x3a, 0xdc, 0x8f, 0xfa,
    0xb9, 0x2b, 0x58, 0x72, 0xb9, 0x8e, 0x37, 0x38,
    0xd8, 0x41, 0x06, 0xc4, 0x85, 0x17, 0x1d, 0x76,
  }};
static const rosidl_type_hash_t j2735_v2x_msgs__msg__RTCMHeader__EXPECTED_HASH = {1, {
    0x85, 0xeb, 0xbb, 0x0f, 0x15, 0x43, 0xb6, 0xc1,
    0xdf, 0xa6, 0xc0, 0x75, 0x39, 0x4b, 0x22, 0xf4,
    0x5a, 0xe5, 0x3c, 0x23, 0x06, 0xef, 0xc6, 0x02,
    0x5e, 0x3a, 0x93, 0x4e, 0xe0, 0x34, 0xe5, 0x5b,
  }};
#endif

static char j2735_v2x_msgs__msg__RTCMPackage__TYPE_NAME[] = "j2735_v2x_msgs/msg/RTCMPackage";
static char j2735_v2x_msgs__msg__GNSSStatus__TYPE_NAME[] = "j2735_v2x_msgs/msg/GNSSStatus";
static char j2735_v2x_msgs__msg__OffsetB09__TYPE_NAME[] = "j2735_v2x_msgs/msg/OffsetB09";
static char j2735_v2x_msgs__msg__OffsetB10__TYPE_NAME[] = "j2735_v2x_msgs/msg/OffsetB10";
static char j2735_v2x_msgs__msg__OffsetB12__TYPE_NAME[] = "j2735_v2x_msgs/msg/OffsetB12";
static char j2735_v2x_msgs__msg__RTCMHeader__TYPE_NAME[] = "j2735_v2x_msgs/msg/RTCMHeader";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__RTCMPackage__FIELD_NAME__presence_vector[] = "presence_vector";
static char j2735_v2x_msgs__msg__RTCMPackage__FIELD_NAME__rtcm_header[] = "rtcm_header";
static char j2735_v2x_msgs__msg__RTCMPackage__FIELD_NAME__messages[] = "messages";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__RTCMPackage__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__RTCMPackage__FIELD_NAME__presence_vector, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__RTCMPackage__FIELD_NAME__rtcm_header, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {j2735_v2x_msgs__msg__RTCMHeader__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__RTCMPackage__FIELD_NAME__messages, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription j2735_v2x_msgs__msg__RTCMPackage__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {j2735_v2x_msgs__msg__GNSSStatus__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__OffsetB09__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__OffsetB10__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__OffsetB12__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {j2735_v2x_msgs__msg__RTCMHeader__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__RTCMPackage__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__RTCMPackage__TYPE_NAME, 30, 30},
      {j2735_v2x_msgs__msg__RTCMPackage__FIELDS, 3, 3},
    },
    {j2735_v2x_msgs__msg__RTCMPackage__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&j2735_v2x_msgs__msg__GNSSStatus__EXPECTED_HASH, j2735_v2x_msgs__msg__GNSSStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = j2735_v2x_msgs__msg__GNSSStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__OffsetB09__EXPECTED_HASH, j2735_v2x_msgs__msg__OffsetB09__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = j2735_v2x_msgs__msg__OffsetB09__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__OffsetB10__EXPECTED_HASH, j2735_v2x_msgs__msg__OffsetB10__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = j2735_v2x_msgs__msg__OffsetB10__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__OffsetB12__EXPECTED_HASH, j2735_v2x_msgs__msg__OffsetB12__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = j2735_v2x_msgs__msg__OffsetB12__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&j2735_v2x_msgs__msg__RTCMHeader__EXPECTED_HASH, j2735_v2x_msgs__msg__RTCMHeader__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = j2735_v2x_msgs__msg__RTCMHeader__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# RTCMPackage.msg\n"
  "#\n"
  "# Modified J2735 2016 message format, adjusted to use base SI units (m,s, etc) in most case.\n"
  "#\n"
  "\n"
  "# RTCMPackage ::= SEQUENCE {  \n"
  "#    -- precise antenna position and noise data for a rover\n"
  "#    rtcmHeader  RTCMheader OPTIONAL,  \n"
  "#                     \n"
  "#    -- one or more RTCM messages\n"
  "#    msgs        RTCMmessageList,\n"
  "#    ...  \n"
  "#    }\n"
  "\n"
  "# A BIT STRING defining the presence of optional fields.\n"
  "# Compare with bitwise-and\n"
  "# if (presence_vector & HAS_RTCM_HEADER) etc.\n"
  "# Create with bitwise-or\n"
  "# presence_vector = presence_vector | HAS_RTCM_HEADER\n"
  "uint16 presence_vector\n"
  "\n"
  "uint16 HAS_RTCM_HEADER = 1\n"
  "\n"
  "j2735_v2x_msgs/RTCMHeader rtcm_header\n"
  "\n"
  "# The RTCMmessage data element contains the stream of octets of the actual RTCM message that is being sent. The\n"
  "# message\\xe2\\x80\\x99s contents are defined in RTCM Standard 10403.1 and in RTCM Standard 10402.1 and its successors. Note that\n"
  "# most RTCM messages are considerably smaller than the size limit defined here, but that some messages may need to be\n"
  "# broken into smaller messages (as per the rules defined in the RTCM work) in order to be transmitted using V2X\n"
  "#communications.\n"
  "uint8[] messages\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__RTCMPackage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__RTCMPackage__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1153, 1153},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__RTCMPackage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__RTCMPackage__get_individual_type_description_source(NULL),
    sources[1] = *j2735_v2x_msgs__msg__GNSSStatus__get_individual_type_description_source(NULL);
    sources[2] = *j2735_v2x_msgs__msg__OffsetB09__get_individual_type_description_source(NULL);
    sources[3] = *j2735_v2x_msgs__msg__OffsetB10__get_individual_type_description_source(NULL);
    sources[4] = *j2735_v2x_msgs__msg__OffsetB12__get_individual_type_description_source(NULL);
    sources[5] = *j2735_v2x_msgs__msg__RTCMHeader__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
