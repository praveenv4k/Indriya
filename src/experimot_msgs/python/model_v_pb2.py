# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: model_v.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import model_pb2 as model__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='model_v.proto',
  package='experimot.msgs',
  #syntax='proto2',
  serialized_pb=_b('\n\rmodel_v.proto\x12\x0e\x65xperimot.msgs\x1a\x0bmodel.proto\"0\n\x07Model_V\x12%\n\x06models\x18\x02 \x03(\x0b\x32\x15.experimot.msgs.Model')
  ,
  dependencies=[model__pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_MODEL_V = _descriptor.Descriptor(
  name='Model_V',
  full_name='experimot.msgs.Model_V',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='models', full_name='experimot.msgs.Model_V.models', index=0,
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
  serialized_start=46,
  serialized_end=94,
)

_MODEL_V.fields_by_name['models'].message_type = model__pb2._MODEL
DESCRIPTOR.message_types_by_name['Model_V'] = _MODEL_V

Model_V = _reflection.GeneratedProtocolMessageType('Model_V', (_message.Message,), dict(
  DESCRIPTOR = _MODEL_V,
  __module__ = 'model_v_pb2'
  # @@protoc_insertion_point(class_scope:experimot.msgs.Model_V)
  ))
_sym_db.RegisterMessage(Model_V)


# @@protoc_insertion_point(module_scope)
