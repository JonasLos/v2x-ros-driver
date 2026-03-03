// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/NodeOffsetPointXY.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/node_offset_point_xy__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `node_xy1`
#include "j2735_v2x_msgs/msg/detail/node_xy20b__functions.h"
// Member `node_xy2`
#include "j2735_v2x_msgs/msg/detail/node_xy22b__functions.h"
// Member `node_xy3`
#include "j2735_v2x_msgs/msg/detail/node_xy24b__functions.h"
// Member `node_xy4`
#include "j2735_v2x_msgs/msg/detail/node_xy26b__functions.h"
// Member `node_xy5`
#include "j2735_v2x_msgs/msg/detail/node_xy28b__functions.h"
// Member `node_xy6`
#include "j2735_v2x_msgs/msg/detail/node_xy32b__functions.h"
// Member `node_latlon`
#include "j2735_v2x_msgs/msg/detail/node_l_lm_d64b__functions.h"

bool
j2735_v2x_msgs__msg__NodeOffsetPointXY__init(j2735_v2x_msgs__msg__NodeOffsetPointXY * msg)
{
  if (!msg) {
    return false;
  }
  // choice
  // node_xy1
  if (!j2735_v2x_msgs__msg__NodeXY20b__init(&msg->node_xy1)) {
    j2735_v2x_msgs__msg__NodeOffsetPointXY__fini(msg);
    return false;
  }
  // node_xy2
  if (!j2735_v2x_msgs__msg__NodeXY22b__init(&msg->node_xy2)) {
    j2735_v2x_msgs__msg__NodeOffsetPointXY__fini(msg);
    return false;
  }
  // node_xy3
  if (!j2735_v2x_msgs__msg__NodeXY24b__init(&msg->node_xy3)) {
    j2735_v2x_msgs__msg__NodeOffsetPointXY__fini(msg);
    return false;
  }
  // node_xy4
  if (!j2735_v2x_msgs__msg__NodeXY26b__init(&msg->node_xy4)) {
    j2735_v2x_msgs__msg__NodeOffsetPointXY__fini(msg);
    return false;
  }
  // node_xy5
  if (!j2735_v2x_msgs__msg__NodeXY28b__init(&msg->node_xy5)) {
    j2735_v2x_msgs__msg__NodeOffsetPointXY__fini(msg);
    return false;
  }
  // node_xy6
  if (!j2735_v2x_msgs__msg__NodeXY32b__init(&msg->node_xy6)) {
    j2735_v2x_msgs__msg__NodeOffsetPointXY__fini(msg);
    return false;
  }
  // node_latlon
  if (!j2735_v2x_msgs__msg__NodeLLmD64b__init(&msg->node_latlon)) {
    j2735_v2x_msgs__msg__NodeOffsetPointXY__fini(msg);
    return false;
  }
  return true;
}

void
j2735_v2x_msgs__msg__NodeOffsetPointXY__fini(j2735_v2x_msgs__msg__NodeOffsetPointXY * msg)
{
  if (!msg) {
    return;
  }
  // choice
  // node_xy1
  j2735_v2x_msgs__msg__NodeXY20b__fini(&msg->node_xy1);
  // node_xy2
  j2735_v2x_msgs__msg__NodeXY22b__fini(&msg->node_xy2);
  // node_xy3
  j2735_v2x_msgs__msg__NodeXY24b__fini(&msg->node_xy3);
  // node_xy4
  j2735_v2x_msgs__msg__NodeXY26b__fini(&msg->node_xy4);
  // node_xy5
  j2735_v2x_msgs__msg__NodeXY28b__fini(&msg->node_xy5);
  // node_xy6
  j2735_v2x_msgs__msg__NodeXY32b__fini(&msg->node_xy6);
  // node_latlon
  j2735_v2x_msgs__msg__NodeLLmD64b__fini(&msg->node_latlon);
}

bool
j2735_v2x_msgs__msg__NodeOffsetPointXY__are_equal(const j2735_v2x_msgs__msg__NodeOffsetPointXY * lhs, const j2735_v2x_msgs__msg__NodeOffsetPointXY * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // choice
  if (lhs->choice != rhs->choice) {
    return false;
  }
  // node_xy1
  if (!j2735_v2x_msgs__msg__NodeXY20b__are_equal(
      &(lhs->node_xy1), &(rhs->node_xy1)))
  {
    return false;
  }
  // node_xy2
  if (!j2735_v2x_msgs__msg__NodeXY22b__are_equal(
      &(lhs->node_xy2), &(rhs->node_xy2)))
  {
    return false;
  }
  // node_xy3
  if (!j2735_v2x_msgs__msg__NodeXY24b__are_equal(
      &(lhs->node_xy3), &(rhs->node_xy3)))
  {
    return false;
  }
  // node_xy4
  if (!j2735_v2x_msgs__msg__NodeXY26b__are_equal(
      &(lhs->node_xy4), &(rhs->node_xy4)))
  {
    return false;
  }
  // node_xy5
  if (!j2735_v2x_msgs__msg__NodeXY28b__are_equal(
      &(lhs->node_xy5), &(rhs->node_xy5)))
  {
    return false;
  }
  // node_xy6
  if (!j2735_v2x_msgs__msg__NodeXY32b__are_equal(
      &(lhs->node_xy6), &(rhs->node_xy6)))
  {
    return false;
  }
  // node_latlon
  if (!j2735_v2x_msgs__msg__NodeLLmD64b__are_equal(
      &(lhs->node_latlon), &(rhs->node_latlon)))
  {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__NodeOffsetPointXY__copy(
  const j2735_v2x_msgs__msg__NodeOffsetPointXY * input,
  j2735_v2x_msgs__msg__NodeOffsetPointXY * output)
{
  if (!input || !output) {
    return false;
  }
  // choice
  output->choice = input->choice;
  // node_xy1
  if (!j2735_v2x_msgs__msg__NodeXY20b__copy(
      &(input->node_xy1), &(output->node_xy1)))
  {
    return false;
  }
  // node_xy2
  if (!j2735_v2x_msgs__msg__NodeXY22b__copy(
      &(input->node_xy2), &(output->node_xy2)))
  {
    return false;
  }
  // node_xy3
  if (!j2735_v2x_msgs__msg__NodeXY24b__copy(
      &(input->node_xy3), &(output->node_xy3)))
  {
    return false;
  }
  // node_xy4
  if (!j2735_v2x_msgs__msg__NodeXY26b__copy(
      &(input->node_xy4), &(output->node_xy4)))
  {
    return false;
  }
  // node_xy5
  if (!j2735_v2x_msgs__msg__NodeXY28b__copy(
      &(input->node_xy5), &(output->node_xy5)))
  {
    return false;
  }
  // node_xy6
  if (!j2735_v2x_msgs__msg__NodeXY32b__copy(
      &(input->node_xy6), &(output->node_xy6)))
  {
    return false;
  }
  // node_latlon
  if (!j2735_v2x_msgs__msg__NodeLLmD64b__copy(
      &(input->node_latlon), &(output->node_latlon)))
  {
    return false;
  }
  return true;
}

j2735_v2x_msgs__msg__NodeOffsetPointXY *
j2735_v2x_msgs__msg__NodeOffsetPointXY__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__NodeOffsetPointXY * msg = (j2735_v2x_msgs__msg__NodeOffsetPointXY *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__NodeOffsetPointXY), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__NodeOffsetPointXY));
  bool success = j2735_v2x_msgs__msg__NodeOffsetPointXY__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__NodeOffsetPointXY__destroy(j2735_v2x_msgs__msg__NodeOffsetPointXY * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__NodeOffsetPointXY__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__NodeOffsetPointXY__Sequence__init(j2735_v2x_msgs__msg__NodeOffsetPointXY__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__NodeOffsetPointXY * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__NodeOffsetPointXY *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__NodeOffsetPointXY), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__NodeOffsetPointXY__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__NodeOffsetPointXY__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__NodeOffsetPointXY__Sequence__fini(j2735_v2x_msgs__msg__NodeOffsetPointXY__Sequence * array)
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
      j2735_v2x_msgs__msg__NodeOffsetPointXY__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__NodeOffsetPointXY__Sequence *
j2735_v2x_msgs__msg__NodeOffsetPointXY__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__NodeOffsetPointXY__Sequence * array = (j2735_v2x_msgs__msg__NodeOffsetPointXY__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__NodeOffsetPointXY__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__NodeOffsetPointXY__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__NodeOffsetPointXY__Sequence__destroy(j2735_v2x_msgs__msg__NodeOffsetPointXY__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__NodeOffsetPointXY__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__NodeOffsetPointXY__Sequence__are_equal(const j2735_v2x_msgs__msg__NodeOffsetPointXY__Sequence * lhs, const j2735_v2x_msgs__msg__NodeOffsetPointXY__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__NodeOffsetPointXY__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__NodeOffsetPointXY__Sequence__copy(
  const j2735_v2x_msgs__msg__NodeOffsetPointXY__Sequence * input,
  j2735_v2x_msgs__msg__NodeOffsetPointXY__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__NodeOffsetPointXY);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__NodeOffsetPointXY * data =
      (j2735_v2x_msgs__msg__NodeOffsetPointXY *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__NodeOffsetPointXY__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__NodeOffsetPointXY__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__NodeOffsetPointXY__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
