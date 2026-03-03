// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/VehicleSafetyExtensions.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/vehicle_safety_extensions__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `events`
#include "j2735_v2x_msgs/msg/detail/vehicle_event_flags__functions.h"
// Member `path_history`
#include "j2735_v2x_msgs/msg/detail/path_history__functions.h"
// Member `path_prediction`
#include "j2735_v2x_msgs/msg/detail/path_prediction__functions.h"
// Member `lights`
#include "j2735_v2x_msgs/msg/detail/exterior_lights__functions.h"

bool
j2735_v2x_msgs__msg__VehicleSafetyExtensions__init(j2735_v2x_msgs__msg__VehicleSafetyExtensions * msg)
{
  if (!msg) {
    return false;
  }
  // presence_vector
  // events
  if (!j2735_v2x_msgs__msg__VehicleEventFlags__init(&msg->events)) {
    j2735_v2x_msgs__msg__VehicleSafetyExtensions__fini(msg);
    return false;
  }
  // path_history
  if (!j2735_v2x_msgs__msg__PathHistory__init(&msg->path_history)) {
    j2735_v2x_msgs__msg__VehicleSafetyExtensions__fini(msg);
    return false;
  }
  // path_prediction
  if (!j2735_v2x_msgs__msg__PathPrediction__init(&msg->path_prediction)) {
    j2735_v2x_msgs__msg__VehicleSafetyExtensions__fini(msg);
    return false;
  }
  // lights
  if (!j2735_v2x_msgs__msg__ExteriorLights__init(&msg->lights)) {
    j2735_v2x_msgs__msg__VehicleSafetyExtensions__fini(msg);
    return false;
  }
  return true;
}

void
j2735_v2x_msgs__msg__VehicleSafetyExtensions__fini(j2735_v2x_msgs__msg__VehicleSafetyExtensions * msg)
{
  if (!msg) {
    return;
  }
  // presence_vector
  // events
  j2735_v2x_msgs__msg__VehicleEventFlags__fini(&msg->events);
  // path_history
  j2735_v2x_msgs__msg__PathHistory__fini(&msg->path_history);
  // path_prediction
  j2735_v2x_msgs__msg__PathPrediction__fini(&msg->path_prediction);
  // lights
  j2735_v2x_msgs__msg__ExteriorLights__fini(&msg->lights);
}

bool
j2735_v2x_msgs__msg__VehicleSafetyExtensions__are_equal(const j2735_v2x_msgs__msg__VehicleSafetyExtensions * lhs, const j2735_v2x_msgs__msg__VehicleSafetyExtensions * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // presence_vector
  if (lhs->presence_vector != rhs->presence_vector) {
    return false;
  }
  // events
  if (!j2735_v2x_msgs__msg__VehicleEventFlags__are_equal(
      &(lhs->events), &(rhs->events)))
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
  // lights
  if (!j2735_v2x_msgs__msg__ExteriorLights__are_equal(
      &(lhs->lights), &(rhs->lights)))
  {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__VehicleSafetyExtensions__copy(
  const j2735_v2x_msgs__msg__VehicleSafetyExtensions * input,
  j2735_v2x_msgs__msg__VehicleSafetyExtensions * output)
{
  if (!input || !output) {
    return false;
  }
  // presence_vector
  output->presence_vector = input->presence_vector;
  // events
  if (!j2735_v2x_msgs__msg__VehicleEventFlags__copy(
      &(input->events), &(output->events)))
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
  // lights
  if (!j2735_v2x_msgs__msg__ExteriorLights__copy(
      &(input->lights), &(output->lights)))
  {
    return false;
  }
  return true;
}

j2735_v2x_msgs__msg__VehicleSafetyExtensions *
j2735_v2x_msgs__msg__VehicleSafetyExtensions__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__VehicleSafetyExtensions * msg = (j2735_v2x_msgs__msg__VehicleSafetyExtensions *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__VehicleSafetyExtensions), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__VehicleSafetyExtensions));
  bool success = j2735_v2x_msgs__msg__VehicleSafetyExtensions__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__VehicleSafetyExtensions__destroy(j2735_v2x_msgs__msg__VehicleSafetyExtensions * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__VehicleSafetyExtensions__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__VehicleSafetyExtensions__Sequence__init(j2735_v2x_msgs__msg__VehicleSafetyExtensions__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__VehicleSafetyExtensions * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__VehicleSafetyExtensions *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__VehicleSafetyExtensions), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__VehicleSafetyExtensions__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__VehicleSafetyExtensions__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__VehicleSafetyExtensions__Sequence__fini(j2735_v2x_msgs__msg__VehicleSafetyExtensions__Sequence * array)
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
      j2735_v2x_msgs__msg__VehicleSafetyExtensions__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__VehicleSafetyExtensions__Sequence *
j2735_v2x_msgs__msg__VehicleSafetyExtensions__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__VehicleSafetyExtensions__Sequence * array = (j2735_v2x_msgs__msg__VehicleSafetyExtensions__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__VehicleSafetyExtensions__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__VehicleSafetyExtensions__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__VehicleSafetyExtensions__Sequence__destroy(j2735_v2x_msgs__msg__VehicleSafetyExtensions__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__VehicleSafetyExtensions__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__VehicleSafetyExtensions__Sequence__are_equal(const j2735_v2x_msgs__msg__VehicleSafetyExtensions__Sequence * lhs, const j2735_v2x_msgs__msg__VehicleSafetyExtensions__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__VehicleSafetyExtensions__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__VehicleSafetyExtensions__Sequence__copy(
  const j2735_v2x_msgs__msg__VehicleSafetyExtensions__Sequence * input,
  j2735_v2x_msgs__msg__VehicleSafetyExtensions__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__VehicleSafetyExtensions);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__VehicleSafetyExtensions * data =
      (j2735_v2x_msgs__msg__VehicleSafetyExtensions *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__VehicleSafetyExtensions__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__VehicleSafetyExtensions__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__VehicleSafetyExtensions__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
