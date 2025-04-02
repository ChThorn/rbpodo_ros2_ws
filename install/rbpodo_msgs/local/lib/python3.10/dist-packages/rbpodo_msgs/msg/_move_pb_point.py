# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rbpodo_msgs:msg/MovePbPoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'point'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MovePbPoint(type):
    """Metaclass of message 'MovePbPoint'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BLENDING_OPTION_RATIO': 0,
        'BLENDING_OPTION_DISTANCE': 1,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rbpodo_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rbpodo_msgs.msg.MovePbPoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__move_pb_point
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__move_pb_point
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__move_pb_point
            cls._TYPE_SUPPORT = module.type_support_msg__msg__move_pb_point
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__move_pb_point

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BLENDING_OPTION_RATIO': cls.__constants['BLENDING_OPTION_RATIO'],
            'BLENDING_OPTION_DISTANCE': cls.__constants['BLENDING_OPTION_DISTANCE'],
        }

    @property
    def BLENDING_OPTION_RATIO(self):
        """Message constant 'BLENDING_OPTION_RATIO'."""
        return Metaclass_MovePbPoint.__constants['BLENDING_OPTION_RATIO']

    @property
    def BLENDING_OPTION_DISTANCE(self):
        """Message constant 'BLENDING_OPTION_DISTANCE'."""
        return Metaclass_MovePbPoint.__constants['BLENDING_OPTION_DISTANCE']


class MovePbPoint(metaclass=Metaclass_MovePbPoint):
    """
    Message class 'MovePbPoint'.

    Constants:
      BLENDING_OPTION_RATIO
      BLENDING_OPTION_DISTANCE
    """

    __slots__ = [
        '_point',
        '_speed',
        '_blending_option',
        '_blending_value',
    ]

    _fields_and_field_types = {
        'point': 'float[6]',
        'speed': 'float',
        'blending_option': 'uint8',
        'blending_value': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'point' not in kwargs:
            self.point = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.point = numpy.array(kwargs.get('point'), dtype=numpy.float32)
            assert self.point.shape == (6, )
        self.speed = kwargs.get('speed', float())
        self.blending_option = kwargs.get('blending_option', int())
        self.blending_value = kwargs.get('blending_value', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if all(self.point != other.point):
            return False
        if self.speed != other.speed:
            return False
        if self.blending_option != other.blending_option:
            return False
        if self.blending_value != other.blending_value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def point(self):
        """Message field 'point'."""
        return self._point

    @point.setter
    def point(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'point' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'point' numpy.ndarray() must have a size of 6"
            self._point = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'point' field must be a set or sequence with length 6 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._point = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed = value

    @builtins.property
    def blending_option(self):
        """Message field 'blending_option'."""
        return self._blending_option

    @blending_option.setter
    def blending_option(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blending_option' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'blending_option' field must be an unsigned integer in [0, 255]"
        self._blending_option = value

    @builtins.property
    def blending_value(self):
        """Message field 'blending_value'."""
        return self._blending_value

    @blending_value.setter
    def blending_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'blending_value' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'blending_value' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._blending_value = value
