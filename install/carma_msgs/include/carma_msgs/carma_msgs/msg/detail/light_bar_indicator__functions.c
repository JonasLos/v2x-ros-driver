// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_msgs:msg/LightBarIndicator.idl
// generated code does not contain a copyright notice
#include "carma_msgs/msg/detail/light_bar_indicator__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
carma_msgs__msg__LightBarIndicator__init(carma_msgs__msg__LightBarIndicator * msg)
{
  if (!msg) {
    return false;
  }
  // indicator
  return true;
}

void
carma_msgs__msg__LightBarIndicator__fini(carma_msgs__msg__LightBarIndicator * msg)
{
  if (!msg) {
    return;
  }
  // indicator
}

bool
carma_msgs__msg__LightBarIndicator__are_equal(const carma_msgs__msg__LightBarIndicator * lhs, const carma_msgs__msg__LightBarIndicator * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // indicator
  if (lhs->indicator != rhs->indicator) {
    return false;
  }
  return true;
}

bool
carma_msgs__msg__LightBarIndicator__copy(
  const carma_msgs__msg__LightBarIndicator * input,
  carma_msgs__msg__LightBarIndicator * output)
{
  if (!input || !output) {
    return false;
  }
  // indicator
  output->indicator = input->indicator;
  return true;
}

carma_msgs__msg__LightBarIndicator *
carma_msgs__msg__LightBarIndicator__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__msg__LightBarIndicator * msg = (carma_msgs__msg__LightBarIndicator *)allocator.allocate(sizeof(carma_msgs__msg__LightBarIndicator), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_msgs__msg__LightBarIndicator));
  bool success = carma_msgs__msg__LightBarIndicator__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_msgs__msg__LightBarIndicator__destroy(carma_msgs__msg__LightBarIndicator * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_msgs__msg__LightBarIndicator__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_msgs__msg__LightBarIndicator__Sequence__init(carma_msgs__msg__LightBarIndicator__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__msg__LightBarIndicator * data = NULL;

  if (size) {
    data = (carma_msgs__msg__LightBarIndicator *)allocator.zero_allocate(size, sizeof(carma_msgs__msg__LightBarIndicator), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_msgs__msg__LightBarIndicator__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_msgs__msg__LightBarIndicator__fini(&data[i - 1]);
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
carma_msgs__msg__LightBarIndicator__Sequence__fini(carma_msgs__msg__LightBarIndicator__Sequence * array)
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
      carma_msgs__msg__LightBarIndicator__fini(&array->data[i]);
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

carma_msgs__msg__LightBarIndicator__Sequence *
carma_msgs__msg__LightBarIndicator__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__msg__LightBarIndicator__Sequence * array = (carma_msgs__msg__LightBarIndicator__Sequence *)allocator.allocate(sizeof(carma_msgs__msg__LightBarIndicator__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_msgs__msg__LightBarIndicator__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_msgs__msg__LightBarIndicator__Sequence__destroy(carma_msgs__msg__LightBarIndicator__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_msgs__msg__LightBarIndicator__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_msgs__msg__LightBarIndicator__Sequence__are_equal(const carma_msgs__msg__LightBarIndicator__Sequence * lhs, const carma_msgs__msg__LightBarIndicator__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_msgs__msg__LightBarIndicator__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_msgs__msg__LightBarIndicator__Sequence__copy(
  const carma_msgs__msg__LightBarIndicator__Sequence * input,
  carma_msgs__msg__LightBarIndicator__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_msgs__msg__LightBarIndicator);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    carma_msgs__msg__LightBarIndicator * data =
      (carma_msgs__msg__LightBarIndicator *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_msgs__msg__LightBarIndicator__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          carma_msgs__msg__LightBarIndicator__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!carma_msgs__msg__LightBarIndicator__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
