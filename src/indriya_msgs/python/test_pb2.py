# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: test.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import header_pb2 as header__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='test.proto',
  package='Indriya.Core.Msgs',
  #syntax='proto2',
  serialized_pb=_b('\n\ntest.proto\x12\x11Indriya.Core.Msgs\x1a\x0cheader.proto\"1\n\x04Test\x12)\n\x06header\x18\x01 \x02(\x0b\x32\x19.Indriya.Core.Msgs.Header')
  ,
  dependencies=[header__pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_TEST = _descriptor.Descriptor(
  name='Test',
  full_name='Indriya.Core.Msgs.Test',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='header', full_name='Indriya.Core.Msgs.Test.header', index=0,
      number=1, type=11, cpp_type=10, label=2,
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
  serialized_start=47,
  serialized_end=96,
)

_TEST.fields_by_name['header'].message_type = header__pb2._HEADER
DESCRIPTOR.message_types_by_name['Test'] = _TEST

Test = _reflection.GeneratedProtocolMessageType('Test', (_message.Message,), dict(
  DESCRIPTOR = _TEST,
  __module__ = 'test_pb2'
  # @@protoc_insertion_point(class_scope:Indriya.Core.Msgs.Test)
  ))
_sym_db.RegisterMessage(Test)


# @@protoc_insertion_point(module_scope)
