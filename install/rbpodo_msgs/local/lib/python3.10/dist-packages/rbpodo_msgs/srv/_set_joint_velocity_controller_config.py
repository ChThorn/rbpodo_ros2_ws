# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rbpodo_msgs:srv/SetJointVelocityControllerConfig.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetJointVelocityControllerConfig_Request(type):
    """Metaclass of message 'SetJointVelocityControllerConfig_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
                'rbpodo_msgs.srv.SetJointVelocityControllerConfig_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_joint_velocity_controller_config__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_joint_velocity_controller_config__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_joint_velocity_controller_config__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_joint_velocity_controller_config__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_joint_velocity_controller_config__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetJointVelocityControllerConfig_Request(metaclass=Metaclass_SetJointVelocityControllerConfig_Request):
    """Message class 'SetJointVelocityControllerConfig_Request'."""

    __slots__ = [
        '_t1',
        '_t2',
        '_gain',
        '_alpha',
    ]

    _fields_and_field_types = {
        't1': 'double',
        't2': 'double',
        'gain': 'double',
        'alpha': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.t1 = kwargs.get('t1', float())
        self.t2 = kwargs.get('t2', float())
        self.gain = kwargs.get('gain', float())
        self.alpha = kwargs.get('alpha', float())

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
        if self.t1 != other.t1:
            return False
        if self.t2 != other.t2:
            return False
        if self.gain != other.gain:
            return False
        if self.alpha != other.alpha:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def t1(self):
        """Message field 't1'."""
        return self._t1

    @t1.setter
    def t1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 't1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._t1 = value

    @builtins.property
    def t2(self):
        """Message field 't2'."""
        return self._t2

    @t2.setter
    def t2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 't2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 't2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._t2 = value

    @builtins.property
    def gain(self):
        """Message field 'gain'."""
        return self._gain

    @gain.setter
    def gain(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gain' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gain' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gain = value

    @builtins.property
    def alpha(self):
        """Message field 'alpha'."""
        return self._alpha

    @alpha.setter
    def alpha(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alpha' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'alpha' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._alpha = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetJointVelocityControllerConfig_Response(type):
    """Metaclass of message 'SetJointVelocityControllerConfig_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
                'rbpodo_msgs.srv.SetJointVelocityControllerConfig_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_joint_velocity_controller_config__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_joint_velocity_controller_config__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_joint_velocity_controller_config__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_joint_velocity_controller_config__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_joint_velocity_controller_config__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetJointVelocityControllerConfig_Response(metaclass=Metaclass_SetJointVelocityControllerConfig_Response):
    """Message class 'SetJointVelocityControllerConfig_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_SetJointVelocityControllerConfig(type):
    """Metaclass of service 'SetJointVelocityControllerConfig'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rbpodo_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rbpodo_msgs.srv.SetJointVelocityControllerConfig')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_joint_velocity_controller_config

            from rbpodo_msgs.srv import _set_joint_velocity_controller_config
            if _set_joint_velocity_controller_config.Metaclass_SetJointVelocityControllerConfig_Request._TYPE_SUPPORT is None:
                _set_joint_velocity_controller_config.Metaclass_SetJointVelocityControllerConfig_Request.__import_type_support__()
            if _set_joint_velocity_controller_config.Metaclass_SetJointVelocityControllerConfig_Response._TYPE_SUPPORT is None:
                _set_joint_velocity_controller_config.Metaclass_SetJointVelocityControllerConfig_Response.__import_type_support__()


class SetJointVelocityControllerConfig(metaclass=Metaclass_SetJointVelocityControllerConfig):
    from rbpodo_msgs.srv._set_joint_velocity_controller_config import SetJointVelocityControllerConfig_Request as Request
    from rbpodo_msgs.srv._set_joint_velocity_controller_config import SetJointVelocityControllerConfig_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
