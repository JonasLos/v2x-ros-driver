// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from j2735_v2x_msgs:msg/HeadingSlice.idl
// generated code does not contain a copyright notice

#include "j2735_v2x_msgs/msg/detail/heading_slice__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
const rosidl_type_hash_t *
j2735_v2x_msgs__msg__HeadingSlice__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x06, 0x17, 0x9d, 0x8e, 0x81, 0xc8, 0xde, 0xcf,
      0x90, 0xc7, 0x71, 0xda, 0x83, 0x88, 0x59, 0x73,
      0xbc, 0xb2, 0x69, 0x2b, 0x48, 0xa8, 0x28, 0xda,
      0x58, 0x02, 0xe2, 0x00, 0x0d, 0xb4, 0x0d, 0x3b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char j2735_v2x_msgs__msg__HeadingSlice__TYPE_NAME[] = "j2735_v2x_msgs/msg/HeadingSlice";

// Define type names, field names, and default values
static char j2735_v2x_msgs__msg__HeadingSlice__FIELD_NAME__heading_slice[] = "heading_slice";

static rosidl_runtime_c__type_description__Field j2735_v2x_msgs__msg__HeadingSlice__FIELDS[] = {
  {
    {j2735_v2x_msgs__msg__HeadingSlice__FIELD_NAME__heading_slice, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
j2735_v2x_msgs__msg__HeadingSlice__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {j2735_v2x_msgs__msg__HeadingSlice__TYPE_NAME, 31, 31},
      {j2735_v2x_msgs__msg__HeadingSlice__FIELDS, 1, 1},
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
  "# HeadingSlice.msg\n"
  "#\n"
  "# J2735 2016 message format.\n"
  "#\n"
  "\n"
  "# HeadingSlice ::= BIT STRING {\n"
  "#    -- Each bit 22.5 degree starting from \n"
  "#    -- North and moving Eastward (clockwise) as one bit\n"
  "#    -- a value of noHeading means no bits set, while a \n"
  "#    -- a value of allHeadings means all bits would be set             \n"
  "#       \n"
  "#    from000-0to022-5degrees  (0),   \n"
  "#    from022-5to045-0degrees  (1),   \n"
  "#    from045-0to067-5degrees  (2),   \n"
  "#    from067-5to090-0degrees  (3),   \n"
  "#    \n"
  "#    from090-0to112-5degrees  (4),   \n"
  "#    from112-5to135-0degrees  (5),   \n"
  "#    from135-0to157-5degrees  (6),   \n"
  "#    from157-5to180-0degrees  (7),   \n"
  "#    \n"
  "#    from180-0to202-5degrees  (8),   \n"
  "#    from202-5to225-0degrees  (9),   \n"
  "#    from225-0to247-5degrees  (10),  \n"
  "#    from247-5to270-0degrees  (11),  \n"
  "#    \n"
  "#    from270-0to292-5degrees  (12),  \n"
  "#    from292-5to315-0degrees  (13),  \n"
  "#    from315-0to337-5degrees  (14),  \n"
  "#    from337-5to360-0degrees  (15)  \n"
  "#    }  (SIZE (16))\n"
  "\n"
  "uint16 heading_slice\n"
  "\n"
  "uint16 NO_HEADING = 0\n"
  "uint16 FROM_000_0_TO_022_5_DEGREES=1\n"
  "uint16 FROM_022_5_TO_045_0_DEGREES=2\n"
  "uint16 FROM_045_0_TO_067_5_DEGREES=4\n"
  "uint16 FROM_067_5_TO_090_0_DEGREES=8\n"
  "uint16 FROM_090_0_TO_112_5_DEGREES=16\n"
  "uint16 FROM_112_5_TO_135_0_DEGREES=32\n"
  "uint16 FROM_135_0_TO_157_5_DEGREES=64\n"
  "uint16 FROM_157_5_TO_180_0_DEGREES=128\n"
  "uint16 FROM_180_0_TO_202_5_DEGREES=256\n"
  "uint16 FROM_202_5_TO_225_0_DEGREES=512\n"
  "uint16 FROM_225_0_TO_247_5_DEGREES=1024\n"
  "uint16 FROM_247_5_TO_270_0_DEGREES=2048\n"
  "uint16 FROM_270_0_TO_292_5_DEGREES=4096\n"
  "uint16 FROM_292_5_TO_315_0_DEGREES=8192\n"
  "uint16 FROM_315_0_TO_337_5_DEGREES=16384\n"
  "uint16 FROM_337_5_TO_360_0_DEGREES=32768\n"
  "uint16 ALL_HEADINGS=65535";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
j2735_v2x_msgs__msg__HeadingSlice__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {j2735_v2x_msgs__msg__HeadingSlice__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1662, 1662},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
j2735_v2x_msgs__msg__HeadingSlice__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *j2735_v2x_msgs__msg__HeadingSlice__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
