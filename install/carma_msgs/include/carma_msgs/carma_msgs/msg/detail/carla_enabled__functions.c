// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_msgs:msg/CarlaEnabled.idl
// generated code does not contain a copyright notice
#include "carma_msgs/msg/detail/carla_enabled__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
carma_msgs__msg__CarlaEnabled__init(carma_msgs__msg__CarlaEnabled * msg)
{
  if (!msg) {
    return false;
  }
  // carla_enabled
  return true;
}

void
carma_msgs__msg__CarlaEnabled__fini(carma_msgs__msg__CarlaEnabled * msg)
{
  if (!msg) {
    return;
  }
  // carla_enabled
}

bool
carma_msgs__msg__CarlaEnabled__are_equal(const carma_msgs__msg__CarlaEnabled * lhs, const carma_msgs__msg__CarlaEnabled * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // carla_enabled
  if (lhs->carla_enabled != rhs->carla_enabled) {
    return false;
  }
  return true;
}

bool
carma_msgs__msg__CarlaEnabled__copy(
  const carma_msgs__msg__CarlaEnabled * input,
  carma_msgs__msg__CarlaEnabled * output)
{
  if (!input || !output) {
    return false;
  }
  // carla_enabled
  output->carla_enabled = input->carla_enabled;
  return true;
}

carma_msgs__msg__CarlaEnabled *
carma_msgs__msg__CarlaEnabled__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__msg__CarlaEnabled * msg = (carma_msgs__msg__CarlaEnabled *)allocator.allocate(sizeof(carma_msgs__msg__CarlaEnabled), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_msgs__msg__CarlaEnabled));
  bool success = carma_msgs__msg__CarlaEnabled__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_msgs__msg__CarlaEnabled__destroy(carma_msgs__msg__CarlaEnabled * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_msgs__msg__CarlaEnabled__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_msgs__msg__CarlaEnabled__Sequence__init(carma_msgs__msg__CarlaEnabled__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__msg__CarlaEnabled * data = NULL;

  if (size) {
    data = (carma_msgs__msg__CarlaEnabled *)allocator.zero_allocate(size, sizeof(carma_msgs__msg__CarlaEnabled), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_msgs__msg__CarlaEnabled__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_msgs__msg__CarlaEnabled__fini(&data[i - 1]);
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
carma_msgs__msg__CarlaEnabled__Sequence__fini(carma_msgs__msg__CarlaEnabled__Sequence * array)
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
      carma_msgs__msg__CarlaEnabled__fini(&array->data[i]);
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

carma_msgs__msg__CarlaEnabled__Sequence *
carma_msgs__msg__CarlaEnabled__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__msg__CarlaEnabled__Sequence * array = (carma_msgs__msg__CarlaEnabled__Sequence *)allocator.allocate(sizeof(carma_msgs__msg__CarlaEnabled__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_msgs__msg__CarlaEnabled__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_msgs__msg__CarlaEnabled__Sequence__destroy(carma_msgs__msg__CarlaEnabled__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_msgs__msg__CarlaEnabled__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_msgs__msg__CarlaEnabled__Sequence__are_equal(const carma_msgs__msg__CarlaEnabled__Sequence * lhs, const carma_msgs__msg__CarlaEnabled__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_msgs__msg__CarlaEnabled__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_msgs__msg__CarlaEnabled__Sequence__copy(
  const carma_msgs__msg__CarlaEnabled__Sequence * input,
  carma_msgs__msg__CarlaEnabled__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_msgs__msg__CarlaEnabled);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    carma_msgs__msg__CarlaEnabled * data =
      (carma_msgs__msg__CarlaEnabled *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_msgs__msg__CarlaEnabled__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          carma_msgs__msg__CarlaEnabled__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!carma_msgs__msg__CarlaEnabled__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
