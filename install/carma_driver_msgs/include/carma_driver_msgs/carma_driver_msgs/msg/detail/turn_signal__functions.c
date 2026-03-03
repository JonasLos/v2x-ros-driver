// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_driver_msgs:msg/TurnSignal.idl
// generated code does not contain a copyright notice
#include "carma_driver_msgs/msg/detail/turn_signal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
carma_driver_msgs__msg__TurnSignal__init(carma_driver_msgs__msg__TurnSignal * msg)
{
  if (!msg) {
    return false;
  }
  // state
  return true;
}

void
carma_driver_msgs__msg__TurnSignal__fini(carma_driver_msgs__msg__TurnSignal * msg)
{
  if (!msg) {
    return;
  }
  // state
}

bool
carma_driver_msgs__msg__TurnSignal__are_equal(const carma_driver_msgs__msg__TurnSignal * lhs, const carma_driver_msgs__msg__TurnSignal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
carma_driver_msgs__msg__TurnSignal__copy(
  const carma_driver_msgs__msg__TurnSignal * input,
  carma_driver_msgs__msg__TurnSignal * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  output->state = input->state;
  return true;
}

carma_driver_msgs__msg__TurnSignal *
carma_driver_msgs__msg__TurnSignal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__msg__TurnSignal * msg = (carma_driver_msgs__msg__TurnSignal *)allocator.allocate(sizeof(carma_driver_msgs__msg__TurnSignal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_driver_msgs__msg__TurnSignal));
  bool success = carma_driver_msgs__msg__TurnSignal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_driver_msgs__msg__TurnSignal__destroy(carma_driver_msgs__msg__TurnSignal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_driver_msgs__msg__TurnSignal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_driver_msgs__msg__TurnSignal__Sequence__init(carma_driver_msgs__msg__TurnSignal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__msg__TurnSignal * data = NULL;

  if (size) {
    data = (carma_driver_msgs__msg__TurnSignal *)allocator.zero_allocate(size, sizeof(carma_driver_msgs__msg__TurnSignal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_driver_msgs__msg__TurnSignal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_driver_msgs__msg__TurnSignal__fini(&data[i - 1]);
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
carma_driver_msgs__msg__TurnSignal__Sequence__fini(carma_driver_msgs__msg__TurnSignal__Sequence * array)
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
      carma_driver_msgs__msg__TurnSignal__fini(&array->data[i]);
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

carma_driver_msgs__msg__TurnSignal__Sequence *
carma_driver_msgs__msg__TurnSignal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__msg__TurnSignal__Sequence * array = (carma_driver_msgs__msg__TurnSignal__Sequence *)allocator.allocate(sizeof(carma_driver_msgs__msg__TurnSignal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_driver_msgs__msg__TurnSignal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_driver_msgs__msg__TurnSignal__Sequence__destroy(carma_driver_msgs__msg__TurnSignal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_driver_msgs__msg__TurnSignal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_driver_msgs__msg__TurnSignal__Sequence__are_equal(const carma_driver_msgs__msg__TurnSignal__Sequence * lhs, const carma_driver_msgs__msg__TurnSignal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_driver_msgs__msg__TurnSignal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_driver_msgs__msg__TurnSignal__Sequence__copy(
  const carma_driver_msgs__msg__TurnSignal__Sequence * input,
  carma_driver_msgs__msg__TurnSignal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_driver_msgs__msg__TurnSignal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    carma_driver_msgs__msg__TurnSignal * data =
      (carma_driver_msgs__msg__TurnSignal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_driver_msgs__msg__TurnSignal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          carma_driver_msgs__msg__TurnSignal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!carma_driver_msgs__msg__TurnSignal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
