// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/ConnectionManeuverAssist.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/connection_maneuver_assist__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
j2735_v2x_msgs__msg__ConnectionManeuverAssist__init(j2735_v2x_msgs__msg__ConnectionManeuverAssist * msg)
{
  if (!msg) {
    return false;
  }
  // connection_id
  // queue_length
  // queue_length_exists
  // available_storage_length
  // available_storage_length_exists
  // wait_on_stop
  // wait_on_stop_exists
  // ped_bicycle_detect
  // ped_bicycle_detect_exists
  return true;
}

void
j2735_v2x_msgs__msg__ConnectionManeuverAssist__fini(j2735_v2x_msgs__msg__ConnectionManeuverAssist * msg)
{
  if (!msg) {
    return;
  }
  // connection_id
  // queue_length
  // queue_length_exists
  // available_storage_length
  // available_storage_length_exists
  // wait_on_stop
  // wait_on_stop_exists
  // ped_bicycle_detect
  // ped_bicycle_detect_exists
}

bool
j2735_v2x_msgs__msg__ConnectionManeuverAssist__are_equal(const j2735_v2x_msgs__msg__ConnectionManeuverAssist * lhs, const j2735_v2x_msgs__msg__ConnectionManeuverAssist * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // connection_id
  if (lhs->connection_id != rhs->connection_id) {
    return false;
  }
  // queue_length
  if (lhs->queue_length != rhs->queue_length) {
    return false;
  }
  // queue_length_exists
  if (lhs->queue_length_exists != rhs->queue_length_exists) {
    return false;
  }
  // available_storage_length
  if (lhs->available_storage_length != rhs->available_storage_length) {
    return false;
  }
  // available_storage_length_exists
  if (lhs->available_storage_length_exists != rhs->available_storage_length_exists) {
    return false;
  }
  // wait_on_stop
  if (lhs->wait_on_stop != rhs->wait_on_stop) {
    return false;
  }
  // wait_on_stop_exists
  if (lhs->wait_on_stop_exists != rhs->wait_on_stop_exists) {
    return false;
  }
  // ped_bicycle_detect
  if (lhs->ped_bicycle_detect != rhs->ped_bicycle_detect) {
    return false;
  }
  // ped_bicycle_detect_exists
  if (lhs->ped_bicycle_detect_exists != rhs->ped_bicycle_detect_exists) {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__ConnectionManeuverAssist__copy(
  const j2735_v2x_msgs__msg__ConnectionManeuverAssist * input,
  j2735_v2x_msgs__msg__ConnectionManeuverAssist * output)
{
  if (!input || !output) {
    return false;
  }
  // connection_id
  output->connection_id = input->connection_id;
  // queue_length
  output->queue_length = input->queue_length;
  // queue_length_exists
  output->queue_length_exists = input->queue_length_exists;
  // available_storage_length
  output->available_storage_length = input->available_storage_length;
  // available_storage_length_exists
  output->available_storage_length_exists = input->available_storage_length_exists;
  // wait_on_stop
  output->wait_on_stop = input->wait_on_stop;
  // wait_on_stop_exists
  output->wait_on_stop_exists = input->wait_on_stop_exists;
  // ped_bicycle_detect
  output->ped_bicycle_detect = input->ped_bicycle_detect;
  // ped_bicycle_detect_exists
  output->ped_bicycle_detect_exists = input->ped_bicycle_detect_exists;
  return true;
}

j2735_v2x_msgs__msg__ConnectionManeuverAssist *
j2735_v2x_msgs__msg__ConnectionManeuverAssist__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__ConnectionManeuverAssist * msg = (j2735_v2x_msgs__msg__ConnectionManeuverAssist *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__ConnectionManeuverAssist), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__ConnectionManeuverAssist));
  bool success = j2735_v2x_msgs__msg__ConnectionManeuverAssist__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__ConnectionManeuverAssist__destroy(j2735_v2x_msgs__msg__ConnectionManeuverAssist * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__ConnectionManeuverAssist__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence__init(j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__ConnectionManeuverAssist * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__ConnectionManeuverAssist *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__ConnectionManeuverAssist), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__ConnectionManeuverAssist__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__ConnectionManeuverAssist__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence__fini(j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence * array)
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
      j2735_v2x_msgs__msg__ConnectionManeuverAssist__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence *
j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence * array = (j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence__destroy(j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence__are_equal(const j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence * lhs, const j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__ConnectionManeuverAssist__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence__copy(
  const j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence * input,
  j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__ConnectionManeuverAssist);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__ConnectionManeuverAssist * data =
      (j2735_v2x_msgs__msg__ConnectionManeuverAssist *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__ConnectionManeuverAssist__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__ConnectionManeuverAssist__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__ConnectionManeuverAssist__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
