// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from carma_driver_msgs:srv/GetDriverApi.idl
// generated code does not contain a copyright notice

#include "carma_driver_msgs/srv/detail/get_driver_api__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_type_hash_t *
carma_driver_msgs__srv__GetDriverApi__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb4, 0x1b, 0x2c, 0xca, 0x29, 0xbc, 0xdc, 0x4a,
      0x0a, 0x4d, 0x1f, 0xca, 0x63, 0xc9, 0xcf, 0xf8,
      0xf6, 0xa4, 0x81, 0x31, 0x87, 0x3c, 0xd0, 0xf9,
      0xae, 0x13, 0xd5, 0x12, 0xf1, 0x89, 0x25, 0xdd,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_type_hash_t *
carma_driver_msgs__srv__GetDriverApi_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x05, 0xc1, 0x7e, 0xab, 0x0b, 0x07, 0xdf, 0x33,
      0xff, 0xe2, 0xe0, 0x61, 0xff, 0x68, 0x28, 0x81,
      0x3d, 0xfa, 0xcd, 0x78, 0x95, 0x28, 0x39, 0x00,
      0xf2, 0xd7, 0xdd, 0xf2, 0xfa, 0xf0, 0x00, 0x4a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_type_hash_t *
carma_driver_msgs__srv__GetDriverApi_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x35, 0x16, 0xa1, 0x55, 0xa1, 0x81, 0x2e, 0xed,
      0x15, 0x8e, 0x86, 0x6b, 0xc5, 0x47, 0xb0, 0x49,
      0x57, 0x95, 0xab, 0x0b, 0x46, 0x5a, 0x53, 0xda,
      0xdb, 0x4a, 0x64, 0x51, 0x36, 0x63, 0x90, 0xf7,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_type_hash_t *
carma_driver_msgs__srv__GetDriverApi_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xff, 0xd3, 0x36, 0xc9, 0xa1, 0xe5, 0xcd, 0x77,
      0xcb, 0xe3, 0x9d, 0x12, 0x85, 0xc3, 0x91, 0xc1,
      0xef, 0x8a, 0xf7, 0x59, 0x5a, 0xe6, 0xed, 0x11,
      0x00, 0x71, 0x2d, 0x25, 0x8c, 0x62, 0xb8, 0x00,
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

static char carma_driver_msgs__srv__GetDriverApi__TYPE_NAME[] = "carma_driver_msgs/srv/GetDriverApi";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char carma_driver_msgs__srv__GetDriverApi_Event__TYPE_NAME[] = "carma_driver_msgs/srv/GetDriverApi_Event";
static char carma_driver_msgs__srv__GetDriverApi_Request__TYPE_NAME[] = "carma_driver_msgs/srv/GetDriverApi_Request";
static char carma_driver_msgs__srv__GetDriverApi_Response__TYPE_NAME[] = "carma_driver_msgs/srv/GetDriverApi_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char carma_driver_msgs__srv__GetDriverApi__FIELD_NAME__request_message[] = "request_message";
static char carma_driver_msgs__srv__GetDriverApi__FIELD_NAME__response_message[] = "response_message";
static char carma_driver_msgs__srv__GetDriverApi__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field carma_driver_msgs__srv__GetDriverApi__FIELDS[] = {
  {
    {carma_driver_msgs__srv__GetDriverApi__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {carma_driver_msgs__srv__GetDriverApi_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__GetDriverApi__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {carma_driver_msgs__srv__GetDriverApi_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__GetDriverApi__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {carma_driver_msgs__srv__GetDriverApi_Event__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription carma_driver_msgs__srv__GetDriverApi__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__GetDriverApi_Event__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__GetDriverApi_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__GetDriverApi_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
carma_driver_msgs__srv__GetDriverApi__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_driver_msgs__srv__GetDriverApi__TYPE_NAME, 34, 34},
      {carma_driver_msgs__srv__GetDriverApi__FIELDS, 3, 3},
    },
    {carma_driver_msgs__srv__GetDriverApi__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = carma_driver_msgs__srv__GetDriverApi_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = carma_driver_msgs__srv__GetDriverApi_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = carma_driver_msgs__srv__GetDriverApi_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char carma_driver_msgs__srv__GetDriverApi_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field carma_driver_msgs__srv__GetDriverApi_Request__FIELDS[] = {
  {
    {carma_driver_msgs__srv__GetDriverApi_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
carma_driver_msgs__srv__GetDriverApi_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_driver_msgs__srv__GetDriverApi_Request__TYPE_NAME, 42, 42},
      {carma_driver_msgs__srv__GetDriverApi_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char carma_driver_msgs__srv__GetDriverApi_Response__FIELD_NAME__api_list[] = "api_list";

static rosidl_runtime_c__type_description__Field carma_driver_msgs__srv__GetDriverApi_Response__FIELDS[] = {
  {
    {carma_driver_msgs__srv__GetDriverApi_Response__FIELD_NAME__api_list, 8, 8},
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
carma_driver_msgs__srv__GetDriverApi_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_driver_msgs__srv__GetDriverApi_Response__TYPE_NAME, 43, 43},
      {carma_driver_msgs__srv__GetDriverApi_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char carma_driver_msgs__srv__GetDriverApi_Event__FIELD_NAME__info[] = "info";
static char carma_driver_msgs__srv__GetDriverApi_Event__FIELD_NAME__request[] = "request";
static char carma_driver_msgs__srv__GetDriverApi_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field carma_driver_msgs__srv__GetDriverApi_Event__FIELDS[] = {
  {
    {carma_driver_msgs__srv__GetDriverApi_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__GetDriverApi_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {carma_driver_msgs__srv__GetDriverApi_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__GetDriverApi_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {carma_driver_msgs__srv__GetDriverApi_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription carma_driver_msgs__srv__GetDriverApi_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__GetDriverApi_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__GetDriverApi_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
carma_driver_msgs__srv__GetDriverApi_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_driver_msgs__srv__GetDriverApi_Event__TYPE_NAME, 40, 40},
      {carma_driver_msgs__srv__GetDriverApi_Event__FIELDS, 3, 3},
    },
    {carma_driver_msgs__srv__GetDriverApi_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = carma_driver_msgs__srv__GetDriverApi_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = carma_driver_msgs__srv__GetDriverApi_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# GetDriverApi.srv\n"
  "#\n"
  "# This is a service provided by each device driver to describe its API\n"
  "# in terms of ROS topics and services that it provides.\n"
  "#\n"
  "\n"
  "# Request - no arguments\n"
  "\n"
  "---\n"
  "\n"
  "# Response\n"
  "\n"
  "# Each item in the api_list is the fully qualified name of a \n"
  "# provided topic or service\n"
  "string[] api_list";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
carma_driver_msgs__srv__GetDriverApi__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_driver_msgs__srv__GetDriverApi__TYPE_NAME, 34, 34},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 301, 301},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
carma_driver_msgs__srv__GetDriverApi_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_driver_msgs__srv__GetDriverApi_Request__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
carma_driver_msgs__srv__GetDriverApi_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_driver_msgs__srv__GetDriverApi_Response__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
carma_driver_msgs__srv__GetDriverApi_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_driver_msgs__srv__GetDriverApi_Event__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_driver_msgs__srv__GetDriverApi__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_driver_msgs__srv__GetDriverApi__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *carma_driver_msgs__srv__GetDriverApi_Event__get_individual_type_description_source(NULL);
    sources[3] = *carma_driver_msgs__srv__GetDriverApi_Request__get_individual_type_description_source(NULL);
    sources[4] = *carma_driver_msgs__srv__GetDriverApi_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_driver_msgs__srv__GetDriverApi_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_driver_msgs__srv__GetDriverApi_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_driver_msgs__srv__GetDriverApi_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_driver_msgs__srv__GetDriverApi_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_driver_msgs__srv__GetDriverApi_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_driver_msgs__srv__GetDriverApi_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *carma_driver_msgs__srv__GetDriverApi_Request__get_individual_type_description_source(NULL);
    sources[3] = *carma_driver_msgs__srv__GetDriverApi_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
