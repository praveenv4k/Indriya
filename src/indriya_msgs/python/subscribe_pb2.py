# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: subscribe.proto

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
  name='subscribe.proto',
  package='Indriya.Core.Msgs',
  #syntax='proto2',
  serialized_pb=_b('\n\x0fsubscribe.proto\x12\x11Indriya.Core.Msgs\"a\n\tSubscribe\x12\r\n\x05topic\x18\x01 \x02(\t\x12\x0c\n\x04host\x18\x02 \x02(\t\x12\x0c\n\x04port\x18\x03 \x02(\r\x12\x10\n\x08msg_type\x18\x04 \x02(\t\x12\x17\n\x08latching\x18\x05 \x01(\x08:\x05\x66\x61lse')
)
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_SUBSCRIBE = _descriptor.Descriptor(
  name='Subscribe',
  full_name='Indriya.Core.Msgs.Subscribe',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='topic', full_name='Indriya.Core.Msgs.Subscribe.topic', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='host', full_name='Indriya.Core.Msgs.Subscribe.host', index=1,
      number=2, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='port', full_name='Indriya.Core.Msgs.Subscribe.port', index=2,
      number=3, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='msg_type', full_name='Indriya.Core.Msgs.Subscribe.msg_type', index=3,
      number=4, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='latching', full_name='Indriya.Core.Msgs.Subscribe.latching', index=4,
      number=5, type=8, cpp_type=7, label=1,
      has_default_value=True, default_value=False,
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
  serialized_start=38,
  serialized_end=135,
)

DESCRIPTOR.message_types_by_name['Subscribe'] = _SUBSCRIBE

Subscribe = _reflection.GeneratedProtocolMessageType('Subscribe', (_message.Message,), dict(
  DESCRIPTOR = _SUBSCRIBE,
  __module__ = 'subscribe_pb2'
  # @@protoc_insertion_point(class_scope:Indriya.Core.Msgs.Subscribe)
  ))
_sym_db.RegisterMessage(Subscribe)


# @@protoc_insertion_point(module_scope)
