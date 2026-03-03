// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/IntersectionStatusObject.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/intersection_status_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
j2735_v2x_msgs__msg__IntersectionStatusObject__init(j2735_v2x_msgs__msg__IntersectionStatusObject * msg)
{
  if (!msg) {
    return false;
  }
  // intersection_status_object
  return true;
}

void
j2735_v2x_msgs__msg__IntersectionStatusObject__fini(j2735_v2x_msgs__msg__IntersectionStatusObject * msg)
{
  if (!msg) {
    return;
  }
  // intersection_status_object
}

bool
j2735_v2x_msgs__msg__IntersectionStatusObject__are_equal(const j2735_v2x_msgs__msg__IntersectionStatusObject * lhs, const j2735_v2x_msgs__msg__IntersectionStatusObject * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // intersection_status_object
  if (lhs->intersection_status_object != rhs->intersection_status_object) {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__IntersectionStatusObject__copy(
  const j2735_v2x_msgs__msg__IntersectionStatusObject * input,
  j2735_v2x_msgs__msg__IntersectionStatusObject * output)
{
  if (!input || !output) {
    return false;
  }
  // intersection_status_object
  output->intersection_status_object = input->intersection_status_object;
  return true;
}

j2735_v2x_msgs__msg__IntersectionStatusObject *
j2735_v2x_msgs__msg__IntersectionStatusObject__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__IntersectionStatusObject * msg = (j2735_v2x_msgs__msg__IntersectionStatusObject *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__IntersectionStatusObject), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__IntersectionStatusObject));
  bool success = j2735_v2x_msgs__msg__IntersectionStatusObject__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__IntersectionStatusObject__destroy(j2735_v2x_msgs__msg__IntersectionStatusObject * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__IntersectionStatusObject__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__IntersectionStatusObject__Sequence__init(j2735_v2x_msgs__msg__IntersectionStatusObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__IntersectionStatusObject * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__IntersectionStatusObject *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__IntersectionStatusObject), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__IntersectionStatusObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__IntersectionStatusObject__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__IntersectionStatusObject__Sequence__fini(j2735_v2x_msgs__msg__IntersectionStatusObject__Sequence * array)
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
      j2735_v2x_msgs__msg__IntersectionStatusObject__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__IntersectionStatusObject__Sequence *
j2735_v2x_msgs__msg__IntersectionStatusObject__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__IntersectionStatusObject__Sequence * array = (j2735_v2x_msgs__msg__IntersectionStatusObject__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__IntersectionStatusObject__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__IntersectionStatusObject__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__IntersectionStatusObject__Sequence__destroy(j2735_v2x_msgs__msg__IntersectionStatusObject__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__IntersectionStatusObject__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__IntersectionStatusObject__Sequence__are_equal(const j2735_v2x_msgs__msg__IntersectionStatusObject__Sequence * lhs, const j2735_v2x_msgs__msg__IntersectionStatusObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__IntersectionStatusObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__IntersectionStatusObject__Sequence__copy(
  const j2735_v2x_msgs__msg__IntersectionStatusObject__Sequence * input,
  j2735_v2x_msgs__msg__IntersectionStatusObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__IntersectionStatusObject);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__IntersectionStatusObject * data =
      (j2735_v2x_msgs__msg__IntersectionStatusObject *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__IntersectionStatusObject__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__IntersectionStatusObject__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__IntersectionStatusObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
