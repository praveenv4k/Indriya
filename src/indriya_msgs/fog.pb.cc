// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: fog.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "fog.pb.h"

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

const ::google::protobuf::Descriptor* Fog_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Fog_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Fog_FogType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_fog_2eproto() {
  protobuf_AddDesc_fog_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "fog.proto");
  GOOGLE_CHECK(file != NULL);
  Fog_descriptor_ = file->message_type(0);
  static const int Fog_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Fog, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Fog, color_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Fog, density_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Fog, start_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Fog, end_),
  };
  Fog_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Fog_descriptor_,
      Fog::default_instance_,
      Fog_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Fog, _has_bits_[0]),
      -1,
      -1,
      sizeof(Fog),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Fog, _internal_metadata_),
      -1);
  Fog_FogType_descriptor_ = Fog_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_fog_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Fog_descriptor_, &Fog::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_fog_2eproto() {
  delete Fog::default_instance_;
  delete Fog_reflection_;
}

void protobuf_AddDesc_fog_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::Indriya::Core::Msgs::protobuf_AddDesc_color_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\tfog.proto\022\021Indriya.Core.Msgs\032\013color.pr"
    "oto\"\315\001\n\003Fog\022,\n\004type\030\001 \001(\0162\036.Indriya.Core"
    ".Msgs.Fog.FogType\022\'\n\005color\030\002 \001(\0132\030.Indri"
    "ya.Core.Msgs.Color\022\017\n\007density\030\003 \001(\002\022\r\n\005s"
    "tart\030\004 \001(\002\022\013\n\003end\030\005 \001(\002\"B\n\007FogType\022\010\n\004NO"
    "NE\020\001\022\n\n\006LINEAR\020\002\022\017\n\013EXPONENTIAL\020\003\022\020\n\014EXP"
    "ONENTIAL2\020\004", 251);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "fog.proto", &protobuf_RegisterTypes);
  Fog::default_instance_ = new Fog();
  Fog::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_fog_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_fog_2eproto {
  StaticDescriptorInitializer_fog_2eproto() {
    protobuf_AddDesc_fog_2eproto();
  }
} static_descriptor_initializer_fog_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

const ::google::protobuf::EnumDescriptor* Fog_FogType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Fog_FogType_descriptor_;
}
bool Fog_FogType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Fog_FogType Fog::NONE;
const Fog_FogType Fog::LINEAR;
const Fog_FogType Fog::EXPONENTIAL;
const Fog_FogType Fog::EXPONENTIAL2;
const Fog_FogType Fog::FogType_MIN;
const Fog_FogType Fog::FogType_MAX;
const int Fog::FogType_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int Fog::kTypeFieldNumber;
const int Fog::kColorFieldNumber;
const int Fog::kDensityFieldNumber;
const int Fog::kStartFieldNumber;
const int Fog::kEndFieldNumber;
#endif  // !_MSC_VER

Fog::Fog()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Indriya.Core.Msgs.Fog)
}

void Fog::InitAsDefaultInstance() {
  color_ = const_cast< ::Indriya::Core::Msgs::Color*>(&::Indriya::Core::Msgs::Color::default_instance());
}

Fog::Fog(const Fog& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Indriya.Core.Msgs.Fog)
}

void Fog::SharedCtor() {
  _cached_size_ = 0;
  type_ = 1;
  color_ = NULL;
  density_ = 0;
  start_ = 0;
  end_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Fog::~Fog() {
  // @@protoc_insertion_point(destructor:Indriya.Core.Msgs.Fog)
  SharedDtor();
}

void Fog::SharedDtor() {
  if (this != default_instance_) {
    delete color_;
  }
}

void Fog::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Fog::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Fog_descriptor_;
}

const Fog& Fog::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_fog_2eproto();
  return *default_instance_;
}

Fog* Fog::default_instance_ = NULL;

Fog* Fog::New(::google::protobuf::Arena* arena) const {
  Fog* n = new Fog;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Fog::Clear() {
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<Fog*>(16)->f)

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 31) {
    ZR_(density_, end_);
    type_ = 1;
    if (has_color()) {
      if (color_ != NULL) color_->::Indriya::Core::Msgs::Color::Clear();
    }
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool Fog::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Indriya.Core.Msgs.Fog)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .Indriya.Core.Msgs.Fog.FogType type = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::Indriya::Core::Msgs::Fog_FogType_IsValid(value)) {
            set_type(static_cast< ::Indriya::Core::Msgs::Fog_FogType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_color;
        break;
      }

      // optional .Indriya.Core.Msgs.Color color = 2;
      case 2: {
        if (tag == 18) {
         parse_color:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_color()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(29)) goto parse_density;
        break;
      }

      // optional float density = 3;
      case 3: {
        if (tag == 29) {
         parse_density:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &density_)));
          set_has_density();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(37)) goto parse_start;
        break;
      }

      // optional float start = 4;
      case 4: {
        if (tag == 37) {
         parse_start:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &start_)));
          set_has_start();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(45)) goto parse_end;
        break;
      }

      // optional float end = 5;
      case 5: {
        if (tag == 45) {
         parse_end:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &end_)));
          set_has_end();
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
  // @@protoc_insertion_point(parse_success:Indriya.Core.Msgs.Fog)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Indriya.Core.Msgs.Fog)
  return false;
#undef DO_
}

void Fog::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Indriya.Core.Msgs.Fog)
  // optional .Indriya.Core.Msgs.Fog.FogType type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // optional .Indriya.Core.Msgs.Color color = 2;
  if (has_color()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->color_, output);
  }

  // optional float density = 3;
  if (has_density()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->density(), output);
  }

  // optional float start = 4;
  if (has_start()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->start(), output);
  }

  // optional float end = 5;
  if (has_end()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(5, this->end(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Indriya.Core.Msgs.Fog)
}

::google::protobuf::uint8* Fog::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Indriya.Core.Msgs.Fog)
  // optional .Indriya.Core.Msgs.Fog.FogType type = 1;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // optional .Indriya.Core.Msgs.Color color = 2;
  if (has_color()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, *this->color_, target);
  }

  // optional float density = 3;
  if (has_density()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->density(), target);
  }

  // optional float start = 4;
  if (has_start()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->start(), target);
  }

  // optional float end = 5;
  if (has_end()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(5, this->end(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Indriya.Core.Msgs.Fog)
  return target;
}

int Fog::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & 31) {
    // optional .Indriya.Core.Msgs.Fog.FogType type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // optional .Indriya.Core.Msgs.Color color = 2;
    if (has_color()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->color_);
    }

    // optional float density = 3;
    if (has_density()) {
      total_size += 1 + 4;
    }

    // optional float start = 4;
    if (has_start()) {
      total_size += 1 + 4;
    }

    // optional float end = 5;
    if (has_end()) {
      total_size += 1 + 4;
    }

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

void Fog::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Fog* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Fog*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Fog::MergeFrom(const Fog& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_color()) {
      mutable_color()->::Indriya::Core::Msgs::Color::MergeFrom(from.color());
    }
    if (from.has_density()) {
      set_density(from.density());
    }
    if (from.has_start()) {
      set_start(from.start());
    }
    if (from.has_end()) {
      set_end(from.end());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void Fog::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Fog::CopyFrom(const Fog& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Fog::IsInitialized() const {

  if (has_color()) {
    if (!this->color_->IsInitialized()) return false;
  }
  return true;
}

void Fog::Swap(Fog* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Fog::InternalSwap(Fog* other) {
  std::swap(type_, other->type_);
  std::swap(color_, other->color_);
  std::swap(density_, other->density_);
  std::swap(start_, other->start_);
  std::swap(end_, other->end_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Fog::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Fog_descriptor_;
  metadata.reflection = Fog_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Fog

// optional .Indriya.Core.Msgs.Fog.FogType type = 1;
 bool Fog::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
 void Fog::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
 void Fog::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
 void Fog::clear_type() {
  type_ = 1;
  clear_has_type();
}
 ::Indriya::Core::Msgs::Fog_FogType Fog::type() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Fog.type)
  return static_cast< ::Indriya::Core::Msgs::Fog_FogType >(type_);
}
 void Fog::set_type(::Indriya::Core::Msgs::Fog_FogType value) {
  assert(::Indriya::Core::Msgs::Fog_FogType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Fog.type)
}

// optional .Indriya.Core.Msgs.Color color = 2;
 bool Fog::has_color() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
 void Fog::set_has_color() {
  _has_bits_[0] |= 0x00000002u;
}
 void Fog::clear_has_color() {
  _has_bits_[0] &= ~0x00000002u;
}
 void Fog::clear_color() {
  if (color_ != NULL) color_->::Indriya::Core::Msgs::Color::Clear();
  clear_has_color();
}
 const ::Indriya::Core::Msgs::Color& Fog::color() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Fog.color)
  return color_ != NULL ? *color_ : *default_instance_->color_;
}
 ::Indriya::Core::Msgs::Color* Fog::mutable_color() {
  set_has_color();
  if (color_ == NULL) {
    color_ = new ::Indriya::Core::Msgs::Color;
  }
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Fog.color)
  return color_;
}
 ::Indriya::Core::Msgs::Color* Fog::release_color() {
  clear_has_color();
  ::Indriya::Core::Msgs::Color* temp = color_;
  color_ = NULL;
  return temp;
}
 void Fog::set_allocated_color(::Indriya::Core::Msgs::Color* color) {
  delete color_;
  color_ = color;
  if (color) {
    set_has_color();
  } else {
    clear_has_color();
  }
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.Fog.color)
}

// optional float density = 3;
 bool Fog::has_density() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
 void Fog::set_has_density() {
  _has_bits_[0] |= 0x00000004u;
}
 void Fog::clear_has_density() {
  _has_bits_[0] &= ~0x00000004u;
}
 void Fog::clear_density() {
  density_ = 0;
  clear_has_density();
}
 float Fog::density() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Fog.density)
  return density_;
}
 void Fog::set_density(float value) {
  set_has_density();
  density_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Fog.density)
}

// optional float start = 4;
 bool Fog::has_start() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
 void Fog::set_has_start() {
  _has_bits_[0] |= 0x00000008u;
}
 void Fog::clear_has_start() {
  _has_bits_[0] &= ~0x00000008u;
}
 void Fog::clear_start() {
  start_ = 0;
  clear_has_start();
}
 float Fog::start() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Fog.start)
  return start_;
}
 void Fog::set_start(float value) {
  set_has_start();
  start_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Fog.start)
}

// optional float end = 5;
 bool Fog::has_end() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
 void Fog::set_has_end() {
  _has_bits_[0] |= 0x00000010u;
}
 void Fog::clear_has_end() {
  _has_bits_[0] &= ~0x00000010u;
}
 void Fog::clear_end() {
  end_ = 0;
  clear_has_end();
}
 float Fog::end() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Fog.end)
  return end_;
}
 void Fog::set_end(float value) {
  set_has_end();
  end_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Fog.end)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Msgs
}  // namespace Core
}  // namespace Indriya

EX_REGISTER_STATIC_MSG("Indriya.Core.Msgs.Fog", Fog)
// @@protoc_insertion_point(global_scope)
