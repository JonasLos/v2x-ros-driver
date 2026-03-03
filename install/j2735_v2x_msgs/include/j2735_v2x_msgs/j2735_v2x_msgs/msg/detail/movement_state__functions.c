// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/MovementState.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/movement_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `movement_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `state_time_speed`
#include "j2735_v2x_msgs/msg/detail/movement_event_list__functions.h"
// Member `maneuver_assist_list`
#include "j2735_v2x_msgs/msg/detail/maneuver_assist_list__functions.h"

bool
j2735_v2x_msgs__msg__MovementState__init(j2735_v2x_msgs__msg__MovementState * msg)
{
  if (!msg) {
    return false;
  }
  // movement_name
  if (!rosidl_runtime_c__String__init(&msg->movement_name)) {
    j2735_v2x_msgs__msg__MovementState__fini(msg);
    return false;
  }
  // movement_name_exists
  // signal_group
  // state_time_speed
  if (!j2735_v2x_msgs__msg__MovementEventList__init(&msg->state_time_speed)) {
    j2735_v2x_msgs__msg__MovementState__fini(msg);
    return false;
  }
  // maneuver_assist_list
  if (!j2735_v2x_msgs__msg__ManeuverAssistList__init(&msg->maneuver_assist_list)) {
    j2735_v2x_msgs__msg__MovementState__fini(msg);
    return false;
  }
  // maneuver_assist_list_exists
  return true;
}

void
j2735_v2x_msgs__msg__MovementState__fini(j2735_v2x_msgs__msg__MovementState * msg)
{
  if (!msg) {
    return;
  }
  // movement_name
  rosidl_runtime_c__String__fini(&msg->movement_name);
  // movement_name_exists
  // signal_group
  // state_time_speed
  j2735_v2x_msgs__msg__MovementEventList__fini(&msg->state_time_speed);
  // maneuver_assist_list
  j2735_v2x_msgs__msg__ManeuverAssistList__fini(&msg->maneuver_assist_list);
  // maneuver_assist_list_exists
}

bool
j2735_v2x_msgs__msg__MovementState__are_equal(const j2735_v2x_msgs__msg__MovementState * lhs, const j2735_v2x_msgs__msg__MovementState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // movement_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->movement_name), &(rhs->movement_name)))
  {
    return false;
  }
  // movement_name_exists
  if (lhs->movement_name_exists != rhs->movement_name_exists) {
    return false;
  }
  // signal_group
  if (lhs->signal_group != rhs->signal_group) {
    return false;
  }
  // state_time_speed
  if (!j2735_v2x_msgs__msg__MovementEventList__are_equal(
      &(lhs->state_time_speed), &(rhs->state_time_speed)))
  {
    return false;
  }
  // maneuver_assist_list
  if (!j2735_v2x_msgs__msg__ManeuverAssistList__are_equal(
      &(lhs->maneuver_assist_list), &(rhs->maneuver_assist_list)))
  {
    return false;
  }
  // maneuver_assist_list_exists
  if (lhs->maneuver_assist_list_exists != rhs->maneuver_assist_list_exists) {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__MovementState__copy(
  const j2735_v2x_msgs__msg__MovementState * input,
  j2735_v2x_msgs__msg__MovementState * output)
{
  if (!input || !output) {
    return false;
  }
  // movement_name
  if (!rosidl_runtime_c__String__copy(
      &(input->movement_name), &(output->movement_name)))
  {
    return false;
  }
  // movement_name_exists
  output->movement_name_exists = input->movement_name_exists;
  // signal_group
  output->signal_group = input->signal_group;
  // state_time_speed
  if (!j2735_v2x_msgs__msg__MovementEventList__copy(
      &(input->state_time_speed), &(output->state_time_speed)))
  {
    return false;
  }
  // maneuver_assist_list
  if (!j2735_v2x_msgs__msg__ManeuverAssistList__copy(
      &(input->maneuver_assist_list), &(output->maneuver_assist_list)))
  {
    return false;
  }
  // maneuver_assist_list_exists
  output->maneuver_assist_list_exists = input->maneuver_assist_list_exists;
  return true;
}

j2735_v2x_msgs__msg__MovementState *
j2735_v2x_msgs__msg__MovementState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__MovementState * msg = (j2735_v2x_msgs__msg__MovementState *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__MovementState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__MovementState));
  bool success = j2735_v2x_msgs__msg__MovementState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__MovementState__destroy(j2735_v2x_msgs__msg__MovementState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__MovementState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__MovementState__Sequence__init(j2735_v2x_msgs__msg__MovementState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__MovementState * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__MovementState *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__MovementState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__MovementState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__MovementState__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__MovementState__Sequence__fini(j2735_v2x_msgs__msg__MovementState__Sequence * array)
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
      j2735_v2x_msgs__msg__MovementState__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__MovementState__Sequence *
j2735_v2x_msgs__msg__MovementState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__MovementState__Sequence * array = (j2735_v2x_msgs__msg__MovementState__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__MovementState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__MovementState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__MovementState__Sequence__destroy(j2735_v2x_msgs__msg__MovementState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__MovementState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__MovementState__Sequence__are_equal(const j2735_v2x_msgs__msg__MovementState__Sequence * lhs, const j2735_v2x_msgs__msg__MovementState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__MovementState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__MovementState__Sequence__copy(
  const j2735_v2x_msgs__msg__MovementState__Sequence * input,
  j2735_v2x_msgs__msg__MovementState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__MovementState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__MovementState * data =
      (j2735_v2x_msgs__msg__MovementState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__MovementState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__MovementState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__MovementState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
