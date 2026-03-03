// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/BrakeAppliedStatus.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/brake_applied_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
j2735_v2x_msgs__msg__BrakeAppliedStatus__init(j2735_v2x_msgs__msg__BrakeAppliedStatus * msg)
{
  if (!msg) {
    return false;
  }
  // brake_applied_status
  return true;
}

void
j2735_v2x_msgs__msg__BrakeAppliedStatus__fini(j2735_v2x_msgs__msg__BrakeAppliedStatus * msg)
{
  if (!msg) {
    return;
  }
  // brake_applied_status
}

bool
j2735_v2x_msgs__msg__BrakeAppliedStatus__are_equal(const j2735_v2x_msgs__msg__BrakeAppliedStatus * lhs, const j2735_v2x_msgs__msg__BrakeAppliedStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // brake_applied_status
  if (lhs->brake_applied_status != rhs->brake_applied_status) {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__BrakeAppliedStatus__copy(
  const j2735_v2x_msgs__msg__BrakeAppliedStatus * input,
  j2735_v2x_msgs__msg__BrakeAppliedStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // brake_applied_status
  output->brake_applied_status = input->brake_applied_status;
  return true;
}

j2735_v2x_msgs__msg__BrakeAppliedStatus *
j2735_v2x_msgs__msg__BrakeAppliedStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__BrakeAppliedStatus * msg = (j2735_v2x_msgs__msg__BrakeAppliedStatus *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__BrakeAppliedStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__BrakeAppliedStatus));
  bool success = j2735_v2x_msgs__msg__BrakeAppliedStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__BrakeAppliedStatus__destroy(j2735_v2x_msgs__msg__BrakeAppliedStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__BrakeAppliedStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__BrakeAppliedStatus__Sequence__init(j2735_v2x_msgs__msg__BrakeAppliedStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__BrakeAppliedStatus * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__BrakeAppliedStatus *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__BrakeAppliedStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__BrakeAppliedStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__BrakeAppliedStatus__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__BrakeAppliedStatus__Sequence__fini(j2735_v2x_msgs__msg__BrakeAppliedStatus__Sequence * array)
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
      j2735_v2x_msgs__msg__BrakeAppliedStatus__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__BrakeAppliedStatus__Sequence *
j2735_v2x_msgs__msg__BrakeAppliedStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__BrakeAppliedStatus__Sequence * array = (j2735_v2x_msgs__msg__BrakeAppliedStatus__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__BrakeAppliedStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__BrakeAppliedStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__BrakeAppliedStatus__Sequence__destroy(j2735_v2x_msgs__msg__BrakeAppliedStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__BrakeAppliedStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__BrakeAppliedStatus__Sequence__are_equal(const j2735_v2x_msgs__msg__BrakeAppliedStatus__Sequence * lhs, const j2735_v2x_msgs__msg__BrakeAppliedStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__BrakeAppliedStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__BrakeAppliedStatus__Sequence__copy(
  const j2735_v2x_msgs__msg__BrakeAppliedStatus__Sequence * input,
  j2735_v2x_msgs__msg__BrakeAppliedStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__BrakeAppliedStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__BrakeAppliedStatus * data =
      (j2735_v2x_msgs__msg__BrakeAppliedStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__BrakeAppliedStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__BrakeAppliedStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__BrakeAppliedStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
