// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz_string.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "gz_string.pb.h"

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

const ::google::protobuf::Descriptor* GzString_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GzString_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_gz_5fstring_2eproto() {
  protobuf_AddDesc_gz_5fstring_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "gz_string.proto");
  GOOGLE_CHECK(file != NULL);
  GzString_descriptor_ = file->message_type(0);
  static const int GzString_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GzString, data_),
  };
  GzString_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      GzString_descriptor_,
      GzString::default_instance_,
      GzString_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GzString, _has_bits_[0]),
      -1,
      -1,
      sizeof(GzString),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GzString, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_gz_5fstring_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      GzString_descriptor_, &GzString::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_gz_5fstring_2eproto() {
  delete GzString::default_instance_;
  delete GzString_reflection_;
}

void protobuf_AddDesc_gz_5fstring_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017gz_string.proto\022\021Indriya.Core.Msgs\"\030\n\010"
    "GzString\022\014\n\004data\030\001 \002(\t", 62);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz_string.proto", &protobuf_RegisterTypes);
  GzString::default_instance_ = new GzString();
  GzString::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_gz_5fstring_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_gz_5fstring_2eproto {
  StaticDescriptorInitializer_gz_5fstring_2eproto() {
    protobuf_AddDesc_gz_5fstring_2eproto();
  }
} static_descriptor_initializer_gz_5fstring_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#ifndef _MSC_VER
const int GzString::kDataFieldNumber;
#endif  // !_MSC_VER

GzString::GzString()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Indriya.Core.Msgs.GzString)
}

void GzString::InitAsDefaultInstance() {
}

GzString::GzString(const GzString& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Indriya.Core.Msgs.GzString)
}

void GzString::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GzString::~GzString() {
  // @@protoc_insertion_point(destructor:Indriya.Core.Msgs.GzString)
  SharedDtor();
}

void GzString::SharedDtor() {
  data_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void GzString::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GzString::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GzString_descriptor_;
}

const GzString& GzString::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_gz_5fstring_2eproto();
  return *default_instance_;
}

GzString* GzString::default_instance_ = NULL;

GzString* GzString::New(::google::protobuf::Arena* arena) const {
  GzString* n = new GzString;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GzString::Clear() {
  if (has_data()) {
    data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool GzString::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Indriya.Core.Msgs.GzString)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string data = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_data()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->data().data(), this->data().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "Indriya.Core.Msgs.GzString.data");
        } else {
          goto handle_unusual;
        }
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
  // @@protoc_insertion_point(parse_success:Indriya.Core.Msgs.GzString)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Indriya.Core.Msgs.GzString)
  return false;
#undef DO_
}

void GzString::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Indriya.Core.Msgs.GzString)
  // required string data = 1;
  if (has_data()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->data().data(), this->data().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "Indriya.Core.Msgs.GzString.data");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->data(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Indriya.Core.Msgs.GzString)
}

::google::protobuf::uint8* GzString::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Indriya.Core.Msgs.GzString)
  // required string data = 1;
  if (has_data()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->data().data(), this->data().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "Indriya.Core.Msgs.GzString.data");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->data(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Indriya.Core.Msgs.GzString)
  return target;
}

int GzString::ByteSize() const {
  int total_size = 0;

  // required string data = 1;
  if (has_data()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->data());
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

void GzString::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const GzString* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const GzString*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void GzString::MergeFrom(const GzString& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_data()) {
      set_has_data();
      data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.data_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void GzString::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GzString::CopyFrom(const GzString& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GzString::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void GzString::Swap(GzString* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GzString::InternalSwap(GzString* other) {
  data_.Swap(&other->data_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata GzString::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GzString_descriptor_;
  metadata.reflection = GzString_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GzString

// required string data = 1;
 bool GzString::has_data() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
 void GzString::set_has_data() {
  _has_bits_[0] |= 0x00000001u;
}
 void GzString::clear_has_data() {
  _has_bits_[0] &= ~0x00000001u;
}
 void GzString::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_data();
}
 const ::std::string& GzString::data() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.GzString.data)
  return data_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void GzString::set_data(const ::std::string& value) {
  set_has_data();
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.GzString.data)
}
 void GzString::set_data(const char* value) {
  set_has_data();
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Indriya.Core.Msgs.GzString.data)
}
 void GzString::set_data(const char* value, size_t size) {
  set_has_data();
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Indriya.Core.Msgs.GzString.data)
}
 ::std::string* GzString::mutable_data() {
  set_has_data();
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.GzString.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* GzString::release_data() {
  clear_has_data();
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void GzString::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    set_has_data();
  } else {
    clear_has_data();
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.GzString.data)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Msgs
}  // namespace Core
}  // namespace Indriya

EX_REGISTER_STATIC_MSG("Indriya.Core.Msgs.GzString", GzString)
// @@protoc_insertion_point(global_scope)
