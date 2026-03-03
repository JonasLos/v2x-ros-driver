// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_msgs:msg/LightBarCDAType.idl
// generated code does not contain a copyright notice
#include "carma_msgs/msg/detail/light_bar_cda_type__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
carma_msgs__msg__LightBarCDAType__init(carma_msgs__msg__LightBarCDAType * msg)
{
  if (!msg) {
    return false;
  }
  // type
  return true;
}

void
carma_msgs__msg__LightBarCDAType__fini(carma_msgs__msg__LightBarCDAType * msg)
{
  if (!msg) {
    return;
  }
  // type
}

bool
carma_msgs__msg__LightBarCDAType__are_equal(const carma_msgs__msg__LightBarCDAType * lhs, const carma_msgs__msg__LightBarCDAType * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  return true;
}

bool
carma_msgs__msg__LightBarCDAType__copy(
  const carma_msgs__msg__LightBarCDAType * input,
  carma_msgs__msg__LightBarCDAType * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  return true;
}

carma_msgs__msg__LightBarCDAType *
carma_msgs__msg__LightBarCDAType__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__msg__LightBarCDAType * msg = (carma_msgs__msg__LightBarCDAType *)allocator.allocate(sizeof(carma_msgs__msg__LightBarCDAType), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_msgs__msg__LightBarCDAType));
  bool success = carma_msgs__msg__LightBarCDAType__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_msgs__msg__LightBarCDAType__destroy(carma_msgs__msg__LightBarCDAType * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_msgs__msg__LightBarCDAType__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_msgs__msg__LightBarCDAType__Sequence__init(carma_msgs__msg__LightBarCDAType__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__msg__LightBarCDAType * data = NULL;

  if (size) {
    data = (carma_msgs__msg__LightBarCDAType *)allocator.zero_allocate(size, sizeof(carma_msgs__msg__LightBarCDAType), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_msgs__msg__LightBarCDAType__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_msgs__msg__LightBarCDAType__fini(&data[i - 1]);
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
carma_msgs__msg__LightBarCDAType__Sequence__fini(carma_msgs__msg__LightBarCDAType__Sequence * array)
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
      carma_msgs__msg__LightBarCDAType__fini(&array->data[i]);
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

carma_msgs__msg__LightBarCDAType__Sequence *
carma_msgs__msg__LightBarCDAType__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__msg__LightBarCDAType__Sequence * array = (carma_msgs__msg__LightBarCDAType__Sequence *)allocator.allocate(sizeof(carma_msgs__msg__LightBarCDAType__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_msgs__msg__LightBarCDAType__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_msgs__msg__LightBarCDAType__Sequence__destroy(carma_msgs__msg__LightBarCDAType__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_msgs__msg__LightBarCDAType__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_msgs__msg__LightBarCDAType__Sequence__are_equal(const carma_msgs__msg__LightBarCDAType__Sequence * lhs, const carma_msgs__msg__LightBarCDAType__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_msgs__msg__LightBarCDAType__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_msgs__msg__LightBarCDAType__Sequence__copy(
  const carma_msgs__msg__LightBarCDAType__Sequence * input,
  carma_msgs__msg__LightBarCDAType__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_msgs__msg__LightBarCDAType);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    carma_msgs__msg__LightBarCDAType * data =
      (carma_msgs__msg__LightBarCDAType *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_msgs__msg__LightBarCDAType__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          carma_msgs__msg__LightBarCDAType__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!carma_msgs__msg__LightBarCDAType__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
