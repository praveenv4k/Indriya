// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: node.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "node.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Indriya {
namespace Core {
namespace Msgs {

namespace {

const ::google::protobuf::Descriptor* Node_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Node_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_node_2eproto() {
  protobuf_AddDesc_node_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "node.proto");
  GOOGLE_CHECK(file != NULL);
  Node_descriptor_ = file->message_type(0);
  static const int Node_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, param_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, publisher_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, subscriber_),
  };
  Node_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Node_descriptor_,
      Node::default_instance_,
      Node_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, _has_bits_[0]),
      -1,
      -1,
      sizeof(Node),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_node_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Node_descriptor_, &Node::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_node_2eproto() {
  delete Node::default_instance_;
  delete Node_reflection_;
}

void protobuf_AddDesc_node_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::Indriya::Core::Msgs::protobuf_AddDesc_publish_2eproto();
  ::Indriya::Core::Msgs::protobuf_AddDesc_subscribe_2eproto();
  ::Indriya::Core::Msgs::protobuf_AddDesc_param_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\nnode.proto\022\021Indriya.Core.Msgs\032\rpublish"
    ".proto\032\017subscribe.proto\032\013param.proto\"\236\001\n"
    "\004Node\022\014\n\004name\030\001 \002(\t\022\'\n\005param\030\002 \003(\0132\030.Ind"
    "riya.Core.Msgs.Param\022-\n\tpublisher\030\003 \003(\0132"
    "\032.Indriya.Core.Msgs.Publish\0220\n\nsubscribe"
    "r\030\004 \003(\0132\034.Indriya.Core.Msgs.Subscribe", 237);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "node.proto", &protobuf_RegisterTypes);
  Node::default_instance_ = new Node();
  Node::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_node_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_node_2eproto {
  StaticDescriptorInitializer_node_2eproto() {
    protobuf_AddDesc_node_2eproto();
  }
} static_descriptor_initializer_node_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#ifndef _MSC_VER
const int Node::kNameFieldNumber;
const int Node::kParamFieldNumber;
const int Node::kPublisherFieldNumber;
const int Node::kSubscriberFieldNumber;
#endif  // !_MSC_VER

Node::Node()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Indriya.Core.Msgs.Node)
}

void Node::InitAsDefaultInstance() {
}

Node::Node(const Node& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Indriya.Core.Msgs.Node)
}

void Node::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Node::~Node() {
  // @@protoc_insertion_point(destructor:Indriya.Core.Msgs.Node)
  SharedDtor();
}

void Node::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Node::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Node::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Node_descriptor_;
}

const Node& Node::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_node_2eproto();
  return *default_instance_;
}

Node* Node::default_instance_ = NULL;

Node* Node::New(::google::protobuf::Arena* arena) const {
  Node* n = new Node;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Node::Clear() {
  if (has_name()) {
    name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  param_.Clear();
  publisher_.Clear();
  subscriber_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool Node::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Indriya.Core.Msgs.Node)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "Indriya.Core.Msgs.Node.name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_param;
        break;
      }

      // repeated .Indriya.Core.Msgs.Param param = 2;
      case 2: {
        if (tag == 18) {
         parse_param:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_param()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_param;
        if (input->ExpectTag(26)) goto parse_publisher;
        break;
      }

      // repeated .Indriya.Core.Msgs.Publish publisher = 3;
      case 3: {
        if (tag == 26) {
         parse_publisher:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_publisher()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_publisher;
        if (input->ExpectTag(34)) goto parse_subscriber;
        break;
      }

      // repeated .Indriya.Core.Msgs.Subscribe subscriber = 4;
      case 4: {
        if (tag == 34) {
         parse_subscriber:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_subscriber()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_subscriber;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Indriya.Core.Msgs.Node)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Indriya.Core.Msgs.Node)
  return false;
#undef DO_
}

void Node::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Indriya.Core.Msgs.Node)
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "Indriya.Core.Msgs.Node.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // repeated .Indriya.Core.Msgs.Param param = 2;
  for (unsigned int i = 0, n = this->param_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->param(i), output);
  }

  // repeated .Indriya.Core.Msgs.Publish publisher = 3;
  for (unsigned int i = 0, n = this->publisher_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->publisher(i), output);
  }

  // repeated .Indriya.Core.Msgs.Subscribe subscriber = 4;
  for (unsigned int i = 0, n = this->subscriber_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->subscriber(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Indriya.Core.Msgs.Node)
}

::google::protobuf::uint8* Node::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Indriya.Core.Msgs.Node)
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "Indriya.Core.Msgs.Node.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // repeated .Indriya.Core.Msgs.Param param = 2;
  for (unsigned int i = 0, n = this->param_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->param(i), target);
  }

  // repeated .Indriya.Core.Msgs.Publish publisher = 3;
  for (unsigned int i = 0, n = this->publisher_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->publisher(i), target);
  }

  // repeated .Indriya.Core.Msgs.Subscribe subscriber = 4;
  for (unsigned int i = 0, n = this->subscriber_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->subscriber(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Indriya.Core.Msgs.Node)
  return target;
}

int Node::ByteSize() const {
  int total_size = 0;

  // required string name = 1;
  if (has_name()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }
  // repeated .Indriya.Core.Msgs.Param param = 2;
  total_size += 1 * this->param_size();
  for (int i = 0; i < this->param_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->param(i));
  }

  // repeated .Indriya.Core.Msgs.Publish publisher = 3;
  total_size += 1 * this->publisher_size();
  for (int i = 0; i < this->publisher_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->publisher(i));
  }

  // repeated .Indriya.Core.Msgs.Subscribe subscriber = 4;
  total_size += 1 * this->subscriber_size();
  for (int i = 0; i < this->subscriber_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->subscriber(i));
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Node::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Node* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Node*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Node::MergeFrom(const Node& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  param_.MergeFrom(from.param_);
  publisher_.MergeFrom(from.publisher_);
  subscriber_.MergeFrom(from.subscriber_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void Node::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Node::CopyFrom(const Node& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Node::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (!::google::protobuf::internal::AllAreInitialized(this->param())) return false;
  if (!::google::protobuf::internal::AllAreInitialized(this->publisher())) return false;
  if (!::google::protobuf::internal::AllAreInitialized(this->subscriber())) return false;
  return true;
}

void Node::Swap(Node* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Node::InternalSwap(Node* other) {
  name_.Swap(&other->name_);
  param_.UnsafeArenaSwap(&other->param_);
  publisher_.UnsafeArenaSwap(&other->publisher_);
  subscriber_.UnsafeArenaSwap(&other->subscriber_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Node::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Node_descriptor_;
  metadata.reflection = Node_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Node

// required string name = 1;
 bool Node::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
 void Node::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
 void Node::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
 void Node::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
 const ::std::string& Node::name() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Node.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Node::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Node.name)
}
 void Node::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Indriya.Core.Msgs.Node.name)
}
 void Node::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Indriya.Core.Msgs.Node.name)
}
 ::std::string* Node::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Node.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Node::release_name() {
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Node::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.Node.name)
}

// repeated .Indriya.Core.Msgs.Param param = 2;
 int Node::param_size() const {
  return param_.size();
}
 void Node::clear_param() {
  param_.Clear();
}
 const ::Indriya::Core::Msgs::Param& Node::param(int index) const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Node.param)
  return param_.Get(index);
}
 ::Indriya::Core::Msgs::Param* Node::mutable_param(int index) {
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Node.param)
  return param_.Mutable(index);
}
 ::Indriya::Core::Msgs::Param* Node::add_param() {
  // @@protoc_insertion_point(field_add:Indriya.Core.Msgs.Node.param)
  return param_.Add();
}
 const ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Param >&
Node::param() const {
  // @@protoc_insertion_point(field_list:Indriya.Core.Msgs.Node.param)
  return param_;
}
 ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Param >*
Node::mutable_param() {
  // @@protoc_insertion_point(field_mutable_list:Indriya.Core.Msgs.Node.param)
  return &param_;
}

// repeated .Indriya.Core.Msgs.Publish publisher = 3;
 int Node::publisher_size() const {
  return publisher_.size();
}
 void Node::clear_publisher() {
  publisher_.Clear();
}
 const ::Indriya::Core::Msgs::Publish& Node::publisher(int index) const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Node.publisher)
  return publisher_.Get(index);
}
 ::Indriya::Core::Msgs::Publish* Node::mutable_publisher(int index) {
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Node.publisher)
  return publisher_.Mutable(index);
}
 ::Indriya::Core::Msgs::Publish* Node::add_publisher() {
  // @@protoc_insertion_point(field_add:Indriya.Core.Msgs.Node.publisher)
  return publisher_.Add();
}
 const ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Publish >&
Node::publisher() const {
  // @@protoc_insertion_point(field_list:Indriya.Core.Msgs.Node.publisher)
  return publisher_;
}
 ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Publish >*
Node::mutable_publisher() {
  // @@protoc_insertion_point(field_mutable_list:Indriya.Core.Msgs.Node.publisher)
  return &publisher_;
}

// repeated .Indriya.Core.Msgs.Subscribe subscriber = 4;
 int Node::subscriber_size() const {
  return subscriber_.size();
}
 void Node::clear_subscriber() {
  subscriber_.Clear();
}
 const ::Indriya::Core::Msgs::Subscribe& Node::subscriber(int index) const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Node.subscriber)
  return subscriber_.Get(index);
}
 ::Indriya::Core::Msgs::Subscribe* Node::mutable_subscriber(int index) {
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Node.subscriber)
  return subscriber_.Mutable(index);
}
 ::Indriya::Core::Msgs::Subscribe* Node::add_subscriber() {
  // @@protoc_insertion_point(field_add:Indriya.Core.Msgs.Node.subscriber)
  return subscriber_.Add();
}
 const ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Subscribe >&
Node::subscriber() const {
  // @@protoc_insertion_point(field_list:Indriya.Core.Msgs.Node.subscriber)
  return subscriber_;
}
 ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Subscribe >*
Node::mutable_subscriber() {
  // @@protoc_insertion_point(field_mutable_list:Indriya.Core.Msgs.Node.subscriber)
  return &subscriber_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Msgs
}  // namespace Core
}  // namespace Indriya

EX_REGISTER_STATIC_MSG("Indriya.Core.Msgs.Node", Node)
// @@protoc_insertion_point(global_scope)
