// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/RoadSegment.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/road_segment__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `id`
#include "j2735_v2x_msgs/msg/detail/road_segment_reference_id__functions.h"
// Member `ref_point`
#include "j2735_v2x_msgs/msg/detail/position3_d__functions.h"
// Member `speed_limits`
#include "j2735_v2x_msgs/msg/detail/speed_limit_list__functions.h"
// Member `road_lane_set`
#include "j2735_v2x_msgs/msg/detail/road_lane_set_list__functions.h"

bool
j2735_v2x_msgs__msg__RoadSegment__init(j2735_v2x_msgs__msg__RoadSegment * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    j2735_v2x_msgs__msg__RoadSegment__fini(msg);
    return false;
  }
  // name_exists
  // id
  if (!j2735_v2x_msgs__msg__RoadSegmentReferenceID__init(&msg->id)) {
    j2735_v2x_msgs__msg__RoadSegment__fini(msg);
    return false;
  }
  // revision
  // ref_point
  if (!j2735_v2x_msgs__msg__Position3D__init(&msg->ref_point)) {
    j2735_v2x_msgs__msg__RoadSegment__fini(msg);
    return false;
  }
  // lane_width
  // lane_width_exists
  // speed_limits
  if (!j2735_v2x_msgs__msg__SpeedLimitList__init(&msg->speed_limits)) {
    j2735_v2x_msgs__msg__RoadSegment__fini(msg);
    return false;
  }
  // speed_limits_exists
  // road_lane_set
  if (!j2735_v2x_msgs__msg__RoadLaneSetList__init(&msg->road_lane_set)) {
    j2735_v2x_msgs__msg__RoadSegment__fini(msg);
    return false;
  }
  return true;
}

void
j2735_v2x_msgs__msg__RoadSegment__fini(j2735_v2x_msgs__msg__RoadSegment * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // name_exists
  // id
  j2735_v2x_msgs__msg__RoadSegmentReferenceID__fini(&msg->id);
  // revision
  // ref_point
  j2735_v2x_msgs__msg__Position3D__fini(&msg->ref_point);
  // lane_width
  // lane_width_exists
  // speed_limits
  j2735_v2x_msgs__msg__SpeedLimitList__fini(&msg->speed_limits);
  // speed_limits_exists
  // road_lane_set
  j2735_v2x_msgs__msg__RoadLaneSetList__fini(&msg->road_lane_set);
}

bool
j2735_v2x_msgs__msg__RoadSegment__are_equal(const j2735_v2x_msgs__msg__RoadSegment * lhs, const j2735_v2x_msgs__msg__RoadSegment * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // name_exists
  if (lhs->name_exists != rhs->name_exists) {
    return false;
  }
  // id
  if (!j2735_v2x_msgs__msg__RoadSegmentReferenceID__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // revision
  if (lhs->revision != rhs->revision) {
    return false;
  }
  // ref_point
  if (!j2735_v2x_msgs__msg__Position3D__are_equal(
      &(lhs->ref_point), &(rhs->ref_point)))
  {
    return false;
  }
  // lane_width
  if (lhs->lane_width != rhs->lane_width) {
    return false;
  }
  // lane_width_exists
  if (lhs->lane_width_exists != rhs->lane_width_exists) {
    return false;
  }
  // speed_limits
  if (!j2735_v2x_msgs__msg__SpeedLimitList__are_equal(
      &(lhs->speed_limits), &(rhs->speed_limits)))
  {
    return false;
  }
  // speed_limits_exists
  if (lhs->speed_limits_exists != rhs->speed_limits_exists) {
    return false;
  }
  // road_lane_set
  if (!j2735_v2x_msgs__msg__RoadLaneSetList__are_equal(
      &(lhs->road_lane_set), &(rhs->road_lane_set)))
  {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__RoadSegment__copy(
  const j2735_v2x_msgs__msg__RoadSegment * input,
  j2735_v2x_msgs__msg__RoadSegment * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // name_exists
  output->name_exists = input->name_exists;
  // id
  if (!j2735_v2x_msgs__msg__RoadSegmentReferenceID__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // revision
  output->revision = input->revision;
  // ref_point
  if (!j2735_v2x_msgs__msg__Position3D__copy(
      &(input->ref_point), &(output->ref_point)))
  {
    return false;
  }
  // lane_width
  output->lane_width = input->lane_width;
  // lane_width_exists
  output->lane_width_exists = input->lane_width_exists;
  // speed_limits
  if (!j2735_v2x_msgs__msg__SpeedLimitList__copy(
      &(input->speed_limits), &(output->speed_limits)))
  {
    return false;
  }
  // speed_limits_exists
  output->speed_limits_exists = input->speed_limits_exists;
  // road_lane_set
  if (!j2735_v2x_msgs__msg__RoadLaneSetList__copy(
      &(input->road_lane_set), &(output->road_lane_set)))
  {
    return false;
  }
  return true;
}

j2735_v2x_msgs__msg__RoadSegment *
j2735_v2x_msgs__msg__RoadSegment__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__RoadSegment * msg = (j2735_v2x_msgs__msg__RoadSegment *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__RoadSegment), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__RoadSegment));
  bool success = j2735_v2x_msgs__msg__RoadSegment__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__RoadSegment__destroy(j2735_v2x_msgs__msg__RoadSegment * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__RoadSegment__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__RoadSegment__Sequence__init(j2735_v2x_msgs__msg__RoadSegment__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__RoadSegment * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__RoadSegment *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__RoadSegment), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__RoadSegment__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__RoadSegment__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__RoadSegment__Sequence__fini(j2735_v2x_msgs__msg__RoadSegment__Sequence * array)
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
      j2735_v2x_msgs__msg__RoadSegment__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__RoadSegment__Sequence *
j2735_v2x_msgs__msg__RoadSegment__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__RoadSegment__Sequence * array = (j2735_v2x_msgs__msg__RoadSegment__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__RoadSegment__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__RoadSegment__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__RoadSegment__Sequence__destroy(j2735_v2x_msgs__msg__RoadSegment__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__RoadSegment__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__RoadSegment__Sequence__are_equal(const j2735_v2x_msgs__msg__RoadSegment__Sequence * lhs, const j2735_v2x_msgs__msg__RoadSegment__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__RoadSegment__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__RoadSegment__Sequence__copy(
  const j2735_v2x_msgs__msg__RoadSegment__Sequence * input,
  j2735_v2x_msgs__msg__RoadSegment__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__RoadSegment);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__RoadSegment * data =
      (j2735_v2x_msgs__msg__RoadSegment *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__RoadSegment__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__RoadSegment__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__RoadSegment__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
