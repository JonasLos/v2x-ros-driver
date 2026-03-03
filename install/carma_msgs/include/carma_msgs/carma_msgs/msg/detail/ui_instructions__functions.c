// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_msgs:msg/UIInstructions.idl
// generated code does not contain a copyright notice
#include "carma_msgs/msg/detail/ui_instructions__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `msg`
// Member `response_service`
#include "rosidl_runtime_c/string_functions.h"

bool
carma_msgs__msg__UIInstructions__init(carma_msgs__msg__UIInstructions * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    carma_msgs__msg__UIInstructions__fini(msg);
    return false;
  }
  // msg
  if (!rosidl_runtime_c__String__init(&msg->msg)) {
    carma_msgs__msg__UIInstructions__fini(msg);
    return false;
  }
  // type
  // response_service
  if (!rosidl_runtime_c__String__init(&msg->response_service)) {
    carma_msgs__msg__UIInstructions__fini(msg);
    return false;
  }
  return true;
}

void
carma_msgs__msg__UIInstructions__fini(carma_msgs__msg__UIInstructions * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // msg
  rosidl_runtime_c__String__fini(&msg->msg);
  // type
  // response_service
  rosidl_runtime_c__String__fini(&msg->response_service);
}

bool
carma_msgs__msg__UIInstructions__are_equal(const carma_msgs__msg__UIInstructions * lhs, const carma_msgs__msg__UIInstructions * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->msg), &(rhs->msg)))
  {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // response_service
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->response_service), &(rhs->response_service)))
  {
    return false;
  }
  return true;
}

bool
carma_msgs__msg__UIInstructions__copy(
  const carma_msgs__msg__UIInstructions * input,
  carma_msgs__msg__UIInstructions * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // msg
  if (!rosidl_runtime_c__String__copy(
      &(input->msg), &(output->msg)))
  {
    return false;
  }
  // type
  output->type = input->type;
  // response_service
  if (!rosidl_runtime_c__String__copy(
      &(input->response_service), &(output->response_service)))
  {
    return false;
  }
  return true;
}

carma_msgs__msg__UIInstructions *
carma_msgs__msg__UIInstructions__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__msg__UIInstructions * msg = (carma_msgs__msg__UIInstructions *)allocator.allocate(sizeof(carma_msgs__msg__UIInstructions), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_msgs__msg__UIInstructions));
  bool success = carma_msgs__msg__UIInstructions__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_msgs__msg__UIInstructions__destroy(carma_msgs__msg__UIInstructions * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_msgs__msg__UIInstructions__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_msgs__msg__UIInstructions__Sequence__init(carma_msgs__msg__UIInstructions__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__msg__UIInstructions * data = NULL;

  if (size) {
    data = (carma_msgs__msg__UIInstructions *)allocator.zero_allocate(size, sizeof(carma_msgs__msg__UIInstructions), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_msgs__msg__UIInstructions__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_msgs__msg__UIInstructions__fini(&data[i - 1]);
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
carma_msgs__msg__UIInstructions__Sequence__fini(carma_msgs__msg__UIInstructions__Sequence * array)
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
      carma_msgs__msg__UIInstructions__fini(&array->data[i]);
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

carma_msgs__msg__UIInstructions__Sequence *
carma_msgs__msg__UIInstructions__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__msg__UIInstructions__Sequence * array = (carma_msgs__msg__UIInstructions__Sequence *)allocator.allocate(sizeof(carma_msgs__msg__UIInstructions__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_msgs__msg__UIInstructions__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_msgs__msg__UIInstructions__Sequence__destroy(carma_msgs__msg__UIInstructions__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_msgs__msg__UIInstructions__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_msgs__msg__UIInstructions__Sequence__are_equal(const carma_msgs__msg__UIInstructions__Sequence * lhs, const carma_msgs__msg__UIInstructions__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_msgs__msg__UIInstructions__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_msgs__msg__UIInstructions__Sequence__copy(
  const carma_msgs__msg__UIInstructions__Sequence * input,
  carma_msgs__msg__UIInstructions__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_msgs__msg__UIInstructions);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    carma_msgs__msg__UIInstructions * data =
      (carma_msgs__msg__UIInstructions *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_msgs__msg__UIInstructions__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          carma_msgs__msg__UIInstructions__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!carma_msgs__msg__UIInstructions__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
