// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from miv_cluster_interfaces:srv/Gantry.idl
// generated code does not contain a copyright notice
#include "miv_cluster_interfaces/srv/detail/gantry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
miv_cluster_interfaces__srv__Gantry_Request__init(miv_cluster_interfaces__srv__Gantry_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // sensor_flag
  // measurement_flag
  return true;
}

void
miv_cluster_interfaces__srv__Gantry_Request__fini(miv_cluster_interfaces__srv__Gantry_Request * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // sensor_flag
  // measurement_flag
}

bool
miv_cluster_interfaces__srv__Gantry_Request__are_equal(const miv_cluster_interfaces__srv__Gantry_Request * lhs, const miv_cluster_interfaces__srv__Gantry_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // sensor_flag
  if (lhs->sensor_flag != rhs->sensor_flag) {
    return false;
  }
  // measurement_flag
  if (lhs->measurement_flag != rhs->measurement_flag) {
    return false;
  }
  return true;
}

bool
miv_cluster_interfaces__srv__Gantry_Request__copy(
  const miv_cluster_interfaces__srv__Gantry_Request * input,
  miv_cluster_interfaces__srv__Gantry_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // sensor_flag
  output->sensor_flag = input->sensor_flag;
  // measurement_flag
  output->measurement_flag = input->measurement_flag;
  return true;
}

miv_cluster_interfaces__srv__Gantry_Request *
miv_cluster_interfaces__srv__Gantry_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  miv_cluster_interfaces__srv__Gantry_Request * msg = (miv_cluster_interfaces__srv__Gantry_Request *)allocator.allocate(sizeof(miv_cluster_interfaces__srv__Gantry_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(miv_cluster_interfaces__srv__Gantry_Request));
  bool success = miv_cluster_interfaces__srv__Gantry_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
miv_cluster_interfaces__srv__Gantry_Request__destroy(miv_cluster_interfaces__srv__Gantry_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    miv_cluster_interfaces__srv__Gantry_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
miv_cluster_interfaces__srv__Gantry_Request__Sequence__init(miv_cluster_interfaces__srv__Gantry_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  miv_cluster_interfaces__srv__Gantry_Request * data = NULL;

  if (size) {
    data = (miv_cluster_interfaces__srv__Gantry_Request *)allocator.zero_allocate(size, sizeof(miv_cluster_interfaces__srv__Gantry_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = miv_cluster_interfaces__srv__Gantry_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        miv_cluster_interfaces__srv__Gantry_Request__fini(&data[i - 1]);
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
miv_cluster_interfaces__srv__Gantry_Request__Sequence__fini(miv_cluster_interfaces__srv__Gantry_Request__Sequence * array)
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
      miv_cluster_interfaces__srv__Gantry_Request__fini(&array->data[i]);
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

miv_cluster_interfaces__srv__Gantry_Request__Sequence *
miv_cluster_interfaces__srv__Gantry_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  miv_cluster_interfaces__srv__Gantry_Request__Sequence * array = (miv_cluster_interfaces__srv__Gantry_Request__Sequence *)allocator.allocate(sizeof(miv_cluster_interfaces__srv__Gantry_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = miv_cluster_interfaces__srv__Gantry_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
miv_cluster_interfaces__srv__Gantry_Request__Sequence__destroy(miv_cluster_interfaces__srv__Gantry_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    miv_cluster_interfaces__srv__Gantry_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
miv_cluster_interfaces__srv__Gantry_Request__Sequence__are_equal(const miv_cluster_interfaces__srv__Gantry_Request__Sequence * lhs, const miv_cluster_interfaces__srv__Gantry_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!miv_cluster_interfaces__srv__Gantry_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
miv_cluster_interfaces__srv__Gantry_Request__Sequence__copy(
  const miv_cluster_interfaces__srv__Gantry_Request__Sequence * input,
  miv_cluster_interfaces__srv__Gantry_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(miv_cluster_interfaces__srv__Gantry_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    miv_cluster_interfaces__srv__Gantry_Request * data =
      (miv_cluster_interfaces__srv__Gantry_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!miv_cluster_interfaces__srv__Gantry_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          miv_cluster_interfaces__srv__Gantry_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!miv_cluster_interfaces__srv__Gantry_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

bool
miv_cluster_interfaces__srv__Gantry_Response__init(miv_cluster_interfaces__srv__Gantry_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    miv_cluster_interfaces__srv__Gantry_Response__fini(msg);
    return false;
  }
  // force_measurement
  return true;
}

void
miv_cluster_interfaces__srv__Gantry_Response__fini(miv_cluster_interfaces__srv__Gantry_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  rosidl_runtime_c__String__fini(&msg->status);
  // force_measurement
}

bool
miv_cluster_interfaces__srv__Gantry_Response__are_equal(const miv_cluster_interfaces__srv__Gantry_Response * lhs, const miv_cluster_interfaces__srv__Gantry_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // force_measurement
  if (lhs->force_measurement != rhs->force_measurement) {
    return false;
  }
  return true;
}

bool
miv_cluster_interfaces__srv__Gantry_Response__copy(
  const miv_cluster_interfaces__srv__Gantry_Response * input,
  miv_cluster_interfaces__srv__Gantry_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // force_measurement
  output->force_measurement = input->force_measurement;
  return true;
}

miv_cluster_interfaces__srv__Gantry_Response *
miv_cluster_interfaces__srv__Gantry_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  miv_cluster_interfaces__srv__Gantry_Response * msg = (miv_cluster_interfaces__srv__Gantry_Response *)allocator.allocate(sizeof(miv_cluster_interfaces__srv__Gantry_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(miv_cluster_interfaces__srv__Gantry_Response));
  bool success = miv_cluster_interfaces__srv__Gantry_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
miv_cluster_interfaces__srv__Gantry_Response__destroy(miv_cluster_interfaces__srv__Gantry_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    miv_cluster_interfaces__srv__Gantry_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
miv_cluster_interfaces__srv__Gantry_Response__Sequence__init(miv_cluster_interfaces__srv__Gantry_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  miv_cluster_interfaces__srv__Gantry_Response * data = NULL;

  if (size) {
    data = (miv_cluster_interfaces__srv__Gantry_Response *)allocator.zero_allocate(size, sizeof(miv_cluster_interfaces__srv__Gantry_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = miv_cluster_interfaces__srv__Gantry_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        miv_cluster_interfaces__srv__Gantry_Response__fini(&data[i - 1]);
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
miv_cluster_interfaces__srv__Gantry_Response__Sequence__fini(miv_cluster_interfaces__srv__Gantry_Response__Sequence * array)
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
      miv_cluster_interfaces__srv__Gantry_Response__fini(&array->data[i]);
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

miv_cluster_interfaces__srv__Gantry_Response__Sequence *
miv_cluster_interfaces__srv__Gantry_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  miv_cluster_interfaces__srv__Gantry_Response__Sequence * array = (miv_cluster_interfaces__srv__Gantry_Response__Sequence *)allocator.allocate(sizeof(miv_cluster_interfaces__srv__Gantry_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = miv_cluster_interfaces__srv__Gantry_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
miv_cluster_interfaces__srv__Gantry_Response__Sequence__destroy(miv_cluster_interfaces__srv__Gantry_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    miv_cluster_interfaces__srv__Gantry_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
miv_cluster_interfaces__srv__Gantry_Response__Sequence__are_equal(const miv_cluster_interfaces__srv__Gantry_Response__Sequence * lhs, const miv_cluster_interfaces__srv__Gantry_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!miv_cluster_interfaces__srv__Gantry_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
miv_cluster_interfaces__srv__Gantry_Response__Sequence__copy(
  const miv_cluster_interfaces__srv__Gantry_Response__Sequence * input,
  miv_cluster_interfaces__srv__Gantry_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(miv_cluster_interfaces__srv__Gantry_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    miv_cluster_interfaces__srv__Gantry_Response * data =
      (miv_cluster_interfaces__srv__Gantry_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!miv_cluster_interfaces__srv__Gantry_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          miv_cluster_interfaces__srv__Gantry_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!miv_cluster_interfaces__srv__Gantry_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
