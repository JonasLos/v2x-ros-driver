// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/LaneDataAttributeList.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/lane_data_attribute_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `lane_attribute_list`
#include "j2735_v2x_msgs/msg/detail/lane_data_attribute__functions.h"

bool
j2735_v2x_msgs__msg__LaneDataAttributeList__init(j2735_v2x_msgs__msg__LaneDataAttributeList * msg)
{
  if (!msg) {
    return false;
  }
  // lane_attribute_list
  if (!j2735_v2x_msgs__msg__LaneDataAttribute__Sequence__init(&msg->lane_attribute_list, 0)) {
    j2735_v2x_msgs__msg__LaneDataAttributeList__fini(msg);
    return false;
  }
  return true;
}

void
j2735_v2x_msgs__msg__LaneDataAttributeList__fini(j2735_v2x_msgs__msg__LaneDataAttributeList * msg)
{
  if (!msg) {
    return;
  }
  // lane_attribute_list
  j2735_v2x_msgs__msg__LaneDataAttribute__Sequence__fini(&msg->lane_attribute_list);
}

bool
j2735_v2x_msgs__msg__LaneDataAttributeList__are_equal(const j2735_v2x_msgs__msg__LaneDataAttributeList * lhs, const j2735_v2x_msgs__msg__LaneDataAttributeList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lane_attribute_list
  if (!j2735_v2x_msgs__msg__LaneDataAttribute__Sequence__are_equal(
      &(lhs->lane_attribute_list), &(rhs->lane_attribute_list)))
  {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__LaneDataAttributeList__copy(
  const j2735_v2x_msgs__msg__LaneDataAttributeList * input,
  j2735_v2x_msgs__msg__LaneDataAttributeList * output)
{
  if (!input || !output) {
    return false;
  }
  // lane_attribute_list
  if (!j2735_v2x_msgs__msg__LaneDataAttribute__Sequence__copy(
      &(input->lane_attribute_list), &(output->lane_attribute_list)))
  {
    return false;
  }
  return true;
}

j2735_v2x_msgs__msg__LaneDataAttributeList *
j2735_v2x_msgs__msg__LaneDataAttributeList__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__LaneDataAttributeList * msg = (j2735_v2x_msgs__msg__LaneDataAttributeList *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__LaneDataAttributeList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__LaneDataAttributeList));
  bool success = j2735_v2x_msgs__msg__LaneDataAttributeList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__LaneDataAttributeList__destroy(j2735_v2x_msgs__msg__LaneDataAttributeList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__LaneDataAttributeList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__LaneDataAttributeList__Sequence__init(j2735_v2x_msgs__msg__LaneDataAttributeList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__LaneDataAttributeList * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__LaneDataAttributeList *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__LaneDataAttributeList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__LaneDataAttributeList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__LaneDataAttributeList__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__LaneDataAttributeList__Sequence__fini(j2735_v2x_msgs__msg__LaneDataAttributeList__Sequence * array)
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
      j2735_v2x_msgs__msg__LaneDataAttributeList__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__LaneDataAttributeList__Sequence *
j2735_v2x_msgs__msg__LaneDataAttributeList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__LaneDataAttributeList__Sequence * array = (j2735_v2x_msgs__msg__LaneDataAttributeList__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__LaneDataAttributeList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__LaneDataAttributeList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__LaneDataAttributeList__Sequence__destroy(j2735_v2x_msgs__msg__LaneDataAttributeList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__LaneDataAttributeList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__LaneDataAttributeList__Sequence__are_equal(const j2735_v2x_msgs__msg__LaneDataAttributeList__Sequence * lhs, const j2735_v2x_msgs__msg__LaneDataAttributeList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__LaneDataAttributeList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__LaneDataAttributeList__Sequence__copy(
  const j2735_v2x_msgs__msg__LaneDataAttributeList__Sequence * input,
  j2735_v2x_msgs__msg__LaneDataAttributeList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__LaneDataAttributeList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__LaneDataAttributeList * data =
      (j2735_v2x_msgs__msg__LaneDataAttributeList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__LaneDataAttributeList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__LaneDataAttributeList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__LaneDataAttributeList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
