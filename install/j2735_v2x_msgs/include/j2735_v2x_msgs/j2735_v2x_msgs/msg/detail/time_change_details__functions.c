// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/TimeChangeDetails.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/time_change_details__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
j2735_v2x_msgs__msg__TimeChangeDetails__init(j2735_v2x_msgs__msg__TimeChangeDetails * msg)
{
  if (!msg) {
    return false;
  }
  // start_time
  // start_time_exists
  // min_end_time
  // max_end_time
  // max_end_time_exists
  // likely_time
  // likely_time_exists
  // confidence
  // confidence_exists
  // next_time
  // next_time_exists
  return true;
}

void
j2735_v2x_msgs__msg__TimeChangeDetails__fini(j2735_v2x_msgs__msg__TimeChangeDetails * msg)
{
  if (!msg) {
    return;
  }
  // start_time
  // start_time_exists
  // min_end_time
  // max_end_time
  // max_end_time_exists
  // likely_time
  // likely_time_exists
  // confidence
  // confidence_exists
  // next_time
  // next_time_exists
}

bool
j2735_v2x_msgs__msg__TimeChangeDetails__are_equal(const j2735_v2x_msgs__msg__TimeChangeDetails * lhs, const j2735_v2x_msgs__msg__TimeChangeDetails * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start_time
  if (lhs->start_time != rhs->start_time) {
    return false;
  }
  // start_time_exists
  if (lhs->start_time_exists != rhs->start_time_exists) {
    return false;
  }
  // min_end_time
  if (lhs->min_end_time != rhs->min_end_time) {
    return false;
  }
  // max_end_time
  if (lhs->max_end_time != rhs->max_end_time) {
    return false;
  }
  // max_end_time_exists
  if (lhs->max_end_time_exists != rhs->max_end_time_exists) {
    return false;
  }
  // likely_time
  if (lhs->likely_time != rhs->likely_time) {
    return false;
  }
  // likely_time_exists
  if (lhs->likely_time_exists != rhs->likely_time_exists) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // confidence_exists
  if (lhs->confidence_exists != rhs->confidence_exists) {
    return false;
  }
  // next_time
  if (lhs->next_time != rhs->next_time) {
    return false;
  }
  // next_time_exists
  if (lhs->next_time_exists != rhs->next_time_exists) {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__TimeChangeDetails__copy(
  const j2735_v2x_msgs__msg__TimeChangeDetails * input,
  j2735_v2x_msgs__msg__TimeChangeDetails * output)
{
  if (!input || !output) {
    return false;
  }
  // start_time
  output->start_time = input->start_time;
  // start_time_exists
  output->start_time_exists = input->start_time_exists;
  // min_end_time
  output->min_end_time = input->min_end_time;
  // max_end_time
  output->max_end_time = input->max_end_time;
  // max_end_time_exists
  output->max_end_time_exists = input->max_end_time_exists;
  // likely_time
  output->likely_time = input->likely_time;
  // likely_time_exists
  output->likely_time_exists = input->likely_time_exists;
  // confidence
  output->confidence = input->confidence;
  // confidence_exists
  output->confidence_exists = input->confidence_exists;
  // next_time
  output->next_time = input->next_time;
  // next_time_exists
  output->next_time_exists = input->next_time_exists;
  return true;
}

j2735_v2x_msgs__msg__TimeChangeDetails *
j2735_v2x_msgs__msg__TimeChangeDetails__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__TimeChangeDetails * msg = (j2735_v2x_msgs__msg__TimeChangeDetails *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__TimeChangeDetails), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__TimeChangeDetails));
  bool success = j2735_v2x_msgs__msg__TimeChangeDetails__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__TimeChangeDetails__destroy(j2735_v2x_msgs__msg__TimeChangeDetails * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__TimeChangeDetails__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__TimeChangeDetails__Sequence__init(j2735_v2x_msgs__msg__TimeChangeDetails__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__TimeChangeDetails * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__TimeChangeDetails *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__TimeChangeDetails), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__TimeChangeDetails__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__TimeChangeDetails__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__TimeChangeDetails__Sequence__fini(j2735_v2x_msgs__msg__TimeChangeDetails__Sequence * array)
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
      j2735_v2x_msgs__msg__TimeChangeDetails__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__TimeChangeDetails__Sequence *
j2735_v2x_msgs__msg__TimeChangeDetails__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__TimeChangeDetails__Sequence * array = (j2735_v2x_msgs__msg__TimeChangeDetails__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__TimeChangeDetails__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__TimeChangeDetails__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__TimeChangeDetails__Sequence__destroy(j2735_v2x_msgs__msg__TimeChangeDetails__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__TimeChangeDetails__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__TimeChangeDetails__Sequence__are_equal(const j2735_v2x_msgs__msg__TimeChangeDetails__Sequence * lhs, const j2735_v2x_msgs__msg__TimeChangeDetails__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__TimeChangeDetails__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__TimeChangeDetails__Sequence__copy(
  const j2735_v2x_msgs__msg__TimeChangeDetails__Sequence * input,
  j2735_v2x_msgs__msg__TimeChangeDetails__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__TimeChangeDetails);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__TimeChangeDetails * data =
      (j2735_v2x_msgs__msg__TimeChangeDetails *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__TimeChangeDetails__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__TimeChangeDetails__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__TimeChangeDetails__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
