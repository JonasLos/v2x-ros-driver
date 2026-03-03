// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/TrafficControlParams.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/traffic_control_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `vclasses`
#include "j2735_v2x_msgs/msg/detail/traffic_control_veh_class__functions.h"
// Member `schedule`
#include "j2735_v2x_msgs/msg/detail/traffic_control_schedule__functions.h"
// Member `detail`
#include "j2735_v2x_msgs/msg/detail/traffic_control_detail__functions.h"

bool
j2735_v2x_msgs__msg__TrafficControlParams__init(j2735_v2x_msgs__msg__TrafficControlParams * msg)
{
  if (!msg) {
    return false;
  }
  // vclasses
  if (!j2735_v2x_msgs__msg__TrafficControlVehClass__Sequence__init(&msg->vclasses, 0)) {
    j2735_v2x_msgs__msg__TrafficControlParams__fini(msg);
    return false;
  }
  // schedule
  if (!j2735_v2x_msgs__msg__TrafficControlSchedule__init(&msg->schedule)) {
    j2735_v2x_msgs__msg__TrafficControlParams__fini(msg);
    return false;
  }
  // regulatory
  // detail
  if (!j2735_v2x_msgs__msg__TrafficControlDetail__init(&msg->detail)) {
    j2735_v2x_msgs__msg__TrafficControlParams__fini(msg);
    return false;
  }
  return true;
}

void
j2735_v2x_msgs__msg__TrafficControlParams__fini(j2735_v2x_msgs__msg__TrafficControlParams * msg)
{
  if (!msg) {
    return;
  }
  // vclasses
  j2735_v2x_msgs__msg__TrafficControlVehClass__Sequence__fini(&msg->vclasses);
  // schedule
  j2735_v2x_msgs__msg__TrafficControlSchedule__fini(&msg->schedule);
  // regulatory
  // detail
  j2735_v2x_msgs__msg__TrafficControlDetail__fini(&msg->detail);
}

bool
j2735_v2x_msgs__msg__TrafficControlParams__are_equal(const j2735_v2x_msgs__msg__TrafficControlParams * lhs, const j2735_v2x_msgs__msg__TrafficControlParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vclasses
  if (!j2735_v2x_msgs__msg__TrafficControlVehClass__Sequence__are_equal(
      &(lhs->vclasses), &(rhs->vclasses)))
  {
    return false;
  }
  // schedule
  if (!j2735_v2x_msgs__msg__TrafficControlSchedule__are_equal(
      &(lhs->schedule), &(rhs->schedule)))
  {
    return false;
  }
  // regulatory
  if (lhs->regulatory != rhs->regulatory) {
    return false;
  }
  // detail
  if (!j2735_v2x_msgs__msg__TrafficControlDetail__are_equal(
      &(lhs->detail), &(rhs->detail)))
  {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__TrafficControlParams__copy(
  const j2735_v2x_msgs__msg__TrafficControlParams * input,
  j2735_v2x_msgs__msg__TrafficControlParams * output)
{
  if (!input || !output) {
    return false;
  }
  // vclasses
  if (!j2735_v2x_msgs__msg__TrafficControlVehClass__Sequence__copy(
      &(input->vclasses), &(output->vclasses)))
  {
    return false;
  }
  // schedule
  if (!j2735_v2x_msgs__msg__TrafficControlSchedule__copy(
      &(input->schedule), &(output->schedule)))
  {
    return false;
  }
  // regulatory
  output->regulatory = input->regulatory;
  // detail
  if (!j2735_v2x_msgs__msg__TrafficControlDetail__copy(
      &(input->detail), &(output->detail)))
  {
    return false;
  }
  return true;
}

j2735_v2x_msgs__msg__TrafficControlParams *
j2735_v2x_msgs__msg__TrafficControlParams__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__TrafficControlParams * msg = (j2735_v2x_msgs__msg__TrafficControlParams *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__TrafficControlParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__TrafficControlParams));
  bool success = j2735_v2x_msgs__msg__TrafficControlParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__TrafficControlParams__destroy(j2735_v2x_msgs__msg__TrafficControlParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__TrafficControlParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__TrafficControlParams__Sequence__init(j2735_v2x_msgs__msg__TrafficControlParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__TrafficControlParams * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__TrafficControlParams *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__TrafficControlParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__TrafficControlParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__TrafficControlParams__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__TrafficControlParams__Sequence__fini(j2735_v2x_msgs__msg__TrafficControlParams__Sequence * array)
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
      j2735_v2x_msgs__msg__TrafficControlParams__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__TrafficControlParams__Sequence *
j2735_v2x_msgs__msg__TrafficControlParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__TrafficControlParams__Sequence * array = (j2735_v2x_msgs__msg__TrafficControlParams__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__TrafficControlParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__TrafficControlParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__TrafficControlParams__Sequence__destroy(j2735_v2x_msgs__msg__TrafficControlParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__TrafficControlParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__TrafficControlParams__Sequence__are_equal(const j2735_v2x_msgs__msg__TrafficControlParams__Sequence * lhs, const j2735_v2x_msgs__msg__TrafficControlParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__TrafficControlParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__TrafficControlParams__Sequence__copy(
  const j2735_v2x_msgs__msg__TrafficControlParams__Sequence * input,
  j2735_v2x_msgs__msg__TrafficControlParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__TrafficControlParams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__TrafficControlParams * data =
      (j2735_v2x_msgs__msg__TrafficControlParams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__TrafficControlParams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__TrafficControlParams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__TrafficControlParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
