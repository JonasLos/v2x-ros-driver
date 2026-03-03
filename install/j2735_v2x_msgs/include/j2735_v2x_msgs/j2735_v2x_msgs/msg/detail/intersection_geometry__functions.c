// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/IntersectionGeometry.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/intersection_geometry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `id`
#include "j2735_v2x_msgs/msg/detail/intersection_reference_id__functions.h"
// Member `ref_point`
#include "j2735_v2x_msgs/msg/detail/position3_d__functions.h"
// Member `speed_limits`
#include "j2735_v2x_msgs/msg/detail/speed_limit_list__functions.h"
// Member `lane_set`
#include "j2735_v2x_msgs/msg/detail/lane_list__functions.h"
// Member `preempt_priority_data`
#include "j2735_v2x_msgs/msg/detail/preempt_priority_list__functions.h"

bool
j2735_v2x_msgs__msg__IntersectionGeometry__init(j2735_v2x_msgs__msg__IntersectionGeometry * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    j2735_v2x_msgs__msg__IntersectionGeometry__fini(msg);
    return false;
  }
  // name_exists
  // id
  if (!j2735_v2x_msgs__msg__IntersectionReferenceID__init(&msg->id)) {
    j2735_v2x_msgs__msg__IntersectionGeometry__fini(msg);
    return false;
  }
  // revision
  // ref_point
  if (!j2735_v2x_msgs__msg__Position3D__init(&msg->ref_point)) {
    j2735_v2x_msgs__msg__IntersectionGeometry__fini(msg);
    return false;
  }
  // lane_width
  // lane_width_exists
  // speed_limits
  if (!j2735_v2x_msgs__msg__SpeedLimitList__init(&msg->speed_limits)) {
    j2735_v2x_msgs__msg__IntersectionGeometry__fini(msg);
    return false;
  }
  // speed_limits_exists
  // lane_set
  if (!j2735_v2x_msgs__msg__LaneList__init(&msg->lane_set)) {
    j2735_v2x_msgs__msg__IntersectionGeometry__fini(msg);
    return false;
  }
  // preempt_priority_data
  if (!j2735_v2x_msgs__msg__PreemptPriorityList__init(&msg->preempt_priority_data)) {
    j2735_v2x_msgs__msg__IntersectionGeometry__fini(msg);
    return false;
  }
  // preempt_priority_data_exists
  return true;
}

void
j2735_v2x_msgs__msg__IntersectionGeometry__fini(j2735_v2x_msgs__msg__IntersectionGeometry * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // name_exists
  // id
  j2735_v2x_msgs__msg__IntersectionReferenceID__fini(&msg->id);
  // revision
  // ref_point
  j2735_v2x_msgs__msg__Position3D__fini(&msg->ref_point);
  // lane_width
  // lane_width_exists
  // speed_limits
  j2735_v2x_msgs__msg__SpeedLimitList__fini(&msg->speed_limits);
  // speed_limits_exists
  // lane_set
  j2735_v2x_msgs__msg__LaneList__fini(&msg->lane_set);
  // preempt_priority_data
  j2735_v2x_msgs__msg__PreemptPriorityList__fini(&msg->preempt_priority_data);
  // preempt_priority_data_exists
}

bool
j2735_v2x_msgs__msg__IntersectionGeometry__are_equal(const j2735_v2x_msgs__msg__IntersectionGeometry * lhs, const j2735_v2x_msgs__msg__IntersectionGeometry * rhs)
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
  if (!j2735_v2x_msgs__msg__IntersectionReferenceID__are_equal(
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
  // lane_set
  if (!j2735_v2x_msgs__msg__LaneList__are_equal(
      &(lhs->lane_set), &(rhs->lane_set)))
  {
    return false;
  }
  // preempt_priority_data
  if (!j2735_v2x_msgs__msg__PreemptPriorityList__are_equal(
      &(lhs->preempt_priority_data), &(rhs->preempt_priority_data)))
  {
    return false;
  }
  // preempt_priority_data_exists
  if (lhs->preempt_priority_data_exists != rhs->preempt_priority_data_exists) {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__IntersectionGeometry__copy(
  const j2735_v2x_msgs__msg__IntersectionGeometry * input,
  j2735_v2x_msgs__msg__IntersectionGeometry * output)
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
  if (!j2735_v2x_msgs__msg__IntersectionReferenceID__copy(
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
  // lane_set
  if (!j2735_v2x_msgs__msg__LaneList__copy(
      &(input->lane_set), &(output->lane_set)))
  {
    return false;
  }
  // preempt_priority_data
  if (!j2735_v2x_msgs__msg__PreemptPriorityList__copy(
      &(input->preempt_priority_data), &(output->preempt_priority_data)))
  {
    return false;
  }
  // preempt_priority_data_exists
  output->preempt_priority_data_exists = input->preempt_priority_data_exists;
  return true;
}

j2735_v2x_msgs__msg__IntersectionGeometry *
j2735_v2x_msgs__msg__IntersectionGeometry__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__IntersectionGeometry * msg = (j2735_v2x_msgs__msg__IntersectionGeometry *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__IntersectionGeometry), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__IntersectionGeometry));
  bool success = j2735_v2x_msgs__msg__IntersectionGeometry__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__IntersectionGeometry__destroy(j2735_v2x_msgs__msg__IntersectionGeometry * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__IntersectionGeometry__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__IntersectionGeometry__Sequence__init(j2735_v2x_msgs__msg__IntersectionGeometry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__IntersectionGeometry * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__IntersectionGeometry *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__IntersectionGeometry), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__IntersectionGeometry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__IntersectionGeometry__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__IntersectionGeometry__Sequence__fini(j2735_v2x_msgs__msg__IntersectionGeometry__Sequence * array)
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
      j2735_v2x_msgs__msg__IntersectionGeometry__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__IntersectionGeometry__Sequence *
j2735_v2x_msgs__msg__IntersectionGeometry__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__IntersectionGeometry__Sequence * array = (j2735_v2x_msgs__msg__IntersectionGeometry__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__IntersectionGeometry__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__IntersectionGeometry__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__IntersectionGeometry__Sequence__destroy(j2735_v2x_msgs__msg__IntersectionGeometry__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__IntersectionGeometry__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__IntersectionGeometry__Sequence__are_equal(const j2735_v2x_msgs__msg__IntersectionGeometry__Sequence * lhs, const j2735_v2x_msgs__msg__IntersectionGeometry__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__IntersectionGeometry__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__IntersectionGeometry__Sequence__copy(
  const j2735_v2x_msgs__msg__IntersectionGeometry__Sequence * input,
  j2735_v2x_msgs__msg__IntersectionGeometry__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__IntersectionGeometry);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__IntersectionGeometry * data =
      (j2735_v2x_msgs__msg__IntersectionGeometry *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__IntersectionGeometry__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__IntersectionGeometry__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__IntersectionGeometry__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
