# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: time.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='time.proto',
  package='Indriya.Core.Msgs',
  #syntax='proto2',
  serialized_pb=_b('\n\ntime.proto\x12\x11Indriya.Core.Msgs\"!\n\x04Time\x12\x0b\n\x03sec\x18\x01 \x02(\x05\x12\x0c\n\x04nsec\x18\x02 \x02(\x05')
)
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_TIME = _descriptor.Descriptor(
  name='Time',
  full_name='Indriya.Core.Msgs.Time',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='sec', full_name='Indriya.Core.Msgs.Time.sec', index=0,
      number=1, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='nsec', full_name='Indriya.Core.Msgs.Time.nsec', index=1,
      number=2, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
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
  serialized_start=33,
  serialized_end=66,
)

DESCRIPTOR.message_types_by_name['Time'] = _TIME

Time = _reflection.GeneratedProtocolMessageType('Time', (_message.Message,), dict(
  DESCRIPTOR = _TIME,
  __module__ = 'time_pb2'
  # @@protoc_insertion_point(class_scope:Indriya.Core.Msgs.Time)
  ))
_sym_db.RegisterMessage(Time)


# @@protoc_insertion_point(module_scope)
