// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: fluid.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "fluid.pb.h"

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

const ::google::protobuf::Descriptor* Fluid_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Fluid_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_fluid_2eproto() {
  protobuf_AddDesc_fluid_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "fluid.proto");
  GOOGLE_CHECK(file != NULL);
  Fluid_descriptor_ = file->message_type(0);
  static const int Fluid_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Fluid, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Fluid, position_),
  };
  Fluid_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Fluid_descriptor_,
      Fluid::default_instance_,
      Fluid_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Fluid, _has_bits_[0]),
      -1,
      -1,
      sizeof(Fluid),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Fluid, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_fluid_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Fluid_descriptor_, &Fluid::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_fluid_2eproto() {
  delete Fluid::default_instance_;
  delete Fluid_reflection_;
}

void protobuf_AddDesc_fluid_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::Indriya::Core::Msgs::protobuf_AddDesc_vector3d_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013fluid.proto\022\021Indriya.Core.Msgs\032\016vector"
    "3d.proto\"D\n\005Fluid\022\014\n\004name\030\001 \002(\t\022-\n\010posit"
    "ion\030\002 \003(\0132\033.Indriya.Core.Msgs.Vector3d", 118);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "fluid.proto", &protobuf_RegisterTypes);
  Fluid::default_instance_ = new Fluid();
  Fluid::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_fluid_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_fluid_2eproto {
  StaticDescriptorInitializer_fluid_2eproto() {
    protobuf_AddDesc_fluid_2eproto();
  }
} static_descriptor_initializer_fluid_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#ifndef _MSC_VER
const int Fluid::kNameFieldNumber;
const int Fluid::kPositionFieldNumber;
#endif  // !_MSC_VER

Fluid::Fluid()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Indriya.Core.Msgs.Fluid)
}

void Fluid::InitAsDefaultInstance() {
}

Fluid::Fluid(const Fluid& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Indriya.Core.Msgs.Fluid)
}

void Fluid::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Fluid::~Fluid() {
  // @@protoc_insertion_point(destructor:Indriya.Core.Msgs.Fluid)
  SharedDtor();
}

void Fluid::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Fluid::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Fluid::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Fluid_descriptor_;
}

const Fluid& Fluid::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_fluid_2eproto();
  return *default_instance_;
}

Fluid* Fluid::default_instance_ = NULL;

Fluid* Fluid::New(::google::protobuf::Arena* arena) const {
  Fluid* n = new Fluid;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Fluid::Clear() {
  if (has_name()) {
    name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  position_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool Fluid::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Indriya.Core.Msgs.Fluid)
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
            "Indriya.Core.Msgs.Fluid.name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_position;
        break;
      }

      // repeated .Indriya.Core.Msgs.Vector3d position = 2;
      case 2: {
        if (tag == 18) {
         parse_position:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_position()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_position;
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
  // @@protoc_insertion_point(parse_success:Indriya.Core.Msgs.Fluid)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Indriya.Core.Msgs.Fluid)
  return false;
#undef DO_
}

void Fluid::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Indriya.Core.Msgs.Fluid)
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "Indriya.Core.Msgs.Fluid.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // repeated .Indriya.Core.Msgs.Vector3d position = 2;
  for (unsigned int i = 0, n = this->position_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->position(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Indriya.Core.Msgs.Fluid)
}

::google::protobuf::uint8* Fluid::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Indriya.Core.Msgs.Fluid)
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "Indriya.Core.Msgs.Fluid.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // repeated .Indriya.Core.Msgs.Vector3d position = 2;
  for (unsigned int i = 0, n = this->position_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->position(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Indriya.Core.Msgs.Fluid)
  return target;
}

int Fluid::ByteSize() const {
  int total_size = 0;

  // required string name = 1;
  if (has_name()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }
  // repeated .Indriya.Core.Msgs.Vector3d position = 2;
  total_size += 1 * this->position_size();
  for (int i = 0; i < this->position_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->position(i));
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

void Fluid::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Fluid* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Fluid*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Fluid::MergeFrom(const Fluid& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  position_.MergeFrom(from.position_);
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

void Fluid::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Fluid::CopyFrom(const Fluid& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Fluid::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (!::google::protobuf::internal::AllAreInitialized(this->position())) return false;
  return true;
}

void Fluid::Swap(Fluid* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Fluid::InternalSwap(Fluid* other) {
  name_.Swap(&other->name_);
  position_.UnsafeArenaSwap(&other->position_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Fluid::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Fluid_descriptor_;
  metadata.reflection = Fluid_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Fluid

// required string name = 1;
 bool Fluid::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
 void Fluid::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
 void Fluid::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
 void Fluid::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
 const ::std::string& Fluid::name() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Fluid.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Fluid::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Fluid.name)
}
 void Fluid::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Indriya.Core.Msgs.Fluid.name)
}
 void Fluid::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Indriya.Core.Msgs.Fluid.name)
}
 ::std::string* Fluid::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Fluid.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Fluid::release_name() {
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Fluid::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.Fluid.name)
}

// repeated .Indriya.Core.Msgs.Vector3d position = 2;
 int Fluid::position_size() const {
  return position_.size();
}
 void Fluid::clear_position() {
  position_.Clear();
}
 const ::Indriya::Core::Msgs::Vector3d& Fluid::position(int index) const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Fluid.position)
  return position_.Get(index);
}
 ::Indriya::Core::Msgs::Vector3d* Fluid::mutable_position(int index) {
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Fluid.position)
  return position_.Mutable(index);
}
 ::Indriya::Core::Msgs::Vector3d* Fluid::add_position() {
  // @@protoc_insertion_point(field_add:Indriya.Core.Msgs.Fluid.position)
  return position_.Add();
}
 const ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Vector3d >&
Fluid::position() const {
  // @@protoc_insertion_point(field_list:Indriya.Core.Msgs.Fluid.position)
  return position_;
}
 ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Vector3d >*
Fluid::mutable_position() {
  // @@protoc_insertion_point(field_mutable_list:Indriya.Core.Msgs.Fluid.position)
  return &position_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Msgs
}  // namespace Core
}  // namespace Indriya

EX_REGISTER_STATIC_MSG("Indriya.Core.Msgs.Fluid", Fluid)
// @@protoc_insertion_point(global_scope)
