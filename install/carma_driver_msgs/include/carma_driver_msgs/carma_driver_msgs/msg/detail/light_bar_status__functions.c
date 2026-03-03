// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_driver_msgs:msg/LightBarStatus.idl
// generated code does not contain a copyright notice
#include "carma_driver_msgs/msg/detail/light_bar_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
carma_driver_msgs__msg__LightBarStatus__init(carma_driver_msgs__msg__LightBarStatus * msg)
{
  if (!msg) {
    return false;
  }
  // green_solid
  // yellow_solid
  // right_arrow
  // left_arrow
  // sides_solid
  // flash
  // green_flash
  // takedown
  return true;
}

void
carma_driver_msgs__msg__LightBarStatus__fini(carma_driver_msgs__msg__LightBarStatus * msg)
{
  if (!msg) {
    return;
  }
  // green_solid
  // yellow_solid
  // right_arrow
  // left_arrow
  // sides_solid
  // flash
  // green_flash
  // takedown
}

bool
carma_driver_msgs__msg__LightBarStatus__are_equal(const carma_driver_msgs__msg__LightBarStatus * lhs, const carma_driver_msgs__msg__LightBarStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // green_solid
  if (lhs->green_solid != rhs->green_solid) {
    return false;
  }
  // yellow_solid
  if (lhs->yellow_solid != rhs->yellow_solid) {
    return false;
  }
  // right_arrow
  if (lhs->right_arrow != rhs->right_arrow) {
    return false;
  }
  // left_arrow
  if (lhs->left_arrow != rhs->left_arrow) {
    return false;
  }
  // sides_solid
  if (lhs->sides_solid != rhs->sides_solid) {
    return false;
  }
  // flash
  if (lhs->flash != rhs->flash) {
    return false;
  }
  // green_flash
  if (lhs->green_flash != rhs->green_flash) {
    return false;
  }
  // takedown
  if (lhs->takedown != rhs->takedown) {
    return false;
  }
  return true;
}

bool
carma_driver_msgs__msg__LightBarStatus__copy(
  const carma_driver_msgs__msg__LightBarStatus * input,
  carma_driver_msgs__msg__LightBarStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // green_solid
  output->green_solid = input->green_solid;
  // yellow_solid
  output->yellow_solid = input->yellow_solid;
  // right_arrow
  output->right_arrow = input->right_arrow;
  // left_arrow
  output->left_arrow = input->left_arrow;
  // sides_solid
  output->sides_solid = input->sides_solid;
  // flash
  output->flash = input->flash;
  // green_flash
  output->green_flash = input->green_flash;
  // takedown
  output->takedown = input->takedown;
  return true;
}

carma_driver_msgs__msg__LightBarStatus *
carma_driver_msgs__msg__LightBarStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__msg__LightBarStatus * msg = (carma_driver_msgs__msg__LightBarStatus *)allocator.allocate(sizeof(carma_driver_msgs__msg__LightBarStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_driver_msgs__msg__LightBarStatus));
  bool success = carma_driver_msgs__msg__LightBarStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_driver_msgs__msg__LightBarStatus__destroy(carma_driver_msgs__msg__LightBarStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_driver_msgs__msg__LightBarStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_driver_msgs__msg__LightBarStatus__Sequence__init(carma_driver_msgs__msg__LightBarStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__msg__LightBarStatus * data = NULL;

  if (size) {
    data = (carma_driver_msgs__msg__LightBarStatus *)allocator.zero_allocate(size, sizeof(carma_driver_msgs__msg__LightBarStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_driver_msgs__msg__LightBarStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_driver_msgs__msg__LightBarStatus__fini(&data[i - 1]);
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
carma_driver_msgs__msg__LightBarStatus__Sequence__fini(carma_driver_msgs__msg__LightBarStatus__Sequence * array)
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
      carma_driver_msgs__msg__LightBarStatus__fini(&array->data[i]);
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

carma_driver_msgs__msg__LightBarStatus__Sequence *
carma_driver_msgs__msg__LightBarStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__msg__LightBarStatus__Sequence * array = (carma_driver_msgs__msg__LightBarStatus__Sequence *)allocator.allocate(sizeof(carma_driver_msgs__msg__LightBarStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_driver_msgs__msg__LightBarStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_driver_msgs__msg__LightBarStatus__Sequence__destroy(carma_driver_msgs__msg__LightBarStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_driver_msgs__msg__LightBarStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_driver_msgs__msg__LightBarStatus__Sequence__are_equal(const carma_driver_msgs__msg__LightBarStatus__Sequence * lhs, const carma_driver_msgs__msg__LightBarStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_driver_msgs__msg__LightBarStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_driver_msgs__msg__LightBarStatus__Sequence__copy(
  const carma_driver_msgs__msg__LightBarStatus__Sequence * input,
  carma_driver_msgs__msg__LightBarStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_driver_msgs__msg__LightBarStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    carma_driver_msgs__msg__LightBarStatus * data =
      (carma_driver_msgs__msg__LightBarStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_driver_msgs__msg__LightBarStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          carma_driver_msgs__msg__LightBarStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!carma_driver_msgs__msg__LightBarStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
