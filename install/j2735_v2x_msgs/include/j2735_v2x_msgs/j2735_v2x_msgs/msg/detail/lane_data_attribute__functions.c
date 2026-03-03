// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/LaneDataAttribute.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/lane_data_attribute__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `speed_limits`
#include "j2735_v2x_msgs/msg/detail/speed_limit_list__functions.h"

bool
j2735_v2x_msgs__msg__LaneDataAttribute__init(j2735_v2x_msgs__msg__LaneDataAttribute * msg)
{
  if (!msg) {
    return false;
  }
  // choice
  // path_end_point_angle
  // lane_crown_point_center
  // lane_crown_point_right
  // lane_crown_point_left
  // lane_angle
  // speed_limits
  if (!j2735_v2x_msgs__msg__SpeedLimitList__init(&msg->speed_limits)) {
    j2735_v2x_msgs__msg__LaneDataAttribute__fini(msg);
    return false;
  }
  return true;
}

void
j2735_v2x_msgs__msg__LaneDataAttribute__fini(j2735_v2x_msgs__msg__LaneDataAttribute * msg)
{
  if (!msg) {
    return;
  }
  // choice
  // path_end_point_angle
  // lane_crown_point_center
  // lane_crown_point_right
  // lane_crown_point_left
  // lane_angle
  // speed_limits
  j2735_v2x_msgs__msg__SpeedLimitList__fini(&msg->speed_limits);
}

bool
j2735_v2x_msgs__msg__LaneDataAttribute__are_equal(const j2735_v2x_msgs__msg__LaneDataAttribute * lhs, const j2735_v2x_msgs__msg__LaneDataAttribute * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // choice
  if (lhs->choice != rhs->choice) {
    return false;
  }
  // path_end_point_angle
  if (lhs->path_end_point_angle != rhs->path_end_point_angle) {
    return false;
  }
  // lane_crown_point_center
  if (lhs->lane_crown_point_center != rhs->lane_crown_point_center) {
    return false;
  }
  // lane_crown_point_right
  if (lhs->lane_crown_point_right != rhs->lane_crown_point_right) {
    return false;
  }
  // lane_crown_point_left
  if (lhs->lane_crown_point_left != rhs->lane_crown_point_left) {
    return false;
  }
  // lane_angle
  if (lhs->lane_angle != rhs->lane_angle) {
    return false;
  }
  // speed_limits
  if (!j2735_v2x_msgs__msg__SpeedLimitList__are_equal(
      &(lhs->speed_limits), &(rhs->speed_limits)))
  {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__LaneDataAttribute__copy(
  const j2735_v2x_msgs__msg__LaneDataAttribute * input,
  j2735_v2x_msgs__msg__LaneDataAttribute * output)
{
  if (!input || !output) {
    return false;
  }
  // choice
  output->choice = input->choice;
  // path_end_point_angle
  output->path_end_point_angle = input->path_end_point_angle;
  // lane_crown_point_center
  output->lane_crown_point_center = input->lane_crown_point_center;
  // lane_crown_point_right
  output->lane_crown_point_right = input->lane_crown_point_right;
  // lane_crown_point_left
  output->lane_crown_point_left = input->lane_crown_point_left;
  // lane_angle
  output->lane_angle = input->lane_angle;
  // speed_limits
  if (!j2735_v2x_msgs__msg__SpeedLimitList__copy(
      &(input->speed_limits), &(output->speed_limits)))
  {
    return false;
  }
  return true;
}

j2735_v2x_msgs__msg__LaneDataAttribute *
j2735_v2x_msgs__msg__LaneDataAttribute__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__LaneDataAttribute * msg = (j2735_v2x_msgs__msg__LaneDataAttribute *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__LaneDataAttribute), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__LaneDataAttribute));
  bool success = j2735_v2x_msgs__msg__LaneDataAttribute__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__LaneDataAttribute__destroy(j2735_v2x_msgs__msg__LaneDataAttribute * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__LaneDataAttribute__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__LaneDataAttribute__Sequence__init(j2735_v2x_msgs__msg__LaneDataAttribute__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__LaneDataAttribute * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__LaneDataAttribute *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__LaneDataAttribute), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__LaneDataAttribute__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__LaneDataAttribute__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__LaneDataAttribute__Sequence__fini(j2735_v2x_msgs__msg__LaneDataAttribute__Sequence * array)
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
      j2735_v2x_msgs__msg__LaneDataAttribute__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__LaneDataAttribute__Sequence *
j2735_v2x_msgs__msg__LaneDataAttribute__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__LaneDataAttribute__Sequence * array = (j2735_v2x_msgs__msg__LaneDataAttribute__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__LaneDataAttribute__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__LaneDataAttribute__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__LaneDataAttribute__Sequence__destroy(j2735_v2x_msgs__msg__LaneDataAttribute__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__LaneDataAttribute__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__LaneDataAttribute__Sequence__are_equal(const j2735_v2x_msgs__msg__LaneDataAttribute__Sequence * lhs, const j2735_v2x_msgs__msg__LaneDataAttribute__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__LaneDataAttribute__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__LaneDataAttribute__Sequence__copy(
  const j2735_v2x_msgs__msg__LaneDataAttribute__Sequence * input,
  j2735_v2x_msgs__msg__LaneDataAttribute__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__LaneDataAttribute);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__LaneDataAttribute * data =
      (j2735_v2x_msgs__msg__LaneDataAttribute *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__LaneDataAttribute__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__LaneDataAttribute__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__LaneDataAttribute__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
