// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/EventDescription.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/event_description__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type_event`
// Member `description`
#include "j2735_v2x_msgs/msg/detail/iti_scodes__functions.h"
// Member `priority`
#include "j2735_v2x_msgs/msg/detail/priority__functions.h"
// Member `heading`
#include "j2735_v2x_msgs/msg/detail/heading_slice__functions.h"
// Member `extent`
#include "j2735_v2x_msgs/msg/detail/extent__functions.h"

bool
j2735_v2x_msgs__msg__EventDescription__init(j2735_v2x_msgs__msg__EventDescription * msg)
{
  if (!msg) {
    return false;
  }
  // presence_vector
  // type_event
  if (!j2735_v2x_msgs__msg__ITIScodes__init(&msg->type_event)) {
    j2735_v2x_msgs__msg__EventDescription__fini(msg);
    return false;
  }
  // priority
  if (!j2735_v2x_msgs__msg__Priority__init(&msg->priority)) {
    j2735_v2x_msgs__msg__EventDescription__fini(msg);
    return false;
  }
  // heading
  if (!j2735_v2x_msgs__msg__HeadingSlice__init(&msg->heading)) {
    j2735_v2x_msgs__msg__EventDescription__fini(msg);
    return false;
  }
  // extent
  if (!j2735_v2x_msgs__msg__Extent__init(&msg->extent)) {
    j2735_v2x_msgs__msg__EventDescription__fini(msg);
    return false;
  }
  // description
  if (!j2735_v2x_msgs__msg__ITIScodes__Sequence__init(&msg->description, 0)) {
    j2735_v2x_msgs__msg__EventDescription__fini(msg);
    return false;
  }
  return true;
}

void
j2735_v2x_msgs__msg__EventDescription__fini(j2735_v2x_msgs__msg__EventDescription * msg)
{
  if (!msg) {
    return;
  }
  // presence_vector
  // type_event
  j2735_v2x_msgs__msg__ITIScodes__fini(&msg->type_event);
  // priority
  j2735_v2x_msgs__msg__Priority__fini(&msg->priority);
  // heading
  j2735_v2x_msgs__msg__HeadingSlice__fini(&msg->heading);
  // extent
  j2735_v2x_msgs__msg__Extent__fini(&msg->extent);
  // description
  j2735_v2x_msgs__msg__ITIScodes__Sequence__fini(&msg->description);
}

bool
j2735_v2x_msgs__msg__EventDescription__are_equal(const j2735_v2x_msgs__msg__EventDescription * lhs, const j2735_v2x_msgs__msg__EventDescription * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // presence_vector
  if (lhs->presence_vector != rhs->presence_vector) {
    return false;
  }
  // type_event
  if (!j2735_v2x_msgs__msg__ITIScodes__are_equal(
      &(lhs->type_event), &(rhs->type_event)))
  {
    return false;
  }
  // priority
  if (!j2735_v2x_msgs__msg__Priority__are_equal(
      &(lhs->priority), &(rhs->priority)))
  {
    return false;
  }
  // heading
  if (!j2735_v2x_msgs__msg__HeadingSlice__are_equal(
      &(lhs->heading), &(rhs->heading)))
  {
    return false;
  }
  // extent
  if (!j2735_v2x_msgs__msg__Extent__are_equal(
      &(lhs->extent), &(rhs->extent)))
  {
    return false;
  }
  // description
  if (!j2735_v2x_msgs__msg__ITIScodes__Sequence__are_equal(
      &(lhs->description), &(rhs->description)))
  {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__EventDescription__copy(
  const j2735_v2x_msgs__msg__EventDescription * input,
  j2735_v2x_msgs__msg__EventDescription * output)
{
  if (!input || !output) {
    return false;
  }
  // presence_vector
  output->presence_vector = input->presence_vector;
  // type_event
  if (!j2735_v2x_msgs__msg__ITIScodes__copy(
      &(input->type_event), &(output->type_event)))
  {
    return false;
  }
  // priority
  if (!j2735_v2x_msgs__msg__Priority__copy(
      &(input->priority), &(output->priority)))
  {
    return false;
  }
  // heading
  if (!j2735_v2x_msgs__msg__HeadingSlice__copy(
      &(input->heading), &(output->heading)))
  {
    return false;
  }
  // extent
  if (!j2735_v2x_msgs__msg__Extent__copy(
      &(input->extent), &(output->extent)))
  {
    return false;
  }
  // description
  if (!j2735_v2x_msgs__msg__ITIScodes__Sequence__copy(
      &(input->description), &(output->description)))
  {
    return false;
  }
  return true;
}

j2735_v2x_msgs__msg__EventDescription *
j2735_v2x_msgs__msg__EventDescription__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__EventDescription * msg = (j2735_v2x_msgs__msg__EventDescription *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__EventDescription), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__EventDescription));
  bool success = j2735_v2x_msgs__msg__EventDescription__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__EventDescription__destroy(j2735_v2x_msgs__msg__EventDescription * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__EventDescription__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__EventDescription__Sequence__init(j2735_v2x_msgs__msg__EventDescription__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__EventDescription * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__EventDescription *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__EventDescription), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__EventDescription__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__EventDescription__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__EventDescription__Sequence__fini(j2735_v2x_msgs__msg__EventDescription__Sequence * array)
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
      j2735_v2x_msgs__msg__EventDescription__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__EventDescription__Sequence *
j2735_v2x_msgs__msg__EventDescription__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__EventDescription__Sequence * array = (j2735_v2x_msgs__msg__EventDescription__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__EventDescription__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__EventDescription__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__EventDescription__Sequence__destroy(j2735_v2x_msgs__msg__EventDescription__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__EventDescription__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__EventDescription__Sequence__are_equal(const j2735_v2x_msgs__msg__EventDescription__Sequence * lhs, const j2735_v2x_msgs__msg__EventDescription__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__EventDescription__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__EventDescription__Sequence__copy(
  const j2735_v2x_msgs__msg__EventDescription__Sequence * input,
  j2735_v2x_msgs__msg__EventDescription__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__EventDescription);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__EventDescription * data =
      (j2735_v2x_msgs__msg__EventDescription *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__EventDescription__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__EventDescription__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__EventDescription__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
