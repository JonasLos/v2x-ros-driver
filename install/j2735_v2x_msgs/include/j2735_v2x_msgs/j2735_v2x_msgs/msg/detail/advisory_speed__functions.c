// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/AdvisorySpeed.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/advisory_speed__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type`
#include "j2735_v2x_msgs/msg/detail/advisory_speed_type__functions.h"
// Member `confidence`
#include "j2735_v2x_msgs/msg/detail/speed_confidence__functions.h"

bool
j2735_v2x_msgs__msg__AdvisorySpeed__init(j2735_v2x_msgs__msg__AdvisorySpeed * msg)
{
  if (!msg) {
    return false;
  }
  // type
  if (!j2735_v2x_msgs__msg__AdvisorySpeedType__init(&msg->type)) {
    j2735_v2x_msgs__msg__AdvisorySpeed__fini(msg);
    return false;
  }
  // speed
  // speed_exists
  // confidence
  if (!j2735_v2x_msgs__msg__SpeedConfidence__init(&msg->confidence)) {
    j2735_v2x_msgs__msg__AdvisorySpeed__fini(msg);
    return false;
  }
  // distance
  // distance_exists
  // restriction_class_id
  // restriction_class_id_exists
  return true;
}

void
j2735_v2x_msgs__msg__AdvisorySpeed__fini(j2735_v2x_msgs__msg__AdvisorySpeed * msg)
{
  if (!msg) {
    return;
  }
  // type
  j2735_v2x_msgs__msg__AdvisorySpeedType__fini(&msg->type);
  // speed
  // speed_exists
  // confidence
  j2735_v2x_msgs__msg__SpeedConfidence__fini(&msg->confidence);
  // distance
  // distance_exists
  // restriction_class_id
  // restriction_class_id_exists
}

bool
j2735_v2x_msgs__msg__AdvisorySpeed__are_equal(const j2735_v2x_msgs__msg__AdvisorySpeed * lhs, const j2735_v2x_msgs__msg__AdvisorySpeed * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (!j2735_v2x_msgs__msg__AdvisorySpeedType__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // speed_exists
  if (lhs->speed_exists != rhs->speed_exists) {
    return false;
  }
  // confidence
  if (!j2735_v2x_msgs__msg__SpeedConfidence__are_equal(
      &(lhs->confidence), &(rhs->confidence)))
  {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // distance_exists
  if (lhs->distance_exists != rhs->distance_exists) {
    return false;
  }
  // restriction_class_id
  if (lhs->restriction_class_id != rhs->restriction_class_id) {
    return false;
  }
  // restriction_class_id_exists
  if (lhs->restriction_class_id_exists != rhs->restriction_class_id_exists) {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__AdvisorySpeed__copy(
  const j2735_v2x_msgs__msg__AdvisorySpeed * input,
  j2735_v2x_msgs__msg__AdvisorySpeed * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  if (!j2735_v2x_msgs__msg__AdvisorySpeedType__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // speed
  output->speed = input->speed;
  // speed_exists
  output->speed_exists = input->speed_exists;
  // confidence
  if (!j2735_v2x_msgs__msg__SpeedConfidence__copy(
      &(input->confidence), &(output->confidence)))
  {
    return false;
  }
  // distance
  output->distance = input->distance;
  // distance_exists
  output->distance_exists = input->distance_exists;
  // restriction_class_id
  output->restriction_class_id = input->restriction_class_id;
  // restriction_class_id_exists
  output->restriction_class_id_exists = input->restriction_class_id_exists;
  return true;
}

j2735_v2x_msgs__msg__AdvisorySpeed *
j2735_v2x_msgs__msg__AdvisorySpeed__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__AdvisorySpeed * msg = (j2735_v2x_msgs__msg__AdvisorySpeed *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__AdvisorySpeed), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__AdvisorySpeed));
  bool success = j2735_v2x_msgs__msg__AdvisorySpeed__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__AdvisorySpeed__destroy(j2735_v2x_msgs__msg__AdvisorySpeed * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__AdvisorySpeed__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__AdvisorySpeed__Sequence__init(j2735_v2x_msgs__msg__AdvisorySpeed__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__AdvisorySpeed * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__AdvisorySpeed *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__AdvisorySpeed), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__AdvisorySpeed__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__AdvisorySpeed__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__AdvisorySpeed__Sequence__fini(j2735_v2x_msgs__msg__AdvisorySpeed__Sequence * array)
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
      j2735_v2x_msgs__msg__AdvisorySpeed__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__AdvisorySpeed__Sequence *
j2735_v2x_msgs__msg__AdvisorySpeed__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__AdvisorySpeed__Sequence * array = (j2735_v2x_msgs__msg__AdvisorySpeed__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__AdvisorySpeed__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__AdvisorySpeed__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__AdvisorySpeed__Sequence__destroy(j2735_v2x_msgs__msg__AdvisorySpeed__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__AdvisorySpeed__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__AdvisorySpeed__Sequence__are_equal(const j2735_v2x_msgs__msg__AdvisorySpeed__Sequence * lhs, const j2735_v2x_msgs__msg__AdvisorySpeed__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__AdvisorySpeed__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__AdvisorySpeed__Sequence__copy(
  const j2735_v2x_msgs__msg__AdvisorySpeed__Sequence * input,
  j2735_v2x_msgs__msg__AdvisorySpeed__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__AdvisorySpeed);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__AdvisorySpeed * data =
      (j2735_v2x_msgs__msg__AdvisorySpeed *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__AdvisorySpeed__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__AdvisorySpeed__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__AdvisorySpeed__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
