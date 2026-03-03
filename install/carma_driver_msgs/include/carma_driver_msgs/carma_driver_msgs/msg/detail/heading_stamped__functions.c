// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_driver_msgs:msg/HeadingStamped.idl
// generated code does not contain a copyright notice
#include "carma_driver_msgs/msg/detail/heading_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
carma_driver_msgs__msg__HeadingStamped__init(carma_driver_msgs__msg__HeadingStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    carma_driver_msgs__msg__HeadingStamped__fini(msg);
    return false;
  }
  // heading
  return true;
}

void
carma_driver_msgs__msg__HeadingStamped__fini(carma_driver_msgs__msg__HeadingStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // heading
}

bool
carma_driver_msgs__msg__HeadingStamped__are_equal(const carma_driver_msgs__msg__HeadingStamped * lhs, const carma_driver_msgs__msg__HeadingStamped * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  return true;
}

bool
carma_driver_msgs__msg__HeadingStamped__copy(
  const carma_driver_msgs__msg__HeadingStamped * input,
  carma_driver_msgs__msg__HeadingStamped * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // heading
  output->heading = input->heading;
  return true;
}

carma_driver_msgs__msg__HeadingStamped *
carma_driver_msgs__msg__HeadingStamped__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__msg__HeadingStamped * msg = (carma_driver_msgs__msg__HeadingStamped *)allocator.allocate(sizeof(carma_driver_msgs__msg__HeadingStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_driver_msgs__msg__HeadingStamped));
  bool success = carma_driver_msgs__msg__HeadingStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_driver_msgs__msg__HeadingStamped__destroy(carma_driver_msgs__msg__HeadingStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_driver_msgs__msg__HeadingStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_driver_msgs__msg__HeadingStamped__Sequence__init(carma_driver_msgs__msg__HeadingStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__msg__HeadingStamped * data = NULL;

  if (size) {
    data = (carma_driver_msgs__msg__HeadingStamped *)allocator.zero_allocate(size, sizeof(carma_driver_msgs__msg__HeadingStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_driver_msgs__msg__HeadingStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_driver_msgs__msg__HeadingStamped__fini(&data[i - 1]);
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
carma_driver_msgs__msg__HeadingStamped__Sequence__fini(carma_driver_msgs__msg__HeadingStamped__Sequence * array)
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
      carma_driver_msgs__msg__HeadingStamped__fini(&array->data[i]);
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

carma_driver_msgs__msg__HeadingStamped__Sequence *
carma_driver_msgs__msg__HeadingStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__msg__HeadingStamped__Sequence * array = (carma_driver_msgs__msg__HeadingStamped__Sequence *)allocator.allocate(sizeof(carma_driver_msgs__msg__HeadingStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_driver_msgs__msg__HeadingStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_driver_msgs__msg__HeadingStamped__Sequence__destroy(carma_driver_msgs__msg__HeadingStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_driver_msgs__msg__HeadingStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_driver_msgs__msg__HeadingStamped__Sequence__are_equal(const carma_driver_msgs__msg__HeadingStamped__Sequence * lhs, const carma_driver_msgs__msg__HeadingStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_driver_msgs__msg__HeadingStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_driver_msgs__msg__HeadingStamped__Sequence__copy(
  const carma_driver_msgs__msg__HeadingStamped__Sequence * input,
  carma_driver_msgs__msg__HeadingStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_driver_msgs__msg__HeadingStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    carma_driver_msgs__msg__HeadingStamped * data =
      (carma_driver_msgs__msg__HeadingStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_driver_msgs__msg__HeadingStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          carma_driver_msgs__msg__HeadingStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!carma_driver_msgs__msg__HeadingStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
