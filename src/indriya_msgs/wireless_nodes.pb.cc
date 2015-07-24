// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: wireless_nodes.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "wireless_nodes.pb.h"

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

const ::google::protobuf::Descriptor* WirelessNodes_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  WirelessNodes_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_wireless_5fnodes_2eproto() {
  protobuf_AddDesc_wireless_5fnodes_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "wireless_nodes.proto");
  GOOGLE_CHECK(file != NULL);
  WirelessNodes_descriptor_ = file->message_type(0);
  static const int WirelessNodes_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WirelessNodes, node_),
  };
  WirelessNodes_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      WirelessNodes_descriptor_,
      WirelessNodes::default_instance_,
      WirelessNodes_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WirelessNodes, _has_bits_[0]),
      -1,
      -1,
      sizeof(WirelessNodes),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WirelessNodes, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_wireless_5fnodes_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      WirelessNodes_descriptor_, &WirelessNodes::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_wireless_5fnodes_2eproto() {
  delete WirelessNodes::default_instance_;
  delete WirelessNodes_reflection_;
}

void protobuf_AddDesc_wireless_5fnodes_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::Indriya::Core::Msgs::protobuf_AddDesc_wireless_5fnode_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\024wireless_nodes.proto\022\021Indriya.Core.Msg"
    "s\032\023wireless_node.proto\">\n\rWirelessNodes\022"
    "-\n\004node\030\001 \003(\0132\037.Indriya.Core.Msgs.Wirele"
    "ssNode", 126);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "wireless_nodes.proto", &protobuf_RegisterTypes);
  WirelessNodes::default_instance_ = new WirelessNodes();
  WirelessNodes::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_wireless_5fnodes_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_wireless_5fnodes_2eproto {
  StaticDescriptorInitializer_wireless_5fnodes_2eproto() {
    protobuf_AddDesc_wireless_5fnodes_2eproto();
  }
} static_descriptor_initializer_wireless_5fnodes_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#ifndef _MSC_VER
const int WirelessNodes::kNodeFieldNumber;
#endif  // !_MSC_VER

WirelessNodes::WirelessNodes()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Indriya.Core.Msgs.WirelessNodes)
}

void WirelessNodes::InitAsDefaultInstance() {
}

WirelessNodes::WirelessNodes(const WirelessNodes& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Indriya.Core.Msgs.WirelessNodes)
}

void WirelessNodes::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

WirelessNodes::~WirelessNodes() {
  // @@protoc_insertion_point(destructor:Indriya.Core.Msgs.WirelessNodes)
  SharedDtor();
}

void WirelessNodes::SharedDtor() {
  if (this != default_instance_) {
  }
}

void WirelessNodes::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* WirelessNodes::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return WirelessNodes_descriptor_;
}

const WirelessNodes& WirelessNodes::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_wireless_5fnodes_2eproto();
  return *default_instance_;
}

WirelessNodes* WirelessNodes::default_instance_ = NULL;

WirelessNodes* WirelessNodes::New(::google::protobuf::Arena* arena) const {
  WirelessNodes* n = new WirelessNodes;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void WirelessNodes::Clear() {
  node_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool WirelessNodes::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Indriya.Core.Msgs.WirelessNodes)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .Indriya.Core.Msgs.WirelessNode node = 1;
      case 1: {
        if (tag == 10) {
         parse_node:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_node()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_node;
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
  // @@protoc_insertion_point(parse_success:Indriya.Core.Msgs.WirelessNodes)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Indriya.Core.Msgs.WirelessNodes)
  return false;
#undef DO_
}

void WirelessNodes::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Indriya.Core.Msgs.WirelessNodes)
  // repeated .Indriya.Core.Msgs.WirelessNode node = 1;
  for (unsigned int i = 0, n = this->node_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->node(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Indriya.Core.Msgs.WirelessNodes)
}

::google::protobuf::uint8* WirelessNodes::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Indriya.Core.Msgs.WirelessNodes)
  // repeated .Indriya.Core.Msgs.WirelessNode node = 1;
  for (unsigned int i = 0, n = this->node_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->node(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Indriya.Core.Msgs.WirelessNodes)
  return target;
}

int WirelessNodes::ByteSize() const {
  int total_size = 0;

  // repeated .Indriya.Core.Msgs.WirelessNode node = 1;
  total_size += 1 * this->node_size();
  for (int i = 0; i < this->node_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->node(i));
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

void WirelessNodes::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const WirelessNodes* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const WirelessNodes*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void WirelessNodes::MergeFrom(const WirelessNodes& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  node_.MergeFrom(from.node_);
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void WirelessNodes::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void WirelessNodes::CopyFrom(const WirelessNodes& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WirelessNodes::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->node())) return false;
  return true;
}

void WirelessNodes::Swap(WirelessNodes* other) {
  if (other == this) return;
  InternalSwap(other);
}
void WirelessNodes::InternalSwap(WirelessNodes* other) {
  node_.UnsafeArenaSwap(&other->node_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata WirelessNodes::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = WirelessNodes_descriptor_;
  metadata.reflection = WirelessNodes_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// WirelessNodes

// repeated .Indriya.Core.Msgs.WirelessNode node = 1;
 int WirelessNodes::node_size() const {
  return node_.size();
}
 void WirelessNodes::clear_node() {
  node_.Clear();
}
 const ::Indriya::Core::Msgs::WirelessNode& WirelessNodes::node(int index) const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.WirelessNodes.node)
  return node_.Get(index);
}
 ::Indriya::Core::Msgs::WirelessNode* WirelessNodes::mutable_node(int index) {
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.WirelessNodes.node)
  return node_.Mutable(index);
}
 ::Indriya::Core::Msgs::WirelessNode* WirelessNodes::add_node() {
  // @@protoc_insertion_point(field_add:Indriya.Core.Msgs.WirelessNodes.node)
  return node_.Add();
}
 const ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::WirelessNode >&
WirelessNodes::node() const {
  // @@protoc_insertion_point(field_list:Indriya.Core.Msgs.WirelessNodes.node)
  return node_;
}
 ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::WirelessNode >*
WirelessNodes::mutable_node() {
  // @@protoc_insertion_point(field_mutable_list:Indriya.Core.Msgs.WirelessNodes.node)
  return &node_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Msgs
}  // namespace Core
}  // namespace Indriya

EX_REGISTER_STATIC_MSG("Indriya.Core.Msgs.WirelessNodes", WirelessNodes)
// @@protoc_insertion_point(global_scope)