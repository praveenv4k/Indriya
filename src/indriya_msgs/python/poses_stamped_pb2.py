# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: poses_stamped.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import time_pb2 as time__pb2
import pose_pb2 as pose__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='poses_stamped.proto',
  package='Indriya.Core.Msgs',
  #syntax='proto2',
  serialized_pb=_b('\n\x13poses_stamped.proto\x12\x11Indriya.Core.Msgs\x1a\ntime.proto\x1a\npose.proto\"\\\n\x0cPosesStamped\x12%\n\x04time\x18\x01 \x02(\x0b\x32\x17.Indriya.Core.Msgs.Time\x12%\n\x04pose\x18\x02 \x03(\x0b\x32\x17.Indriya.Core.Msgs.Pose')
  ,
  dependencies=[time__pb2.DESCRIPTOR,pose__pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_POSESSTAMPED = _descriptor.Descriptor(
  name='PosesStamped',
  full_name='Indriya.Core.Msgs.PosesStamped',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='time', full_name='Indriya.Core.Msgs.PosesStamped.time', index=0,
      number=1, type=11, cpp_type=10, label=2,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pose', full_name='Indriya.Core.Msgs.PosesStamped.pose', index=1,
      number=2, type=11, cpp_type=10, label=3,
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
  serialized_start=66,
  serialized_end=158,
)

_POSESSTAMPED.fields_by_name['time'].message_type = time__pb2._TIME
_POSESSTAMPED.fields_by_name['pose'].message_type = pose__pb2._POSE
DESCRIPTOR.message_types_by_name['PosesStamped'] = _POSESSTAMPED

PosesStamped = _reflection.GeneratedProtocolMessageType('PosesStamped', (_message.Message,), dict(
  DESCRIPTOR = _POSESSTAMPED,
  __module__ = 'poses_stamped_pb2'
  # @@protoc_insertion_point(class_scope:Indriya.Core.Msgs.PosesStamped)
  ))
_sym_db.RegisterMessage(PosesStamped)


# @@protoc_insertion_point(module_scope)
