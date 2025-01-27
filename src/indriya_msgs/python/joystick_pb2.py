# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: joystick.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import vector3d_pb2 as vector3d__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='joystick.proto',
  package='Indriya.Core.Msgs',
  #syntax='proto2',
  serialized_pb=_b('\n\x0ejoystick.proto\x12\x11Indriya.Core.Msgs\x1a\x0evector3d.proto\"|\n\x08Joystick\x12\x30\n\x0btranslation\x18\x01 \x01(\x0b\x32\x1b.Indriya.Core.Msgs.Vector3d\x12-\n\x08rotation\x18\x02 \x01(\x0b\x32\x1b.Indriya.Core.Msgs.Vector3d\x12\x0f\n\x07\x62uttons\x18\x03 \x03(\x05')
  ,
  dependencies=[vector3d__pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_JOYSTICK = _descriptor.Descriptor(
  name='Joystick',
  full_name='Indriya.Core.Msgs.Joystick',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='translation', full_name='Indriya.Core.Msgs.Joystick.translation', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='rotation', full_name='Indriya.Core.Msgs.Joystick.rotation', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='buttons', full_name='Indriya.Core.Msgs.Joystick.buttons', index=2,
      number=3, type=5, cpp_type=1, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  #syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=53,
  serialized_end=177,
)

_JOYSTICK.fields_by_name['translation'].message_type = vector3d__pb2._VECTOR3D
_JOYSTICK.fields_by_name['rotation'].message_type = vector3d__pb2._VECTOR3D
DESCRIPTOR.message_types_by_name['Joystick'] = _JOYSTICK

Joystick = _reflection.GeneratedProtocolMessageType('Joystick', (_message.Message,), dict(
  DESCRIPTOR = _JOYSTICK,
  __module__ = 'joystick_pb2'
  # @@protoc_insertion_point(class_scope:Indriya.Core.Msgs.Joystick)
  ))
_sym_db.RegisterMessage(Joystick)


# @@protoc_insertion_point(module_scope)
