// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/TrailerHistoryPoint.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/trailer_history_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pivot_angle`
#include "j2735_v2x_msgs/msg/detail/angle__functions.h"
// Member `time_offset`
#include "j2735_v2x_msgs/msg/detail/time_offset__functions.h"
// Member `position_offset`
#include "j2735_v2x_msgs/msg/detail/node_xy24b__functions.h"
// Member `elevation_offset`
#include "j2735_v2x_msgs/msg/detail/vert_offset_b07__functions.h"
// Member `heading`
#include "j2735_v2x_msgs/msg/detail/coarse_heading__functions.h"

bool
j2735_v2x_msgs__msg__TrailerHistoryPoint__init(j2735_v2x_msgs__msg__TrailerHistoryPoint * msg)
{
  if (!msg) {
    return false;
  }
  // presence_vector
  // pivot_angle
  if (!j2735_v2x_msgs__msg__Angle__init(&msg->pivot_angle)) {
    j2735_v2x_msgs__msg__TrailerHistoryPoint__fini(msg);
    return false;
  }
  // time_offset
  if (!j2735_v2x_msgs__msg__TimeOffset__init(&msg->time_offset)) {
    j2735_v2x_msgs__msg__TrailerHistoryPoint__fini(msg);
    return false;
  }
  // position_offset
  if (!j2735_v2x_msgs__msg__NodeXY24b__init(&msg->position_offset)) {
    j2735_v2x_msgs__msg__TrailerHistoryPoint__fini(msg);
    return false;
  }
  // elevation_offset
  if (!j2735_v2x_msgs__msg__VertOffsetB07__init(&msg->elevation_offset)) {
    j2735_v2x_msgs__msg__TrailerHistoryPoint__fini(msg);
    return false;
  }
  // heading
  if (!j2735_v2x_msgs__msg__CoarseHeading__init(&msg->heading)) {
    j2735_v2x_msgs__msg__TrailerHistoryPoint__fini(msg);
    return false;
  }
  return true;
}

void
j2735_v2x_msgs__msg__TrailerHistoryPoint__fini(j2735_v2x_msgs__msg__TrailerHistoryPoint * msg)
{
  if (!msg) {
    return;
  }
  // presence_vector
  // pivot_angle
  j2735_v2x_msgs__msg__Angle__fini(&msg->pivot_angle);
  // time_offset
  j2735_v2x_msgs__msg__TimeOffset__fini(&msg->time_offset);
  // position_offset
  j2735_v2x_msgs__msg__NodeXY24b__fini(&msg->position_offset);
  // elevation_offset
  j2735_v2x_msgs__msg__VertOffsetB07__fini(&msg->elevation_offset);
  // heading
  j2735_v2x_msgs__msg__CoarseHeading__fini(&msg->heading);
}

bool
j2735_v2x_msgs__msg__TrailerHistoryPoint__are_equal(const j2735_v2x_msgs__msg__TrailerHistoryPoint * lhs, const j2735_v2x_msgs__msg__TrailerHistoryPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // presence_vector
  if (lhs->presence_vector != rhs->presence_vector) {
    return false;
  }
  // pivot_angle
  if (!j2735_v2x_msgs__msg__Angle__are_equal(
      &(lhs->pivot_angle), &(rhs->pivot_angle)))
  {
    return false;
  }
  // time_offset
  if (!j2735_v2x_msgs__msg__TimeOffset__are_equal(
      &(lhs->time_offset), &(rhs->time_offset)))
  {
    return false;
  }
  // position_offset
  if (!j2735_v2x_msgs__msg__NodeXY24b__are_equal(
      &(lhs->position_offset), &(rhs->position_offset)))
  {
    return false;
  }
  // elevation_offset
  if (!j2735_v2x_msgs__msg__VertOffsetB07__are_equal(
      &(lhs->elevation_offset), &(rhs->elevation_offset)))
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
j2735_v2x_msgs__msg__TrailerHistoryPoint__copy(
  const j2735_v2x_msgs__msg__TrailerHistoryPoint * input,
  j2735_v2x_msgs__msg__TrailerHistoryPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // presence_vector
  output->presence_vector = input->presence_vector;
  // pivot_angle
  if (!j2735_v2x_msgs__msg__Angle__copy(
      &(input->pivot_angle), &(output->pivot_angle)))
  {
    return false;
  }
  // time_offset
  if (!j2735_v2x_msgs__msg__TimeOffset__copy(
      &(input->time_offset), &(output->time_offset)))
  {
    return false;
  }
  // position_offset
  if (!j2735_v2x_msgs__msg__NodeXY24b__copy(
      &(input->position_offset), &(output->position_offset)))
  {
    return false;
  }
  // elevation_offset
  if (!j2735_v2x_msgs__msg__VertOffsetB07__copy(
      &(input->elevation_offset), &(output->elevation_offset)))
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

j2735_v2x_msgs__msg__TrailerHistoryPoint *
j2735_v2x_msgs__msg__TrailerHistoryPoint__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__TrailerHistoryPoint * msg = (j2735_v2x_msgs__msg__TrailerHistoryPoint *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__TrailerHistoryPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__TrailerHistoryPoint));
  bool success = j2735_v2x_msgs__msg__TrailerHistoryPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__TrailerHistoryPoint__destroy(j2735_v2x_msgs__msg__TrailerHistoryPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__TrailerHistoryPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__TrailerHistoryPoint__Sequence__init(j2735_v2x_msgs__msg__TrailerHistoryPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__TrailerHistoryPoint * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__TrailerHistoryPoint *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__TrailerHistoryPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__TrailerHistoryPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__TrailerHistoryPoint__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__TrailerHistoryPoint__Sequence__fini(j2735_v2x_msgs__msg__TrailerHistoryPoint__Sequence * array)
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
      j2735_v2x_msgs__msg__TrailerHistoryPoint__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__TrailerHistoryPoint__Sequence *
j2735_v2x_msgs__msg__TrailerHistoryPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__TrailerHistoryPoint__Sequence * array = (j2735_v2x_msgs__msg__TrailerHistoryPoint__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__TrailerHistoryPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__TrailerHistoryPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__TrailerHistoryPoint__Sequence__destroy(j2735_v2x_msgs__msg__TrailerHistoryPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__TrailerHistoryPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__TrailerHistoryPoint__Sequence__are_equal(const j2735_v2x_msgs__msg__TrailerHistoryPoint__Sequence * lhs, const j2735_v2x_msgs__msg__TrailerHistoryPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__TrailerHistoryPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__TrailerHistoryPoint__Sequence__copy(
  const j2735_v2x_msgs__msg__TrailerHistoryPoint__Sequence * input,
  j2735_v2x_msgs__msg__TrailerHistoryPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__TrailerHistoryPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__TrailerHistoryPoint * data =
      (j2735_v2x_msgs__msg__TrailerHistoryPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__TrailerHistoryPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__TrailerHistoryPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__TrailerHistoryPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
