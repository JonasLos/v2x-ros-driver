// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from carma_driver_msgs:srv/SetEnableRobotic.idl
// generated code does not contain a copyright notice

#include "carma_driver_msgs/srv/detail/set_enable_robotic__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_type_hash_t *
carma_driver_msgs__srv__SetEnableRobotic__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x51, 0x67, 0x44, 0xd7, 0xaa, 0x94, 0x82, 0x0e,
      0xd0, 0x46, 0xa6, 0x96, 0xfa, 0x98, 0x30, 0xa7,
      0xb3, 0x55, 0x79, 0xa0, 0x99, 0xe1, 0xd2, 0xad,
      0x54, 0xa6, 0x9c, 0x0a, 0x24, 0x86, 0xb2, 0x60,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_type_hash_t *
carma_driver_msgs__srv__SetEnableRobotic_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc3, 0x95, 0x43, 0xd5, 0x09, 0x98, 0x44, 0x08,
      0xdd, 0xd2, 0xba, 0x08, 0x5d, 0x5e, 0xd3, 0x17,
      0x52, 0x34, 0x5e, 0xb5, 0x62, 0x63, 0x5c, 0x48,
      0xa1, 0xcd, 0x79, 0x0d, 0xd0, 0x19, 0x03, 0x0b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_type_hash_t *
carma_driver_msgs__srv__SetEnableRobotic_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x17, 0xb2, 0x6d, 0x0a, 0xf1, 0x53, 0x2d, 0x46,
      0x23, 0x8a, 0xaf, 0x85, 0x0a, 0x49, 0x52, 0x6c,
      0xa1, 0xd4, 0x1a, 0xd0, 0x1d, 0xc3, 0xa2, 0xdb,
      0xfb, 0xd5, 0xb0, 0xdf, 0x87, 0xfb, 0xcf, 0x0f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
const rosidl_type_hash_t *
carma_driver_msgs__srv__SetEnableRobotic_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x52, 0xc3, 0xd8, 0xc6, 0x4f, 0x58, 0xf0, 0xfe,
      0xc3, 0x42, 0x15, 0x7d, 0x72, 0x54, 0xa4, 0xc2,
      0x0a, 0x2c, 0x73, 0xe0, 0x67, 0x7e, 0xd1, 0x74,
      0x26, 0xe6, 0xab, 0x70, 0x9a, 0x3c, 0x95, 0x6f,
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

static char carma_driver_msgs__srv__SetEnableRobotic__TYPE_NAME[] = "carma_driver_msgs/srv/SetEnableRobotic";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char carma_driver_msgs__srv__SetEnableRobotic_Event__TYPE_NAME[] = "carma_driver_msgs/srv/SetEnableRobotic_Event";
static char carma_driver_msgs__srv__SetEnableRobotic_Request__TYPE_NAME[] = "carma_driver_msgs/srv/SetEnableRobotic_Request";
static char carma_driver_msgs__srv__SetEnableRobotic_Response__TYPE_NAME[] = "carma_driver_msgs/srv/SetEnableRobotic_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char carma_driver_msgs__srv__SetEnableRobotic__FIELD_NAME__request_message[] = "request_message";
static char carma_driver_msgs__srv__SetEnableRobotic__FIELD_NAME__response_message[] = "response_message";
static char carma_driver_msgs__srv__SetEnableRobotic__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field carma_driver_msgs__srv__SetEnableRobotic__FIELDS[] = {
  {
    {carma_driver_msgs__srv__SetEnableRobotic__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {carma_driver_msgs__srv__SetEnableRobotic_Request__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__SetEnableRobotic__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {carma_driver_msgs__srv__SetEnableRobotic_Response__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__SetEnableRobotic__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {carma_driver_msgs__srv__SetEnableRobotic_Event__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription carma_driver_msgs__srv__SetEnableRobotic__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__SetEnableRobotic_Event__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__SetEnableRobotic_Request__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__SetEnableRobotic_Response__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
carma_driver_msgs__srv__SetEnableRobotic__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_driver_msgs__srv__SetEnableRobotic__TYPE_NAME, 38, 38},
      {carma_driver_msgs__srv__SetEnableRobotic__FIELDS, 3, 3},
    },
    {carma_driver_msgs__srv__SetEnableRobotic__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = carma_driver_msgs__srv__SetEnableRobotic_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = carma_driver_msgs__srv__SetEnableRobotic_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = carma_driver_msgs__srv__SetEnableRobotic_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char carma_driver_msgs__srv__SetEnableRobotic_Request__FIELD_NAME__set[] = "set";

static rosidl_runtime_c__type_description__Field carma_driver_msgs__srv__SetEnableRobotic_Request__FIELDS[] = {
  {
    {carma_driver_msgs__srv__SetEnableRobotic_Request__FIELD_NAME__set, 3, 3},
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
carma_driver_msgs__srv__SetEnableRobotic_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_driver_msgs__srv__SetEnableRobotic_Request__TYPE_NAME, 46, 46},
      {carma_driver_msgs__srv__SetEnableRobotic_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char carma_driver_msgs__srv__SetEnableRobotic_Response__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field carma_driver_msgs__srv__SetEnableRobotic_Response__FIELDS[] = {
  {
    {carma_driver_msgs__srv__SetEnableRobotic_Response__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
carma_driver_msgs__srv__SetEnableRobotic_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_driver_msgs__srv__SetEnableRobotic_Response__TYPE_NAME, 47, 47},
      {carma_driver_msgs__srv__SetEnableRobotic_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char carma_driver_msgs__srv__SetEnableRobotic_Event__FIELD_NAME__info[] = "info";
static char carma_driver_msgs__srv__SetEnableRobotic_Event__FIELD_NAME__request[] = "request";
static char carma_driver_msgs__srv__SetEnableRobotic_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field carma_driver_msgs__srv__SetEnableRobotic_Event__FIELDS[] = {
  {
    {carma_driver_msgs__srv__SetEnableRobotic_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__SetEnableRobotic_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {carma_driver_msgs__srv__SetEnableRobotic_Request__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__SetEnableRobotic_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {carma_driver_msgs__srv__SetEnableRobotic_Response__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription carma_driver_msgs__srv__SetEnableRobotic_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__SetEnableRobotic_Request__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {carma_driver_msgs__srv__SetEnableRobotic_Response__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
carma_driver_msgs__srv__SetEnableRobotic_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_driver_msgs__srv__SetEnableRobotic_Event__TYPE_NAME, 44, 44},
      {carma_driver_msgs__srv__SetEnableRobotic_Event__FIELDS, 3, 3},
    },
    {carma_driver_msgs__srv__SetEnableRobotic_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = carma_driver_msgs__srv__SetEnableRobotic_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = carma_driver_msgs__srv__SetEnableRobotic_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# SetEnableRobotic.srv\n"
  "\n"
  "# Request\n"
  "\n"
  "uint8 set\n"
  "\n"
  "uint8 DISABLE=0\n"
  "uint8 ENABLE=1\n"
  "\n"
  "---\n"
  "\n"
  "# Response";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
carma_driver_msgs__srv__SetEnableRobotic__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_driver_msgs__srv__SetEnableRobotic__TYPE_NAME, 38, 38},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 93, 93},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
carma_driver_msgs__srv__SetEnableRobotic_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_driver_msgs__srv__SetEnableRobotic_Request__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
carma_driver_msgs__srv__SetEnableRobotic_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_driver_msgs__srv__SetEnableRobotic_Response__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
carma_driver_msgs__srv__SetEnableRobotic_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_driver_msgs__srv__SetEnableRobotic_Event__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_driver_msgs__srv__SetEnableRobotic__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_driver_msgs__srv__SetEnableRobotic__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *carma_driver_msgs__srv__SetEnableRobotic_Event__get_individual_type_description_source(NULL);
    sources[3] = *carma_driver_msgs__srv__SetEnableRobotic_Request__get_individual_type_description_source(NULL);
    sources[4] = *carma_driver_msgs__srv__SetEnableRobotic_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_driver_msgs__srv__SetEnableRobotic_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_driver_msgs__srv__SetEnableRobotic_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_driver_msgs__srv__SetEnableRobotic_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_driver_msgs__srv__SetEnableRobotic_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_driver_msgs__srv__SetEnableRobotic_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_driver_msgs__srv__SetEnableRobotic_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *carma_driver_msgs__srv__SetEnableRobotic_Request__get_individual_type_description_source(NULL);
    sources[3] = *carma_driver_msgs__srv__SetEnableRobotic_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
