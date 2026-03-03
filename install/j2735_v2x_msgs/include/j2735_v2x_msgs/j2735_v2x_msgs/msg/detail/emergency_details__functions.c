// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/EmergencyDetails.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/emergency_details__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `siren_use`
#include "j2735_v2x_msgs/msg/detail/siren_in_use__functions.h"
// Member `lights_use`
#include "j2735_v2x_msgs/msg/detail/lightbar_in_use__functions.h"
// Member `multi`
#include "j2735_v2x_msgs/msg/detail/multi_vehicle_response__functions.h"
// Member `events`
#include "j2735_v2x_msgs/msg/detail/privileged_events__functions.h"
// Member `response_type`
#include "j2735_v2x_msgs/msg/detail/response_type__functions.h"

bool
j2735_v2x_msgs__msg__EmergencyDetails__init(j2735_v2x_msgs__msg__EmergencyDetails * msg)
{
  if (!msg) {
    return false;
  }
  // presence_vector
  // ssp_index
  // siren_use
  if (!j2735_v2x_msgs__msg__SirenInUse__init(&msg->siren_use)) {
    j2735_v2x_msgs__msg__EmergencyDetails__fini(msg);
    return false;
  }
  // lights_use
  if (!j2735_v2x_msgs__msg__LightbarInUse__init(&msg->lights_use)) {
    j2735_v2x_msgs__msg__EmergencyDetails__fini(msg);
    return false;
  }
  // multi
  if (!j2735_v2x_msgs__msg__MultiVehicleResponse__init(&msg->multi)) {
    j2735_v2x_msgs__msg__EmergencyDetails__fini(msg);
    return false;
  }
  // events
  if (!j2735_v2x_msgs__msg__PrivilegedEvents__init(&msg->events)) {
    j2735_v2x_msgs__msg__EmergencyDetails__fini(msg);
    return false;
  }
  // response_type
  if (!j2735_v2x_msgs__msg__ResponseType__init(&msg->response_type)) {
    j2735_v2x_msgs__msg__EmergencyDetails__fini(msg);
    return false;
  }
  return true;
}

void
j2735_v2x_msgs__msg__EmergencyDetails__fini(j2735_v2x_msgs__msg__EmergencyDetails * msg)
{
  if (!msg) {
    return;
  }
  // presence_vector
  // ssp_index
  // siren_use
  j2735_v2x_msgs__msg__SirenInUse__fini(&msg->siren_use);
  // lights_use
  j2735_v2x_msgs__msg__LightbarInUse__fini(&msg->lights_use);
  // multi
  j2735_v2x_msgs__msg__MultiVehicleResponse__fini(&msg->multi);
  // events
  j2735_v2x_msgs__msg__PrivilegedEvents__fini(&msg->events);
  // response_type
  j2735_v2x_msgs__msg__ResponseType__fini(&msg->response_type);
}

bool
j2735_v2x_msgs__msg__EmergencyDetails__are_equal(const j2735_v2x_msgs__msg__EmergencyDetails * lhs, const j2735_v2x_msgs__msg__EmergencyDetails * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // presence_vector
  if (lhs->presence_vector != rhs->presence_vector) {
    return false;
  }
  // ssp_index
  if (lhs->ssp_index != rhs->ssp_index) {
    return false;
  }
  // siren_use
  if (!j2735_v2x_msgs__msg__SirenInUse__are_equal(
      &(lhs->siren_use), &(rhs->siren_use)))
  {
    return false;
  }
  // lights_use
  if (!j2735_v2x_msgs__msg__LightbarInUse__are_equal(
      &(lhs->lights_use), &(rhs->lights_use)))
  {
    return false;
  }
  // multi
  if (!j2735_v2x_msgs__msg__MultiVehicleResponse__are_equal(
      &(lhs->multi), &(rhs->multi)))
  {
    return false;
  }
  // events
  if (!j2735_v2x_msgs__msg__PrivilegedEvents__are_equal(
      &(lhs->events), &(rhs->events)))
  {
    return false;
  }
  // response_type
  if (!j2735_v2x_msgs__msg__ResponseType__are_equal(
      &(lhs->response_type), &(rhs->response_type)))
  {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__EmergencyDetails__copy(
  const j2735_v2x_msgs__msg__EmergencyDetails * input,
  j2735_v2x_msgs__msg__EmergencyDetails * output)
{
  if (!input || !output) {
    return false;
  }
  // presence_vector
  output->presence_vector = input->presence_vector;
  // ssp_index
  output->ssp_index = input->ssp_index;
  // siren_use
  if (!j2735_v2x_msgs__msg__SirenInUse__copy(
      &(input->siren_use), &(output->siren_use)))
  {
    return false;
  }
  // lights_use
  if (!j2735_v2x_msgs__msg__LightbarInUse__copy(
      &(input->lights_use), &(output->lights_use)))
  {
    return false;
  }
  // multi
  if (!j2735_v2x_msgs__msg__MultiVehicleResponse__copy(
      &(input->multi), &(output->multi)))
  {
    return false;
  }
  // events
  if (!j2735_v2x_msgs__msg__PrivilegedEvents__copy(
      &(input->events), &(output->events)))
  {
    return false;
  }
  // response_type
  if (!j2735_v2x_msgs__msg__ResponseType__copy(
      &(input->response_type), &(output->response_type)))
  {
    return false;
  }
  return true;
}

j2735_v2x_msgs__msg__EmergencyDetails *
j2735_v2x_msgs__msg__EmergencyDetails__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__EmergencyDetails * msg = (j2735_v2x_msgs__msg__EmergencyDetails *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__EmergencyDetails), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__EmergencyDetails));
  bool success = j2735_v2x_msgs__msg__EmergencyDetails__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__EmergencyDetails__destroy(j2735_v2x_msgs__msg__EmergencyDetails * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__EmergencyDetails__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__EmergencyDetails__Sequence__init(j2735_v2x_msgs__msg__EmergencyDetails__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__EmergencyDetails * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__EmergencyDetails *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__EmergencyDetails), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__EmergencyDetails__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__EmergencyDetails__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__EmergencyDetails__Sequence__fini(j2735_v2x_msgs__msg__EmergencyDetails__Sequence * array)
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
      j2735_v2x_msgs__msg__EmergencyDetails__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__EmergencyDetails__Sequence *
j2735_v2x_msgs__msg__EmergencyDetails__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__EmergencyDetails__Sequence * array = (j2735_v2x_msgs__msg__EmergencyDetails__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__EmergencyDetails__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__EmergencyDetails__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__EmergencyDetails__Sequence__destroy(j2735_v2x_msgs__msg__EmergencyDetails__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__EmergencyDetails__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__EmergencyDetails__Sequence__are_equal(const j2735_v2x_msgs__msg__EmergencyDetails__Sequence * lhs, const j2735_v2x_msgs__msg__EmergencyDetails__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__EmergencyDetails__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__EmergencyDetails__Sequence__copy(
  const j2735_v2x_msgs__msg__EmergencyDetails__Sequence * input,
  j2735_v2x_msgs__msg__EmergencyDetails__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__EmergencyDetails);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__EmergencyDetails * data =
      (j2735_v2x_msgs__msg__EmergencyDetails *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__EmergencyDetails__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__EmergencyDetails__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__EmergencyDetails__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
