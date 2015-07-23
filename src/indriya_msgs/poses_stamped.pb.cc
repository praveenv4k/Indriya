// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: poses_stamped.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "poses_stamped.pb.h"

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

const ::google::protobuf::Descriptor* PosesStamped_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PosesStamped_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_poses_5fstamped_2eproto() {
  protobuf_AddDesc_poses_5fstamped_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "poses_stamped.proto");
  GOOGLE_CHECK(file != NULL);
  PosesStamped_descriptor_ = file->message_type(0);
  static const int PosesStamped_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PosesStamped, time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PosesStamped, pose_),
  };
  PosesStamped_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      PosesStamped_descriptor_,
      PosesStamped::default_instance_,
      PosesStamped_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PosesStamped, _has_bits_[0]),
      -1,
      -1,
      sizeof(PosesStamped),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PosesStamped, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_poses_5fstamped_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      PosesStamped_descriptor_, &PosesStamped::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_poses_5fstamped_2eproto() {
  delete PosesStamped::default_instance_;
  delete PosesStamped_reflection_;
}

void protobuf_AddDesc_poses_5fstamped_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::Indriya::Core::Msgs::protobuf_AddDesc_time_2eproto();
  ::Indriya::Core::Msgs::protobuf_AddDesc_pose_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023poses_stamped.proto\022\021Indriya.Core.Msgs"
    "\032\ntime.proto\032\npose.proto\"\\\n\014PosesStamped"
    "\022%\n\004time\030\001 \002(\0132\027.Indriya.Core.Msgs.Time\022"
    "%\n\004pose\030\002 \003(\0132\027.Indriya.Core.Msgs.Pose", 158);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "poses_stamped.proto", &protobuf_RegisterTypes);
  PosesStamped::default_instance_ = new PosesStamped();
  PosesStamped::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_poses_5fstamped_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_poses_5fstamped_2eproto {
  StaticDescriptorInitializer_poses_5fstamped_2eproto() {
    protobuf_AddDesc_poses_5fstamped_2eproto();
  }
} static_descriptor_initializer_poses_5fstamped_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#ifndef _MSC_VER
const int PosesStamped::kTimeFieldNumber;
const int PosesStamped::kPoseFieldNumber;
#endif  // !_MSC_VER

PosesStamped::PosesStamped()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Indriya.Core.Msgs.PosesStamped)
}

void PosesStamped::InitAsDefaultInstance() {
  time_ = const_cast< ::Indriya::Core::Msgs::Time*>(&::Indriya::Core::Msgs::Time::default_instance());
}

PosesStamped::PosesStamped(const PosesStamped& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Indriya.Core.Msgs.PosesStamped)
}

void PosesStamped::SharedCtor() {
  _cached_size_ = 0;
  time_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PosesStamped::~PosesStamped() {
  // @@protoc_insertion_point(destructor:Indriya.Core.Msgs.PosesStamped)
  SharedDtor();
}

void PosesStamped::SharedDtor() {
  if (this != default_instance_) {
    delete time_;
  }
}

void PosesStamped::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PosesStamped::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PosesStamped_descriptor_;
}

const PosesStamped& PosesStamped::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_poses_5fstamped_2eproto();
  return *default_instance_;
}

PosesStamped* PosesStamped::default_instance_ = NULL;

PosesStamped* PosesStamped::New(::google::protobuf::Arena* arena) const {
  PosesStamped* n = new PosesStamped;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PosesStamped::Clear() {
  if (has_time()) {
    if (time_ != NULL) time_->::Indriya::Core::Msgs::Time::Clear();
  }
  pose_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool PosesStamped::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Indriya.Core.Msgs.PosesStamped)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .Indriya.Core.Msgs.Time time = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_time()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_pose;
        break;
      }

      // repeated .Indriya.Core.Msgs.Pose pose = 2;
      case 2: {
        if (tag == 18) {
         parse_pose:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_pose()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_pose;
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
  // @@protoc_insertion_point(parse_success:Indriya.Core.Msgs.PosesStamped)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Indriya.Core.Msgs.PosesStamped)
  return false;
#undef DO_
}

void PosesStamped::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Indriya.Core.Msgs.PosesStamped)
  // required .Indriya.Core.Msgs.Time time = 1;
  if (has_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->time_, output);
  }

  // repeated .Indriya.Core.Msgs.Pose pose = 2;
  for (unsigned int i = 0, n = this->pose_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->pose(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Indriya.Core.Msgs.PosesStamped)
}

::google::protobuf::uint8* PosesStamped::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Indriya.Core.Msgs.PosesStamped)
  // required .Indriya.Core.Msgs.Time time = 1;
  if (has_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, *this->time_, target);
  }

  // repeated .Indriya.Core.Msgs.Pose pose = 2;
  for (unsigned int i = 0, n = this->pose_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->pose(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Indriya.Core.Msgs.PosesStamped)
  return target;
}

int PosesStamped::ByteSize() const {
  int total_size = 0;

  // required .Indriya.Core.Msgs.Time time = 1;
  if (has_time()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->time_);
  }
  // repeated .Indriya.Core.Msgs.Pose pose = 2;
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

void PosesStamped::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const PosesStamped* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PosesStamped*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PosesStamped::MergeFrom(const PosesStamped& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  pose_.MergeFrom(from.pose_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_time()) {
      mutable_time()->::Indriya::Core::Msgs::Time::MergeFrom(from.time());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void PosesStamped::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PosesStamped::CopyFrom(const PosesStamped& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PosesStamped::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_time()) {
    if (!this->time_->IsInitialized()) return false;
  }
  if (!::google::protobuf::internal::AllAreInitialized(this->pose())) return false;
  return true;
}

void PosesStamped::Swap(PosesStamped* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PosesStamped::InternalSwap(PosesStamped* other) {
  std::swap(time_, other->time_);
  pose_.UnsafeArenaSwap(&other->pose_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PosesStamped::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PosesStamped_descriptor_;
  metadata.reflection = PosesStamped_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PosesStamped

// required .Indriya.Core.Msgs.Time time = 1;
 bool PosesStamped::has_time() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
 void PosesStamped::set_has_time() {
  _has_bits_[0] |= 0x00000001u;
}
 void PosesStamped::clear_has_time() {
  _has_bits_[0] &= ~0x00000001u;
}
 void PosesStamped::clear_time() {
  if (time_ != NULL) time_->::Indriya::Core::Msgs::Time::Clear();
  clear_has_time();
}
 const ::Indriya::Core::Msgs::Time& PosesStamped::time() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.PosesStamped.time)
  return time_ != NULL ? *time_ : *default_instance_->time_;
}
 ::Indriya::Core::Msgs::Time* PosesStamped::mutable_time() {
  set_has_time();
  if (time_ == NULL) {
    time_ = new ::Indriya::Core::Msgs::Time;
  }
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.PosesStamped.time)
  return time_;
}
 ::Indriya::Core::Msgs::Time* PosesStamped::release_time() {
  clear_has_time();
  ::Indriya::Core::Msgs::Time* temp = time_;
  time_ = NULL;
  return temp;
}
 void PosesStamped::set_allocated_time(::Indriya::Core::Msgs::Time* time) {
  delete time_;
  time_ = time;
  if (time) {
    set_has_time();
  } else {
    clear_has_time();
  }
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.PosesStamped.time)
}

// repeated .Indriya.Core.Msgs.Pose pose = 2;
 int PosesStamped::pose_size() const {
  return pose_.size();
}
 void PosesStamped::clear_pose() {
  pose_.Clear();
}
 const ::Indriya::Core::Msgs::Pose& PosesStamped::pose(int index) const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.PosesStamped.pose)
  return pose_.Get(index);
}
 ::Indriya::Core::Msgs::Pose* PosesStamped::mutable_pose(int index) {
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.PosesStamped.pose)
  return pose_.Mutable(index);
}
 ::Indriya::Core::Msgs::Pose* PosesStamped::add_pose() {
  // @@protoc_insertion_point(field_add:Indriya.Core.Msgs.PosesStamped.pose)
  return pose_.Add();
}
 const ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Pose >&
PosesStamped::pose() const {
  // @@protoc_insertion_point(field_list:Indriya.Core.Msgs.PosesStamped.pose)
  return pose_;
}
 ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Pose >*
PosesStamped::mutable_pose() {
  // @@protoc_insertion_point(field_mutable_list:Indriya.Core.Msgs.PosesStamped.pose)
  return &pose_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Msgs
}  // namespace Core
}  // namespace Indriya

EX_REGISTER_STATIC_MSG("Indriya.Core.Msgs.PosesStamped", PosesStamped)
// @@protoc_insertion_point(global_scope)
