// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from miv_cluster_interfaces:srv/Camera.idl
// generated code does not contain a copyright notice
#include "miv_cluster_interfaces/srv/detail/camera__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
miv_cluster_interfaces__srv__Camera_Request__init(miv_cluster_interfaces__srv__Camera_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x1
  // y1
  // z1
  // calibration_flag
  // qrscan_flag
  // iteration
  return true;
}

void
miv_cluster_interfaces__srv__Camera_Request__fini(miv_cluster_interfaces__srv__Camera_Request * msg)
{
  if (!msg) {
    return;
  }
  // x1
  // y1
  // z1
  // calibration_flag
  // qrscan_flag
  // iteration
}

bool
miv_cluster_interfaces__srv__Camera_Request__are_equal(const miv_cluster_interfaces__srv__Camera_Request * lhs, const miv_cluster_interfaces__srv__Camera_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x1
  if (lhs->x1 != rhs->x1) {
    return false;
  }
  // y1
  if (lhs->y1 != rhs->y1) {
    return false;
  }
  // z1
  if (lhs->z1 != rhs->z1) {
    return false;
  }
  // calibration_flag
  if (lhs->calibration_flag != rhs->calibration_flag) {
    return false;
  }
  // qrscan_flag
  if (lhs->qrscan_flag != rhs->qrscan_flag) {
    return false;
  }
  // iteration
  if (lhs->iteration != rhs->iteration) {
    return false;
  }
  return true;
}

bool
miv_cluster_interfaces__srv__Camera_Request__copy(
  const miv_cluster_interfaces__srv__Camera_Request * input,
  miv_cluster_interfaces__srv__Camera_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // x1
  output->x1 = input->x1;
  // y1
  output->y1 = input->y1;
  // z1
  output->z1 = input->z1;
  // calibration_flag
  output->calibration_flag = input->calibration_flag;
  // qrscan_flag
  output->qrscan_flag = input->qrscan_flag;
  // iteration
  output->iteration = input->iteration;
  return true;
}

miv_cluster_interfaces__srv__Camera_Request *
miv_cluster_interfaces__srv__Camera_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  miv_cluster_interfaces__srv__Camera_Request * msg = (miv_cluster_interfaces__srv__Camera_Request *)allocator.allocate(sizeof(miv_cluster_interfaces__srv__Camera_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(miv_cluster_interfaces__srv__Camera_Request));
  bool success = miv_cluster_interfaces__srv__Camera_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
miv_cluster_interfaces__srv__Camera_Request__destroy(miv_cluster_interfaces__srv__Camera_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    miv_cluster_interfaces__srv__Camera_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
miv_cluster_interfaces__srv__Camera_Request__Sequence__init(miv_cluster_interfaces__srv__Camera_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  miv_cluster_interfaces__srv__Camera_Request * data = NULL;

  if (size) {
    data = (miv_cluster_interfaces__srv__Camera_Request *)allocator.zero_allocate(size, sizeof(miv_cluster_interfaces__srv__Camera_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = miv_cluster_interfaces__srv__Camera_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        miv_cluster_interfaces__srv__Camera_Request__fini(&data[i - 1]);
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
miv_cluster_interfaces__srv__Camera_Request__Sequence__fini(miv_cluster_interfaces__srv__Camera_Request__Sequence * array)
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
      miv_cluster_interfaces__srv__Camera_Request__fini(&array->data[i]);
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

miv_cluster_interfaces__srv__Camera_Request__Sequence *
miv_cluster_interfaces__srv__Camera_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  miv_cluster_interfaces__srv__Camera_Request__Sequence * array = (miv_cluster_interfaces__srv__Camera_Request__Sequence *)allocator.allocate(sizeof(miv_cluster_interfaces__srv__Camera_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = miv_cluster_interfaces__srv__Camera_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
miv_cluster_interfaces__srv__Camera_Request__Sequence__destroy(miv_cluster_interfaces__srv__Camera_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    miv_cluster_interfaces__srv__Camera_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
miv_cluster_interfaces__srv__Camera_Request__Sequence__are_equal(const miv_cluster_interfaces__srv__Camera_Request__Sequence * lhs, const miv_cluster_interfaces__srv__Camera_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!miv_cluster_interfaces__srv__Camera_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
miv_cluster_interfaces__srv__Camera_Request__Sequence__copy(
  const miv_cluster_interfaces__srv__Camera_Request__Sequence * input,
  miv_cluster_interfaces__srv__Camera_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(miv_cluster_interfaces__srv__Camera_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    miv_cluster_interfaces__srv__Camera_Request * data =
      (miv_cluster_interfaces__srv__Camera_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!miv_cluster_interfaces__srv__Camera_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          miv_cluster_interfaces__srv__Camera_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!miv_cluster_interfaces__srv__Camera_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
miv_cluster_interfaces__srv__Camera_Response__init(miv_cluster_interfaces__srv__Camera_Response * msg)
{
  if (!msg) {
    return false;
  }
  // x2
  // y2
  // z2
  return true;
}

void
miv_cluster_interfaces__srv__Camera_Response__fini(miv_cluster_interfaces__srv__Camera_Response * msg)
{
  if (!msg) {
    return;
  }
  // x2
  // y2
  // z2
}

bool
miv_cluster_interfaces__srv__Camera_Response__are_equal(const miv_cluster_interfaces__srv__Camera_Response * lhs, const miv_cluster_interfaces__srv__Camera_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x2
  if (lhs->x2 != rhs->x2) {
    return false;
  }
  // y2
  if (lhs->y2 != rhs->y2) {
    return false;
  }
  // z2
  if (lhs->z2 != rhs->z2) {
    return false;
  }
  return true;
}

bool
miv_cluster_interfaces__srv__Camera_Response__copy(
  const miv_cluster_interfaces__srv__Camera_Response * input,
  miv_cluster_interfaces__srv__Camera_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // x2
  output->x2 = input->x2;
  // y2
  output->y2 = input->y2;
  // z2
  output->z2 = input->z2;
  return true;
}

miv_cluster_interfaces__srv__Camera_Response *
miv_cluster_interfaces__srv__Camera_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  miv_cluster_interfaces__srv__Camera_Response * msg = (miv_cluster_interfaces__srv__Camera_Response *)allocator.allocate(sizeof(miv_cluster_interfaces__srv__Camera_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(miv_cluster_interfaces__srv__Camera_Response));
  bool success = miv_cluster_interfaces__srv__Camera_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
miv_cluster_interfaces__srv__Camera_Response__destroy(miv_cluster_interfaces__srv__Camera_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    miv_cluster_interfaces__srv__Camera_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
miv_cluster_interfaces__srv__Camera_Response__Sequence__init(miv_cluster_interfaces__srv__Camera_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  miv_cluster_interfaces__srv__Camera_Response * data = NULL;

  if (size) {
    data = (miv_cluster_interfaces__srv__Camera_Response *)allocator.zero_allocate(size, sizeof(miv_cluster_interfaces__srv__Camera_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = miv_cluster_interfaces__srv__Camera_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        miv_cluster_interfaces__srv__Camera_Response__fini(&data[i - 1]);
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
miv_cluster_interfaces__srv__Camera_Response__Sequence__fini(miv_cluster_interfaces__srv__Camera_Response__Sequence * array)
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
      miv_cluster_interfaces__srv__Camera_Response__fini(&array->data[i]);
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

miv_cluster_interfaces__srv__Camera_Response__Sequence *
miv_cluster_interfaces__srv__Camera_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  miv_cluster_interfaces__srv__Camera_Response__Sequence * array = (miv_cluster_interfaces__srv__Camera_Response__Sequence *)allocator.allocate(sizeof(miv_cluster_interfaces__srv__Camera_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = miv_cluster_interfaces__srv__Camera_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
miv_cluster_interfaces__srv__Camera_Response__Sequence__destroy(miv_cluster_interfaces__srv__Camera_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    miv_cluster_interfaces__srv__Camera_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
miv_cluster_interfaces__srv__Camera_Response__Sequence__are_equal(const miv_cluster_interfaces__srv__Camera_Response__Sequence * lhs, const miv_cluster_interfaces__srv__Camera_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!miv_cluster_interfaces__srv__Camera_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
miv_cluster_interfaces__srv__Camera_Response__Sequence__copy(
  const miv_cluster_interfaces__srv__Camera_Response__Sequence * input,
  miv_cluster_interfaces__srv__Camera_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(miv_cluster_interfaces__srv__Camera_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    miv_cluster_interfaces__srv__Camera_Response * data =
      (miv_cluster_interfaces__srv__Camera_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!miv_cluster_interfaces__srv__Camera_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          miv_cluster_interfaces__srv__Camera_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!miv_cluster_interfaces__srv__Camera_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
