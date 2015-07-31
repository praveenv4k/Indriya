// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: imagegeom.proto

#ifndef PROTOBUF_imagegeom_2eproto__INCLUDED
#define PROTOBUF_imagegeom_2eproto__INCLUDED

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
#include <boost/shared_ptr.hpp>
#include "MsgFactory.h"
// @@protoc_insertion_point(includes)

namespace Indriya {
namespace Core {
namespace Msgs {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_imagegeom_2eproto();
void protobuf_AssignDesc_imagegeom_2eproto();
void protobuf_ShutdownFile_imagegeom_2eproto();

class ImageGeom;

// ===================================================================

class ImageGeom : public ::google::protobuf::Message {
 public:
  ImageGeom();
  virtual ~ImageGeom();

  ImageGeom(const ImageGeom& from);

  inline ImageGeom& operator=(const ImageGeom& from) {
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
  static const ImageGeom& default_instance();

  void Swap(ImageGeom* other);

  // implements Message ----------------------------------------------

  inline ImageGeom* New() const { return New(NULL); }

  ImageGeom* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ImageGeom& from);
  void MergeFrom(const ImageGeom& from);
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
  void InternalSwap(ImageGeom* other);
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

  // required string uri = 1;
  bool has_uri() const;
  void clear_uri();
  static const int kUriFieldNumber = 1;
  const ::std::string& uri() const;
  void set_uri(const ::std::string& value);
  void set_uri(const char* value);
  void set_uri(const char* value, size_t size);
  ::std::string* mutable_uri();
  ::std::string* release_uri();
  void set_allocated_uri(::std::string* uri);

  // optional double scale = 2;
  bool has_scale() const;
  void clear_scale();
  static const int kScaleFieldNumber = 2;
  double scale() const;
  void set_scale(double value);

  // optional int32 threshold = 3 [default = 255];
  bool has_threshold() const;
  void clear_threshold();
  static const int kThresholdFieldNumber = 3;
  ::google::protobuf::int32 threshold() const;
  void set_threshold(::google::protobuf::int32 value);

  // optional double height = 4;
  bool has_height() const;
  void clear_height();
  static const int kHeightFieldNumber = 4;
  double height() const;
  void set_height(double value);

  // optional int32 granularity = 5;
  bool has_granularity() const;
  void clear_granularity();
  static const int kGranularityFieldNumber = 5;
  ::google::protobuf::int32 granularity() const;
  void set_granularity(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Indriya.Core.Msgs.ImageGeom)
 private:
  inline void set_has_uri();
  inline void clear_has_uri();
  inline void set_has_scale();
  inline void clear_has_scale();
  inline void set_has_threshold();
  inline void clear_has_threshold();
  inline void set_has_height();
  inline void clear_has_height();
  inline void set_has_granularity();
  inline void clear_has_granularity();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr uri_;
  double scale_;
  double height_;
  ::google::protobuf::int32 threshold_;
  ::google::protobuf::int32 granularity_;
  friend void  protobuf_AddDesc_imagegeom_2eproto();
  friend void protobuf_AssignDesc_imagegeom_2eproto();
  friend void protobuf_ShutdownFile_imagegeom_2eproto();

  void InitAsDefaultInstance();
  static ImageGeom* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ImageGeom

// required string uri = 1;
inline bool ImageGeom::has_uri() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ImageGeom::set_has_uri() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ImageGeom::clear_has_uri() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ImageGeom::clear_uri() {
  uri_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_uri();
}
inline const ::std::string& ImageGeom::uri() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.ImageGeom.uri)
  return uri_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ImageGeom::set_uri(const ::std::string& value) {
  set_has_uri();
  uri_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.ImageGeom.uri)
}
inline void ImageGeom::set_uri(const char* value) {
  set_has_uri();
  uri_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Indriya.Core.Msgs.ImageGeom.uri)
}
inline void ImageGeom::set_uri(const char* value, size_t size) {
  set_has_uri();
  uri_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Indriya.Core.Msgs.ImageGeom.uri)
}
inline ::std::string* ImageGeom::mutable_uri() {
  set_has_uri();
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.ImageGeom.uri)
  return uri_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ImageGeom::release_uri() {
  clear_has_uri();
  return uri_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ImageGeom::set_allocated_uri(::std::string* uri) {
  if (uri != NULL) {
    set_has_uri();
  } else {
    clear_has_uri();
  }
  uri_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), uri);
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.ImageGeom.uri)
}

// optional double scale = 2;
inline bool ImageGeom::has_scale() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ImageGeom::set_has_scale() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ImageGeom::clear_has_scale() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ImageGeom::clear_scale() {
  scale_ = 0;
  clear_has_scale();
}
inline double ImageGeom::scale() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.ImageGeom.scale)
  return scale_;
}
inline void ImageGeom::set_scale(double value) {
  set_has_scale();
  scale_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.ImageGeom.scale)
}

// optional int32 threshold = 3 [default = 255];
inline bool ImageGeom::has_threshold() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ImageGeom::set_has_threshold() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ImageGeom::clear_has_threshold() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ImageGeom::clear_threshold() {
  threshold_ = 255;
  clear_has_threshold();
}
inline ::google::protobuf::int32 ImageGeom::threshold() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.ImageGeom.threshold)
  return threshold_;
}
inline void ImageGeom::set_threshold(::google::protobuf::int32 value) {
  set_has_threshold();
  threshold_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.ImageGeom.threshold)
}

// optional double height = 4;
inline bool ImageGeom::has_height() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ImageGeom::set_has_height() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ImageGeom::clear_has_height() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ImageGeom::clear_height() {
  height_ = 0;
  clear_has_height();
}
inline double ImageGeom::height() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.ImageGeom.height)
  return height_;
}
inline void ImageGeom::set_height(double value) {
  set_has_height();
  height_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.ImageGeom.height)
}

// optional int32 granularity = 5;
inline bool ImageGeom::has_granularity() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ImageGeom::set_has_granularity() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ImageGeom::clear_has_granularity() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ImageGeom::clear_granularity() {
  granularity_ = 0;
  clear_has_granularity();
}
inline ::google::protobuf::int32 ImageGeom::granularity() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.ImageGeom.granularity)
  return granularity_;
}
inline void ImageGeom::set_granularity(::google::protobuf::int32 value) {
  set_has_granularity();
  granularity_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.ImageGeom.granularity)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

typedef boost::shared_ptr<Indriya::Core::Msgs::ImageGeom> ImageGeomPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace Msgs
}  // namespace Core
}  // namespace Indriya

typedef const boost::shared_ptr<Indriya::Core::Msgs::ImageGeom const> ConstImageGeomPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_imagegeom_2eproto__INCLUDED