// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/PSM.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/psm__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `basic_type`
#include "j2735_v2x_msgs/msg/detail/personal_device_user_type__functions.h"
// Member `sec_mark`
#include "j2735_v2x_msgs/msg/detail/d_second__functions.h"
// Member `msg_cnt`
#include "j2735_v2x_msgs/msg/detail/msg_count__functions.h"
// Member `id`
#include "j2735_v2x_msgs/msg/detail/temporary_id__functions.h"
// Member `position`
#include "j2735_v2x_msgs/msg/detail/position3_d__functions.h"
// Member `accuracy`
#include "j2735_v2x_msgs/msg/detail/positional_accuracy__functions.h"
// Member `speed`
#include "j2735_v2x_msgs/msg/detail/velocity__functions.h"
// Member `heading`
#include "j2735_v2x_msgs/msg/detail/heading__functions.h"
// Member `accel_set`
#include "j2735_v2x_msgs/msg/detail/acceleration_set4_way__functions.h"
// Member `path_history`
#include "j2735_v2x_msgs/msg/detail/path_history__functions.h"
// Member `path_prediction`
#include "j2735_v2x_msgs/msg/detail/path_prediction__functions.h"
// Member `propulsion`
#include "j2735_v2x_msgs/msg/detail/propelled_information__functions.h"
// Member `use_state`
#include "j2735_v2x_msgs/msg/detail/personal_device_usage_state__functions.h"
// Member `cross_request`
#include "j2735_v2x_msgs/msg/detail/personal_crossing_request__functions.h"
// Member `cross_state`
#include "j2735_v2x_msgs/msg/detail/personal_crossing_in_progress__functions.h"
// Member `cluster_size`
#include "j2735_v2x_msgs/msg/detail/number_of_participants_in_cluster__functions.h"
// Member `cluster_radius`
#include "j2735_v2x_msgs/msg/detail/personal_cluster_radius__functions.h"
// Member `event_responder_type`
#include "j2735_v2x_msgs/msg/detail/public_safety_event_responder_worker_type__functions.h"
// Member `activity_type`
#include "j2735_v2x_msgs/msg/detail/public_safety_and_road_worker_activity__functions.h"
// Member `activity_sub_type`
#include "j2735_v2x_msgs/msg/detail/public_safety_directing_traffic_sub_type__functions.h"
// Member `assist_type`
#include "j2735_v2x_msgs/msg/detail/personal_assistive__functions.h"
// Member `sizing`
#include "j2735_v2x_msgs/msg/detail/user_size_and_behaviour__functions.h"
// Member `attachment`
#include "j2735_v2x_msgs/msg/detail/attachment__functions.h"
// Member `attachment_radius`
#include "j2735_v2x_msgs/msg/detail/attachment_radius__functions.h"
// Member `animal_type`
#include "j2735_v2x_msgs/msg/detail/animal_type__functions.h"

bool
j2735_v2x_msgs__msg__PSM__init(j2735_v2x_msgs__msg__PSM * msg)
{
  if (!msg) {
    return false;
  }
  // presence_vector
  // basic_type
  if (!j2735_v2x_msgs__msg__PersonalDeviceUserType__init(&msg->basic_type)) {
    j2735_v2x_msgs__msg__PSM__fini(msg);
    return false;
  }
  // sec_mark
  if (!j2735_v2x_msgs__msg__DSecond__init(&msg->sec_mark)) {
    j2735_v2x_msgs__msg__PSM__fini(msg);
    return false;
  }
  // msg_cnt
  if (!j2735_v2x_msgs__msg__MsgCount__init(&msg->msg_cnt)) {
    j2735_v2x_msgs__msg__PSM__fini(msg);
    return false;
  }
  // id
  if (!j2735_v2x_msgs__msg__TemporaryID__init(&msg->id)) {
    j2735_v2x_msgs__msg__PSM__fini(msg);
    return false;
  }
  // position
  if (!j2735_v2x_msgs__msg__Position3D__init(&msg->position)) {
    j2735_v2x_msgs__msg__PSM__fini(msg);
    return false;
  }
  // accuracy
  if (!j2735_v2x_msgs__msg__PositionalAccuracy__init(&msg->accuracy)) {
    j2735_v2x_msgs__msg__PSM__fini(msg);
    return false;
  }
  // speed
  if (!j2735_v2x_msgs__msg__Velocity__init(&msg->speed)) {
    j2735_v2x_msgs__msg__PSM__fini(msg);
    return false;
  }
  // heading
  if (!j2735_v2x_msgs__msg__Heading__init(&msg->heading)) {
    j2735_v2x_msgs__msg__PSM__fini(msg);
    return false;
  }
  // accel_set
  if (!j2735_v2x_msgs__msg__AccelerationSet4Way__init(&msg->accel_set)) {
    j2735_v2x_msgs__msg__PSM__fini(msg);
    return false;
  }
  // path_history
  if (!j2735_v2x_msgs__msg__PathHistory__init(&msg->path_history)) {
    j2735_v2x_msgs__msg__PSM__fini(msg);
    return false;
  }
  // path_prediction
  if (!j2735_v2x_msgs__msg__PathPrediction__init(&msg->path_prediction)) {
    j2735_v2x_msgs__msg__PSM__fini(msg);
    return false;
  }
  // propulsion
  if (!j2735_v2x_msgs__msg__PropelledInformation__init(&msg->propulsion)) {
    j2735_v2x_msgs__msg__PSM__fini(msg);
    return false;
  }
  // use_state
  if (!j2735_v2x_msgs__msg__PersonalDeviceUsageState__init(&msg->use_state)) {
    j2735_v2x_msgs__msg__PSM__fini(msg);
    return false;
  }
  // cross_request
  if (!j2735_v2x_msgs__msg__PersonalCrossingRequest__init(&msg->cross_request)) {
    j2735_v2x_msgs__msg__PSM__fini(msg);
    return false;
  }
  // cross_state
  if (!j2735_v2x_msgs__msg__PersonalCrossingInProgress__init(&msg->cross_state)) {
    j2735_v2x_msgs__msg__PSM__fini(msg);
    return false;
  }
  // cluster_size
  if (!j2735_v2x_msgs__msg__NumberOfParticipantsInCluster__init(&msg->cluster_size)) {
    j2735_v2x_msgs__msg__PSM__fini(msg);
    return false;
  }
  // cluster_radius
  if (!j2735_v2x_msgs__msg__PersonalClusterRadius__init(&msg->cluster_radius)) {
    j2735_v2x_msgs__msg__PSM__fini(msg);
    return false;
  }
  // event_responder_type
  if (!j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__init(&msg->event_responder_type)) {
    j2735_v2x_msgs__msg__PSM__fini(msg);
    return false;
  }
  // activity_type
  if (!j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__init(&msg->activity_type)) {
    j2735_v2x_msgs__msg__PSM__fini(msg);
    return false;
  }
  // activity_sub_type
  if (!j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__init(&msg->activity_sub_type)) {
    j2735_v2x_msgs__msg__PSM__fini(msg);
    return false;
  }
  // assist_type
  if (!j2735_v2x_msgs__msg__PersonalAssistive__init(&msg->assist_type)) {
    j2735_v2x_msgs__msg__PSM__fini(msg);
    return false;
  }
  // sizing
  if (!j2735_v2x_msgs__msg__UserSizeAndBehaviour__init(&msg->sizing)) {
    j2735_v2x_msgs__msg__PSM__fini(msg);
    return false;
  }
  // attachment
  if (!j2735_v2x_msgs__msg__Attachment__init(&msg->attachment)) {
    j2735_v2x_msgs__msg__PSM__fini(msg);
    return false;
  }
  // attachment_radius
  if (!j2735_v2x_msgs__msg__AttachmentRadius__init(&msg->attachment_radius)) {
    j2735_v2x_msgs__msg__PSM__fini(msg);
    return false;
  }
  // animal_type
  if (!j2735_v2x_msgs__msg__AnimalType__init(&msg->animal_type)) {
    j2735_v2x_msgs__msg__PSM__fini(msg);
    return false;
  }
  return true;
}

void
j2735_v2x_msgs__msg__PSM__fini(j2735_v2x_msgs__msg__PSM * msg)
{
  if (!msg) {
    return;
  }
  // presence_vector
  // basic_type
  j2735_v2x_msgs__msg__PersonalDeviceUserType__fini(&msg->basic_type);
  // sec_mark
  j2735_v2x_msgs__msg__DSecond__fini(&msg->sec_mark);
  // msg_cnt
  j2735_v2x_msgs__msg__MsgCount__fini(&msg->msg_cnt);
  // id
  j2735_v2x_msgs__msg__TemporaryID__fini(&msg->id);
  // position
  j2735_v2x_msgs__msg__Position3D__fini(&msg->position);
  // accuracy
  j2735_v2x_msgs__msg__PositionalAccuracy__fini(&msg->accuracy);
  // speed
  j2735_v2x_msgs__msg__Velocity__fini(&msg->speed);
  // heading
  j2735_v2x_msgs__msg__Heading__fini(&msg->heading);
  // accel_set
  j2735_v2x_msgs__msg__AccelerationSet4Way__fini(&msg->accel_set);
  // path_history
  j2735_v2x_msgs__msg__PathHistory__fini(&msg->path_history);
  // path_prediction
  j2735_v2x_msgs__msg__PathPrediction__fini(&msg->path_prediction);
  // propulsion
  j2735_v2x_msgs__msg__PropelledInformation__fini(&msg->propulsion);
  // use_state
  j2735_v2x_msgs__msg__PersonalDeviceUsageState__fini(&msg->use_state);
  // cross_request
  j2735_v2x_msgs__msg__PersonalCrossingRequest__fini(&msg->cross_request);
  // cross_state
  j2735_v2x_msgs__msg__PersonalCrossingInProgress__fini(&msg->cross_state);
  // cluster_size
  j2735_v2x_msgs__msg__NumberOfParticipantsInCluster__fini(&msg->cluster_size);
  // cluster_radius
  j2735_v2x_msgs__msg__PersonalClusterRadius__fini(&msg->cluster_radius);
  // event_responder_type
  j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__fini(&msg->event_responder_type);
  // activity_type
  j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__fini(&msg->activity_type);
  // activity_sub_type
  j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__fini(&msg->activity_sub_type);
  // assist_type
  j2735_v2x_msgs__msg__PersonalAssistive__fini(&msg->assist_type);
  // sizing
  j2735_v2x_msgs__msg__UserSizeAndBehaviour__fini(&msg->sizing);
  // attachment
  j2735_v2x_msgs__msg__Attachment__fini(&msg->attachment);
  // attachment_radius
  j2735_v2x_msgs__msg__AttachmentRadius__fini(&msg->attachment_radius);
  // animal_type
  j2735_v2x_msgs__msg__AnimalType__fini(&msg->animal_type);
}

bool
j2735_v2x_msgs__msg__PSM__are_equal(const j2735_v2x_msgs__msg__PSM * lhs, const j2735_v2x_msgs__msg__PSM * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // presence_vector
  if (lhs->presence_vector != rhs->presence_vector) {
    return false;
  }
  // basic_type
  if (!j2735_v2x_msgs__msg__PersonalDeviceUserType__are_equal(
      &(lhs->basic_type), &(rhs->basic_type)))
  {
    return false;
  }
  // sec_mark
  if (!j2735_v2x_msgs__msg__DSecond__are_equal(
      &(lhs->sec_mark), &(rhs->sec_mark)))
  {
    return false;
  }
  // msg_cnt
  if (!j2735_v2x_msgs__msg__MsgCount__are_equal(
      &(lhs->msg_cnt), &(rhs->msg_cnt)))
  {
    return false;
  }
  // id
  if (!j2735_v2x_msgs__msg__TemporaryID__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // position
  if (!j2735_v2x_msgs__msg__Position3D__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // accuracy
  if (!j2735_v2x_msgs__msg__PositionalAccuracy__are_equal(
      &(lhs->accuracy), &(rhs->accuracy)))
  {
    return false;
  }
  // speed
  if (!j2735_v2x_msgs__msg__Velocity__are_equal(
      &(lhs->speed), &(rhs->speed)))
  {
    return false;
  }
  // heading
  if (!j2735_v2x_msgs__msg__Heading__are_equal(
      &(lhs->heading), &(rhs->heading)))
  {
    return false;
  }
  // accel_set
  if (!j2735_v2x_msgs__msg__AccelerationSet4Way__are_equal(
      &(lhs->accel_set), &(rhs->accel_set)))
  {
    return false;
  }
  // path_history
  if (!j2735_v2x_msgs__msg__PathHistory__are_equal(
      &(lhs->path_history), &(rhs->path_history)))
  {
    return false;
  }
  // path_prediction
  if (!j2735_v2x_msgs__msg__PathPrediction__are_equal(
      &(lhs->path_prediction), &(rhs->path_prediction)))
  {
    return false;
  }
  // propulsion
  if (!j2735_v2x_msgs__msg__PropelledInformation__are_equal(
      &(lhs->propulsion), &(rhs->propulsion)))
  {
    return false;
  }
  // use_state
  if (!j2735_v2x_msgs__msg__PersonalDeviceUsageState__are_equal(
      &(lhs->use_state), &(rhs->use_state)))
  {
    return false;
  }
  // cross_request
  if (!j2735_v2x_msgs__msg__PersonalCrossingRequest__are_equal(
      &(lhs->cross_request), &(rhs->cross_request)))
  {
    return false;
  }
  // cross_state
  if (!j2735_v2x_msgs__msg__PersonalCrossingInProgress__are_equal(
      &(lhs->cross_state), &(rhs->cross_state)))
  {
    return false;
  }
  // cluster_size
  if (!j2735_v2x_msgs__msg__NumberOfParticipantsInCluster__are_equal(
      &(lhs->cluster_size), &(rhs->cluster_size)))
  {
    return false;
  }
  // cluster_radius
  if (!j2735_v2x_msgs__msg__PersonalClusterRadius__are_equal(
      &(lhs->cluster_radius), &(rhs->cluster_radius)))
  {
    return false;
  }
  // event_responder_type
  if (!j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__are_equal(
      &(lhs->event_responder_type), &(rhs->event_responder_type)))
  {
    return false;
  }
  // activity_type
  if (!j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__are_equal(
      &(lhs->activity_type), &(rhs->activity_type)))
  {
    return false;
  }
  // activity_sub_type
  if (!j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__are_equal(
      &(lhs->activity_sub_type), &(rhs->activity_sub_type)))
  {
    return false;
  }
  // assist_type
  if (!j2735_v2x_msgs__msg__PersonalAssistive__are_equal(
      &(lhs->assist_type), &(rhs->assist_type)))
  {
    return false;
  }
  // sizing
  if (!j2735_v2x_msgs__msg__UserSizeAndBehaviour__are_equal(
      &(lhs->sizing), &(rhs->sizing)))
  {
    return false;
  }
  // attachment
  if (!j2735_v2x_msgs__msg__Attachment__are_equal(
      &(lhs->attachment), &(rhs->attachment)))
  {
    return false;
  }
  // attachment_radius
  if (!j2735_v2x_msgs__msg__AttachmentRadius__are_equal(
      &(lhs->attachment_radius), &(rhs->attachment_radius)))
  {
    return false;
  }
  // animal_type
  if (!j2735_v2x_msgs__msg__AnimalType__are_equal(
      &(lhs->animal_type), &(rhs->animal_type)))
  {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__PSM__copy(
  const j2735_v2x_msgs__msg__PSM * input,
  j2735_v2x_msgs__msg__PSM * output)
{
  if (!input || !output) {
    return false;
  }
  // presence_vector
  output->presence_vector = input->presence_vector;
  // basic_type
  if (!j2735_v2x_msgs__msg__PersonalDeviceUserType__copy(
      &(input->basic_type), &(output->basic_type)))
  {
    return false;
  }
  // sec_mark
  if (!j2735_v2x_msgs__msg__DSecond__copy(
      &(input->sec_mark), &(output->sec_mark)))
  {
    return false;
  }
  // msg_cnt
  if (!j2735_v2x_msgs__msg__MsgCount__copy(
      &(input->msg_cnt), &(output->msg_cnt)))
  {
    return false;
  }
  // id
  if (!j2735_v2x_msgs__msg__TemporaryID__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // position
  if (!j2735_v2x_msgs__msg__Position3D__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // accuracy
  if (!j2735_v2x_msgs__msg__PositionalAccuracy__copy(
      &(input->accuracy), &(output->accuracy)))
  {
    return false;
  }
  // speed
  if (!j2735_v2x_msgs__msg__Velocity__copy(
      &(input->speed), &(output->speed)))
  {
    return false;
  }
  // heading
  if (!j2735_v2x_msgs__msg__Heading__copy(
      &(input->heading), &(output->heading)))
  {
    return false;
  }
  // accel_set
  if (!j2735_v2x_msgs__msg__AccelerationSet4Way__copy(
      &(input->accel_set), &(output->accel_set)))
  {
    return false;
  }
  // path_history
  if (!j2735_v2x_msgs__msg__PathHistory__copy(
      &(input->path_history), &(output->path_history)))
  {
    return false;
  }
  // path_prediction
  if (!j2735_v2x_msgs__msg__PathPrediction__copy(
      &(input->path_prediction), &(output->path_prediction)))
  {
    return false;
  }
  // propulsion
  if (!j2735_v2x_msgs__msg__PropelledInformation__copy(
      &(input->propulsion), &(output->propulsion)))
  {
    return false;
  }
  // use_state
  if (!j2735_v2x_msgs__msg__PersonalDeviceUsageState__copy(
      &(input->use_state), &(output->use_state)))
  {
    return false;
  }
  // cross_request
  if (!j2735_v2x_msgs__msg__PersonalCrossingRequest__copy(
      &(input->cross_request), &(output->cross_request)))
  {
    return false;
  }
  // cross_state
  if (!j2735_v2x_msgs__msg__PersonalCrossingInProgress__copy(
      &(input->cross_state), &(output->cross_state)))
  {
    return false;
  }
  // cluster_size
  if (!j2735_v2x_msgs__msg__NumberOfParticipantsInCluster__copy(
      &(input->cluster_size), &(output->cluster_size)))
  {
    return false;
  }
  // cluster_radius
  if (!j2735_v2x_msgs__msg__PersonalClusterRadius__copy(
      &(input->cluster_radius), &(output->cluster_radius)))
  {
    return false;
  }
  // event_responder_type
  if (!j2735_v2x_msgs__msg__PublicSafetyEventResponderWorkerType__copy(
      &(input->event_responder_type), &(output->event_responder_type)))
  {
    return false;
  }
  // activity_type
  if (!j2735_v2x_msgs__msg__PublicSafetyAndRoadWorkerActivity__copy(
      &(input->activity_type), &(output->activity_type)))
  {
    return false;
  }
  // activity_sub_type
  if (!j2735_v2x_msgs__msg__PublicSafetyDirectingTrafficSubType__copy(
      &(input->activity_sub_type), &(output->activity_sub_type)))
  {
    return false;
  }
  // assist_type
  if (!j2735_v2x_msgs__msg__PersonalAssistive__copy(
      &(input->assist_type), &(output->assist_type)))
  {
    return false;
  }
  // sizing
  if (!j2735_v2x_msgs__msg__UserSizeAndBehaviour__copy(
      &(input->sizing), &(output->sizing)))
  {
    return false;
  }
  // attachment
  if (!j2735_v2x_msgs__msg__Attachment__copy(
      &(input->attachment), &(output->attachment)))
  {
    return false;
  }
  // attachment_radius
  if (!j2735_v2x_msgs__msg__AttachmentRadius__copy(
      &(input->attachment_radius), &(output->attachment_radius)))
  {
    return false;
  }
  // animal_type
  if (!j2735_v2x_msgs__msg__AnimalType__copy(
      &(input->animal_type), &(output->animal_type)))
  {
    return false;
  }
  return true;
}

j2735_v2x_msgs__msg__PSM *
j2735_v2x_msgs__msg__PSM__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__PSM * msg = (j2735_v2x_msgs__msg__PSM *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__PSM), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__PSM));
  bool success = j2735_v2x_msgs__msg__PSM__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__PSM__destroy(j2735_v2x_msgs__msg__PSM * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__PSM__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__PSM__Sequence__init(j2735_v2x_msgs__msg__PSM__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__PSM * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__PSM *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__PSM), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__PSM__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__PSM__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
j2735_v2x_msgs__msg__PSM__Sequence__fini(j2735_v2x_msgs__msg__PSM__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      j2735_v2x_msgs__msg__PSM__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

j2735_v2x_msgs__msg__PSM__Sequence *
j2735_v2x_msgs__msg__PSM__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__PSM__Sequence * array = (j2735_v2x_msgs__msg__PSM__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__PSM__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__PSM__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__PSM__Sequence__destroy(j2735_v2x_msgs__msg__PSM__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__PSM__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__PSM__Sequence__are_equal(const j2735_v2x_msgs__msg__PSM__Sequence * lhs, const j2735_v2x_msgs__msg__PSM__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__PSM__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__PSM__Sequence__copy(
  const j2735_v2x_msgs__msg__PSM__Sequence * input,
  j2735_v2x_msgs__msg__PSM__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__PSM);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__PSM * data =
      (j2735_v2x_msgs__msg__PSM *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__PSM__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__PSM__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__PSM__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
