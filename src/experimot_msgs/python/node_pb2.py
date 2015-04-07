# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: node.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import publish_pb2 as publish__pb2
import subscribe_pb2 as subscribe__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='node.proto',
  package='experimot.msgs',
  syntax='proto2',
  serialized_pb=_b('\n\nnode.proto\x12\x0e\x65xperimot.msgs\x1a\rpublish.proto\x1a\x0fsubscribe.proto\"\xd1\x01\n\x04Node\x12\x0c\n\x04name\x18\x01 \x02(\t\x12)\n\x05param\x18\x02 \x03(\x0b\x32\x1a.experimot.msgs.Node.Param\x12*\n\tpublisher\x18\x03 \x03(\x0b\x32\x17.experimot.msgs.Publish\x12-\n\nsubscriber\x18\x04 \x03(\x0b\x32\x19.experimot.msgs.Subscribe\x1a\x35\n\x05Param\x12\x0b\n\x03key\x18\x01 \x02(\t\x12\r\n\x05value\x18\x02 \x02(\t\x12\x10\n\x08\x64\x61taType\x18\x03 \x02(\t')
  ,
  dependencies=[publish__pb2.DESCRIPTOR,subscribe__pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_NODE_PARAM = _descriptor.Descriptor(
  name='Param',
  full_name='experimot.msgs.Node.Param',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='key', full_name='experimot.msgs.Node.Param.key', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='value', full_name='experimot.msgs.Node.Param.value', index=1,
      number=2, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='dataType', full_name='experimot.msgs.Node.Param.dataType', index=2,
      number=3, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
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
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=219,
  serialized_end=272,
)

_NODE = _descriptor.Descriptor(
  name='Node',
  full_name='experimot.msgs.Node',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='experimot.msgs.Node.name', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='param', full_name='experimot.msgs.Node.param', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='publisher', full_name='experimot.msgs.Node.publisher', index=2,
      number=3, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='subscriber', full_name='experimot.msgs.Node.subscriber', index=3,
      number=4, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_NODE_PARAM, ],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=63,
  serialized_end=272,
)

_NODE_PARAM.containing_type = _NODE
_NODE.fields_by_name['param'].message_type = _NODE_PARAM
_NODE.fields_by_name['publisher'].message_type = publish__pb2._PUBLISH
_NODE.fields_by_name['subscriber'].message_type = subscribe__pb2._SUBSCRIBE
DESCRIPTOR.message_types_by_name['Node'] = _NODE

Node = _reflection.GeneratedProtocolMessageType('Node', (_message.Message,), dict(

  Param = _reflection.GeneratedProtocolMessageType('Param', (_message.Message,), dict(
    DESCRIPTOR = _NODE_PARAM,
    __module__ = 'node_pb2'
    # @@protoc_insertion_point(class_scope:experimot.msgs.Node.Param)
    ))
  ,
  DESCRIPTOR = _NODE,
  __module__ = 'node_pb2'
  # @@protoc_insertion_point(class_scope:experimot.msgs.Node)
  ))
_sym_db.RegisterMessage(Node)
_sym_db.RegisterMessage(Node.Param)


# @@protoc_insertion_point(module_scope)