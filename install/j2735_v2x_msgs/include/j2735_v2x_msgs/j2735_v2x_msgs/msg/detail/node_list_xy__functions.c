// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/NodeListXY.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/node_list_xy__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `nodes`
#include "j2735_v2x_msgs/msg/detail/node_set_xy__functions.h"
// Member `computed`
#include "j2735_v2x_msgs/msg/detail/computed_lane__functions.h"

bool
j2735_v2x_msgs__msg__NodeListXY__init(j2735_v2x_msgs__msg__NodeListXY * msg)
{
  if (!msg) {
    return false;
  }
  // choice
  // nodes
  if (!j2735_v2x_msgs__msg__NodeSetXY__init(&msg->nodes)) {
    j2735_v2x_msgs__msg__NodeListXY__fini(msg);
    return false;
  }
  // computed
  if (!j2735_v2x_msgs__msg__ComputedLane__init(&msg->computed)) {
    j2735_v2x_msgs__msg__NodeListXY__fini(msg);
    return false;
  }
  return true;
}

void
j2735_v2x_msgs__msg__NodeListXY__fini(j2735_v2x_msgs__msg__NodeListXY * msg)
{
  if (!msg) {
    return;
  }
  // choice
  // nodes
  j2735_v2x_msgs__msg__NodeSetXY__fini(&msg->nodes);
  // computed
  j2735_v2x_msgs__msg__ComputedLane__fini(&msg->computed);
}

bool
j2735_v2x_msgs__msg__NodeListXY__are_equal(const j2735_v2x_msgs__msg__NodeListXY * lhs, const j2735_v2x_msgs__msg__NodeListXY * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // choice
  if (lhs->choice != rhs->choice) {
    return false;
  }
  // nodes
  if (!j2735_v2x_msgs__msg__NodeSetXY__are_equal(
      &(lhs->nodes), &(rhs->nodes)))
  {
    return false;
  }
  // computed
  if (!j2735_v2x_msgs__msg__ComputedLane__are_equal(
      &(lhs->computed), &(rhs->computed)))
  {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__NodeListXY__copy(
  const j2735_v2x_msgs__msg__NodeListXY * input,
  j2735_v2x_msgs__msg__NodeListXY * output)
{
  if (!input || !output) {
    return false;
  }
  // choice
  output->choice = input->choice;
  // nodes
  if (!j2735_v2x_msgs__msg__NodeSetXY__copy(
      &(input->nodes), &(output->nodes)))
  {
    return false;
  }
  // computed
  if (!j2735_v2x_msgs__msg__ComputedLane__copy(
      &(input->computed), &(output->computed)))
  {
    return false;
  }
  return true;
}

j2735_v2x_msgs__msg__NodeListXY *
j2735_v2x_msgs__msg__NodeListXY__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__NodeListXY * msg = (j2735_v2x_msgs__msg__NodeListXY *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__NodeListXY), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__NodeListXY));
  bool success = j2735_v2x_msgs__msg__NodeListXY__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__NodeListXY__destroy(j2735_v2x_msgs__msg__NodeListXY * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__NodeListXY__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__NodeListXY__Sequence__init(j2735_v2x_msgs__msg__NodeListXY__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__NodeListXY * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__NodeListXY *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__NodeListXY), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__NodeListXY__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__NodeListXY__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__NodeListXY__Sequence__fini(j2735_v2x_msgs__msg__NodeListXY__Sequence * array)
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
      j2735_v2x_msgs__msg__NodeListXY__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__NodeListXY__Sequence *
j2735_v2x_msgs__msg__NodeListXY__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__NodeListXY__Sequence * array = (j2735_v2x_msgs__msg__NodeListXY__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__NodeListXY__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__NodeListXY__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__NodeListXY__Sequence__destroy(j2735_v2x_msgs__msg__NodeListXY__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__NodeListXY__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__NodeListXY__Sequence__are_equal(const j2735_v2x_msgs__msg__NodeListXY__Sequence * lhs, const j2735_v2x_msgs__msg__NodeListXY__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__NodeListXY__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__NodeListXY__Sequence__copy(
  const j2735_v2x_msgs__msg__NodeListXY__Sequence * input,
  j2735_v2x_msgs__msg__NodeListXY__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__NodeListXY);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__NodeListXY * data =
      (j2735_v2x_msgs__msg__NodeListXY *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__NodeListXY__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__NodeListXY__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__NodeListXY__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
