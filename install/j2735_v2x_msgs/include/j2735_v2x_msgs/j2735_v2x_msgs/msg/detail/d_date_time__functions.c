// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/DDateTime.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/d_date_time__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `year`
#include "j2735_v2x_msgs/msg/detail/d_year__functions.h"
// Member `month`
#include "j2735_v2x_msgs/msg/detail/d_month__functions.h"
// Member `day`
#include "j2735_v2x_msgs/msg/detail/d_day__functions.h"
// Member `hour`
#include "j2735_v2x_msgs/msg/detail/d_hour__functions.h"
// Member `minute`
#include "j2735_v2x_msgs/msg/detail/d_minute__functions.h"
// Member `second`
#include "j2735_v2x_msgs/msg/detail/d_second__functions.h"
// Member `offset`
#include "j2735_v2x_msgs/msg/detail/d_offset__functions.h"

bool
j2735_v2x_msgs__msg__DDateTime__init(j2735_v2x_msgs__msg__DDateTime * msg)
{
  if (!msg) {
    return false;
  }
  // presence_vector
  // year
  if (!j2735_v2x_msgs__msg__DYear__init(&msg->year)) {
    j2735_v2x_msgs__msg__DDateTime__fini(msg);
    return false;
  }
  // month
  if (!j2735_v2x_msgs__msg__DMonth__init(&msg->month)) {
    j2735_v2x_msgs__msg__DDateTime__fini(msg);
    return false;
  }
  // day
  if (!j2735_v2x_msgs__msg__DDay__init(&msg->day)) {
    j2735_v2x_msgs__msg__DDateTime__fini(msg);
    return false;
  }
  // hour
  if (!j2735_v2x_msgs__msg__DHour__init(&msg->hour)) {
    j2735_v2x_msgs__msg__DDateTime__fini(msg);
    return false;
  }
  // minute
  if (!j2735_v2x_msgs__msg__DMinute__init(&msg->minute)) {
    j2735_v2x_msgs__msg__DDateTime__fini(msg);
    return false;
  }
  // second
  if (!j2735_v2x_msgs__msg__DSecond__init(&msg->second)) {
    j2735_v2x_msgs__msg__DDateTime__fini(msg);
    return false;
  }
  // offset
  if (!j2735_v2x_msgs__msg__DOffset__init(&msg->offset)) {
    j2735_v2x_msgs__msg__DDateTime__fini(msg);
    return false;
  }
  return true;
}

void
j2735_v2x_msgs__msg__DDateTime__fini(j2735_v2x_msgs__msg__DDateTime * msg)
{
  if (!msg) {
    return;
  }
  // presence_vector
  // year
  j2735_v2x_msgs__msg__DYear__fini(&msg->year);
  // month
  j2735_v2x_msgs__msg__DMonth__fini(&msg->month);
  // day
  j2735_v2x_msgs__msg__DDay__fini(&msg->day);
  // hour
  j2735_v2x_msgs__msg__DHour__fini(&msg->hour);
  // minute
  j2735_v2x_msgs__msg__DMinute__fini(&msg->minute);
  // second
  j2735_v2x_msgs__msg__DSecond__fini(&msg->second);
  // offset
  j2735_v2x_msgs__msg__DOffset__fini(&msg->offset);
}

bool
j2735_v2x_msgs__msg__DDateTime__are_equal(const j2735_v2x_msgs__msg__DDateTime * lhs, const j2735_v2x_msgs__msg__DDateTime * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // presence_vector
  if (lhs->presence_vector != rhs->presence_vector) {
    return false;
  }
  // year
  if (!j2735_v2x_msgs__msg__DYear__are_equal(
      &(lhs->year), &(rhs->year)))
  {
    return false;
  }
  // month
  if (!j2735_v2x_msgs__msg__DMonth__are_equal(
      &(lhs->month), &(rhs->month)))
  {
    return false;
  }
  // day
  if (!j2735_v2x_msgs__msg__DDay__are_equal(
      &(lhs->day), &(rhs->day)))
  {
    return false;
  }
  // hour
  if (!j2735_v2x_msgs__msg__DHour__are_equal(
      &(lhs->hour), &(rhs->hour)))
  {
    return false;
  }
  // minute
  if (!j2735_v2x_msgs__msg__DMinute__are_equal(
      &(lhs->minute), &(rhs->minute)))
  {
    return false;
  }
  // second
  if (!j2735_v2x_msgs__msg__DSecond__are_equal(
      &(lhs->second), &(rhs->second)))
  {
    return false;
  }
  // offset
  if (!j2735_v2x_msgs__msg__DOffset__are_equal(
      &(lhs->offset), &(rhs->offset)))
  {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__DDateTime__copy(
  const j2735_v2x_msgs__msg__DDateTime * input,
  j2735_v2x_msgs__msg__DDateTime * output)
{
  if (!input || !output) {
    return false;
  }
  // presence_vector
  output->presence_vector = input->presence_vector;
  // year
  if (!j2735_v2x_msgs__msg__DYear__copy(
      &(input->year), &(output->year)))
  {
    return false;
  }
  // month
  if (!j2735_v2x_msgs__msg__DMonth__copy(
      &(input->month), &(output->month)))
  {
    return false;
  }
  // day
  if (!j2735_v2x_msgs__msg__DDay__copy(
      &(input->day), &(output->day)))
  {
    return false;
  }
  // hour
  if (!j2735_v2x_msgs__msg__DHour__copy(
      &(input->hour), &(output->hour)))
  {
    return false;
  }
  // minute
  if (!j2735_v2x_msgs__msg__DMinute__copy(
      &(input->minute), &(output->minute)))
  {
    return false;
  }
  // second
  if (!j2735_v2x_msgs__msg__DSecond__copy(
      &(input->second), &(output->second)))
  {
    return false;
  }
  // offset
  if (!j2735_v2x_msgs__msg__DOffset__copy(
      &(input->offset), &(output->offset)))
  {
    return false;
  }
  return true;
}

j2735_v2x_msgs__msg__DDateTime *
j2735_v2x_msgs__msg__DDateTime__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__DDateTime * msg = (j2735_v2x_msgs__msg__DDateTime *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__DDateTime), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__DDateTime));
  bool success = j2735_v2x_msgs__msg__DDateTime__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__DDateTime__destroy(j2735_v2x_msgs__msg__DDateTime * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__DDateTime__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__DDateTime__Sequence__init(j2735_v2x_msgs__msg__DDateTime__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__DDateTime * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__DDateTime *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__DDateTime), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__DDateTime__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__DDateTime__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__DDateTime__Sequence__fini(j2735_v2x_msgs__msg__DDateTime__Sequence * array)
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
      j2735_v2x_msgs__msg__DDateTime__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__DDateTime__Sequence *
j2735_v2x_msgs__msg__DDateTime__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__DDateTime__Sequence * array = (j2735_v2x_msgs__msg__DDateTime__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__DDateTime__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__DDateTime__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__DDateTime__Sequence__destroy(j2735_v2x_msgs__msg__DDateTime__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__DDateTime__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__DDateTime__Sequence__are_equal(const j2735_v2x_msgs__msg__DDateTime__Sequence * lhs, const j2735_v2x_msgs__msg__DDateTime__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__DDateTime__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__DDateTime__Sequence__copy(
  const j2735_v2x_msgs__msg__DDateTime__Sequence * input,
  j2735_v2x_msgs__msg__DDateTime__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__DDateTime);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__DDateTime * data =
      (j2735_v2x_msgs__msg__DDateTime *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__DDateTime__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__DDateTime__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__DDateTime__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
