// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: spherical_coordinates.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "spherical_coordinates.pb.h"

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

const ::google::protobuf::Descriptor* SphericalCoordinates_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SphericalCoordinates_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* SphericalCoordinates_SurfaceModel_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_spherical_5fcoordinates_2eproto() {
  protobuf_AddDesc_spherical_5fcoordinates_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "spherical_coordinates.proto");
  GOOGLE_CHECK(file != NULL);
  SphericalCoordinates_descriptor_ = file->message_type(0);
  static const int SphericalCoordinates_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SphericalCoordinates, surface_model_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SphericalCoordinates, latitude_deg_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SphericalCoordinates, longitude_deg_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SphericalCoordinates, elevation_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SphericalCoordinates, heading_deg_),
  };
  SphericalCoordinates_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      SphericalCoordinates_descriptor_,
      SphericalCoordinates::default_instance_,
      SphericalCoordinates_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SphericalCoordinates, _has_bits_[0]),
      -1,
      -1,
      sizeof(SphericalCoordinates),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SphericalCoordinates, _internal_metadata_),
      -1);
  SphericalCoordinates_SurfaceModel_descriptor_ = SphericalCoordinates_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_spherical_5fcoordinates_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      SphericalCoordinates_descriptor_, &SphericalCoordinates::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_spherical_5fcoordinates_2eproto() {
  delete SphericalCoordinates::default_instance_;
  delete SphericalCoordinates_reflection_;
}

void protobuf_AddDesc_spherical_5fcoordinates_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\033spherical_coordinates.proto\022\021Indriya.C"
    "ore.Msgs\"\331\001\n\024SphericalCoordinates\022K\n\rsur"
    "face_model\030\001 \002(\01624.Indriya.Core.Msgs.Sph"
    "ericalCoordinates.SurfaceModel\022\024\n\014latitu"
    "de_deg\030\002 \002(\001\022\025\n\rlongitude_deg\030\003 \002(\001\022\021\n\te"
    "levation\030\004 \002(\001\022\023\n\013heading_deg\030\005 \002(\001\"\037\n\014S"
    "urfaceModel\022\017\n\013EARTH_WGS84\020\001", 268);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "spherical_coordinates.proto", &protobuf_RegisterTypes);
  SphericalCoordinates::default_instance_ = new SphericalCoordinates();
  SphericalCoordinates::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_spherical_5fcoordinates_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_spherical_5fcoordinates_2eproto {
  StaticDescriptorInitializer_spherical_5fcoordinates_2eproto() {
    protobuf_AddDesc_spherical_5fcoordinates_2eproto();
  }
} static_descriptor_initializer_spherical_5fcoordinates_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

const ::google::protobuf::EnumDescriptor* SphericalCoordinates_SurfaceModel_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SphericalCoordinates_SurfaceModel_descriptor_;
}
bool SphericalCoordinates_SurfaceModel_IsValid(int value) {
  switch(value) {
    case 1:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const SphericalCoordinates_SurfaceModel SphericalCoordinates::EARTH_WGS84;
const SphericalCoordinates_SurfaceModel SphericalCoordinates::SurfaceModel_MIN;
const SphericalCoordinates_SurfaceModel SphericalCoordinates::SurfaceModel_MAX;
const int SphericalCoordinates::SurfaceModel_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int SphericalCoordinates::kSurfaceModelFieldNumber;
const int SphericalCoordinates::kLatitudeDegFieldNumber;
const int SphericalCoordinates::kLongitudeDegFieldNumber;
const int SphericalCoordinates::kElevationFieldNumber;
const int SphericalCoordinates::kHeadingDegFieldNumber;
#endif  // !_MSC_VER

SphericalCoordinates::SphericalCoordinates()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Indriya.Core.Msgs.SphericalCoordinates)
}

void SphericalCoordinates::InitAsDefaultInstance() {
}

SphericalCoordinates::SphericalCoordinates(const SphericalCoordinates& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Indriya.Core.Msgs.SphericalCoordinates)
}

void SphericalCoordinates::SharedCtor() {
  _cached_size_ = 0;
  surface_model_ = 1;
  latitude_deg_ = 0;
  longitude_deg_ = 0;
  elevation_ = 0;
  heading_deg_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SphericalCoordinates::~SphericalCoordinates() {
  // @@protoc_insertion_point(destructor:Indriya.Core.Msgs.SphericalCoordinates)
  SharedDtor();
}

void SphericalCoordinates::SharedDtor() {
  if (this != default_instance_) {
  }
}

void SphericalCoordinates::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SphericalCoordinates::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SphericalCoordinates_descriptor_;
}

const SphericalCoordinates& SphericalCoordinates::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_spherical_5fcoordinates_2eproto();
  return *default_instance_;
}

SphericalCoordinates* SphericalCoordinates::default_instance_ = NULL;

SphericalCoordinates* SphericalCoordinates::New(::google::protobuf::Arena* arena) const {
  SphericalCoordinates* n = new SphericalCoordinates;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SphericalCoordinates::Clear() {
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<SphericalCoordinates*>(16)->f)

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 31) {
    ZR_(latitude_deg_, heading_deg_);
    surface_model_ = 1;
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool SphericalCoordinates::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Indriya.Core.Msgs.SphericalCoordinates)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .Indriya.Core.Msgs.SphericalCoordinates.SurfaceModel surface_model = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::Indriya::Core::Msgs::SphericalCoordinates_SurfaceModel_IsValid(value)) {
            set_surface_model(static_cast< ::Indriya::Core::Msgs::SphericalCoordinates_SurfaceModel >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(17)) goto parse_latitude_deg;
        break;
      }

      // required double latitude_deg = 2;
      case 2: {
        if (tag == 17) {
         parse_latitude_deg:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &latitude_deg_)));
          set_has_latitude_deg();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(25)) goto parse_longitude_deg;
        break;
      }

      // required double longitude_deg = 3;
      case 3: {
        if (tag == 25) {
         parse_longitude_deg:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &longitude_deg_)));
          set_has_longitude_deg();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(33)) goto parse_elevation;
        break;
      }

      // required double elevation = 4;
      case 4: {
        if (tag == 33) {
         parse_elevation:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &elevation_)));
          set_has_elevation();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(41)) goto parse_heading_deg;
        break;
      }

      // required double heading_deg = 5;
      case 5: {
        if (tag == 41) {
         parse_heading_deg:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &heading_deg_)));
          set_has_heading_deg();
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
  // @@protoc_insertion_point(parse_success:Indriya.Core.Msgs.SphericalCoordinates)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Indriya.Core.Msgs.SphericalCoordinates)
  return false;
#undef DO_
}

void SphericalCoordinates::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Indriya.Core.Msgs.SphericalCoordinates)
  // required .Indriya.Core.Msgs.SphericalCoordinates.SurfaceModel surface_model = 1;
  if (has_surface_model()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->surface_model(), output);
  }

  // required double latitude_deg = 2;
  if (has_latitude_deg()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->latitude_deg(), output);
  }

  // required double longitude_deg = 3;
  if (has_longitude_deg()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->longitude_deg(), output);
  }

  // required double elevation = 4;
  if (has_elevation()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->elevation(), output);
  }

  // required double heading_deg = 5;
  if (has_heading_deg()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->heading_deg(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Indriya.Core.Msgs.SphericalCoordinates)
}

::google::protobuf::uint8* SphericalCoordinates::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Indriya.Core.Msgs.SphericalCoordinates)
  // required .Indriya.Core.Msgs.SphericalCoordinates.SurfaceModel surface_model = 1;
  if (has_surface_model()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->surface_model(), target);
  }

  // required double latitude_deg = 2;
  if (has_latitude_deg()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->latitude_deg(), target);
  }

  // required double longitude_deg = 3;
  if (has_longitude_deg()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->longitude_deg(), target);
  }

  // required double elevation = 4;
  if (has_elevation()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->elevation(), target);
  }

  // required double heading_deg = 5;
  if (has_heading_deg()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->heading_deg(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Indriya.Core.Msgs.SphericalCoordinates)
  return target;
}

int SphericalCoordinates::RequiredFieldsByteSizeFallback() const {
  int total_size = 0;

  if (has_surface_model()) {
    // required .Indriya.Core.Msgs.SphericalCoordinates.SurfaceModel surface_model = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->surface_model());
  }

  if (has_latitude_deg()) {
    // required double latitude_deg = 2;
    total_size += 1 + 8;
  }

  if (has_longitude_deg()) {
    // required double longitude_deg = 3;
    total_size += 1 + 8;
  }

  if (has_elevation()) {
    // required double elevation = 4;
    total_size += 1 + 8;
  }

  if (has_heading_deg()) {
    // required double heading_deg = 5;
    total_size += 1 + 8;
  }

  return total_size;
}
int SphericalCoordinates::ByteSize() const {
  int total_size = 0;

  if (((_has_bits_[0] & 0x0000001f) ^ 0x0000001f) == 0) {  // All required fields are present.
    // required .Indriya.Core.Msgs.SphericalCoordinates.SurfaceModel surface_model = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->surface_model());

    // required double latitude_deg = 2;
    total_size += 1 + 8;

    // required double longitude_deg = 3;
    total_size += 1 + 8;

    // required double elevation = 4;
    total_size += 1 + 8;

    // required double heading_deg = 5;
    total_size += 1 + 8;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
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

void SphericalCoordinates::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const SphericalCoordinates* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const SphericalCoordinates*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SphericalCoordinates::MergeFrom(const SphericalCoordinates& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_surface_model()) {
      set_surface_model(from.surface_model());
    }
    if (from.has_latitude_deg()) {
      set_latitude_deg(from.latitude_deg());
    }
    if (from.has_longitude_deg()) {
      set_longitude_deg(from.longitude_deg());
    }
    if (from.has_elevation()) {
      set_elevation(from.elevation());
    }
    if (from.has_heading_deg()) {
      set_heading_deg(from.heading_deg());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void SphericalCoordinates::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SphericalCoordinates::CopyFrom(const SphericalCoordinates& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SphericalCoordinates::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000001f) != 0x0000001f) return false;

  return true;
}

void SphericalCoordinates::Swap(SphericalCoordinates* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SphericalCoordinates::InternalSwap(SphericalCoordinates* other) {
  std::swap(surface_model_, other->surface_model_);
  std::swap(latitude_deg_, other->latitude_deg_);
  std::swap(longitude_deg_, other->longitude_deg_);
  std::swap(elevation_, other->elevation_);
  std::swap(heading_deg_, other->heading_deg_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SphericalCoordinates::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SphericalCoordinates_descriptor_;
  metadata.reflection = SphericalCoordinates_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SphericalCoordinates

// required .Indriya.Core.Msgs.SphericalCoordinates.SurfaceModel surface_model = 1;
 bool SphericalCoordinates::has_surface_model() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
 void SphericalCoordinates::set_has_surface_model() {
  _has_bits_[0] |= 0x00000001u;
}
 void SphericalCoordinates::clear_has_surface_model() {
  _has_bits_[0] &= ~0x00000001u;
}
 void SphericalCoordinates::clear_surface_model() {
  surface_model_ = 1;
  clear_has_surface_model();
}
 ::Indriya::Core::Msgs::SphericalCoordinates_SurfaceModel SphericalCoordinates::surface_model() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.SphericalCoordinates.surface_model)
  return static_cast< ::Indriya::Core::Msgs::SphericalCoordinates_SurfaceModel >(surface_model_);
}
 void SphericalCoordinates::set_surface_model(::Indriya::Core::Msgs::SphericalCoordinates_SurfaceModel value) {
  assert(::Indriya::Core::Msgs::SphericalCoordinates_SurfaceModel_IsValid(value));
  set_has_surface_model();
  surface_model_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.SphericalCoordinates.surface_model)
}

// required double latitude_deg = 2;
 bool SphericalCoordinates::has_latitude_deg() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
 void SphericalCoordinates::set_has_latitude_deg() {
  _has_bits_[0] |= 0x00000002u;
}
 void SphericalCoordinates::clear_has_latitude_deg() {
  _has_bits_[0] &= ~0x00000002u;
}
 void SphericalCoordinates::clear_latitude_deg() {
  latitude_deg_ = 0;
  clear_has_latitude_deg();
}
 double SphericalCoordinates::latitude_deg() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.SphericalCoordinates.latitude_deg)
  return latitude_deg_;
}
 void SphericalCoordinates::set_latitude_deg(double value) {
  set_has_latitude_deg();
  latitude_deg_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.SphericalCoordinates.latitude_deg)
}

// required double longitude_deg = 3;
 bool SphericalCoordinates::has_longitude_deg() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
 void SphericalCoordinates::set_has_longitude_deg() {
  _has_bits_[0] |= 0x00000004u;
}
 void SphericalCoordinates::clear_has_longitude_deg() {
  _has_bits_[0] &= ~0x00000004u;
}
 void SphericalCoordinates::clear_longitude_deg() {
  longitude_deg_ = 0;
  clear_has_longitude_deg();
}
 double SphericalCoordinates::longitude_deg() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.SphericalCoordinates.longitude_deg)
  return longitude_deg_;
}
 void SphericalCoordinates::set_longitude_deg(double value) {
  set_has_longitude_deg();
  longitude_deg_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.SphericalCoordinates.longitude_deg)
}

// required double elevation = 4;
 bool SphericalCoordinates::has_elevation() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
 void SphericalCoordinates::set_has_elevation() {
  _has_bits_[0] |= 0x00000008u;
}
 void SphericalCoordinates::clear_has_elevation() {
  _has_bits_[0] &= ~0x00000008u;
}
 void SphericalCoordinates::clear_elevation() {
  elevation_ = 0;
  clear_has_elevation();
}
 double SphericalCoordinates::elevation() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.SphericalCoordinates.elevation)
  return elevation_;
}
 void SphericalCoordinates::set_elevation(double value) {
  set_has_elevation();
  elevation_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.SphericalCoordinates.elevation)
}

// required double heading_deg = 5;
 bool SphericalCoordinates::has_heading_deg() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
 void SphericalCoordinates::set_has_heading_deg() {
  _has_bits_[0] |= 0x00000010u;
}
 void SphericalCoordinates::clear_has_heading_deg() {
  _has_bits_[0] &= ~0x00000010u;
}
 void SphericalCoordinates::clear_heading_deg() {
  heading_deg_ = 0;
  clear_has_heading_deg();
}
 double SphericalCoordinates::heading_deg() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.SphericalCoordinates.heading_deg)
  return heading_deg_;
}
 void SphericalCoordinates::set_heading_deg(double value) {
  set_has_heading_deg();
  heading_deg_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.SphericalCoordinates.heading_deg)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Msgs
}  // namespace Core
}  // namespace Indriya

EX_REGISTER_STATIC_MSG("Indriya.Core.Msgs.SphericalCoordinates", SphericalCoordinates)
// @@protoc_insertion_point(global_scope)