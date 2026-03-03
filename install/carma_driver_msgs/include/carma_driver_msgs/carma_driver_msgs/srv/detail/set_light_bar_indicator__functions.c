// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_driver_msgs:srv/SetLightBarIndicator.idl
// generated code does not contain a copyright notice
#include "carma_driver_msgs/srv/detail/set_light_bar_indicator__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `requester_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `indicator`
#include "carma_msgs/msg/detail/light_bar_indicator__functions.h"
// Member `cda_type`
#include "carma_msgs/msg/detail/light_bar_cda_type__functions.h"

bool
carma_driver_msgs__srv__SetLightBarIndicator_Request__init(carma_driver_msgs__srv__SetLightBarIndicator_Request * msg)
{
  if (!msg) {
    return false;
  }
  // state
  // requester_name
  if (!rosidl_runtime_c__String__init(&msg->requester_name)) {
    carma_driver_msgs__srv__SetLightBarIndicator_Request__fini(msg);
    return false;
  }
  // indicator
  if (!carma_msgs__msg__LightBarIndicator__init(&msg->indicator)) {
    carma_driver_msgs__srv__SetLightBarIndicator_Request__fini(msg);
    return false;
  }
  // cda_type
  if (!carma_msgs__msg__LightBarCDAType__init(&msg->cda_type)) {
    carma_driver_msgs__srv__SetLightBarIndicator_Request__fini(msg);
    return false;
  }
  return true;
}

void
carma_driver_msgs__srv__SetLightBarIndicator_Request__fini(carma_driver_msgs__srv__SetLightBarIndicator_Request * msg)
{
  if (!msg) {
    return;
  }
  // state
  // requester_name
  rosidl_runtime_c__String__fini(&msg->requester_name);
  // indicator
  carma_msgs__msg__LightBarIndicator__fini(&msg->indicator);
  // cda_type
  carma_msgs__msg__LightBarCDAType__fini(&msg->cda_type);
}

bool
carma_driver_msgs__srv__SetLightBarIndicator_Request__are_equal(const carma_driver_msgs__srv__SetLightBarIndicator_Request * lhs, const carma_driver_msgs__srv__SetLightBarIndicator_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // requester_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->requester_name), &(rhs->requester_name)))
  {
    return false;
  }
  // indicator
  if (!carma_msgs__msg__LightBarIndicator__are_equal(
      &(lhs->indicator), &(rhs->indicator)))
  {
    return false;
  }
  // cda_type
  if (!carma_msgs__msg__LightBarCDAType__are_equal(
      &(lhs->cda_type), &(rhs->cda_type)))
  {
    return false;
  }
  return true;
}

bool
carma_driver_msgs__srv__SetLightBarIndicator_Request__copy(
  const carma_driver_msgs__srv__SetLightBarIndicator_Request * input,
  carma_driver_msgs__srv__SetLightBarIndicator_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  output->state = input->state;
  // requester_name
  if (!rosidl_runtime_c__String__copy(
      &(input->requester_name), &(output->requester_name)))
  {
    return false;
  }
  // indicator
  if (!carma_msgs__msg__LightBarIndicator__copy(
      &(input->indicator), &(output->indicator)))
  {
    return false;
  }
  // cda_type
  if (!carma_msgs__msg__LightBarCDAType__copy(
      &(input->cda_type), &(output->cda_type)))
  {
    return false;
  }
  return true;
}

carma_driver_msgs__srv__SetLightBarIndicator_Request *
carma_driver_msgs__srv__SetLightBarIndicator_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__srv__SetLightBarIndicator_Request * msg = (carma_driver_msgs__srv__SetLightBarIndicator_Request *)allocator.allocate(sizeof(carma_driver_msgs__srv__SetLightBarIndicator_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_driver_msgs__srv__SetLightBarIndicator_Request));
  bool success = carma_driver_msgs__srv__SetLightBarIndicator_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_driver_msgs__srv__SetLightBarIndicator_Request__destroy(carma_driver_msgs__srv__SetLightBarIndicator_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_driver_msgs__srv__SetLightBarIndicator_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence__init(carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__srv__SetLightBarIndicator_Request * data = NULL;

  if (size) {
    data = (carma_driver_msgs__srv__SetLightBarIndicator_Request *)allocator.zero_allocate(size, sizeof(carma_driver_msgs__srv__SetLightBarIndicator_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_driver_msgs__srv__SetLightBarIndicator_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_driver_msgs__srv__SetLightBarIndicator_Request__fini(&data[i - 1]);
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
carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence__fini(carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence * array)
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
      carma_driver_msgs__srv__SetLightBarIndicator_Request__fini(&array->data[i]);
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

carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence *
carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence * array = (carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence *)allocator.allocate(sizeof(carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence__destroy(carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence__are_equal(const carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence * lhs, const carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_driver_msgs__srv__SetLightBarIndicator_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence__copy(
  const carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence * input,
  carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_driver_msgs__srv__SetLightBarIndicator_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    carma_driver_msgs__srv__SetLightBarIndicator_Request * data =
      (carma_driver_msgs__srv__SetLightBarIndicator_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_driver_msgs__srv__SetLightBarIndicator_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          carma_driver_msgs__srv__SetLightBarIndicator_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!carma_driver_msgs__srv__SetLightBarIndicator_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
carma_driver_msgs__srv__SetLightBarIndicator_Response__init(carma_driver_msgs__srv__SetLightBarIndicator_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status_code
  return true;
}

void
carma_driver_msgs__srv__SetLightBarIndicator_Response__fini(carma_driver_msgs__srv__SetLightBarIndicator_Response * msg)
{
  if (!msg) {
    return;
  }
  // status_code
}

bool
carma_driver_msgs__srv__SetLightBarIndicator_Response__are_equal(const carma_driver_msgs__srv__SetLightBarIndicator_Response * lhs, const carma_driver_msgs__srv__SetLightBarIndicator_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status_code
  if (lhs->status_code != rhs->status_code) {
    return false;
  }
  return true;
}

bool
carma_driver_msgs__srv__SetLightBarIndicator_Response__copy(
  const carma_driver_msgs__srv__SetLightBarIndicator_Response * input,
  carma_driver_msgs__srv__SetLightBarIndicator_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status_code
  output->status_code = input->status_code;
  return true;
}

carma_driver_msgs__srv__SetLightBarIndicator_Response *
carma_driver_msgs__srv__SetLightBarIndicator_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__srv__SetLightBarIndicator_Response * msg = (carma_driver_msgs__srv__SetLightBarIndicator_Response *)allocator.allocate(sizeof(carma_driver_msgs__srv__SetLightBarIndicator_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_driver_msgs__srv__SetLightBarIndicator_Response));
  bool success = carma_driver_msgs__srv__SetLightBarIndicator_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_driver_msgs__srv__SetLightBarIndicator_Response__destroy(carma_driver_msgs__srv__SetLightBarIndicator_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_driver_msgs__srv__SetLightBarIndicator_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence__init(carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__srv__SetLightBarIndicator_Response * data = NULL;

  if (size) {
    data = (carma_driver_msgs__srv__SetLightBarIndicator_Response *)allocator.zero_allocate(size, sizeof(carma_driver_msgs__srv__SetLightBarIndicator_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_driver_msgs__srv__SetLightBarIndicator_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_driver_msgs__srv__SetLightBarIndicator_Response__fini(&data[i - 1]);
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
carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence__fini(carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence * array)
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
      carma_driver_msgs__srv__SetLightBarIndicator_Response__fini(&array->data[i]);
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

carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence *
carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence * array = (carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence *)allocator.allocate(sizeof(carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence__destroy(carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence__are_equal(const carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence * lhs, const carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_driver_msgs__srv__SetLightBarIndicator_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence__copy(
  const carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence * input,
  carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_driver_msgs__srv__SetLightBarIndicator_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    carma_driver_msgs__srv__SetLightBarIndicator_Response * data =
      (carma_driver_msgs__srv__SetLightBarIndicator_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_driver_msgs__srv__SetLightBarIndicator_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          carma_driver_msgs__srv__SetLightBarIndicator_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!carma_driver_msgs__srv__SetLightBarIndicator_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "carma_driver_msgs/srv/detail/set_light_bar_indicator__functions.h"

bool
carma_driver_msgs__srv__SetLightBarIndicator_Event__init(carma_driver_msgs__srv__SetLightBarIndicator_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    carma_driver_msgs__srv__SetLightBarIndicator_Event__fini(msg);
    return false;
  }
  // request
  if (!carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence__init(&msg->request, 0)) {
    carma_driver_msgs__srv__SetLightBarIndicator_Event__fini(msg);
    return false;
  }
  // response
  if (!carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence__init(&msg->response, 0)) {
    carma_driver_msgs__srv__SetLightBarIndicator_Event__fini(msg);
    return false;
  }
  return true;
}

void
carma_driver_msgs__srv__SetLightBarIndicator_Event__fini(carma_driver_msgs__srv__SetLightBarIndicator_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence__fini(&msg->request);
  // response
  carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence__fini(&msg->response);
}

bool
carma_driver_msgs__srv__SetLightBarIndicator_Event__are_equal(const carma_driver_msgs__srv__SetLightBarIndicator_Event * lhs, const carma_driver_msgs__srv__SetLightBarIndicator_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
carma_driver_msgs__srv__SetLightBarIndicator_Event__copy(
  const carma_driver_msgs__srv__SetLightBarIndicator_Event * input,
  carma_driver_msgs__srv__SetLightBarIndicator_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

carma_driver_msgs__srv__SetLightBarIndicator_Event *
carma_driver_msgs__srv__SetLightBarIndicator_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__srv__SetLightBarIndicator_Event * msg = (carma_driver_msgs__srv__SetLightBarIndicator_Event *)allocator.allocate(sizeof(carma_driver_msgs__srv__SetLightBarIndicator_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_driver_msgs__srv__SetLightBarIndicator_Event));
  bool success = carma_driver_msgs__srv__SetLightBarIndicator_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_driver_msgs__srv__SetLightBarIndicator_Event__destroy(carma_driver_msgs__srv__SetLightBarIndicator_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_driver_msgs__srv__SetLightBarIndicator_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence__init(carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__srv__SetLightBarIndicator_Event * data = NULL;

  if (size) {
    data = (carma_driver_msgs__srv__SetLightBarIndicator_Event *)allocator.zero_allocate(size, sizeof(carma_driver_msgs__srv__SetLightBarIndicator_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_driver_msgs__srv__SetLightBarIndicator_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_driver_msgs__srv__SetLightBarIndicator_Event__fini(&data[i - 1]);
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
carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence__fini(carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence * array)
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
      carma_driver_msgs__srv__SetLightBarIndicator_Event__fini(&array->data[i]);
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

carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence *
carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence * array = (carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence *)allocator.allocate(sizeof(carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence__destroy(carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence__are_equal(const carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence * lhs, const carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_driver_msgs__srv__SetLightBarIndicator_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence__copy(
  const carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence * input,
  carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_driver_msgs__srv__SetLightBarIndicator_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    carma_driver_msgs__srv__SetLightBarIndicator_Event * data =
      (carma_driver_msgs__srv__SetLightBarIndicator_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_driver_msgs__srv__SetLightBarIndicator_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          carma_driver_msgs__srv__SetLightBarIndicator_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!carma_driver_msgs__srv__SetLightBarIndicator_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
