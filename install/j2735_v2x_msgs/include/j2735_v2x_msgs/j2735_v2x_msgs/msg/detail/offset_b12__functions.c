// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/OffsetB12.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/offset_b12__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
j2735_v2x_msgs__msg__OffsetB12__init(j2735_v2x_msgs__msg__OffsetB12 * msg)
{
  if (!msg) {
    return false;
  }
  // offset
  return true;
}

void
j2735_v2x_msgs__msg__OffsetB12__fini(j2735_v2x_msgs__msg__OffsetB12 * msg)
{
  if (!msg) {
    return;
  }
  // offset
}

bool
j2735_v2x_msgs__msg__OffsetB12__are_equal(const j2735_v2x_msgs__msg__OffsetB12 * lhs, const j2735_v2x_msgs__msg__OffsetB12 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // offset
  if (lhs->offset != rhs->offset) {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__OffsetB12__copy(
  const j2735_v2x_msgs__msg__OffsetB12 * input,
  j2735_v2x_msgs__msg__OffsetB12 * output)
{
  if (!input || !output) {
    return false;
  }
  // offset
  output->offset = input->offset;
  return true;
}

j2735_v2x_msgs__msg__OffsetB12 *
j2735_v2x_msgs__msg__OffsetB12__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__OffsetB12 * msg = (j2735_v2x_msgs__msg__OffsetB12 *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__OffsetB12), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__OffsetB12));
  bool success = j2735_v2x_msgs__msg__OffsetB12__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__OffsetB12__destroy(j2735_v2x_msgs__msg__OffsetB12 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__OffsetB12__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__OffsetB12__Sequence__init(j2735_v2x_msgs__msg__OffsetB12__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__OffsetB12 * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__OffsetB12 *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__OffsetB12), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__OffsetB12__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__OffsetB12__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__OffsetB12__Sequence__fini(j2735_v2x_msgs__msg__OffsetB12__Sequence * array)
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
      j2735_v2x_msgs__msg__OffsetB12__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__OffsetB12__Sequence *
j2735_v2x_msgs__msg__OffsetB12__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__OffsetB12__Sequence * array = (j2735_v2x_msgs__msg__OffsetB12__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__OffsetB12__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__OffsetB12__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__OffsetB12__Sequence__destroy(j2735_v2x_msgs__msg__OffsetB12__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__OffsetB12__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__OffsetB12__Sequence__are_equal(const j2735_v2x_msgs__msg__OffsetB12__Sequence * lhs, const j2735_v2x_msgs__msg__OffsetB12__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__OffsetB12__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__OffsetB12__Sequence__copy(
  const j2735_v2x_msgs__msg__OffsetB12__Sequence * input,
  j2735_v2x_msgs__msg__OffsetB12__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__OffsetB12);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__OffsetB12 * data =
      (j2735_v2x_msgs__msg__OffsetB12 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__OffsetB12__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__OffsetB12__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__OffsetB12__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
