// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: node.proto

#ifndef PROTOBUF_node_2eproto__INCLUDED
#define PROTOBUF_node_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "publish.pb.h"
#include "subscribe.pb.h"
#include <boost/shared_ptr.hpp>
#include "MsgFactory.h"
// @@protoc_insertion_point(includes)

namespace experimot {
namespace msgs {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_node_2eproto();
void protobuf_AssignDesc_node_2eproto();
void protobuf_ShutdownFile_node_2eproto();

class Node;
class Node_Param;

// ===================================================================

class Node_Param : public ::google::protobuf::Message {
 public:
  Node_Param();
  virtual ~Node_Param();

  Node_Param(const Node_Param& from);

  inline Node_Param& operator=(const Node_Param& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Node_Param& default_instance();

  void Swap(Node_Param* other);

  // implements Message ----------------------------------------------

  inline Node_Param* New() const { return New(NULL); }

  Node_Param* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Node_Param& from);
  void MergeFrom(const Node_Param& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Node_Param* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string key = 1;
  bool has_key() const;
  void clear_key();
  static const int kKeyFieldNumber = 1;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  void set_key(const char* value);
  void set_key(const char* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // required string value = 2;
  bool has_value() const;
  void clear_value();
  static const int kValueFieldNumber = 2;
  const ::std::string& value() const;
  void set_value(const ::std::string& value);
  void set_value(const char* value);
  void set_value(const char* value, size_t size);
  ::std::string* mutable_value();
  ::std::string* release_value();
  void set_allocated_value(::std::string* value);

  // required string dataType = 3;
  bool has_datatype() const;
  void clear_datatype();
  static const int kDataTypeFieldNumber = 3;
  const ::std::string& datatype() const;
  void set_datatype(const ::std::string& value);
  void set_datatype(const char* value);
  void set_datatype(const char* value, size_t size);
  ::std::string* mutable_datatype();
  ::std::string* release_datatype();
  void set_allocated_datatype(::std::string* datatype);

  // @@protoc_insertion_point(class_scope:experimot.msgs.Node.Param)
 private:
  inline void set_has_key();
  inline void clear_has_key();
  inline void set_has_value();
  inline void clear_has_value();
  inline void set_has_datatype();
  inline void clear_has_datatype();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  ::google::protobuf::internal::ArenaStringPtr value_;
  ::google::protobuf::internal::ArenaStringPtr datatype_;
  friend void  protobuf_AddDesc_node_2eproto();
  friend void protobuf_AssignDesc_node_2eproto();
  friend void protobuf_ShutdownFile_node_2eproto();

  void InitAsDefaultInstance();
  static Node_Param* default_instance_;
};
// -------------------------------------------------------------------

class Node : public ::google::protobuf::Message {
 public:
  Node();
  virtual ~Node();

  Node(const Node& from);

  inline Node& operator=(const Node& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Node& default_instance();

  void Swap(Node* other);

  // implements Message ----------------------------------------------

  inline Node* New() const { return New(NULL); }

  Node* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Node& from);
  void MergeFrom(const Node& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Node* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef Node_Param Param;

  // accessors -------------------------------------------------------

  // required string name = 1;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // repeated .experimot.msgs.Node.Param param = 2;
  int param_size() const;
  void clear_param();
  static const int kParamFieldNumber = 2;
  const ::experimot::msgs::Node_Param& param(int index) const;
  ::experimot::msgs::Node_Param* mutable_param(int index);
  ::experimot::msgs::Node_Param* add_param();
  const ::google::protobuf::RepeatedPtrField< ::experimot::msgs::Node_Param >&
      param() const;
  ::google::protobuf::RepeatedPtrField< ::experimot::msgs::Node_Param >*
      mutable_param();

  // repeated .experimot.msgs.Publish publisher = 3;
  int publisher_size() const;
  void clear_publisher();
  static const int kPublisherFieldNumber = 3;
  const ::experimot::msgs::Publish& publisher(int index) const;
  ::experimot::msgs::Publish* mutable_publisher(int index);
  ::experimot::msgs::Publish* add_publisher();
  const ::google::protobuf::RepeatedPtrField< ::experimot::msgs::Publish >&
      publisher() const;
  ::google::protobuf::RepeatedPtrField< ::experimot::msgs::Publish >*
      mutable_publisher();

  // repeated .experimot.msgs.Subscribe subscriber = 4;
  int subscriber_size() const;
  void clear_subscriber();
  static const int kSubscriberFieldNumber = 4;
  const ::experimot::msgs::Subscribe& subscriber(int index) const;
  ::experimot::msgs::Subscribe* mutable_subscriber(int index);
  ::experimot::msgs::Subscribe* add_subscriber();
  const ::google::protobuf::RepeatedPtrField< ::experimot::msgs::Subscribe >&
      subscriber() const;
  ::google::protobuf::RepeatedPtrField< ::experimot::msgs::Subscribe >*
      mutable_subscriber();

  // @@protoc_insertion_point(class_scope:experimot.msgs.Node)
 private:
  inline void set_has_name();
  inline void clear_has_name();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::RepeatedPtrField< ::experimot::msgs::Node_Param > param_;
  ::google::protobuf::RepeatedPtrField< ::experimot::msgs::Publish > publisher_;
  ::google::protobuf::RepeatedPtrField< ::experimot::msgs::Subscribe > subscriber_;
  friend void  protobuf_AddDesc_node_2eproto();
  friend void protobuf_AssignDesc_node_2eproto();
  friend void protobuf_ShutdownFile_node_2eproto();

  void InitAsDefaultInstance();
  static Node* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Node_Param

// required string key = 1;
inline bool Node_Param::has_key() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Node_Param::set_has_key() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Node_Param::clear_has_key() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Node_Param::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_key();
}
inline const ::std::string& Node_Param::key() const {
  // @@protoc_insertion_point(field_get:experimot.msgs.Node.Param.key)
  return key_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Node_Param::set_key(const ::std::string& value) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:experimot.msgs.Node.Param.key)
}
inline void Node_Param::set_key(const char* value) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:experimot.msgs.Node.Param.key)
}
inline void Node_Param::set_key(const char* value, size_t size) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:experimot.msgs.Node.Param.key)
}
inline ::std::string* Node_Param::mutable_key() {
  set_has_key();
  // @@protoc_insertion_point(field_mutable:experimot.msgs.Node.Param.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Node_Param::release_key() {
  clear_has_key();
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Node_Param::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    set_has_key();
  } else {
    clear_has_key();
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:experimot.msgs.Node.Param.key)
}

// required string value = 2;
inline bool Node_Param::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Node_Param::set_has_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Node_Param::clear_has_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Node_Param::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_value();
}
inline const ::std::string& Node_Param::value() const {
  // @@protoc_insertion_point(field_get:experimot.msgs.Node.Param.value)
  return value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Node_Param::set_value(const ::std::string& value) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:experimot.msgs.Node.Param.value)
}
inline void Node_Param::set_value(const char* value) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:experimot.msgs.Node.Param.value)
}
inline void Node_Param::set_value(const char* value, size_t size) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:experimot.msgs.Node.Param.value)
}
inline ::std::string* Node_Param::mutable_value() {
  set_has_value();
  // @@protoc_insertion_point(field_mutable:experimot.msgs.Node.Param.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Node_Param::release_value() {
  clear_has_value();
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Node_Param::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    set_has_value();
  } else {
    clear_has_value();
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:experimot.msgs.Node.Param.value)
}

// required string dataType = 3;
inline bool Node_Param::has_datatype() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Node_Param::set_has_datatype() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Node_Param::clear_has_datatype() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Node_Param::clear_datatype() {
  datatype_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_datatype();
}
inline const ::std::string& Node_Param::datatype() const {
  // @@protoc_insertion_point(field_get:experimot.msgs.Node.Param.dataType)
  return datatype_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Node_Param::set_datatype(const ::std::string& value) {
  set_has_datatype();
  datatype_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:experimot.msgs.Node.Param.dataType)
}
inline void Node_Param::set_datatype(const char* value) {
  set_has_datatype();
  datatype_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:experimot.msgs.Node.Param.dataType)
}
inline void Node_Param::set_datatype(const char* value, size_t size) {
  set_has_datatype();
  datatype_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:experimot.msgs.Node.Param.dataType)
}
inline ::std::string* Node_Param::mutable_datatype() {
  set_has_datatype();
  // @@protoc_insertion_point(field_mutable:experimot.msgs.Node.Param.dataType)
  return datatype_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Node_Param::release_datatype() {
  clear_has_datatype();
  return datatype_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Node_Param::set_allocated_datatype(::std::string* datatype) {
  if (datatype != NULL) {
    set_has_datatype();
  } else {
    clear_has_datatype();
  }
  datatype_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), datatype);
  // @@protoc_insertion_point(field_set_allocated:experimot.msgs.Node.Param.dataType)
}

// -------------------------------------------------------------------

// Node

// required string name = 1;
inline bool Node::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Node::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Node::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Node::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
inline const ::std::string& Node::name() const {
  // @@protoc_insertion_point(field_get:experimot.msgs.Node.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Node::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:experimot.msgs.Node.name)
}
inline void Node::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:experimot.msgs.Node.name)
}
inline void Node::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:experimot.msgs.Node.name)
}
inline ::std::string* Node::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:experimot.msgs.Node.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Node::release_name() {
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Node::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:experimot.msgs.Node.name)
}

// repeated .experimot.msgs.Node.Param param = 2;
inline int Node::param_size() const {
  return param_.size();
}
inline void Node::clear_param() {
  param_.Clear();
}
inline const ::experimot::msgs::Node_Param& Node::param(int index) const {
  // @@protoc_insertion_point(field_get:experimot.msgs.Node.param)
  return param_.Get(index);
}
inline ::experimot::msgs::Node_Param* Node::mutable_param(int index) {
  // @@protoc_insertion_point(field_mutable:experimot.msgs.Node.param)
  return param_.Mutable(index);
}
inline ::experimot::msgs::Node_Param* Node::add_param() {
  // @@protoc_insertion_point(field_add:experimot.msgs.Node.param)
  return param_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::experimot::msgs::Node_Param >&
Node::param() const {
  // @@protoc_insertion_point(field_list:experimot.msgs.Node.param)
  return param_;
}
inline ::google::protobuf::RepeatedPtrField< ::experimot::msgs::Node_Param >*
Node::mutable_param() {
  // @@protoc_insertion_point(field_mutable_list:experimot.msgs.Node.param)
  return &param_;
}

// repeated .experimot.msgs.Publish publisher = 3;
inline int Node::publisher_size() const {
  return publisher_.size();
}
inline void Node::clear_publisher() {
  publisher_.Clear();
}
inline const ::experimot::msgs::Publish& Node::publisher(int index) const {
  // @@protoc_insertion_point(field_get:experimot.msgs.Node.publisher)
  return publisher_.Get(index);
}
inline ::experimot::msgs::Publish* Node::mutable_publisher(int index) {
  // @@protoc_insertion_point(field_mutable:experimot.msgs.Node.publisher)
  return publisher_.Mutable(index);
}
inline ::experimot::msgs::Publish* Node::add_publisher() {
  // @@protoc_insertion_point(field_add:experimot.msgs.Node.publisher)
  return publisher_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::experimot::msgs::Publish >&
Node::publisher() const {
  // @@protoc_insertion_point(field_list:experimot.msgs.Node.publisher)
  return publisher_;
}
inline ::google::protobuf::RepeatedPtrField< ::experimot::msgs::Publish >*
Node::mutable_publisher() {
  // @@protoc_insertion_point(field_mutable_list:experimot.msgs.Node.publisher)
  return &publisher_;
}

// repeated .experimot.msgs.Subscribe subscriber = 4;
inline int Node::subscriber_size() const {
  return subscriber_.size();
}
inline void Node::clear_subscriber() {
  subscriber_.Clear();
}
inline const ::experimot::msgs::Subscribe& Node::subscriber(int index) const {
  // @@protoc_insertion_point(field_get:experimot.msgs.Node.subscriber)
  return subscriber_.Get(index);
}
inline ::experimot::msgs::Subscribe* Node::mutable_subscriber(int index) {
  // @@protoc_insertion_point(field_mutable:experimot.msgs.Node.subscriber)
  return subscriber_.Mutable(index);
}
inline ::experimot::msgs::Subscribe* Node::add_subscriber() {
  // @@protoc_insertion_point(field_add:experimot.msgs.Node.subscriber)
  return subscriber_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::experimot::msgs::Subscribe >&
Node::subscriber() const {
  // @@protoc_insertion_point(field_list:experimot.msgs.Node.subscriber)
  return subscriber_;
}
inline ::google::protobuf::RepeatedPtrField< ::experimot::msgs::Subscribe >*
Node::mutable_subscriber() {
  // @@protoc_insertion_point(field_mutable_list:experimot.msgs.Node.subscriber)
  return &subscriber_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

typedef boost::shared_ptr<experimot::msgs::Node> NodePtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace experimot

typedef const boost::shared_ptr<experimot::msgs::Node const> ConstNodePtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_node_2eproto__INCLUDED