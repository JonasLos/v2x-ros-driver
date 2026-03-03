// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/MultiVehicleResponse.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/multi_vehicle_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
j2735_v2x_msgs__msg__MultiVehicleResponse__init(j2735_v2x_msgs__msg__MultiVehicleResponse * msg)
{
  if (!msg) {
    return false;
  }
  // multi_vehicle_response
  return true;
}

void
j2735_v2x_msgs__msg__MultiVehicleResponse__fini(j2735_v2x_msgs__msg__MultiVehicleResponse * msg)
{
  if (!msg) {
    return;
  }
  // multi_vehicle_response
}

bool
j2735_v2x_msgs__msg__MultiVehicleResponse__are_equal(const j2735_v2x_msgs__msg__MultiVehicleResponse * lhs, const j2735_v2x_msgs__msg__MultiVehicleResponse * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // multi_vehicle_response
  if (lhs->multi_vehicle_response != rhs->multi_vehicle_response) {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__MultiVehicleResponse__copy(
  const j2735_v2x_msgs__msg__MultiVehicleResponse * input,
  j2735_v2x_msgs__msg__MultiVehicleResponse * output)
{
  if (!input || !output) {
    return false;
  }
  // multi_vehicle_response
  output->multi_vehicle_response = input->multi_vehicle_response;
  return true;
}

j2735_v2x_msgs__msg__MultiVehicleResponse *
j2735_v2x_msgs__msg__MultiVehicleResponse__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__MultiVehicleResponse * msg = (j2735_v2x_msgs__msg__MultiVehicleResponse *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__MultiVehicleResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__MultiVehicleResponse));
  bool success = j2735_v2x_msgs__msg__MultiVehicleResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__MultiVehicleResponse__destroy(j2735_v2x_msgs__msg__MultiVehicleResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__MultiVehicleResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__MultiVehicleResponse__Sequence__init(j2735_v2x_msgs__msg__MultiVehicleResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__MultiVehicleResponse * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__MultiVehicleResponse *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__MultiVehicleResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__MultiVehicleResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__MultiVehicleResponse__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__MultiVehicleResponse__Sequence__fini(j2735_v2x_msgs__msg__MultiVehicleResponse__Sequence * array)
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
      j2735_v2x_msgs__msg__MultiVehicleResponse__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__MultiVehicleResponse__Sequence *
j2735_v2x_msgs__msg__MultiVehicleResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__MultiVehicleResponse__Sequence * array = (j2735_v2x_msgs__msg__MultiVehicleResponse__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__MultiVehicleResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__MultiVehicleResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__MultiVehicleResponse__Sequence__destroy(j2735_v2x_msgs__msg__MultiVehicleResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__MultiVehicleResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__MultiVehicleResponse__Sequence__are_equal(const j2735_v2x_msgs__msg__MultiVehicleResponse__Sequence * lhs, const j2735_v2x_msgs__msg__MultiVehicleResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__MultiVehicleResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__MultiVehicleResponse__Sequence__copy(
  const j2735_v2x_msgs__msg__MultiVehicleResponse__Sequence * input,
  j2735_v2x_msgs__msg__MultiVehicleResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__MultiVehicleResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__MultiVehicleResponse * data =
      (j2735_v2x_msgs__msg__MultiVehicleResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__MultiVehicleResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__MultiVehicleResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__MultiVehicleResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
