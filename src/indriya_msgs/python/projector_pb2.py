# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: projector.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import pose_pb2 as pose__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='projector.proto',
  package='Indriya.Core.Msgs',
  #syntax='proto2',
  serialized_pb=_b('\n\x0fprojector.proto\x12\x11Indriya.Core.Msgs\x1a\npose.proto\"\xaa\x01\n\tProjector\x12\x0c\n\x04name\x18\x01 \x02(\t\x12\x0f\n\x07texture\x18\x02 \x01(\t\x12%\n\x04pose\x18\x03 \x01(\x0b\x32\x17.Indriya.Core.Msgs.Pose\x12\x12\n\x03\x66ov\x18\x04 \x01(\x01:\x05\x30.785\x12\x16\n\tnear_clip\x18\x05 \x01(\x01:\x03\x30.1\x12\x14\n\x08\x66\x61r_clip\x18\x06 \x01(\x01:\x02\x31\x30\x12\x15\n\x07\x65nabled\x18\x07 \x01(\x08:\x04true')
  ,
  dependencies=[pose__pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_PROJECTOR = _descriptor.Descriptor(
  name='Projector',
  full_name='Indriya.Core.Msgs.Projector',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='Indriya.Core.Msgs.Projector.name', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='texture', full_name='Indriya.Core.Msgs.Projector.texture', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pose', full_name='Indriya.Core.Msgs.Projector.pose', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='fov', full_name='Indriya.Core.Msgs.Projector.fov', index=3,
      number=4, type=1, cpp_type=5, label=1,
      has_default_value=True, default_value=0.785,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='near_clip', full_name='Indriya.Core.Msgs.Projector.near_clip', index=4,
      number=5, type=1, cpp_type=5, label=1,
      has_default_value=True, default_value=0.1,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='far_clip', full_name='Indriya.Core.Msgs.Projector.far_clip', index=5,
      number=6, type=1, cpp_type=5, label=1,
      has_default_value=True, default_value=10,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='enabled', full_name='Indriya.Core.Msgs.Projector.enabled', index=6,
      number=7, type=8, cpp_type=7, label=1,
      has_default_value=True, default_value=True,
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
  serialized_start=51,
  serialized_end=221,
)

_PROJECTOR.fields_by_name['pose'].message_type = pose__pb2._POSE
DESCRIPTOR.message_types_by_name['Projector'] = _PROJECTOR

Projector = _reflection.GeneratedProtocolMessageType('Projector', (_message.Message,), dict(
  DESCRIPTOR = _PROJECTOR,
  __module__ = 'projector_pb2'
  # @@protoc_insertion_point(class_scope:Indriya.Core.Msgs.Projector)
  ))
_sym_db.RegisterMessage(Projector)


# @@protoc_insertion_point(module_scope)
