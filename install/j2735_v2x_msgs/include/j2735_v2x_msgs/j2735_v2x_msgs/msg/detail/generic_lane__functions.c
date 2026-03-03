// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/GenericLane.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/generic_lane__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `lane_attributes`
#include "j2735_v2x_msgs/msg/detail/lane_attributes__functions.h"
// Member `maneuvers`
#include "j2735_v2x_msgs/msg/detail/allowed_maneuvers__functions.h"
// Member `node_list`
#include "j2735_v2x_msgs/msg/detail/node_list_xy__functions.h"
// Member `connects_to`
#include "j2735_v2x_msgs/msg/detail/connects_to_list__functions.h"
// Member `overlay_lane_list`
#include "j2735_v2x_msgs/msg/detail/overlay_lane_list__functions.h"

bool
j2735_v2x_msgs__msg__GenericLane__init(j2735_v2x_msgs__msg__GenericLane * msg)
{
  if (!msg) {
    return false;
  }
  // lane_id
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    j2735_v2x_msgs__msg__GenericLane__fini(msg);
    return false;
  }
  // name_exists
  // ingress_approach
  // ingress_approach_exists
  // egress_approach
  // egress_approach_exists
  // lane_attributes
  if (!j2735_v2x_msgs__msg__LaneAttributes__init(&msg->lane_attributes)) {
    j2735_v2x_msgs__msg__GenericLane__fini(msg);
    return false;
  }
  // maneuvers
  if (!j2735_v2x_msgs__msg__AllowedManeuvers__init(&msg->maneuvers)) {
    j2735_v2x_msgs__msg__GenericLane__fini(msg);
    return false;
  }
  // maneuvers_exists
  // node_list
  if (!j2735_v2x_msgs__msg__NodeListXY__init(&msg->node_list)) {
    j2735_v2x_msgs__msg__GenericLane__fini(msg);
    return false;
  }
  // connects_to
  if (!j2735_v2x_msgs__msg__ConnectsToList__init(&msg->connects_to)) {
    j2735_v2x_msgs__msg__GenericLane__fini(msg);
    return false;
  }
  // connects_to_exists
  // overlay_lane_list
  if (!j2735_v2x_msgs__msg__OverlayLaneList__init(&msg->overlay_lane_list)) {
    j2735_v2x_msgs__msg__GenericLane__fini(msg);
    return false;
  }
  // overlay_lane_list_exists
  return true;
}

void
j2735_v2x_msgs__msg__GenericLane__fini(j2735_v2x_msgs__msg__GenericLane * msg)
{
  if (!msg) {
    return;
  }
  // lane_id
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // name_exists
  // ingress_approach
  // ingress_approach_exists
  // egress_approach
  // egress_approach_exists
  // lane_attributes
  j2735_v2x_msgs__msg__LaneAttributes__fini(&msg->lane_attributes);
  // maneuvers
  j2735_v2x_msgs__msg__AllowedManeuvers__fini(&msg->maneuvers);
  // maneuvers_exists
  // node_list
  j2735_v2x_msgs__msg__NodeListXY__fini(&msg->node_list);
  // connects_to
  j2735_v2x_msgs__msg__ConnectsToList__fini(&msg->connects_to);
  // connects_to_exists
  // overlay_lane_list
  j2735_v2x_msgs__msg__OverlayLaneList__fini(&msg->overlay_lane_list);
  // overlay_lane_list_exists
}

bool
j2735_v2x_msgs__msg__GenericLane__are_equal(const j2735_v2x_msgs__msg__GenericLane * lhs, const j2735_v2x_msgs__msg__GenericLane * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lane_id
  if (lhs->lane_id != rhs->lane_id) {
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
  // ingress_approach
  if (lhs->ingress_approach != rhs->ingress_approach) {
    return false;
  }
  // ingress_approach_exists
  if (lhs->ingress_approach_exists != rhs->ingress_approach_exists) {
    return false;
  }
  // egress_approach
  if (lhs->egress_approach != rhs->egress_approach) {
    return false;
  }
  // egress_approach_exists
  if (lhs->egress_approach_exists != rhs->egress_approach_exists) {
    return false;
  }
  // lane_attributes
  if (!j2735_v2x_msgs__msg__LaneAttributes__are_equal(
      &(lhs->lane_attributes), &(rhs->lane_attributes)))
  {
    return false;
  }
  // maneuvers
  if (!j2735_v2x_msgs__msg__AllowedManeuvers__are_equal(
      &(lhs->maneuvers), &(rhs->maneuvers)))
  {
    return false;
  }
  // maneuvers_exists
  if (lhs->maneuvers_exists != rhs->maneuvers_exists) {
    return false;
  }
  // node_list
  if (!j2735_v2x_msgs__msg__NodeListXY__are_equal(
      &(lhs->node_list), &(rhs->node_list)))
  {
    return false;
  }
  // connects_to
  if (!j2735_v2x_msgs__msg__ConnectsToList__are_equal(
      &(lhs->connects_to), &(rhs->connects_to)))
  {
    return false;
  }
  // connects_to_exists
  if (lhs->connects_to_exists != rhs->connects_to_exists) {
    return false;
  }
  // overlay_lane_list
  if (!j2735_v2x_msgs__msg__OverlayLaneList__are_equal(
      &(lhs->overlay_lane_list), &(rhs->overlay_lane_list)))
  {
    return false;
  }
  // overlay_lane_list_exists
  if (lhs->overlay_lane_list_exists != rhs->overlay_lane_list_exists) {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__GenericLane__copy(
  const j2735_v2x_msgs__msg__GenericLane * input,
  j2735_v2x_msgs__msg__GenericLane * output)
{
  if (!input || !output) {
    return false;
  }
  // lane_id
  output->lane_id = input->lane_id;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // name_exists
  output->name_exists = input->name_exists;
  // ingress_approach
  output->ingress_approach = input->ingress_approach;
  // ingress_approach_exists
  output->ingress_approach_exists = input->ingress_approach_exists;
  // egress_approach
  output->egress_approach = input->egress_approach;
  // egress_approach_exists
  output->egress_approach_exists = input->egress_approach_exists;
  // lane_attributes
  if (!j2735_v2x_msgs__msg__LaneAttributes__copy(
      &(input->lane_attributes), &(output->lane_attributes)))
  {
    return false;
  }
  // maneuvers
  if (!j2735_v2x_msgs__msg__AllowedManeuvers__copy(
      &(input->maneuvers), &(output->maneuvers)))
  {
    return false;
  }
  // maneuvers_exists
  output->maneuvers_exists = input->maneuvers_exists;
  // node_list
  if (!j2735_v2x_msgs__msg__NodeListXY__copy(
      &(input->node_list), &(output->node_list)))
  {
    return false;
  }
  // connects_to
  if (!j2735_v2x_msgs__msg__ConnectsToList__copy(
      &(input->connects_to), &(output->connects_to)))
  {
    return false;
  }
  // connects_to_exists
  output->connects_to_exists = input->connects_to_exists;
  // overlay_lane_list
  if (!j2735_v2x_msgs__msg__OverlayLaneList__copy(
      &(input->overlay_lane_list), &(output->overlay_lane_list)))
  {
    return false;
  }
  // overlay_lane_list_exists
  output->overlay_lane_list_exists = input->overlay_lane_list_exists;
  return true;
}

j2735_v2x_msgs__msg__GenericLane *
j2735_v2x_msgs__msg__GenericLane__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__GenericLane * msg = (j2735_v2x_msgs__msg__GenericLane *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__GenericLane), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__GenericLane));
  bool success = j2735_v2x_msgs__msg__GenericLane__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__GenericLane__destroy(j2735_v2x_msgs__msg__GenericLane * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__GenericLane__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__GenericLane__Sequence__init(j2735_v2x_msgs__msg__GenericLane__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__GenericLane * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__GenericLane *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__GenericLane), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__GenericLane__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__GenericLane__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__GenericLane__Sequence__fini(j2735_v2x_msgs__msg__GenericLane__Sequence * array)
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
      j2735_v2x_msgs__msg__GenericLane__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__GenericLane__Sequence *
j2735_v2x_msgs__msg__GenericLane__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__GenericLane__Sequence * array = (j2735_v2x_msgs__msg__GenericLane__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__GenericLane__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__GenericLane__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__GenericLane__Sequence__destroy(j2735_v2x_msgs__msg__GenericLane__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__GenericLane__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__GenericLane__Sequence__are_equal(const j2735_v2x_msgs__msg__GenericLane__Sequence * lhs, const j2735_v2x_msgs__msg__GenericLane__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__GenericLane__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__GenericLane__Sequence__copy(
  const j2735_v2x_msgs__msg__GenericLane__Sequence * input,
  j2735_v2x_msgs__msg__GenericLane__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__GenericLane);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__GenericLane * data =
      (j2735_v2x_msgs__msg__GenericLane *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__GenericLane__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__GenericLane__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__GenericLane__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
