// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/NodeAttributeSetXY.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/node_attribute_set_xy__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `local_node`
#include "j2735_v2x_msgs/msg/detail/node_attribute_xy_list__functions.h"
// Member `disabled`
// Member `enabled`
#include "j2735_v2x_msgs/msg/detail/segment_attribute_xy_list__functions.h"
// Member `data`
#include "j2735_v2x_msgs/msg/detail/lane_data_attribute_list__functions.h"

bool
j2735_v2x_msgs__msg__NodeAttributeSetXY__init(j2735_v2x_msgs__msg__NodeAttributeSetXY * msg)
{
  if (!msg) {
    return false;
  }
  // local_node
  if (!j2735_v2x_msgs__msg__NodeAttributeXYList__init(&msg->local_node)) {
    j2735_v2x_msgs__msg__NodeAttributeSetXY__fini(msg);
    return false;
  }
  // local_node_exists
  // disabled
  if (!j2735_v2x_msgs__msg__SegmentAttributeXYList__init(&msg->disabled)) {
    j2735_v2x_msgs__msg__NodeAttributeSetXY__fini(msg);
    return false;
  }
  // disabled_exists
  // enabled
  if (!j2735_v2x_msgs__msg__SegmentAttributeXYList__init(&msg->enabled)) {
    j2735_v2x_msgs__msg__NodeAttributeSetXY__fini(msg);
    return false;
  }
  // enabled_exists
  // data
  if (!j2735_v2x_msgs__msg__LaneDataAttributeList__init(&msg->data)) {
    j2735_v2x_msgs__msg__NodeAttributeSetXY__fini(msg);
    return false;
  }
  // data_exists
  // d_width
  // d_width_exists
  // d_elevation
  // d_elevation_exists
  return true;
}

void
j2735_v2x_msgs__msg__NodeAttributeSetXY__fini(j2735_v2x_msgs__msg__NodeAttributeSetXY * msg)
{
  if (!msg) {
    return;
  }
  // local_node
  j2735_v2x_msgs__msg__NodeAttributeXYList__fini(&msg->local_node);
  // local_node_exists
  // disabled
  j2735_v2x_msgs__msg__SegmentAttributeXYList__fini(&msg->disabled);
  // disabled_exists
  // enabled
  j2735_v2x_msgs__msg__SegmentAttributeXYList__fini(&msg->enabled);
  // enabled_exists
  // data
  j2735_v2x_msgs__msg__LaneDataAttributeList__fini(&msg->data);
  // data_exists
  // d_width
  // d_width_exists
  // d_elevation
  // d_elevation_exists
}

bool
j2735_v2x_msgs__msg__NodeAttributeSetXY__are_equal(const j2735_v2x_msgs__msg__NodeAttributeSetXY * lhs, const j2735_v2x_msgs__msg__NodeAttributeSetXY * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // local_node
  if (!j2735_v2x_msgs__msg__NodeAttributeXYList__are_equal(
      &(lhs->local_node), &(rhs->local_node)))
  {
    return false;
  }
  // local_node_exists
  if (lhs->local_node_exists != rhs->local_node_exists) {
    return false;
  }
  // disabled
  if (!j2735_v2x_msgs__msg__SegmentAttributeXYList__are_equal(
      &(lhs->disabled), &(rhs->disabled)))
  {
    return false;
  }
  // disabled_exists
  if (lhs->disabled_exists != rhs->disabled_exists) {
    return false;
  }
  // enabled
  if (!j2735_v2x_msgs__msg__SegmentAttributeXYList__are_equal(
      &(lhs->enabled), &(rhs->enabled)))
  {
    return false;
  }
  // enabled_exists
  if (lhs->enabled_exists != rhs->enabled_exists) {
    return false;
  }
  // data
  if (!j2735_v2x_msgs__msg__LaneDataAttributeList__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // data_exists
  if (lhs->data_exists != rhs->data_exists) {
    return false;
  }
  // d_width
  if (lhs->d_width != rhs->d_width) {
    return false;
  }
  // d_width_exists
  if (lhs->d_width_exists != rhs->d_width_exists) {
    return false;
  }
  // d_elevation
  if (lhs->d_elevation != rhs->d_elevation) {
    return false;
  }
  // d_elevation_exists
  if (lhs->d_elevation_exists != rhs->d_elevation_exists) {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__NodeAttributeSetXY__copy(
  const j2735_v2x_msgs__msg__NodeAttributeSetXY * input,
  j2735_v2x_msgs__msg__NodeAttributeSetXY * output)
{
  if (!input || !output) {
    return false;
  }
  // local_node
  if (!j2735_v2x_msgs__msg__NodeAttributeXYList__copy(
      &(input->local_node), &(output->local_node)))
  {
    return false;
  }
  // local_node_exists
  output->local_node_exists = input->local_node_exists;
  // disabled
  if (!j2735_v2x_msgs__msg__SegmentAttributeXYList__copy(
      &(input->disabled), &(output->disabled)))
  {
    return false;
  }
  // disabled_exists
  output->disabled_exists = input->disabled_exists;
  // enabled
  if (!j2735_v2x_msgs__msg__SegmentAttributeXYList__copy(
      &(input->enabled), &(output->enabled)))
  {
    return false;
  }
  // enabled_exists
  output->enabled_exists = input->enabled_exists;
  // data
  if (!j2735_v2x_msgs__msg__LaneDataAttributeList__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // data_exists
  output->data_exists = input->data_exists;
  // d_width
  output->d_width = input->d_width;
  // d_width_exists
  output->d_width_exists = input->d_width_exists;
  // d_elevation
  output->d_elevation = input->d_elevation;
  // d_elevation_exists
  output->d_elevation_exists = input->d_elevation_exists;
  return true;
}

j2735_v2x_msgs__msg__NodeAttributeSetXY *
j2735_v2x_msgs__msg__NodeAttributeSetXY__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__NodeAttributeSetXY * msg = (j2735_v2x_msgs__msg__NodeAttributeSetXY *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__NodeAttributeSetXY), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__NodeAttributeSetXY));
  bool success = j2735_v2x_msgs__msg__NodeAttributeSetXY__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__NodeAttributeSetXY__destroy(j2735_v2x_msgs__msg__NodeAttributeSetXY * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__NodeAttributeSetXY__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__NodeAttributeSetXY__Sequence__init(j2735_v2x_msgs__msg__NodeAttributeSetXY__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__NodeAttributeSetXY * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__NodeAttributeSetXY *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__NodeAttributeSetXY), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__NodeAttributeSetXY__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__NodeAttributeSetXY__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__NodeAttributeSetXY__Sequence__fini(j2735_v2x_msgs__msg__NodeAttributeSetXY__Sequence * array)
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
      j2735_v2x_msgs__msg__NodeAttributeSetXY__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__NodeAttributeSetXY__Sequence *
j2735_v2x_msgs__msg__NodeAttributeSetXY__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__NodeAttributeSetXY__Sequence * array = (j2735_v2x_msgs__msg__NodeAttributeSetXY__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__NodeAttributeSetXY__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__NodeAttributeSetXY__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__NodeAttributeSetXY__Sequence__destroy(j2735_v2x_msgs__msg__NodeAttributeSetXY__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__NodeAttributeSetXY__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__NodeAttributeSetXY__Sequence__are_equal(const j2735_v2x_msgs__msg__NodeAttributeSetXY__Sequence * lhs, const j2735_v2x_msgs__msg__NodeAttributeSetXY__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__NodeAttributeSetXY__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__NodeAttributeSetXY__Sequence__copy(
  const j2735_v2x_msgs__msg__NodeAttributeSetXY__Sequence * input,
  j2735_v2x_msgs__msg__NodeAttributeSetXY__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__NodeAttributeSetXY);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__NodeAttributeSetXY * data =
      (j2735_v2x_msgs__msg__NodeAttributeSetXY *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__NodeAttributeSetXY__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__NodeAttributeSetXY__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__NodeAttributeSetXY__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
