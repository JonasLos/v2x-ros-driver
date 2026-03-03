// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/TrafficControlDetail.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/traffic_control_detail__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `signal`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
j2735_v2x_msgs__msg__TrafficControlDetail__init(j2735_v2x_msgs__msg__TrafficControlDetail * msg)
{
  if (!msg) {
    return false;
  }
  // choice
  // signal
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->signal, 0)) {
    j2735_v2x_msgs__msg__TrafficControlDetail__fini(msg);
    return false;
  }
  // closed
  // chains
  // direction
  // lataffinity
  // latperm
  // parking
  // minspeed
  // maxspeed
  // minhdwy
  // maxvehmass
  // maxvehheight
  // maxvehwidth
  // maxvehlength
  // maxvehaxles
  // minvehocc
  // maxplatoonsize
  // minplatoonhdwy
  return true;
}

void
j2735_v2x_msgs__msg__TrafficControlDetail__fini(j2735_v2x_msgs__msg__TrafficControlDetail * msg)
{
  if (!msg) {
    return;
  }
  // choice
  // signal
  rosidl_runtime_c__uint8__Sequence__fini(&msg->signal);
  // closed
  // chains
  // direction
  // lataffinity
  // latperm
  // parking
  // minspeed
  // maxspeed
  // minhdwy
  // maxvehmass
  // maxvehheight
  // maxvehwidth
  // maxvehlength
  // maxvehaxles
  // minvehocc
  // maxplatoonsize
  // minplatoonhdwy
}

bool
j2735_v2x_msgs__msg__TrafficControlDetail__are_equal(const j2735_v2x_msgs__msg__TrafficControlDetail * lhs, const j2735_v2x_msgs__msg__TrafficControlDetail * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // choice
  if (lhs->choice != rhs->choice) {
    return false;
  }
  // signal
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->signal), &(rhs->signal)))
  {
    return false;
  }
  // closed
  if (lhs->closed != rhs->closed) {
    return false;
  }
  // chains
  if (lhs->chains != rhs->chains) {
    return false;
  }
  // direction
  if (lhs->direction != rhs->direction) {
    return false;
  }
  // lataffinity
  if (lhs->lataffinity != rhs->lataffinity) {
    return false;
  }
  // latperm
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->latperm[i] != rhs->latperm[i]) {
      return false;
    }
  }
  // parking
  if (lhs->parking != rhs->parking) {
    return false;
  }
  // minspeed
  if (lhs->minspeed != rhs->minspeed) {
    return false;
  }
  // maxspeed
  if (lhs->maxspeed != rhs->maxspeed) {
    return false;
  }
  // minhdwy
  if (lhs->minhdwy != rhs->minhdwy) {
    return false;
  }
  // maxvehmass
  if (lhs->maxvehmass != rhs->maxvehmass) {
    return false;
  }
  // maxvehheight
  if (lhs->maxvehheight != rhs->maxvehheight) {
    return false;
  }
  // maxvehwidth
  if (lhs->maxvehwidth != rhs->maxvehwidth) {
    return false;
  }
  // maxvehlength
  if (lhs->maxvehlength != rhs->maxvehlength) {
    return false;
  }
  // maxvehaxles
  if (lhs->maxvehaxles != rhs->maxvehaxles) {
    return false;
  }
  // minvehocc
  if (lhs->minvehocc != rhs->minvehocc) {
    return false;
  }
  // maxplatoonsize
  if (lhs->maxplatoonsize != rhs->maxplatoonsize) {
    return false;
  }
  // minplatoonhdwy
  if (lhs->minplatoonhdwy != rhs->minplatoonhdwy) {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__TrafficControlDetail__copy(
  const j2735_v2x_msgs__msg__TrafficControlDetail * input,
  j2735_v2x_msgs__msg__TrafficControlDetail * output)
{
  if (!input || !output) {
    return false;
  }
  // choice
  output->choice = input->choice;
  // signal
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->signal), &(output->signal)))
  {
    return false;
  }
  // closed
  output->closed = input->closed;
  // chains
  output->chains = input->chains;
  // direction
  output->direction = input->direction;
  // lataffinity
  output->lataffinity = input->lataffinity;
  // latperm
  for (size_t i = 0; i < 2; ++i) {
    output->latperm[i] = input->latperm[i];
  }
  // parking
  output->parking = input->parking;
  // minspeed
  output->minspeed = input->minspeed;
  // maxspeed
  output->maxspeed = input->maxspeed;
  // minhdwy
  output->minhdwy = input->minhdwy;
  // maxvehmass
  output->maxvehmass = input->maxvehmass;
  // maxvehheight
  output->maxvehheight = input->maxvehheight;
  // maxvehwidth
  output->maxvehwidth = input->maxvehwidth;
  // maxvehlength
  output->maxvehlength = input->maxvehlength;
  // maxvehaxles
  output->maxvehaxles = input->maxvehaxles;
  // minvehocc
  output->minvehocc = input->minvehocc;
  // maxplatoonsize
  output->maxplatoonsize = input->maxplatoonsize;
  // minplatoonhdwy
  output->minplatoonhdwy = input->minplatoonhdwy;
  return true;
}

j2735_v2x_msgs__msg__TrafficControlDetail *
j2735_v2x_msgs__msg__TrafficControlDetail__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__TrafficControlDetail * msg = (j2735_v2x_msgs__msg__TrafficControlDetail *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__TrafficControlDetail), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__TrafficControlDetail));
  bool success = j2735_v2x_msgs__msg__TrafficControlDetail__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__TrafficControlDetail__destroy(j2735_v2x_msgs__msg__TrafficControlDetail * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__TrafficControlDetail__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__TrafficControlDetail__Sequence__init(j2735_v2x_msgs__msg__TrafficControlDetail__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__TrafficControlDetail * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__TrafficControlDetail *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__TrafficControlDetail), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__TrafficControlDetail__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__TrafficControlDetail__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__TrafficControlDetail__Sequence__fini(j2735_v2x_msgs__msg__TrafficControlDetail__Sequence * array)
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
      j2735_v2x_msgs__msg__TrafficControlDetail__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__TrafficControlDetail__Sequence *
j2735_v2x_msgs__msg__TrafficControlDetail__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__TrafficControlDetail__Sequence * array = (j2735_v2x_msgs__msg__TrafficControlDetail__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__TrafficControlDetail__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__TrafficControlDetail__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__TrafficControlDetail__Sequence__destroy(j2735_v2x_msgs__msg__TrafficControlDetail__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__TrafficControlDetail__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__TrafficControlDetail__Sequence__are_equal(const j2735_v2x_msgs__msg__TrafficControlDetail__Sequence * lhs, const j2735_v2x_msgs__msg__TrafficControlDetail__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__TrafficControlDetail__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__TrafficControlDetail__Sequence__copy(
  const j2735_v2x_msgs__msg__TrafficControlDetail__Sequence * input,
  j2735_v2x_msgs__msg__TrafficControlDetail__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__TrafficControlDetail);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__TrafficControlDetail * data =
      (j2735_v2x_msgs__msg__TrafficControlDetail *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__TrafficControlDetail__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__TrafficControlDetail__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__TrafficControlDetail__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
