// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: link.proto

#ifndef PROTOBUF_link_2eproto__INCLUDED
#define PROTOBUF_link_2eproto__INCLUDED

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
#include "inertial.pb.h"
#include "collision.pb.h"
#include "visual.pb.h"
#include "sensor.pb.h"
#include "projector.pb.h"
#include "pose.pb.h"
#include <boost/shared_ptr.hpp>
#include "MsgFactory.h"
// @@protoc_insertion_point(includes)

namespace Indriya {
namespace Core {
namespace Msgs {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_link_2eproto();
void protobuf_AssignDesc_link_2eproto();
void protobuf_ShutdownFile_link_2eproto();

class Link;

// ===================================================================

class Link : public ::google::protobuf::Message {
 public:
  Link();
  virtual ~Link();

  Link(const Link& from);

  inline Link& operator=(const Link& from) {
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
  static const Link& default_instance();

  void Swap(Link* other);

  // implements Message ----------------------------------------------

  inline Link* New() const { return New(NULL); }

  Link* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Link& from);
  void MergeFrom(const Link& from);
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
  void InternalSwap(Link* other);
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

  // optional uint32 id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::uint32 id() const;
  void set_id(::google::protobuf::uint32 value);

  // required string name = 2;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional bool self_collide = 3;
  bool has_self_collide() const;
  void clear_self_collide();
  static const int kSelfCollideFieldNumber = 3;
  bool self_collide() const;
  void set_self_collide(bool value);

  // optional bool gravity = 4;
  bool has_gravity() const;
  void clear_gravity();
  static const int kGravityFieldNumber = 4;
  bool gravity() const;
  void set_gravity(bool value);

  // optional bool kinematic = 5;
  bool has_kinematic() const;
  void clear_kinematic();
  static const int kKinematicFieldNumber = 5;
  bool kinematic() const;
  void set_kinematic(bool value);

  // optional bool enabled = 6;
  bool has_enabled() const;
  void clear_enabled();
  static const int kEnabledFieldNumber = 6;
  bool enabled() const;
  void set_enabled(bool value);

  // optional .Indriya.Core.Msgs.Inertial inertial = 7;
  bool has_inertial() const;
  void clear_inertial();
  static const int kInertialFieldNumber = 7;
  const ::Indriya::Core::Msgs::Inertial& inertial() const;
  ::Indriya::Core::Msgs::Inertial* mutable_inertial();
  ::Indriya::Core::Msgs::Inertial* release_inertial();
  void set_allocated_inertial(::Indriya::Core::Msgs::Inertial* inertial);

  // optional .Indriya.Core.Msgs.Pose pose = 8;
  bool has_pose() const;
  void clear_pose();
  static const int kPoseFieldNumber = 8;
  const ::Indriya::Core::Msgs::Pose& pose() const;
  ::Indriya::Core::Msgs::Pose* mutable_pose();
  ::Indriya::Core::Msgs::Pose* release_pose();
  void set_allocated_pose(::Indriya::Core::Msgs::Pose* pose);

  // repeated .Indriya.Core.Msgs.Visual visual = 9;
  int visual_size() const;
  void clear_visual();
  static const int kVisualFieldNumber = 9;
  const ::Indriya::Core::Msgs::Visual& visual(int index) const;
  ::Indriya::Core::Msgs::Visual* mutable_visual(int index);
  ::Indriya::Core::Msgs::Visual* add_visual();
  const ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Visual >&
      visual() const;
  ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Visual >*
      mutable_visual();

  // repeated .Indriya.Core.Msgs.Collision collision = 10;
  int collision_size() const;
  void clear_collision();
  static const int kCollisionFieldNumber = 10;
  const ::Indriya::Core::Msgs::Collision& collision(int index) const;
  ::Indriya::Core::Msgs::Collision* mutable_collision(int index);
  ::Indriya::Core::Msgs::Collision* add_collision();
  const ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Collision >&
      collision() const;
  ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Collision >*
      mutable_collision();

  // repeated .Indriya.Core.Msgs.Sensor sensor = 11;
  int sensor_size() const;
  void clear_sensor();
  static const int kSensorFieldNumber = 11;
  const ::Indriya::Core::Msgs::Sensor& sensor(int index) const;
  ::Indriya::Core::Msgs::Sensor* mutable_sensor(int index);
  ::Indriya::Core::Msgs::Sensor* add_sensor();
  const ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Sensor >&
      sensor() const;
  ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Sensor >*
      mutable_sensor();

  // repeated .Indriya.Core.Msgs.Projector projector = 12;
  int projector_size() const;
  void clear_projector();
  static const int kProjectorFieldNumber = 12;
  const ::Indriya::Core::Msgs::Projector& projector(int index) const;
  ::Indriya::Core::Msgs::Projector* mutable_projector(int index);
  ::Indriya::Core::Msgs::Projector* add_projector();
  const ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Projector >&
      projector() const;
  ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Projector >*
      mutable_projector();

  // optional bool canonical = 13;
  bool has_canonical() const;
  void clear_canonical();
  static const int kCanonicalFieldNumber = 13;
  bool canonical() const;
  void set_canonical(bool value);

  // @@protoc_insertion_point(class_scope:Indriya.Core.Msgs.Link)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_self_collide();
  inline void clear_has_self_collide();
  inline void set_has_gravity();
  inline void clear_has_gravity();
  inline void set_has_kinematic();
  inline void clear_has_kinematic();
  inline void set_has_enabled();
  inline void clear_has_enabled();
  inline void set_has_inertial();
  inline void clear_has_inertial();
  inline void set_has_pose();
  inline void clear_has_pose();
  inline void set_has_canonical();
  inline void clear_has_canonical();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::uint32 id_;
  bool self_collide_;
  bool gravity_;
  bool kinematic_;
  bool enabled_;
  ::Indriya::Core::Msgs::Inertial* inertial_;
  ::Indriya::Core::Msgs::Pose* pose_;
  ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Visual > visual_;
  ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Collision > collision_;
  ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Sensor > sensor_;
  ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Projector > projector_;
  bool canonical_;
  friend void  protobuf_AddDesc_link_2eproto();
  friend void protobuf_AssignDesc_link_2eproto();
  friend void protobuf_ShutdownFile_link_2eproto();

  void InitAsDefaultInstance();
  static Link* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Link

// optional uint32 id = 1;
inline bool Link::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Link::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Link::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Link::clear_id() {
  id_ = 0u;
  clear_has_id();
}
inline ::google::protobuf::uint32 Link::id() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Link.id)
  return id_;
}
inline void Link::set_id(::google::protobuf::uint32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Link.id)
}

// required string name = 2;
inline bool Link::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Link::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Link::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Link::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
inline const ::std::string& Link::name() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Link.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Link::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Link.name)
}
inline void Link::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Indriya.Core.Msgs.Link.name)
}
inline void Link::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Indriya.Core.Msgs.Link.name)
}
inline ::std::string* Link::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Link.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Link::release_name() {
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Link::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.Link.name)
}

// optional bool self_collide = 3;
inline bool Link::has_self_collide() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Link::set_has_self_collide() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Link::clear_has_self_collide() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Link::clear_self_collide() {
  self_collide_ = false;
  clear_has_self_collide();
}
inline bool Link::self_collide() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Link.self_collide)
  return self_collide_;
}
inline void Link::set_self_collide(bool value) {
  set_has_self_collide();
  self_collide_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Link.self_collide)
}

// optional bool gravity = 4;
inline bool Link::has_gravity() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Link::set_has_gravity() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Link::clear_has_gravity() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Link::clear_gravity() {
  gravity_ = false;
  clear_has_gravity();
}
inline bool Link::gravity() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Link.gravity)
  return gravity_;
}
inline void Link::set_gravity(bool value) {
  set_has_gravity();
  gravity_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Link.gravity)
}

// optional bool kinematic = 5;
inline bool Link::has_kinematic() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Link::set_has_kinematic() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Link::clear_has_kinematic() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Link::clear_kinematic() {
  kinematic_ = false;
  clear_has_kinematic();
}
inline bool Link::kinematic() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Link.kinematic)
  return kinematic_;
}
inline void Link::set_kinematic(bool value) {
  set_has_kinematic();
  kinematic_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Link.kinematic)
}

// optional bool enabled = 6;
inline bool Link::has_enabled() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Link::set_has_enabled() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Link::clear_has_enabled() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Link::clear_enabled() {
  enabled_ = false;
  clear_has_enabled();
}
inline bool Link::enabled() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Link.enabled)
  return enabled_;
}
inline void Link::set_enabled(bool value) {
  set_has_enabled();
  enabled_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Link.enabled)
}

// optional .Indriya.Core.Msgs.Inertial inertial = 7;
inline bool Link::has_inertial() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Link::set_has_inertial() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Link::clear_has_inertial() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Link::clear_inertial() {
  if (inertial_ != NULL) inertial_->::Indriya::Core::Msgs::Inertial::Clear();
  clear_has_inertial();
}
inline const ::Indriya::Core::Msgs::Inertial& Link::inertial() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Link.inertial)
  return inertial_ != NULL ? *inertial_ : *default_instance_->inertial_;
}
inline ::Indriya::Core::Msgs::Inertial* Link::mutable_inertial() {
  set_has_inertial();
  if (inertial_ == NULL) {
    inertial_ = new ::Indriya::Core::Msgs::Inertial;
  }
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Link.inertial)
  return inertial_;
}
inline ::Indriya::Core::Msgs::Inertial* Link::release_inertial() {
  clear_has_inertial();
  ::Indriya::Core::Msgs::Inertial* temp = inertial_;
  inertial_ = NULL;
  return temp;
}
inline void Link::set_allocated_inertial(::Indriya::Core::Msgs::Inertial* inertial) {
  delete inertial_;
  inertial_ = inertial;
  if (inertial) {
    set_has_inertial();
  } else {
    clear_has_inertial();
  }
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.Link.inertial)
}

// optional .Indriya.Core.Msgs.Pose pose = 8;
inline bool Link::has_pose() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Link::set_has_pose() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Link::clear_has_pose() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Link::clear_pose() {
  if (pose_ != NULL) pose_->::Indriya::Core::Msgs::Pose::Clear();
  clear_has_pose();
}
inline const ::Indriya::Core::Msgs::Pose& Link::pose() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Link.pose)
  return pose_ != NULL ? *pose_ : *default_instance_->pose_;
}
inline ::Indriya::Core::Msgs::Pose* Link::mutable_pose() {
  set_has_pose();
  if (pose_ == NULL) {
    pose_ = new ::Indriya::Core::Msgs::Pose;
  }
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Link.pose)
  return pose_;
}
inline ::Indriya::Core::Msgs::Pose* Link::release_pose() {
  clear_has_pose();
  ::Indriya::Core::Msgs::Pose* temp = pose_;
  pose_ = NULL;
  return temp;
}
inline void Link::set_allocated_pose(::Indriya::Core::Msgs::Pose* pose) {
  delete pose_;
  pose_ = pose;
  if (pose) {
    set_has_pose();
  } else {
    clear_has_pose();
  }
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.Link.pose)
}

// repeated .Indriya.Core.Msgs.Visual visual = 9;
inline int Link::visual_size() const {
  return visual_.size();
}
inline void Link::clear_visual() {
  visual_.Clear();
}
inline const ::Indriya::Core::Msgs::Visual& Link::visual(int index) const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Link.visual)
  return visual_.Get(index);
}
inline ::Indriya::Core::Msgs::Visual* Link::mutable_visual(int index) {
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Link.visual)
  return visual_.Mutable(index);
}
inline ::Indriya::Core::Msgs::Visual* Link::add_visual() {
  // @@protoc_insertion_point(field_add:Indriya.Core.Msgs.Link.visual)
  return visual_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Visual >&
Link::visual() const {
  // @@protoc_insertion_point(field_list:Indriya.Core.Msgs.Link.visual)
  return visual_;
}
inline ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Visual >*
Link::mutable_visual() {
  // @@protoc_insertion_point(field_mutable_list:Indriya.Core.Msgs.Link.visual)
  return &visual_;
}

// repeated .Indriya.Core.Msgs.Collision collision = 10;
inline int Link::collision_size() const {
  return collision_.size();
}
inline void Link::clear_collision() {
  collision_.Clear();
}
inline const ::Indriya::Core::Msgs::Collision& Link::collision(int index) const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Link.collision)
  return collision_.Get(index);
}
inline ::Indriya::Core::Msgs::Collision* Link::mutable_collision(int index) {
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Link.collision)
  return collision_.Mutable(index);
}
inline ::Indriya::Core::Msgs::Collision* Link::add_collision() {
  // @@protoc_insertion_point(field_add:Indriya.Core.Msgs.Link.collision)
  return collision_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Collision >&
Link::collision() const {
  // @@protoc_insertion_point(field_list:Indriya.Core.Msgs.Link.collision)
  return collision_;
}
inline ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Collision >*
Link::mutable_collision() {
  // @@protoc_insertion_point(field_mutable_list:Indriya.Core.Msgs.Link.collision)
  return &collision_;
}

// repeated .Indriya.Core.Msgs.Sensor sensor = 11;
inline int Link::sensor_size() const {
  return sensor_.size();
}
inline void Link::clear_sensor() {
  sensor_.Clear();
}
inline const ::Indriya::Core::Msgs::Sensor& Link::sensor(int index) const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Link.sensor)
  return sensor_.Get(index);
}
inline ::Indriya::Core::Msgs::Sensor* Link::mutable_sensor(int index) {
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Link.sensor)
  return sensor_.Mutable(index);
}
inline ::Indriya::Core::Msgs::Sensor* Link::add_sensor() {
  // @@protoc_insertion_point(field_add:Indriya.Core.Msgs.Link.sensor)
  return sensor_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Sensor >&
Link::sensor() const {
  // @@protoc_insertion_point(field_list:Indriya.Core.Msgs.Link.sensor)
  return sensor_;
}
inline ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Sensor >*
Link::mutable_sensor() {
  // @@protoc_insertion_point(field_mutable_list:Indriya.Core.Msgs.Link.sensor)
  return &sensor_;
}

// repeated .Indriya.Core.Msgs.Projector projector = 12;
inline int Link::projector_size() const {
  return projector_.size();
}
inline void Link::clear_projector() {
  projector_.Clear();
}
inline const ::Indriya::Core::Msgs::Projector& Link::projector(int index) const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Link.projector)
  return projector_.Get(index);
}
inline ::Indriya::Core::Msgs::Projector* Link::mutable_projector(int index) {
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Link.projector)
  return projector_.Mutable(index);
}
inline ::Indriya::Core::Msgs::Projector* Link::add_projector() {
  // @@protoc_insertion_point(field_add:Indriya.Core.Msgs.Link.projector)
  return projector_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Projector >&
Link::projector() const {
  // @@protoc_insertion_point(field_list:Indriya.Core.Msgs.Link.projector)
  return projector_;
}
inline ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Projector >*
Link::mutable_projector() {
  // @@protoc_insertion_point(field_mutable_list:Indriya.Core.Msgs.Link.projector)
  return &projector_;
}

// optional bool canonical = 13;
inline bool Link::has_canonical() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void Link::set_has_canonical() {
  _has_bits_[0] |= 0x00001000u;
}
inline void Link::clear_has_canonical() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void Link::clear_canonical() {
  canonical_ = false;
  clear_has_canonical();
}
inline bool Link::canonical() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Link.canonical)
  return canonical_;
}
inline void Link::set_canonical(bool value) {
  set_has_canonical();
  canonical_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Link.canonical)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

typedef boost::shared_ptr<Indriya::Core::Msgs::Link> LinkPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace Msgs
}  // namespace Core
}  // namespace Indriya

typedef const boost::shared_ptr<Indriya::Core::Msgs::Link const> ConstLinkPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_link_2eproto__INCLUDED
