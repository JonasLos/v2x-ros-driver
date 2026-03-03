// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/DataParameters.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/data_parameters__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `process_method`
// Member `process_agency`
// Member `last_checked_date`
// Member `geoid_used`
#include "rosidl_runtime_c/string_functions.h"

bool
j2735_v2x_msgs__msg__DataParameters__init(j2735_v2x_msgs__msg__DataParameters * msg)
{
  if (!msg) {
    return false;
  }
  // process_method
  if (!rosidl_runtime_c__String__init(&msg->process_method)) {
    j2735_v2x_msgs__msg__DataParameters__fini(msg);
    return false;
  }
  // process_agency
  if (!rosidl_runtime_c__String__init(&msg->process_agency)) {
    j2735_v2x_msgs__msg__DataParameters__fini(msg);
    return false;
  }
  // last_checked_date
  if (!rosidl_runtime_c__String__init(&msg->last_checked_date)) {
    j2735_v2x_msgs__msg__DataParameters__fini(msg);
    return false;
  }
  // geoid_used
  if (!rosidl_runtime_c__String__init(&msg->geoid_used)) {
    j2735_v2x_msgs__msg__DataParameters__fini(msg);
    return false;
  }
  return true;
}

void
j2735_v2x_msgs__msg__DataParameters__fini(j2735_v2x_msgs__msg__DataParameters * msg)
{
  if (!msg) {
    return;
  }
  // process_method
  rosidl_runtime_c__String__fini(&msg->process_method);
  // process_agency
  rosidl_runtime_c__String__fini(&msg->process_agency);
  // last_checked_date
  rosidl_runtime_c__String__fini(&msg->last_checked_date);
  // geoid_used
  rosidl_runtime_c__String__fini(&msg->geoid_used);
}

bool
j2735_v2x_msgs__msg__DataParameters__are_equal(const j2735_v2x_msgs__msg__DataParameters * lhs, const j2735_v2x_msgs__msg__DataParameters * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // process_method
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->process_method), &(rhs->process_method)))
  {
    return false;
  }
  // process_agency
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->process_agency), &(rhs->process_agency)))
  {
    return false;
  }
  // last_checked_date
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->last_checked_date), &(rhs->last_checked_date)))
  {
    return false;
  }
  // geoid_used
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->geoid_used), &(rhs->geoid_used)))
  {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__DataParameters__copy(
  const j2735_v2x_msgs__msg__DataParameters * input,
  j2735_v2x_msgs__msg__DataParameters * output)
{
  if (!input || !output) {
    return false;
  }
  // process_method
  if (!rosidl_runtime_c__String__copy(
      &(input->process_method), &(output->process_method)))
  {
    return false;
  }
  // process_agency
  if (!rosidl_runtime_c__String__copy(
      &(input->process_agency), &(output->process_agency)))
  {
    return false;
  }
  // last_checked_date
  if (!rosidl_runtime_c__String__copy(
      &(input->last_checked_date), &(output->last_checked_date)))
  {
    return false;
  }
  // geoid_used
  if (!rosidl_runtime_c__String__copy(
      &(input->geoid_used), &(output->geoid_used)))
  {
    return false;
  }
  return true;
}

j2735_v2x_msgs__msg__DataParameters *
j2735_v2x_msgs__msg__DataParameters__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__DataParameters * msg = (j2735_v2x_msgs__msg__DataParameters *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__DataParameters), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__DataParameters));
  bool success = j2735_v2x_msgs__msg__DataParameters__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__DataParameters__destroy(j2735_v2x_msgs__msg__DataParameters * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__DataParameters__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__DataParameters__Sequence__init(j2735_v2x_msgs__msg__DataParameters__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__DataParameters * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__DataParameters *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__DataParameters), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__DataParameters__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__DataParameters__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__DataParameters__Sequence__fini(j2735_v2x_msgs__msg__DataParameters__Sequence * array)
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
      j2735_v2x_msgs__msg__DataParameters__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__DataParameters__Sequence *
j2735_v2x_msgs__msg__DataParameters__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__DataParameters__Sequence * array = (j2735_v2x_msgs__msg__DataParameters__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__DataParameters__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__DataParameters__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__DataParameters__Sequence__destroy(j2735_v2x_msgs__msg__DataParameters__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__DataParameters__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__DataParameters__Sequence__are_equal(const j2735_v2x_msgs__msg__DataParameters__Sequence * lhs, const j2735_v2x_msgs__msg__DataParameters__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__DataParameters__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__DataParameters__Sequence__copy(
  const j2735_v2x_msgs__msg__DataParameters__Sequence * input,
  j2735_v2x_msgs__msg__DataParameters__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__DataParameters);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__DataParameters * data =
      (j2735_v2x_msgs__msg__DataParameters *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__DataParameters__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__DataParameters__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__DataParameters__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
