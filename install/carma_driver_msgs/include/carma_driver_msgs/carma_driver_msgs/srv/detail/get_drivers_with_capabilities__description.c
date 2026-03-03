// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from carma_driver_msgs:srv/GetDriversWithCapabilities.idl
// generated code does not contain a copyright notice

#include "carma_driver_msgs/srv/detail/get_drivers_with_capabilities__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_type_hash_t *
carma_driver_msgs__srv__GetDriversWithCapabilities__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd7, 0x87, 0x1f, 0x36, 0x47, 0xf2, 0x82, 0x4c,
      0xe8, 0x02, 0x55, 0x96, 0xf2, 0x98, 0xbb, 0xc3,
      0x7c, 0xb9, 0xe5, 0x64, 0x20, 0x98, 0x60, 0x1e,
      0x61, 0xfc, 0x5a, 0x38, 0xf1, 0x6a, 0xce, 0x94,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_type_hash_t *
carma_driver_msgs__srv__GetDriversWithCapabilities_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd3, 0x7d, 0xf9, 0x11, 0x92, 0x4b, 0xa1, 0xb1,
      0xbb, 0x11, 0x5d, 0xff, 0x1c, 0x10, 0xdd, 0x36,
      0x95, 0x17, 0xd2, 0x2b, 0xce, 0xf0, 0x97, 0x6d,
      0x7c, 0x5b, 0x0a, 0xa0, 0xd5, 0x81, 0x7a, 0xf6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_type_hash_t *
carma_driver_msgs__srv__GetDriversWithCapabilities_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x40, 0x9c, 0x82, 0xcb, 0x23, 0xe6, 0xf5, 0x02,
      0xa0, 0x74, 0x66, 0x52, 0xa5, 0xea, 0x2d, 0x26,
      0x76, 0x8e, 0x65, 0x23, 0x4e, 0x85, 0xb8, 0x22,
      0xc9, 0xe7, 0x13, 0x39, 0x4e, 0xc2, 0x5b, 0x56,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_type_hash_t *
carma_driver_msgs__srv__GetDriversWithCapabilities_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc7, 0x90, 0xb2, 0x2d, 0xa7, 0xbd, 0xaf, 0xa2,
      0x82, 0x9f, 0x7c, 0x10, 0x8d, 0xbf, 0xfb, 0xde,
      0xed, 0xba, 0xa2, 0x30, 0xf4, 0xf8, 0x13, 0x56,
      0xfe, 0x1b, 0xf0, 0x92, 0xbf, 0xfa, 0x80, 0xa6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char carma_driver_msgs__srv__GetDriversWithCapabilities__TYPE_NAME[] = "carma_driver_msgs/srv/GetDriversWithCapabilities";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char carma_driver_msgs__srv__GetDriversWithCapabilities_Event__TYPE_NAME[] = "carma_driver_msgs/srv/GetDriversWithCapabilities_Event";
static char carma_driver_msgs__srv__GetDriversWithCapabilities_Request__TYPE_NAME[] = "carma_driver_msgs/srv/GetDriversWithCapabilities_Request";
static char carma_driver_msgs__srv__GetDriversWithCapabilities_Response__TYPE_NAME[] = "carma_driver_msgs/srv/GetDriversWithCapabilities_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char carma_driver_msgs__srv__GetDriversWithCapabilities__FIELD_NAME__request_message[] = "request_message";
static char carma_driver_msgs__srv__GetDriversWithCapabilities__FIELD_NAME__response_message[] = "response_message";
static char carma_driver_msgs__srv__GetDriversWithCapabilities__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field carma_driver_msgs__srv__GetDriversWithCapabilities__FIELDS[] = {
  {
    {carma_driver_msgs__srv__GetDriversWithCapabilities__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {carma_driver_msgs__srv__GetDriversWithCapabilities_Request__TYPE_NAME, 56, 56},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__GetDriversWithCapabilities__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {carma_driver_msgs__srv__GetDriversWithCapabilities_Response__TYPE_NAME, 57, 57},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__GetDriversWithCapabilities__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {carma_driver_msgs__srv__GetDriversWithCapabilities_Event__TYPE_NAME, 54, 54},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription carma_driver_msgs__srv__GetDriversWithCapabilities__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__GetDriversWithCapabilities_Event__TYPE_NAME, 54, 54},
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__GetDriversWithCapabilities_Request__TYPE_NAME, 56, 56},
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__GetDriversWithCapabilities_Response__TYPE_NAME, 57, 57},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
carma_driver_msgs__srv__GetDriversWithCapabilities__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_driver_msgs__srv__GetDriversWithCapabilities__TYPE_NAME, 48, 48},
      {carma_driver_msgs__srv__GetDriversWithCapabilities__FIELDS, 3, 3},
    },
    {carma_driver_msgs__srv__GetDriversWithCapabilities__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = carma_driver_msgs__srv__GetDriversWithCapabilities_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = carma_driver_msgs__srv__GetDriversWithCapabilities_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = carma_driver_msgs__srv__GetDriversWithCapabilities_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char carma_driver_msgs__srv__GetDriversWithCapabilities_Request__FIELD_NAME__capabilities[] = "capabilities";

static rosidl_runtime_c__type_description__Field carma_driver_msgs__srv__GetDriversWithCapabilities_Request__FIELDS[] = {
  {
    {carma_driver_msgs__srv__GetDriversWithCapabilities_Request__FIELD_NAME__capabilities, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
carma_driver_msgs__srv__GetDriversWithCapabilities_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_driver_msgs__srv__GetDriversWithCapabilities_Request__TYPE_NAME, 56, 56},
      {carma_driver_msgs__srv__GetDriversWithCapabilities_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char carma_driver_msgs__srv__GetDriversWithCapabilities_Response__FIELD_NAME__driver_data[] = "driver_data";

static rosidl_runtime_c__type_description__Field carma_driver_msgs__srv__GetDriversWithCapabilities_Response__FIELDS[] = {
  {
    {carma_driver_msgs__srv__GetDriversWithCapabilities_Response__FIELD_NAME__driver_data, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
carma_driver_msgs__srv__GetDriversWithCapabilities_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_driver_msgs__srv__GetDriversWithCapabilities_Response__TYPE_NAME, 57, 57},
      {carma_driver_msgs__srv__GetDriversWithCapabilities_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char carma_driver_msgs__srv__GetDriversWithCapabilities_Event__FIELD_NAME__info[] = "info";
static char carma_driver_msgs__srv__GetDriversWithCapabilities_Event__FIELD_NAME__request[] = "request";
static char carma_driver_msgs__srv__GetDriversWithCapabilities_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field carma_driver_msgs__srv__GetDriversWithCapabilities_Event__FIELDS[] = {
  {
    {carma_driver_msgs__srv__GetDriversWithCapabilities_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__GetDriversWithCapabilities_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {carma_driver_msgs__srv__GetDriversWithCapabilities_Request__TYPE_NAME, 56, 56},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__GetDriversWithCapabilities_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {carma_driver_msgs__srv__GetDriversWithCapabilities_Response__TYPE_NAME, 57, 57},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription carma_driver_msgs__srv__GetDriversWithCapabilities_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__GetDriversWithCapabilities_Request__TYPE_NAME, 56, 56},
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__GetDriversWithCapabilities_Response__TYPE_NAME, 57, 57},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
carma_driver_msgs__srv__GetDriversWithCapabilities_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_driver_msgs__srv__GetDriversWithCapabilities_Event__TYPE_NAME, 54, 54},
      {carma_driver_msgs__srv__GetDriversWithCapabilities_Event__FIELDS, 3, 3},
    },
    {carma_driver_msgs__srv__GetDriversWithCapabilities_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = carma_driver_msgs__srv__GetDriversWithCapabilities_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = carma_driver_msgs__srv__GetDriversWithCapabilities_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# GetDriversWithCapabilities.srv\n"
  "#\n"
  "# Returns a list of driver apis that provide ALL of the requested capabilities.\n"
  "# If a driver provides capabilities that are not requested, those extra capabilities will be ignored (no \n"
  "# penalty for a driver that is \"over-qualified\").\n"
  "#\n"
  "\n"
  "##### Request #####\n"
  "\n"
  "# Capabilities is a list of descriptive strings. The complete set of possible capabilities strings can\n"
  "# be found by referencing the ROS messages.xlsx spreadsheet in the detailed design folder of the Carma platform\n"
  "# software engineering library. In that file the string to be used here comes from the \n"
  "# \"Name (in code)\" column. Only names that apply to Drivers listed under the Package column are applicable.\n"
  "# Of those names, the following topics & services should be ignored, as they are not capabilities: bind, bond, \n"
  "# get_driver_api, driver_discovery.  With the remaining information in the \"Name (in code)\" column of the\n"
  "# spreadsheet, there are two ways to identify a desired capability.\n"
  "#   1) if the requestor doesn't care about what driver provides the capability, then just list the data name\n"
  "#      itself (the part after the right-most \\'/\\').  For example, \"heading\".\n"
  "#   2) if the requestor only wants the capability from a particular type of driver, then that driver type\n"
  "#      can be included in the capability request, separated from the capability name by a '/'.  For example,\n"
  "#      \"position/heading\". Such a request will ensure that other data sources are not considered. In this\n"
  "#      example, if there was a compass sensor that also provided heading, it would not be returned in the\n"
  "#      response because it would be identified as \"sensor/heading\".\n"
  "# The specific list of supported capabilities is not documented here because it may change from time\n"
  "# to time.  The ROS messages.xlsx is the official source for that information.\n"
  "\n"
  "string[] capabilities\n"
  "\n"
  "---\n"
  "\n"
  "##### Response #####\n"
  "\n"
  "# a list of drivers and their capabilities that meet the given criteria. Each element is reported as a\n"
  "# fully-qualified name of the form [driver_name]/[driver_type]/[capability].  If the request included\n"
  "# only [capability] fields without the [driver_type] qualifier, then this return list may show multiple\n"
  "# drivers of different types that provide the same capability.\n"
  "\n"
  "string[] driver_data";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
carma_driver_msgs__srv__GetDriversWithCapabilities__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_driver_msgs__srv__GetDriversWithCapabilities__TYPE_NAME, 48, 48},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 2297, 2297},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
carma_driver_msgs__srv__GetDriversWithCapabilities_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_driver_msgs__srv__GetDriversWithCapabilities_Request__TYPE_NAME, 56, 56},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
carma_driver_msgs__srv__GetDriversWithCapabilities_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_driver_msgs__srv__GetDriversWithCapabilities_Response__TYPE_NAME, 57, 57},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
carma_driver_msgs__srv__GetDriversWithCapabilities_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_driver_msgs__srv__GetDriversWithCapabilities_Event__TYPE_NAME, 54, 54},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_driver_msgs__srv__GetDriversWithCapabilities__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_driver_msgs__srv__GetDriversWithCapabilities__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *carma_driver_msgs__srv__GetDriversWithCapabilities_Event__get_individual_type_description_source(NULL);
    sources[3] = *carma_driver_msgs__srv__GetDriversWithCapabilities_Request__get_individual_type_description_source(NULL);
    sources[4] = *carma_driver_msgs__srv__GetDriversWithCapabilities_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_driver_msgs__srv__GetDriversWithCapabilities_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_driver_msgs__srv__GetDriversWithCapabilities_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_driver_msgs__srv__GetDriversWithCapabilities_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_driver_msgs__srv__GetDriversWithCapabilities_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_driver_msgs__srv__GetDriversWithCapabilities_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_driver_msgs__srv__GetDriversWithCapabilities_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *carma_driver_msgs__srv__GetDriversWithCapabilities_Request__get_individual_type_description_source(NULL);
    sources[3] = *carma_driver_msgs__srv__GetDriversWithCapabilities_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
