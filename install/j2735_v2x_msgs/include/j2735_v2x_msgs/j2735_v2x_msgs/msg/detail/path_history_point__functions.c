// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/PathHistoryPoint.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/path_history_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `lat_offset`
// Member `lon_offset`
#include "j2735_v2x_msgs/msg/detail/offset_llb18__functions.h"
// Member `elevation_offset`
#include "j2735_v2x_msgs/msg/detail/vert_offset_b12__functions.h"
// Member `time_offset`
#include "j2735_v2x_msgs/msg/detail/time_offset__functions.h"
// Member `speed`
#include "j2735_v2x_msgs/msg/detail/speed__functions.h"
// Member `pos_accuracy`
#include "j2735_v2x_msgs/msg/detail/positional_accuracy__functions.h"
// Member `heading`
#include "j2735_v2x_msgs/msg/detail/coarse_heading__functions.h"

bool
j2735_v2x_msgs__msg__PathHistoryPoint__init(j2735_v2x_msgs__msg__PathHistoryPoint * msg)
{
  if (!msg) {
    return false;
  }
  // lat_offset
  if (!j2735_v2x_msgs__msg__OffsetLLB18__init(&msg->lat_offset)) {
    j2735_v2x_msgs__msg__PathHistoryPoint__fini(msg);
    return false;
  }
  // lon_offset
  if (!j2735_v2x_msgs__msg__OffsetLLB18__init(&msg->lon_offset)) {
    j2735_v2x_msgs__msg__PathHistoryPoint__fini(msg);
    return false;
  }
  // elevation_offset
  if (!j2735_v2x_msgs__msg__VertOffsetB12__init(&msg->elevation_offset)) {
    j2735_v2x_msgs__msg__PathHistoryPoint__fini(msg);
    return false;
  }
  // time_offset
  if (!j2735_v2x_msgs__msg__TimeOffset__init(&msg->time_offset)) {
    j2735_v2x_msgs__msg__PathHistoryPoint__fini(msg);
    return false;
  }
  // speed
  if (!j2735_v2x_msgs__msg__Speed__init(&msg->speed)) {
    j2735_v2x_msgs__msg__PathHistoryPoint__fini(msg);
    return false;
  }
  // pos_accuracy
  if (!j2735_v2x_msgs__msg__PositionalAccuracy__init(&msg->pos_accuracy)) {
    j2735_v2x_msgs__msg__PathHistoryPoint__fini(msg);
    return false;
  }
  // heading
  if (!j2735_v2x_msgs__msg__CoarseHeading__init(&msg->heading)) {
    j2735_v2x_msgs__msg__PathHistoryPoint__fini(msg);
    return false;
  }
  return true;
}

void
j2735_v2x_msgs__msg__PathHistoryPoint__fini(j2735_v2x_msgs__msg__PathHistoryPoint * msg)
{
  if (!msg) {
    return;
  }
  // lat_offset
  j2735_v2x_msgs__msg__OffsetLLB18__fini(&msg->lat_offset);
  // lon_offset
  j2735_v2x_msgs__msg__OffsetLLB18__fini(&msg->lon_offset);
  // elevation_offset
  j2735_v2x_msgs__msg__VertOffsetB12__fini(&msg->elevation_offset);
  // time_offset
  j2735_v2x_msgs__msg__TimeOffset__fini(&msg->time_offset);
  // speed
  j2735_v2x_msgs__msg__Speed__fini(&msg->speed);
  // pos_accuracy
  j2735_v2x_msgs__msg__PositionalAccuracy__fini(&msg->pos_accuracy);
  // heading
  j2735_v2x_msgs__msg__CoarseHeading__fini(&msg->heading);
}

bool
j2735_v2x_msgs__msg__PathHistoryPoint__are_equal(const j2735_v2x_msgs__msg__PathHistoryPoint * lhs, const j2735_v2x_msgs__msg__PathHistoryPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lat_offset
  if (!j2735_v2x_msgs__msg__OffsetLLB18__are_equal(
      &(lhs->lat_offset), &(rhs->lat_offset)))
  {
    return false;
  }
  // lon_offset
  if (!j2735_v2x_msgs__msg__OffsetLLB18__are_equal(
      &(lhs->lon_offset), &(rhs->lon_offset)))
  {
    return false;
  }
  // elevation_offset
  if (!j2735_v2x_msgs__msg__VertOffsetB12__are_equal(
      &(lhs->elevation_offset), &(rhs->elevation_offset)))
  {
    return false;
  }
  // time_offset
  if (!j2735_v2x_msgs__msg__TimeOffset__are_equal(
      &(lhs->time_offset), &(rhs->time_offset)))
  {
    return false;
  }
  // speed
  if (!j2735_v2x_msgs__msg__Speed__are_equal(
      &(lhs->speed), &(rhs->speed)))
  {
    return false;
  }
  // pos_accuracy
  if (!j2735_v2x_msgs__msg__PositionalAccuracy__are_equal(
      &(lhs->pos_accuracy), &(rhs->pos_accuracy)))
  {
    return false;
  }
  // heading
  if (!j2735_v2x_msgs__msg__CoarseHeading__are_equal(
      &(lhs->heading), &(rhs->heading)))
  {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__PathHistoryPoint__copy(
  const j2735_v2x_msgs__msg__PathHistoryPoint * input,
  j2735_v2x_msgs__msg__PathHistoryPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // lat_offset
  if (!j2735_v2x_msgs__msg__OffsetLLB18__copy(
      &(input->lat_offset), &(output->lat_offset)))
  {
    return false;
  }
  // lon_offset
  if (!j2735_v2x_msgs__msg__OffsetLLB18__copy(
      &(input->lon_offset), &(output->lon_offset)))
  {
    return false;
  }
  // elevation_offset
  if (!j2735_v2x_msgs__msg__VertOffsetB12__copy(
      &(input->elevation_offset), &(output->elevation_offset)))
  {
    return false;
  }
  // time_offset
  if (!j2735_v2x_msgs__msg__TimeOffset__copy(
      &(input->time_offset), &(output->time_offset)))
  {
    return false;
  }
  // speed
  if (!j2735_v2x_msgs__msg__Speed__copy(
      &(input->speed), &(output->speed)))
  {
    return false;
  }
  // pos_accuracy
  if (!j2735_v2x_msgs__msg__PositionalAccuracy__copy(
      &(input->pos_accuracy), &(output->pos_accuracy)))
  {
    return false;
  }
  // heading
  if (!j2735_v2x_msgs__msg__CoarseHeading__copy(
      &(input->heading), &(output->heading)))
  {
    return false;
  }
  return true;
}

j2735_v2x_msgs__msg__PathHistoryPoint *
j2735_v2x_msgs__msg__PathHistoryPoint__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__PathHistoryPoint * msg = (j2735_v2x_msgs__msg__PathHistoryPoint *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__PathHistoryPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__PathHistoryPoint));
  bool success = j2735_v2x_msgs__msg__PathHistoryPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__PathHistoryPoint__destroy(j2735_v2x_msgs__msg__PathHistoryPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__PathHistoryPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__PathHistoryPoint__Sequence__init(j2735_v2x_msgs__msg__PathHistoryPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__PathHistoryPoint * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__PathHistoryPoint *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__PathHistoryPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__PathHistoryPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__PathHistoryPoint__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__PathHistoryPoint__Sequence__fini(j2735_v2x_msgs__msg__PathHistoryPoint__Sequence * array)
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
      j2735_v2x_msgs__msg__PathHistoryPoint__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__PathHistoryPoint__Sequence *
j2735_v2x_msgs__msg__PathHistoryPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__PathHistoryPoint__Sequence * array = (j2735_v2x_msgs__msg__PathHistoryPoint__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__PathHistoryPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__PathHistoryPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__PathHistoryPoint__Sequence__destroy(j2735_v2x_msgs__msg__PathHistoryPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__PathHistoryPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__PathHistoryPoint__Sequence__are_equal(const j2735_v2x_msgs__msg__PathHistoryPoint__Sequence * lhs, const j2735_v2x_msgs__msg__PathHistoryPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__PathHistoryPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__PathHistoryPoint__Sequence__copy(
  const j2735_v2x_msgs__msg__PathHistoryPoint__Sequence * input,
  j2735_v2x_msgs__msg__PathHistoryPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__PathHistoryPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__PathHistoryPoint * data =
      (j2735_v2x_msgs__msg__PathHistoryPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__PathHistoryPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__PathHistoryPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__PathHistoryPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
