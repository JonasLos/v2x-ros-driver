// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from carma_msgs:srv/ReleaseIndicatorControl.idl
// generated code does not contain a copyright notice

#include "carma_msgs/srv/detail/release_indicator_control__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
const rosidl_type_hash_t *
carma_msgs__srv__ReleaseIndicatorControl__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x09, 0xac, 0x72, 0x93, 0xfb, 0x97, 0x52, 0xab,
      0x8f, 0x03, 0x24, 0x48, 0x5f, 0x34, 0xcf, 0x71,
      0xd9, 0x45, 0x32, 0x40, 0x0b, 0x82, 0xf8, 0x8d,
      0x16, 0x1a, 0xf0, 0x27, 0xce, 0xd3, 0x3f, 0xd3,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
const rosidl_type_hash_t *
carma_msgs__srv__ReleaseIndicatorControl_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xaa, 0x91, 0xa8, 0xbf, 0xc2, 0xff, 0x66, 0x88,
      0x9c, 0x7c, 0xc5, 0x40, 0x38, 0x92, 0x9c, 0xc9,
      0x60, 0x97, 0xe3, 0xa8, 0x80, 0x20, 0x7d, 0xa0,
      0x83, 0xee, 0x9c, 0x6b, 0xb0, 0x7e, 0xbf, 0x7e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
const rosidl_type_hash_t *
carma_msgs__srv__ReleaseIndicatorControl_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x20, 0xd2, 0xb5, 0xf0, 0xd2, 0x82, 0x1d, 0x07,
      0xfa, 0xe7, 0x8b, 0xfe, 0x91, 0xad, 0xfb, 0x61,
      0x31, 0xcd, 0x30, 0xb1, 0x0d, 0xc3, 0xe9, 0x4f,
      0xc5, 0x6c, 0xd7, 0x7e, 0x1a, 0x99, 0x3f, 0xb2,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_carma_msgs
const rosidl_type_hash_t *
carma_msgs__srv__ReleaseIndicatorControl_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcc, 0x7f, 0x6b, 0xf4, 0x12, 0x0d, 0x48, 0xa3,
      0xb9, 0xb9, 0xfa, 0x92, 0xbc, 0xde, 0xed, 0x23,
      0x22, 0x2a, 0x35, 0xf2, 0x4a, 0xf3, 0x48, 0x22,
      0xa5, 0x9f, 0x17, 0xeb, 0xbc, 0x20, 0xf1, 0xa0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "carma_msgs/msg/detail/light_bar_cda_type__functions.h"
#include "carma_msgs/msg/detail/light_bar_indicator__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t carma_msgs__msg__LightBarCDAType__EXPECTED_HASH = {1, {
    0x9e, 0x9e, 0x49, 0xfc, 0x39, 0xbe, 0xc2, 0x6a,
    0xea, 0x7a, 0x24, 0xfe, 0x01, 0xdb, 0xfe, 0x9e,
    0xb7, 0x17, 0x59, 0xc9, 0x92, 0xb1, 0x18, 0x04,
    0x45, 0xf8, 0x89, 0xb8, 0x2c, 0x4b, 0x73, 0x8c,
  }};
static const rosidl_type_hash_t carma_msgs__msg__LightBarIndicator__EXPECTED_HASH = {1, {
    0xe9, 0xe9, 0xb8, 0xa6, 0x9a, 0x03, 0x2f, 0x35,
    0x10, 0x46, 0x65, 0xfb, 0x25, 0x20, 0xf6, 0xda,
    0xc8, 0x67, 0xc9, 0x5a, 0xea, 0xae, 0x1f, 0x33,
    0x2b, 0x90, 0x33, 0x42, 0xe8, 0xca, 0xfe, 0x8c,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char carma_msgs__srv__ReleaseIndicatorControl__TYPE_NAME[] = "carma_msgs/srv/ReleaseIndicatorControl";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char carma_msgs__msg__LightBarCDAType__TYPE_NAME[] = "carma_msgs/msg/LightBarCDAType";
static char carma_msgs__msg__LightBarIndicator__TYPE_NAME[] = "carma_msgs/msg/LightBarIndicator";
static char carma_msgs__srv__ReleaseIndicatorControl_Event__TYPE_NAME[] = "carma_msgs/srv/ReleaseIndicatorControl_Event";
static char carma_msgs__srv__ReleaseIndicatorControl_Request__TYPE_NAME[] = "carma_msgs/srv/ReleaseIndicatorControl_Request";
static char carma_msgs__srv__ReleaseIndicatorControl_Response__TYPE_NAME[] = "carma_msgs/srv/ReleaseIndicatorControl_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char carma_msgs__srv__ReleaseIndicatorControl__FIELD_NAME__request_message[] = "request_message";
static char carma_msgs__srv__ReleaseIndicatorControl__FIELD_NAME__response_message[] = "response_message";
static char carma_msgs__srv__ReleaseIndicatorControl__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field carma_msgs__srv__ReleaseIndicatorControl__FIELDS[] = {
  {
    {carma_msgs__srv__ReleaseIndicatorControl__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {carma_msgs__srv__ReleaseIndicatorControl_Request__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {carma_msgs__srv__ReleaseIndicatorControl__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {carma_msgs__srv__ReleaseIndicatorControl_Response__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {carma_msgs__srv__ReleaseIndicatorControl__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {carma_msgs__srv__ReleaseIndicatorControl_Event__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription carma_msgs__srv__ReleaseIndicatorControl__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {carma_msgs__msg__LightBarCDAType__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {carma_msgs__msg__LightBarIndicator__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {carma_msgs__srv__ReleaseIndicatorControl_Event__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {carma_msgs__srv__ReleaseIndicatorControl_Request__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {carma_msgs__srv__ReleaseIndicatorControl_Response__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
carma_msgs__srv__ReleaseIndicatorControl__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_msgs__srv__ReleaseIndicatorControl__TYPE_NAME, 38, 38},
      {carma_msgs__srv__ReleaseIndicatorControl__FIELDS, 3, 3},
    },
    {carma_msgs__srv__ReleaseIndicatorControl__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&carma_msgs__msg__LightBarCDAType__EXPECTED_HASH, carma_msgs__msg__LightBarCDAType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = carma_msgs__msg__LightBarCDAType__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&carma_msgs__msg__LightBarIndicator__EXPECTED_HASH, carma_msgs__msg__LightBarIndicator__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = carma_msgs__msg__LightBarIndicator__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = carma_msgs__srv__ReleaseIndicatorControl_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = carma_msgs__srv__ReleaseIndicatorControl_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = carma_msgs__srv__ReleaseIndicatorControl_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char carma_msgs__srv__ReleaseIndicatorControl_Request__FIELD_NAME__ind_list[] = "ind_list";
static char carma_msgs__srv__ReleaseIndicatorControl_Request__FIELD_NAME__cda_list[] = "cda_list";
static char carma_msgs__srv__ReleaseIndicatorControl_Request__FIELD_NAME__requester_name[] = "requester_name";

static rosidl_runtime_c__type_description__Field carma_msgs__srv__ReleaseIndicatorControl_Request__FIELDS[] = {
  {
    {carma_msgs__srv__ReleaseIndicatorControl_Request__FIELD_NAME__ind_list, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {carma_msgs__msg__LightBarIndicator__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {carma_msgs__srv__ReleaseIndicatorControl_Request__FIELD_NAME__cda_list, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {carma_msgs__msg__LightBarCDAType__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {carma_msgs__srv__ReleaseIndicatorControl_Request__FIELD_NAME__requester_name, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription carma_msgs__srv__ReleaseIndicatorControl_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {carma_msgs__msg__LightBarCDAType__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {carma_msgs__msg__LightBarIndicator__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
carma_msgs__srv__ReleaseIndicatorControl_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_msgs__srv__ReleaseIndicatorControl_Request__TYPE_NAME, 46, 46},
      {carma_msgs__srv__ReleaseIndicatorControl_Request__FIELDS, 3, 3},
    },
    {carma_msgs__srv__ReleaseIndicatorControl_Request__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&carma_msgs__msg__LightBarCDAType__EXPECTED_HASH, carma_msgs__msg__LightBarCDAType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = carma_msgs__msg__LightBarCDAType__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&carma_msgs__msg__LightBarIndicator__EXPECTED_HASH, carma_msgs__msg__LightBarIndicator__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = carma_msgs__msg__LightBarIndicator__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char carma_msgs__srv__ReleaseIndicatorControl_Response__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field carma_msgs__srv__ReleaseIndicatorControl_Response__FIELDS[] = {
  {
    {carma_msgs__srv__ReleaseIndicatorControl_Response__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
carma_msgs__srv__ReleaseIndicatorControl_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_msgs__srv__ReleaseIndicatorControl_Response__TYPE_NAME, 47, 47},
      {carma_msgs__srv__ReleaseIndicatorControl_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char carma_msgs__srv__ReleaseIndicatorControl_Event__FIELD_NAME__info[] = "info";
static char carma_msgs__srv__ReleaseIndicatorControl_Event__FIELD_NAME__request[] = "request";
static char carma_msgs__srv__ReleaseIndicatorControl_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field carma_msgs__srv__ReleaseIndicatorControl_Event__FIELDS[] = {
  {
    {carma_msgs__srv__ReleaseIndicatorControl_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {carma_msgs__srv__ReleaseIndicatorControl_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {carma_msgs__srv__ReleaseIndicatorControl_Request__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {carma_msgs__srv__ReleaseIndicatorControl_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {carma_msgs__srv__ReleaseIndicatorControl_Response__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription carma_msgs__srv__ReleaseIndicatorControl_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {carma_msgs__msg__LightBarCDAType__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {carma_msgs__msg__LightBarIndicator__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {carma_msgs__srv__ReleaseIndicatorControl_Request__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {carma_msgs__srv__ReleaseIndicatorControl_Response__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
carma_msgs__srv__ReleaseIndicatorControl_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {carma_msgs__srv__ReleaseIndicatorControl_Event__TYPE_NAME, 44, 44},
      {carma_msgs__srv__ReleaseIndicatorControl_Event__FIELDS, 3, 3},
    },
    {carma_msgs__srv__ReleaseIndicatorControl_Event__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&carma_msgs__msg__LightBarCDAType__EXPECTED_HASH, carma_msgs__msg__LightBarCDAType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = carma_msgs__msg__LightBarCDAType__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&carma_msgs__msg__LightBarIndicator__EXPECTED_HASH, carma_msgs__msg__LightBarIndicator__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = carma_msgs__msg__LightBarIndicator__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = carma_msgs__srv__ReleaseIndicatorControl_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = carma_msgs__srv__ReleaseIndicatorControl_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# ReleaseIndicatorControl.srv\n"
  "# \n"
  "# @author Misheel Bayartsengel\n"
  "# @version 0.1\n"
  "#\n"
  "# Provided by the LightBarManager node. Plugins and component\n"
  "# release the control of the indicators they control through\n"
  "# this service. They can either give info about the Cooperative Driving Automation \n"
  "# (CDA) Msg Classes it is broadcasting (so that the manager can find appropriate\n"
  "# lightbar indicator mapping) or directly specify the indicators.\n"
  "# The user should use only one of the methods, otherwise, LightBarCDAType msg\n"
  "# information will be used over the indicator (LightBarIndicator msg type will\n"
  "# be ignored). Therefore, if the component MUST set both ways, call the service \n"
  "# twice.\n"
  "\n"
  "\n"
  "# Request - List of indicators the component release control of\n"
  "carma_msgs/LightBarIndicator[] ind_list\n"
  "carma_msgs/LightBarCDAType[] cda_list\n"
  "string requester_name\n"
  "---\n"
  "# Response - None\n"
  "";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
carma_msgs__srv__ReleaseIndicatorControl__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_msgs__srv__ReleaseIndicatorControl__TYPE_NAME, 38, 38},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 873, 873},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
carma_msgs__srv__ReleaseIndicatorControl_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_msgs__srv__ReleaseIndicatorControl_Request__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
carma_msgs__srv__ReleaseIndicatorControl_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_msgs__srv__ReleaseIndicatorControl_Response__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
carma_msgs__srv__ReleaseIndicatorControl_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {carma_msgs__srv__ReleaseIndicatorControl_Event__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_msgs__srv__ReleaseIndicatorControl__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_msgs__srv__ReleaseIndicatorControl__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *carma_msgs__msg__LightBarCDAType__get_individual_type_description_source(NULL);
    sources[3] = *carma_msgs__msg__LightBarIndicator__get_individual_type_description_source(NULL);
    sources[4] = *carma_msgs__srv__ReleaseIndicatorControl_Event__get_individual_type_description_source(NULL);
    sources[5] = *carma_msgs__srv__ReleaseIndicatorControl_Request__get_individual_type_description_source(NULL);
    sources[6] = *carma_msgs__srv__ReleaseIndicatorControl_Response__get_individual_type_description_source(NULL);
    sources[7] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_msgs__srv__ReleaseIndicatorControl_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_msgs__srv__ReleaseIndicatorControl_Request__get_individual_type_description_source(NULL),
    sources[1] = *carma_msgs__msg__LightBarCDAType__get_individual_type_description_source(NULL);
    sources[2] = *carma_msgs__msg__LightBarIndicator__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_msgs__srv__ReleaseIndicatorControl_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_msgs__srv__ReleaseIndicatorControl_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
carma_msgs__srv__ReleaseIndicatorControl_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *carma_msgs__srv__ReleaseIndicatorControl_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *carma_msgs__msg__LightBarCDAType__get_individual_type_description_source(NULL);
    sources[3] = *carma_msgs__msg__LightBarIndicator__get_individual_type_description_source(NULL);
    sources[4] = *carma_msgs__srv__ReleaseIndicatorControl_Request__get_individual_type_description_source(NULL);
    sources[5] = *carma_msgs__srv__ReleaseIndicatorControl_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
