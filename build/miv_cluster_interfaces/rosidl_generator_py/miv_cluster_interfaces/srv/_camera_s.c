// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from miv_cluster_interfaces:srv/Camera.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "miv_cluster_interfaces/srv/detail/camera__struct.h"
#include "miv_cluster_interfaces/srv/detail/camera__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool miv_cluster_interfaces__srv__camera__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("miv_cluster_interfaces.srv._camera.Camera_Request", full_classname_dest, 49) == 0);
  }
  miv_cluster_interfaces__srv__Camera_Request * ros_message = _ros_message;
  {  // x1
    PyObject * field = PyObject_GetAttrString(_pymsg, "x1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y1
    PyObject * field = PyObject_GetAttrString(_pymsg, "y1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z1
    PyObject * field = PyObject_GetAttrString(_pymsg, "z1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // calibration_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "calibration_flag");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->calibration_flag = (Py_True == field);
    Py_DECREF(field);
  }
  {  // qrscan_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "qrscan_flag");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->qrscan_flag = (Py_True == field);
    Py_DECREF(field);
  }
  {  // iteration
    PyObject * field = PyObject_GetAttrString(_pymsg, "iteration");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->iteration = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * miv_cluster_interfaces__srv__camera__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Camera_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("miv_cluster_interfaces.srv._camera");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Camera_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  miv_cluster_interfaces__srv__Camera_Request * ros_message = (miv_cluster_interfaces__srv__Camera_Request *)raw_ros_message;
  {  // x1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // calibration_flag
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->calibration_flag ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "calibration_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // qrscan_flag
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->qrscan_flag ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "qrscan_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // iteration
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->iteration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "iteration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "miv_cluster_interfaces/srv/detail/camera__struct.h"
// already included above
// #include "miv_cluster_interfaces/srv/detail/camera__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool miv_cluster_interfaces__srv__camera__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("miv_cluster_interfaces.srv._camera.Camera_Response", full_classname_dest, 50) == 0);
  }
  miv_cluster_interfaces__srv__Camera_Response * ros_message = _ros_message;
  {  // x2
    PyObject * field = PyObject_GetAttrString(_pymsg, "x2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y2
    PyObject * field = PyObject_GetAttrString(_pymsg, "y2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z2
    PyObject * field = PyObject_GetAttrString(_pymsg, "z2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * miv_cluster_interfaces__srv__camera__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Camera_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("miv_cluster_interfaces.srv._camera");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Camera_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  miv_cluster_interfaces__srv__Camera_Response * ros_message = (miv_cluster_interfaces__srv__Camera_Response *)raw_ros_message;
  {  // x2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
