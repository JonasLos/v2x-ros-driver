// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/TrafficControlSchedule.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/traffic_control_schedule__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `dow`
#include "j2735_v2x_msgs/msg/detail/day_of_week__functions.h"
// Member `between`
#include "j2735_v2x_msgs/msg/detail/daily_schedule__functions.h"
// Member `repeat`
#include "j2735_v2x_msgs/msg/detail/repeat_params__functions.h"

bool
j2735_v2x_msgs__msg__TrafficControlSchedule__init(j2735_v2x_msgs__msg__TrafficControlSchedule * msg)
{
  if (!msg) {
    return false;
  }
  // start
  // end
  // end_exists
  // dow
  if (!j2735_v2x_msgs__msg__DayOfWeek__init(&msg->dow)) {
    j2735_v2x_msgs__msg__TrafficControlSchedule__fini(msg);
    return false;
  }
  // dow_exists
  // between
  if (!j2735_v2x_msgs__msg__DailySchedule__Sequence__init(&msg->between, 0)) {
    j2735_v2x_msgs__msg__TrafficControlSchedule__fini(msg);
    return false;
  }
  // between_exists
  // repeat
  if (!j2735_v2x_msgs__msg__RepeatParams__init(&msg->repeat)) {
    j2735_v2x_msgs__msg__TrafficControlSchedule__fini(msg);
    return false;
  }
  // repeat_exists
  return true;
}

void
j2735_v2x_msgs__msg__TrafficControlSchedule__fini(j2735_v2x_msgs__msg__TrafficControlSchedule * msg)
{
  if (!msg) {
    return;
  }
  // start
  // end
  // end_exists
  // dow
  j2735_v2x_msgs__msg__DayOfWeek__fini(&msg->dow);
  // dow_exists
  // between
  j2735_v2x_msgs__msg__DailySchedule__Sequence__fini(&msg->between);
  // between_exists
  // repeat
  j2735_v2x_msgs__msg__RepeatParams__fini(&msg->repeat);
  // repeat_exists
}

bool
j2735_v2x_msgs__msg__TrafficControlSchedule__are_equal(const j2735_v2x_msgs__msg__TrafficControlSchedule * lhs, const j2735_v2x_msgs__msg__TrafficControlSchedule * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start
  if (lhs->start != rhs->start) {
    return false;
  }
  // end
  if (lhs->end != rhs->end) {
    return false;
  }
  // end_exists
  if (lhs->end_exists != rhs->end_exists) {
    return false;
  }
  // dow
  if (!j2735_v2x_msgs__msg__DayOfWeek__are_equal(
      &(lhs->dow), &(rhs->dow)))
  {
    return false;
  }
  // dow_exists
  if (lhs->dow_exists != rhs->dow_exists) {
    return false;
  }
  // between
  if (!j2735_v2x_msgs__msg__DailySchedule__Sequence__are_equal(
      &(lhs->between), &(rhs->between)))
  {
    return false;
  }
  // between_exists
  if (lhs->between_exists != rhs->between_exists) {
    return false;
  }
  // repeat
  if (!j2735_v2x_msgs__msg__RepeatParams__are_equal(
      &(lhs->repeat), &(rhs->repeat)))
  {
    return false;
  }
  // repeat_exists
  if (lhs->repeat_exists != rhs->repeat_exists) {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__TrafficControlSchedule__copy(
  const j2735_v2x_msgs__msg__TrafficControlSchedule * input,
  j2735_v2x_msgs__msg__TrafficControlSchedule * output)
{
  if (!input || !output) {
    return false;
  }
  // start
  output->start = input->start;
  // end
  output->end = input->end;
  // end_exists
  output->end_exists = input->end_exists;
  // dow
  if (!j2735_v2x_msgs__msg__DayOfWeek__copy(
      &(input->dow), &(output->dow)))
  {
    return false;
  }
  // dow_exists
  output->dow_exists = input->dow_exists;
  // between
  if (!j2735_v2x_msgs__msg__DailySchedule__Sequence__copy(
      &(input->between), &(output->between)))
  {
    return false;
  }
  // between_exists
  output->between_exists = input->between_exists;
  // repeat
  if (!j2735_v2x_msgs__msg__RepeatParams__copy(
      &(input->repeat), &(output->repeat)))
  {
    return false;
  }
  // repeat_exists
  output->repeat_exists = input->repeat_exists;
  return true;
}

j2735_v2x_msgs__msg__TrafficControlSchedule *
j2735_v2x_msgs__msg__TrafficControlSchedule__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__TrafficControlSchedule * msg = (j2735_v2x_msgs__msg__TrafficControlSchedule *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__TrafficControlSchedule), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__TrafficControlSchedule));
  bool success = j2735_v2x_msgs__msg__TrafficControlSchedule__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__TrafficControlSchedule__destroy(j2735_v2x_msgs__msg__TrafficControlSchedule * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__TrafficControlSchedule__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__TrafficControlSchedule__Sequence__init(j2735_v2x_msgs__msg__TrafficControlSchedule__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__TrafficControlSchedule * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__TrafficControlSchedule *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__TrafficControlSchedule), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__TrafficControlSchedule__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__TrafficControlSchedule__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__TrafficControlSchedule__Sequence__fini(j2735_v2x_msgs__msg__TrafficControlSchedule__Sequence * array)
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
      j2735_v2x_msgs__msg__TrafficControlSchedule__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__TrafficControlSchedule__Sequence *
j2735_v2x_msgs__msg__TrafficControlSchedule__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__TrafficControlSchedule__Sequence * array = (j2735_v2x_msgs__msg__TrafficControlSchedule__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__TrafficControlSchedule__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__TrafficControlSchedule__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__TrafficControlSchedule__Sequence__destroy(j2735_v2x_msgs__msg__TrafficControlSchedule__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__TrafficControlSchedule__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__TrafficControlSchedule__Sequence__are_equal(const j2735_v2x_msgs__msg__TrafficControlSchedule__Sequence * lhs, const j2735_v2x_msgs__msg__TrafficControlSchedule__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__TrafficControlSchedule__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__TrafficControlSchedule__Sequence__copy(
  const j2735_v2x_msgs__msg__TrafficControlSchedule__Sequence * input,
  j2735_v2x_msgs__msg__TrafficControlSchedule__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__TrafficControlSchedule);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__TrafficControlSchedule * data =
      (j2735_v2x_msgs__msg__TrafficControlSchedule *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__TrafficControlSchedule__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__TrafficControlSchedule__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__TrafficControlSchedule__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
