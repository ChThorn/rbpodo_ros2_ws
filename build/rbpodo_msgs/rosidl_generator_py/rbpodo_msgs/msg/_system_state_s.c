// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rbpodo_msgs:msg/SystemState.idl
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
#include "rbpodo_msgs/msg/detail/system_state__struct.h"
#include "rbpodo_msgs/msg/detail/system_state__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rbpodo_msgs__msg__system_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("rbpodo_msgs.msg._system_state.SystemState", full_classname_dest, 41) == 0);
  }
  rbpodo_msgs__msg__SystemState * ros_message = _ros_message;
  {  // time
    PyObject * field = PyObject_GetAttrString(_pymsg, "time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // jnt_ref
    PyObject * field = PyObject_GetAttrString(_pymsg, "jnt_ref");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 6;
      float * dest = ros_message->jnt_ref;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // jnt_ang
    PyObject * field = PyObject_GetAttrString(_pymsg, "jnt_ang");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 6;
      float * dest = ros_message->jnt_ang;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // jnt_cur
    PyObject * field = PyObject_GetAttrString(_pymsg, "jnt_cur");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 6;
      float * dest = ros_message->jnt_cur;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // tcp_ref
    PyObject * field = PyObject_GetAttrString(_pymsg, "tcp_ref");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 6;
      float * dest = ros_message->tcp_ref;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // tcp_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "tcp_pos");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 6;
      float * dest = ros_message->tcp_pos;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // analog_in
    PyObject * field = PyObject_GetAttrString(_pymsg, "analog_in");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 4;
      float * dest = ros_message->analog_in;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // analog_out
    PyObject * field = PyObject_GetAttrString(_pymsg, "analog_out");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 4;
      float * dest = ros_message->analog_out;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // digital_in
    PyObject * field = PyObject_GetAttrString(_pymsg, "digital_in");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'digital_in'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = 16;
      bool * dest = ros_message->digital_in;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyBool_Check(item));
        bool tmp = (item == Py_True);
        memcpy(&dest[i], &tmp, sizeof(bool));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // digital_out
    PyObject * field = PyObject_GetAttrString(_pymsg, "digital_out");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'digital_out'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = 16;
      bool * dest = ros_message->digital_out;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyBool_Check(item));
        bool tmp = (item == Py_True);
        memcpy(&dest[i], &tmp, sizeof(bool));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // jnt_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "jnt_temperature");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 6;
      float * dest = ros_message->jnt_temperature;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // task_pc
    PyObject * field = PyObject_GetAttrString(_pymsg, "task_pc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->task_pc = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // task_repeat
    PyObject * field = PyObject_GetAttrString(_pymsg, "task_repeat");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->task_repeat = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // task_run_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "task_run_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->task_run_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // task_run_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "task_run_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->task_run_num = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // task_run_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "task_run_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->task_run_time = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // task_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "task_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->task_state = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // default_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "default_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->default_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // robot_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->robot_state = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // information_chunk_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "information_chunk_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->information_chunk_1 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // jnt_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "jnt_info");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_INT32);
      Py_ssize_t size = 6;
      int32_t * dest = ros_message->jnt_info;
      for (Py_ssize_t i = 0; i < size; ++i) {
        int32_t tmp = *(npy_int32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(int32_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // collision_detect_onoff
    PyObject * field = PyObject_GetAttrString(_pymsg, "collision_detect_onoff");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->collision_detect_onoff = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_freedrive_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_freedrive_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_freedrive_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // real_vs_simulation_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "real_vs_simulation_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->real_vs_simulation_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // init_state_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "init_state_info");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->init_state_info = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // init_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "init_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->init_error = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // tfb_analog_in
    PyObject * field = PyObject_GetAttrString(_pymsg, "tfb_analog_in");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 2;
      float * dest = ros_message->tfb_analog_in;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // tfb_digital_in
    PyObject * field = PyObject_GetAttrString(_pymsg, "tfb_digital_in");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'tfb_digital_in'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = 2;
      bool * dest = ros_message->tfb_digital_in;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyBool_Check(item));
        bool tmp = (item == Py_True);
        memcpy(&dest[i], &tmp, sizeof(bool));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // tfb_digital_out
    PyObject * field = PyObject_GetAttrString(_pymsg, "tfb_digital_out");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'tfb_digital_out'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = 2;
      bool * dest = ros_message->tfb_digital_out;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyBool_Check(item));
        bool tmp = (item == Py_True);
        memcpy(&dest[i], &tmp, sizeof(bool));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // tfb_voltage_out
    PyObject * field = PyObject_GetAttrString(_pymsg, "tfb_voltage_out");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tfb_voltage_out = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // op_stat_collision_occur
    PyObject * field = PyObject_GetAttrString(_pymsg, "op_stat_collision_occur");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->op_stat_collision_occur = (Py_True == field);
    Py_DECREF(field);
  }
  {  // op_stat_sos_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "op_stat_sos_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->op_stat_sos_flag = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // op_stat_self_collision
    PyObject * field = PyObject_GetAttrString(_pymsg, "op_stat_self_collision");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->op_stat_self_collision = (Py_True == field);
    Py_DECREF(field);
  }
  {  // op_stat_soft_estop_occur
    PyObject * field = PyObject_GetAttrString(_pymsg, "op_stat_soft_estop_occur");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->op_stat_soft_estop_occur = (Py_True == field);
    Py_DECREF(field);
  }
  {  // op_stat_ems_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "op_stat_ems_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->op_stat_ems_flag = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // information_chunk_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "information_chunk_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->information_chunk_2 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // information_chunk_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "information_chunk_3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->information_chunk_3 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // inbox_trap_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "inbox_trap_flag");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'inbox_trap_flag'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = 2;
      bool * dest = ros_message->inbox_trap_flag;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyBool_Check(item));
        bool tmp = (item == Py_True);
        memcpy(&dest[i], &tmp, sizeof(bool));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // inbox_check_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "inbox_check_mode");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_INT8);
      Py_ssize_t size = 2;
      int8_t * dest = ros_message->inbox_check_mode;
      for (Py_ssize_t i = 0; i < size; ++i) {
        int8_t tmp = *(npy_int8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(int8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // eft
    PyObject * field = PyObject_GetAttrString(_pymsg, "eft");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 6;
      float * dest = ros_message->eft;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // information_chunk_4
    PyObject * field = PyObject_GetAttrString(_pymsg, "information_chunk_4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->information_chunk_4 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // extend_io1_analog_in
    PyObject * field = PyObject_GetAttrString(_pymsg, "extend_io1_analog_in");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 4;
      float * dest = ros_message->extend_io1_analog_in;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // extend_io1_analog_out
    PyObject * field = PyObject_GetAttrString(_pymsg, "extend_io1_analog_out");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 4;
      float * dest = ros_message->extend_io1_analog_out;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // extend_io1_digital_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "extend_io1_digital_info");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->extend_io1_digital_info = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aa_joint_ref
    PyObject * field = PyObject_GetAttrString(_pymsg, "aa_joint_ref");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 6;
      float * dest = ros_message->aa_joint_ref;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // safety_board_stat_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "safety_board_stat_info");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->safety_board_stat_info = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rbpodo_msgs__msg__system_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SystemState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rbpodo_msgs.msg._system_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SystemState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rbpodo_msgs__msg__SystemState * ros_message = (rbpodo_msgs__msg__SystemState *)raw_ros_message;
  {  // time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // jnt_ref
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "jnt_ref");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->jnt_ref[0]);
    memcpy(dst, src, 6 * sizeof(float));
    Py_DECREF(field);
  }
  {  // jnt_ang
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "jnt_ang");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->jnt_ang[0]);
    memcpy(dst, src, 6 * sizeof(float));
    Py_DECREF(field);
  }
  {  // jnt_cur
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "jnt_cur");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->jnt_cur[0]);
    memcpy(dst, src, 6 * sizeof(float));
    Py_DECREF(field);
  }
  {  // tcp_ref
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "tcp_ref");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->tcp_ref[0]);
    memcpy(dst, src, 6 * sizeof(float));
    Py_DECREF(field);
  }
  {  // tcp_pos
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "tcp_pos");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->tcp_pos[0]);
    memcpy(dst, src, 6 * sizeof(float));
    Py_DECREF(field);
  }
  {  // analog_in
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "analog_in");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->analog_in[0]);
    memcpy(dst, src, 4 * sizeof(float));
    Py_DECREF(field);
  }
  {  // analog_out
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "analog_out");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->analog_out[0]);
    memcpy(dst, src, 4 * sizeof(float));
    Py_DECREF(field);
  }
  {  // digital_in
    PyObject * field = NULL;
    size_t size = 16;
    bool * src = ros_message->digital_in;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int rc = PyList_SetItem(field, i, PyBool_FromLong(src[i] ? 1 : 0));
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "digital_in", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // digital_out
    PyObject * field = NULL;
    size_t size = 16;
    bool * src = ros_message->digital_out;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int rc = PyList_SetItem(field, i, PyBool_FromLong(src[i] ? 1 : 0));
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "digital_out", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // jnt_temperature
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "jnt_temperature");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->jnt_temperature[0]);
    memcpy(dst, src, 6 * sizeof(float));
    Py_DECREF(field);
  }
  {  // task_pc
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->task_pc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "task_pc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // task_repeat
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->task_repeat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "task_repeat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // task_run_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->task_run_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "task_run_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // task_run_num
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->task_run_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "task_run_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // task_run_time
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->task_run_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "task_run_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // task_state
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->task_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "task_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // default_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->default_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "default_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robot_state
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->robot_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // information_chunk_1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->information_chunk_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "information_chunk_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // jnt_info
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "jnt_info");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT32);
    assert(sizeof(npy_int32) == sizeof(int32_t));
    npy_int32 * dst = (npy_int32 *)PyArray_GETPTR1(seq_field, 0);
    int32_t * src = &(ros_message->jnt_info[0]);
    memcpy(dst, src, 6 * sizeof(int32_t));
    Py_DECREF(field);
  }
  {  // collision_detect_onoff
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->collision_detect_onoff ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "collision_detect_onoff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_freedrive_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_freedrive_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_freedrive_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // real_vs_simulation_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->real_vs_simulation_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "real_vs_simulation_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // init_state_info
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->init_state_info);
    {
      int rc = PyObject_SetAttrString(_pymessage, "init_state_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // init_error
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->init_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "init_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tfb_analog_in
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "tfb_analog_in");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->tfb_analog_in[0]);
    memcpy(dst, src, 2 * sizeof(float));
    Py_DECREF(field);
  }
  {  // tfb_digital_in
    PyObject * field = NULL;
    size_t size = 2;
    bool * src = ros_message->tfb_digital_in;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int rc = PyList_SetItem(field, i, PyBool_FromLong(src[i] ? 1 : 0));
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "tfb_digital_in", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tfb_digital_out
    PyObject * field = NULL;
    size_t size = 2;
    bool * src = ros_message->tfb_digital_out;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int rc = PyList_SetItem(field, i, PyBool_FromLong(src[i] ? 1 : 0));
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "tfb_digital_out", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tfb_voltage_out
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tfb_voltage_out);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tfb_voltage_out", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // op_stat_collision_occur
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->op_stat_collision_occur ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "op_stat_collision_occur", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // op_stat_sos_flag
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->op_stat_sos_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "op_stat_sos_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // op_stat_self_collision
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->op_stat_self_collision ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "op_stat_self_collision", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // op_stat_soft_estop_occur
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->op_stat_soft_estop_occur ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "op_stat_soft_estop_occur", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // op_stat_ems_flag
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->op_stat_ems_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "op_stat_ems_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // information_chunk_2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->information_chunk_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "information_chunk_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // information_chunk_3
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->information_chunk_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "information_chunk_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // inbox_trap_flag
    PyObject * field = NULL;
    size_t size = 2;
    bool * src = ros_message->inbox_trap_flag;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int rc = PyList_SetItem(field, i, PyBool_FromLong(src[i] ? 1 : 0));
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "inbox_trap_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // inbox_check_mode
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "inbox_check_mode");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT8);
    assert(sizeof(npy_int8) == sizeof(int8_t));
    npy_int8 * dst = (npy_int8 *)PyArray_GETPTR1(seq_field, 0);
    int8_t * src = &(ros_message->inbox_check_mode[0]);
    memcpy(dst, src, 2 * sizeof(int8_t));
    Py_DECREF(field);
  }
  {  // eft
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "eft");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->eft[0]);
    memcpy(dst, src, 6 * sizeof(float));
    Py_DECREF(field);
  }
  {  // information_chunk_4
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->information_chunk_4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "information_chunk_4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // extend_io1_analog_in
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "extend_io1_analog_in");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->extend_io1_analog_in[0]);
    memcpy(dst, src, 4 * sizeof(float));
    Py_DECREF(field);
  }
  {  // extend_io1_analog_out
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "extend_io1_analog_out");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->extend_io1_analog_out[0]);
    memcpy(dst, src, 4 * sizeof(float));
    Py_DECREF(field);
  }
  {  // extend_io1_digital_info
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->extend_io1_digital_info);
    {
      int rc = PyObject_SetAttrString(_pymessage, "extend_io1_digital_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aa_joint_ref
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "aa_joint_ref");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->aa_joint_ref[0]);
    memcpy(dst, src, 6 * sizeof(float));
    Py_DECREF(field);
  }
  {  // safety_board_stat_info
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->safety_board_stat_info);
    {
      int rc = PyObject_SetAttrString(_pymessage, "safety_board_stat_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
