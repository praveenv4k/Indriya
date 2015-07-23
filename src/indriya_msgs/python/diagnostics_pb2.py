# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: diagnostics.proto

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


DESCRIPTOR = _descriptor.FileDescriptor(
  name='diagnostics.proto',
  package='Indriya.Core.Msgs',
  #syntax='proto2',
  serialized_pb=_b('\n\x11\x64iagnostics.proto\x12\x11Indriya.Core.Msgs\x1a\ntime.proto\"\xa0\x02\n\x0b\x44iagnostics\x12\x35\n\x04time\x18\x01 \x03(\x0b\x32\'.Indriya.Core.Msgs.Diagnostics.DiagTime\x12*\n\treal_time\x18\x02 \x02(\x0b\x32\x17.Indriya.Core.Msgs.Time\x12)\n\x08sim_time\x18\x03 \x02(\x0b\x32\x17.Indriya.Core.Msgs.Time\x12\x18\n\x10real_time_factor\x18\x04 \x02(\x01\x1ai\n\x08\x44iagTime\x12\x0c\n\x04name\x18\x01 \x02(\t\x12(\n\x07\x65lapsed\x18\x02 \x02(\x0b\x32\x17.Indriya.Core.Msgs.Time\x12%\n\x04wall\x18\x03 \x02(\x0b\x32\x17.Indriya.Core.Msgs.Time')
  ,
  dependencies=[time__pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_DIAGNOSTICS_DIAGTIME = _descriptor.Descriptor(
  name='DiagTime',
  full_name='Indriya.Core.Msgs.Diagnostics.DiagTime',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='Indriya.Core.Msgs.Diagnostics.DiagTime.name', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='elapsed', full_name='Indriya.Core.Msgs.Diagnostics.DiagTime.elapsed', index=1,
      number=2, type=11, cpp_type=10, label=2,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='wall', full_name='Indriya.Core.Msgs.Diagnostics.DiagTime.wall', index=2,
      number=3, type=11, cpp_type=10, label=2,
      has_default_value=False, default_value=None,
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
  serialized_start=236,
  serialized_end=341,
)

_DIAGNOSTICS = _descriptor.Descriptor(
  name='Diagnostics',
  full_name='Indriya.Core.Msgs.Diagnostics',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='time', full_name='Indriya.Core.Msgs.Diagnostics.time', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='real_time', full_name='Indriya.Core.Msgs.Diagnostics.real_time', index=1,
      number=2, type=11, cpp_type=10, label=2,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='sim_time', full_name='Indriya.Core.Msgs.Diagnostics.sim_time', index=2,
      number=3, type=11, cpp_type=10, label=2,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='real_time_factor', full_name='Indriya.Core.Msgs.Diagnostics.real_time_factor', index=3,
      number=4, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_DIAGNOSTICS_DIAGTIME, ],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  #syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=53,
  serialized_end=341,
)

_DIAGNOSTICS_DIAGTIME.fields_by_name['elapsed'].message_type = time__pb2._TIME
_DIAGNOSTICS_DIAGTIME.fields_by_name['wall'].message_type = time__pb2._TIME
_DIAGNOSTICS_DIAGTIME.containing_type = _DIAGNOSTICS
_DIAGNOSTICS.fields_by_name['time'].message_type = _DIAGNOSTICS_DIAGTIME
_DIAGNOSTICS.fields_by_name['real_time'].message_type = time__pb2._TIME
_DIAGNOSTICS.fields_by_name['sim_time'].message_type = time__pb2._TIME
DESCRIPTOR.message_types_by_name['Diagnostics'] = _DIAGNOSTICS

Diagnostics = _reflection.GeneratedProtocolMessageType('Diagnostics', (_message.Message,), dict(

  DiagTime = _reflection.GeneratedProtocolMessageType('DiagTime', (_message.Message,), dict(
    DESCRIPTOR = _DIAGNOSTICS_DIAGTIME,
    __module__ = 'diagnostics_pb2'
    # @@protoc_insertion_point(class_scope:Indriya.Core.Msgs.Diagnostics.DiagTime)
    ))
  ,
  DESCRIPTOR = _DIAGNOSTICS,
  __module__ = 'diagnostics_pb2'
  # @@protoc_insertion_point(class_scope:Indriya.Core.Msgs.Diagnostics)
  ))
_sym_db.RegisterMessage(Diagnostics)
_sym_db.RegisterMessage(Diagnostics.DiagTime)


# @@protoc_insertion_point(module_scope)
