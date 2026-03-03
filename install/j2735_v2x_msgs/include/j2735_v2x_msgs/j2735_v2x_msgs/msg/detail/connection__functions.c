// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/Connection.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/connection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `connecting_lane`
#include "j2735_v2x_msgs/msg/detail/connecting_lane__functions.h"
// Member `remote_intersection`
#include "j2735_v2x_msgs/msg/detail/intersection_reference_id__functions.h"

bool
j2735_v2x_msgs__msg__Connection__init(j2735_v2x_msgs__msg__Connection * msg)
{
  if (!msg) {
    return false;
  }
  // connecting_lane
  if (!j2735_v2x_msgs__msg__ConnectingLane__init(&msg->connecting_lane)) {
    j2735_v2x_msgs__msg__Connection__fini(msg);
    return false;
  }
  // remote_intersection
  if (!j2735_v2x_msgs__msg__IntersectionReferenceID__init(&msg->remote_intersection)) {
    j2735_v2x_msgs__msg__Connection__fini(msg);
    return false;
  }
  // remote_intersection_exists
  // signal_group
  // signal_group_exists
  // user_class
  // user_class_exists
  // connection_id
  // connection_id_exists
  return true;
}

void
j2735_v2x_msgs__msg__Connection__fini(j2735_v2x_msgs__msg__Connection * msg)
{
  if (!msg) {
    return;
  }
  // connecting_lane
  j2735_v2x_msgs__msg__ConnectingLane__fini(&msg->connecting_lane);
  // remote_intersection
  j2735_v2x_msgs__msg__IntersectionReferenceID__fini(&msg->remote_intersection);
  // remote_intersection_exists
  // signal_group
  // signal_group_exists
  // user_class
  // user_class_exists
  // connection_id
  // connection_id_exists
}

bool
j2735_v2x_msgs__msg__Connection__are_equal(const j2735_v2x_msgs__msg__Connection * lhs, const j2735_v2x_msgs__msg__Connection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // connecting_lane
  if (!j2735_v2x_msgs__msg__ConnectingLane__are_equal(
      &(lhs->connecting_lane), &(rhs->connecting_lane)))
  {
    return false;
  }
  // remote_intersection
  if (!j2735_v2x_msgs__msg__IntersectionReferenceID__are_equal(
      &(lhs->remote_intersection), &(rhs->remote_intersection)))
  {
    return false;
  }
  // remote_intersection_exists
  if (lhs->remote_intersection_exists != rhs->remote_intersection_exists) {
    return false;
  }
  // signal_group
  if (lhs->signal_group != rhs->signal_group) {
    return false;
  }
  // signal_group_exists
  if (lhs->signal_group_exists != rhs->signal_group_exists) {
    return false;
  }
  // user_class
  if (lhs->user_class != rhs->user_class) {
    return false;
  }
  // user_class_exists
  if (lhs->user_class_exists != rhs->user_class_exists) {
    return false;
  }
  // connection_id
  if (lhs->connection_id != rhs->connection_id) {
    return false;
  }
  // connection_id_exists
  if (lhs->connection_id_exists != rhs->connection_id_exists) {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__Connection__copy(
  const j2735_v2x_msgs__msg__Connection * input,
  j2735_v2x_msgs__msg__Connection * output)
{
  if (!input || !output) {
    return false;
  }
  // connecting_lane
  if (!j2735_v2x_msgs__msg__ConnectingLane__copy(
      &(input->connecting_lane), &(output->connecting_lane)))
  {
    return false;
  }
  // remote_intersection
  if (!j2735_v2x_msgs__msg__IntersectionReferenceID__copy(
      &(input->remote_intersection), &(output->remote_intersection)))
  {
    return false;
  }
  // remote_intersection_exists
  output->remote_intersection_exists = input->remote_intersection_exists;
  // signal_group
  output->signal_group = input->signal_group;
  // signal_group_exists
  output->signal_group_exists = input->signal_group_exists;
  // user_class
  output->user_class = input->user_class;
  // user_class_exists
  output->user_class_exists = input->user_class_exists;
  // connection_id
  output->connection_id = input->connection_id;
  // connection_id_exists
  output->connection_id_exists = input->connection_id_exists;
  return true;
}

j2735_v2x_msgs__msg__Connection *
j2735_v2x_msgs__msg__Connection__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__Connection * msg = (j2735_v2x_msgs__msg__Connection *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__Connection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__Connection));
  bool success = j2735_v2x_msgs__msg__Connection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__Connection__destroy(j2735_v2x_msgs__msg__Connection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__Connection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__Connection__Sequence__init(j2735_v2x_msgs__msg__Connection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__Connection * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__Connection *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__Connection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__Connection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__Connection__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__Connection__Sequence__fini(j2735_v2x_msgs__msg__Connection__Sequence * array)
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
      j2735_v2x_msgs__msg__Connection__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__Connection__Sequence *
j2735_v2x_msgs__msg__Connection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__Connection__Sequence * array = (j2735_v2x_msgs__msg__Connection__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__Connection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__Connection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__Connection__Sequence__destroy(j2735_v2x_msgs__msg__Connection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__Connection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__Connection__Sequence__are_equal(const j2735_v2x_msgs__msg__Connection__Sequence * lhs, const j2735_v2x_msgs__msg__Connection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__Connection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__Connection__Sequence__copy(
  const j2735_v2x_msgs__msg__Connection__Sequence * input,
  j2735_v2x_msgs__msg__Connection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__Connection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__Connection * data =
      (j2735_v2x_msgs__msg__Connection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__Connection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__Connection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__Connection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
