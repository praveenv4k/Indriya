// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pose_trajectory.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "pose_trajectory.pb.h"

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

namespace experimot {
namespace msgs {

namespace {

const ::google::protobuf::Descriptor* PoseTrajectory_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PoseTrajectory_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_pose_5ftrajectory_2eproto() {
  protobuf_AddDesc_pose_5ftrajectory_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "pose_trajectory.proto");
  GOOGLE_CHECK(file != NULL);
  PoseTrajectory_descriptor_ = file->message_type(0);
  static const int PoseTrajectory_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PoseTrajectory, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PoseTrajectory, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PoseTrajectory, pose_stamped_),
  };
  PoseTrajectory_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      PoseTrajectory_descriptor_,
      PoseTrajectory::default_instance_,
      PoseTrajectory_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PoseTrajectory, _has_bits_[0]),
      -1,
      -1,
      sizeof(PoseTrajectory),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PoseTrajectory, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_pose_5ftrajectory_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      PoseTrajectory_descriptor_, &PoseTrajectory::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_pose_5ftrajectory_2eproto() {
  delete PoseTrajectory::default_instance_;
  delete PoseTrajectory_reflection_;
}

void protobuf_AddDesc_pose_5ftrajectory_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::experimot::msgs::protobuf_AddDesc_pose_5fstamped_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\025pose_trajectory.proto\022\016experimot.msgs\032"
    "\022pose_stamped.proto\"]\n\016PoseTrajectory\022\014\n"
    "\004name\030\001 \001(\t\022\n\n\002id\030\002 \001(\r\0221\n\014pose_stamped\030"
    "\003 \003(\0132\033.experimot.msgs.PoseStamped", 154);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "pose_trajectory.proto", &protobuf_RegisterTypes);
  PoseTrajectory::default_instance_ = new PoseTrajectory();
  PoseTrajectory::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_pose_5ftrajectory_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_pose_5ftrajectory_2eproto {
  StaticDescriptorInitializer_pose_5ftrajectory_2eproto() {
    protobuf_AddDesc_pose_5ftrajectory_2eproto();
  }
} static_descriptor_initializer_pose_5ftrajectory_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#ifndef _MSC_VER
const int PoseTrajectory::kNameFieldNumber;
const int PoseTrajectory::kIdFieldNumber;
const int PoseTrajectory::kPoseStampedFieldNumber;
#endif  // !_MSC_VER

PoseTrajectory::PoseTrajectory()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:experimot.msgs.PoseTrajectory)
}

void PoseTrajectory::InitAsDefaultInstance() {
}

PoseTrajectory::PoseTrajectory(const PoseTrajectory& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:experimot.msgs.PoseTrajectory)
}

void PoseTrajectory::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  id_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PoseTrajectory::~PoseTrajectory() {
  // @@protoc_insertion_point(destructor:experimot.msgs.PoseTrajectory)
  SharedDtor();
}

void PoseTrajectory::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void PoseTrajectory::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PoseTrajectory::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PoseTrajectory_descriptor_;
}

const PoseTrajectory& PoseTrajectory::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_pose_5ftrajectory_2eproto();
  return *default_instance_;
}

PoseTrajectory* PoseTrajectory::default_instance_ = NULL;

PoseTrajectory* PoseTrajectory::New(::google::protobuf::Arena* arena) const {
  PoseTrajectory* n = new PoseTrajectory;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PoseTrajectory::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    if (has_name()) {
      name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    id_ = 0u;
  }
  pose_stamped_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool PoseTrajectory::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:experimot.msgs.PoseTrajectory)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "experimot.msgs.PoseTrajectory.name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_id;
        break;
      }

      // optional uint32 id = 2;
      case 2: {
        if (tag == 16) {
         parse_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_pose_stamped;
        break;
      }

      // repeated .experimot.msgs.PoseStamped pose_stamped = 3;
      case 3: {
        if (tag == 26) {
         parse_pose_stamped:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_pose_stamped()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_pose_stamped;
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
  // @@protoc_insertion_point(parse_success:experimot.msgs.PoseTrajectory)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:experimot.msgs.PoseTrajectory)
  return false;
#undef DO_
}

void PoseTrajectory::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:experimot.msgs.PoseTrajectory)
  // optional string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "experimot.msgs.PoseTrajectory.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // optional uint32 id = 2;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->id(), output);
  }

  // repeated .experimot.msgs.PoseStamped pose_stamped = 3;
  for (unsigned int i = 0, n = this->pose_stamped_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->pose_stamped(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:experimot.msgs.PoseTrajectory)
}

::google::protobuf::uint8* PoseTrajectory::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:experimot.msgs.PoseTrajectory)
  // optional string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "experimot.msgs.PoseTrajectory.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // optional uint32 id = 2;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->id(), target);
  }

  // repeated .experimot.msgs.PoseStamped pose_stamped = 3;
  for (unsigned int i = 0, n = this->pose_stamped_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->pose_stamped(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:experimot.msgs.PoseTrajectory)
  return target;
}

int PoseTrajectory::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & 3) {
    // optional string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional uint32 id = 2;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->id());
    }

  }
  // repeated .experimot.msgs.PoseStamped pose_stamped = 3;
  total_size += 1 * this->pose_stamped_size();
  for (int i = 0; i < this->pose_stamped_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->pose_stamped(i));
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

void PoseTrajectory::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const PoseTrajectory* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PoseTrajectory*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PoseTrajectory::MergeFrom(const PoseTrajectory& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  pose_stamped_.MergeFrom(from.pose_stamped_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (from.has_id()) {
      set_id(from.id());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void PoseTrajectory::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PoseTrajectory::CopyFrom(const PoseTrajectory& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PoseTrajectory::IsInitialized() const {

  if (!::google::protobuf::internal::AllAreInitialized(this->pose_stamped())) return false;
  return true;
}

void PoseTrajectory::Swap(PoseTrajectory* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PoseTrajectory::InternalSwap(PoseTrajectory* other) {
  name_.Swap(&other->name_);
  std::swap(id_, other->id_);
  pose_stamped_.UnsafeArenaSwap(&other->pose_stamped_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PoseTrajectory::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PoseTrajectory_descriptor_;
  metadata.reflection = PoseTrajectory_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PoseTrajectory

// optional string name = 1;
 bool PoseTrajectory::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
 void PoseTrajectory::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
 void PoseTrajectory::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
 void PoseTrajectory::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
 const ::std::string& PoseTrajectory::name() const {
  // @@protoc_insertion_point(field_get:experimot.msgs.PoseTrajectory.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PoseTrajectory::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:experimot.msgs.PoseTrajectory.name)
}
 void PoseTrajectory::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:experimot.msgs.PoseTrajectory.name)
}
 void PoseTrajectory::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:experimot.msgs.PoseTrajectory.name)
}
 ::std::string* PoseTrajectory::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:experimot.msgs.PoseTrajectory.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* PoseTrajectory::release_name() {
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PoseTrajectory::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:experimot.msgs.PoseTrajectory.name)
}

// optional uint32 id = 2;
 bool PoseTrajectory::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
 void PoseTrajectory::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
 void PoseTrajectory::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
 void PoseTrajectory::clear_id() {
  id_ = 0u;
  clear_has_id();
}
 ::google::protobuf::uint32 PoseTrajectory::id() const {
  // @@protoc_insertion_point(field_get:experimot.msgs.PoseTrajectory.id)
  return id_;
}
 void PoseTrajectory::set_id(::google::protobuf::uint32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:experimot.msgs.PoseTrajectory.id)
}

// repeated .experimot.msgs.PoseStamped pose_stamped = 3;
 int PoseTrajectory::pose_stamped_size() const {
  return pose_stamped_.size();
}
 void PoseTrajectory::clear_pose_stamped() {
  pose_stamped_.Clear();
}
 const ::experimot::msgs::PoseStamped& PoseTrajectory::pose_stamped(int index) const {
  // @@protoc_insertion_point(field_get:experimot.msgs.PoseTrajectory.pose_stamped)
  return pose_stamped_.Get(index);
}
 ::experimot::msgs::PoseStamped* PoseTrajectory::mutable_pose_stamped(int index) {
  // @@protoc_insertion_point(field_mutable:experimot.msgs.PoseTrajectory.pose_stamped)
  return pose_stamped_.Mutable(index);
}
 ::experimot::msgs::PoseStamped* PoseTrajectory::add_pose_stamped() {
  // @@protoc_insertion_point(field_add:experimot.msgs.PoseTrajectory.pose_stamped)
  return pose_stamped_.Add();
}
 const ::google::protobuf::RepeatedPtrField< ::experimot::msgs::PoseStamped >&
PoseTrajectory::pose_stamped() const {
  // @@protoc_insertion_point(field_list:experimot.msgs.PoseTrajectory.pose_stamped)
  return pose_stamped_;
}
 ::google::protobuf::RepeatedPtrField< ::experimot::msgs::PoseStamped >*
PoseTrajectory::mutable_pose_stamped() {
  // @@protoc_insertion_point(field_mutable_list:experimot.msgs.PoseTrajectory.pose_stamped)
  return &pose_stamped_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace experimot

EX_REGISTER_STATIC_MSG("experimot.msgs.PoseTrajectory", PoseTrajectory)
// @@protoc_insertion_point(global_scope)