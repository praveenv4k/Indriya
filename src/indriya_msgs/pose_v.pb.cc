// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pose_v.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "pose_v.pb.h"

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

const ::google::protobuf::Descriptor* Pose_V_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Pose_V_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_pose_5fv_2eproto() {
  protobuf_AddDesc_pose_5fv_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "pose_v.proto");
  GOOGLE_CHECK(file != NULL);
  Pose_V_descriptor_ = file->message_type(0);
  static const int Pose_V_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Pose_V, pose_),
  };
  Pose_V_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Pose_V_descriptor_,
      Pose_V::default_instance_,
      Pose_V_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Pose_V, _has_bits_[0]),
      -1,
      -1,
      sizeof(Pose_V),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Pose_V, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_pose_5fv_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Pose_V_descriptor_, &Pose_V::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_pose_5fv_2eproto() {
  delete Pose_V::default_instance_;
  delete Pose_V_reflection_;
}

void protobuf_AddDesc_pose_5fv_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::Indriya::Core::Msgs::protobuf_AddDesc_pose_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014pose_v.proto\022\021Indriya.Core.Msgs\032\npose."
    "proto\"/\n\006Pose_V\022%\n\004pose\030\001 \003(\0132\027.Indriya."
    "Core.Msgs.Pose", 94);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "pose_v.proto", &protobuf_RegisterTypes);
  Pose_V::default_instance_ = new Pose_V();
  Pose_V::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_pose_5fv_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_pose_5fv_2eproto {
  StaticDescriptorInitializer_pose_5fv_2eproto() {
    protobuf_AddDesc_pose_5fv_2eproto();
  }
} static_descriptor_initializer_pose_5fv_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#ifndef _MSC_VER
const int Pose_V::kPoseFieldNumber;
#endif  // !_MSC_VER

Pose_V::Pose_V()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Indriya.Core.Msgs.Pose_V)
}

void Pose_V::InitAsDefaultInstance() {
}

Pose_V::Pose_V(const Pose_V& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Indriya.Core.Msgs.Pose_V)
}

void Pose_V::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Pose_V::~Pose_V() {
  // @@protoc_insertion_point(destructor:Indriya.Core.Msgs.Pose_V)
  SharedDtor();
}

void Pose_V::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Pose_V::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Pose_V::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Pose_V_descriptor_;
}

const Pose_V& Pose_V::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_pose_5fv_2eproto();
  return *default_instance_;
}

Pose_V* Pose_V::default_instance_ = NULL;

Pose_V* Pose_V::New(::google::protobuf::Arena* arena) const {
  Pose_V* n = new Pose_V;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Pose_V::Clear() {
  pose_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool Pose_V::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Indriya.Core.Msgs.Pose_V)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .Indriya.Core.Msgs.Pose pose = 1;
      case 1: {
        if (tag == 10) {
         parse_pose:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_pose()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_pose;
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
  // @@protoc_insertion_point(parse_success:Indriya.Core.Msgs.Pose_V)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Indriya.Core.Msgs.Pose_V)
  return false;
#undef DO_
}

void Pose_V::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Indriya.Core.Msgs.Pose_V)
  // repeated .Indriya.Core.Msgs.Pose pose = 1;
  for (unsigned int i = 0, n = this->pose_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->pose(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Indriya.Core.Msgs.Pose_V)
}

::google::protobuf::uint8* Pose_V::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Indriya.Core.Msgs.Pose_V)
  // repeated .Indriya.Core.Msgs.Pose pose = 1;
  for (unsigned int i = 0, n = this->pose_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->pose(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Indriya.Core.Msgs.Pose_V)
  return target;
}

int Pose_V::ByteSize() const {
  int total_size = 0;

  // repeated .Indriya.Core.Msgs.Pose pose = 1;
  total_size += 1 * this->pose_size();
  for (int i = 0; i < this->pose_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->pose(i));
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

void Pose_V::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Pose_V* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Pose_V*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Pose_V::MergeFrom(const Pose_V& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  pose_.MergeFrom(from.pose_);
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void Pose_V::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Pose_V::CopyFrom(const Pose_V& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Pose_V::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->pose())) return false;
  return true;
}

void Pose_V::Swap(Pose_V* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Pose_V::InternalSwap(Pose_V* other) {
  pose_.UnsafeArenaSwap(&other->pose_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Pose_V::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Pose_V_descriptor_;
  metadata.reflection = Pose_V_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Pose_V

// repeated .Indriya.Core.Msgs.Pose pose = 1;
 int Pose_V::pose_size() const {
  return pose_.size();
}
 void Pose_V::clear_pose() {
  pose_.Clear();
}
 const ::Indriya::Core::Msgs::Pose& Pose_V::pose(int index) const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Pose_V.pose)
  return pose_.Get(index);
}
 ::Indriya::Core::Msgs::Pose* Pose_V::mutable_pose(int index) {
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Pose_V.pose)
  return pose_.Mutable(index);
}
 ::Indriya::Core::Msgs::Pose* Pose_V::add_pose() {
  // @@protoc_insertion_point(field_add:Indriya.Core.Msgs.Pose_V.pose)
  return pose_.Add();
}
 const ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Pose >&
Pose_V::pose() const {
  // @@protoc_insertion_point(field_list:Indriya.Core.Msgs.Pose_V.pose)
  return pose_;
}
 ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Pose >*
Pose_V::mutable_pose() {
  // @@protoc_insertion_point(field_mutable_list:Indriya.Core.Msgs.Pose_V.pose)
  return &pose_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Msgs
}  // namespace Core
}  // namespace Indriya

EX_REGISTER_STATIC_MSG("Indriya.Core.Msgs.Pose_V", Pose_V)
// @@protoc_insertion_point(global_scope)
