// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: wireless_node.proto

#ifndef PROTOBUF_wireless_5fnode_2eproto__INCLUDED
#define PROTOBUF_wireless_5fnode_2eproto__INCLUDED

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
void protobuf_AddDesc_wireless_5fnode_2eproto();
void protobuf_AssignDesc_wireless_5fnode_2eproto();
void protobuf_ShutdownFile_wireless_5fnode_2eproto();

class WirelessNode;

// ===================================================================

class WirelessNode : public ::google::protobuf::Message {
 public:
  WirelessNode();
  virtual ~WirelessNode();

  WirelessNode(const WirelessNode& from);

  inline WirelessNode& operator=(const WirelessNode& from) {
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
  static const WirelessNode& default_instance();

  void Swap(WirelessNode* other);

  // implements Message ----------------------------------------------

  inline WirelessNode* New() const { return New(NULL); }

  WirelessNode* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const WirelessNode& from);
  void MergeFrom(const WirelessNode& from);
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
  void InternalSwap(WirelessNode* other);
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

  // required string essid = 1;
  bool has_essid() const;
  void clear_essid();
  static const int kEssidFieldNumber = 1;
  const ::std::string& essid() const;
  void set_essid(const ::std::string& value);
  void set_essid(const char* value);
  void set_essid(const char* value, size_t size);
  ::std::string* mutable_essid();
  ::std::string* release_essid();
  void set_allocated_essid(::std::string* essid);

  // required double frequency = 2;
  bool has_frequency() const;
  void clear_frequency();
  static const int kFrequencyFieldNumber = 2;
  double frequency() const;
  void set_frequency(double value);

  // required double signal_level = 3;
  bool has_signal_level() const;
  void clear_signal_level();
  static const int kSignalLevelFieldNumber = 3;
  double signal_level() const;
  void set_signal_level(double value);

  // @@protoc_insertion_point(class_scope:Indriya.Core.Msgs.WirelessNode)
 private:
  inline void set_has_essid();
  inline void clear_has_essid();
  inline void set_has_frequency();
  inline void clear_has_frequency();
  inline void set_has_signal_level();
  inline void clear_has_signal_level();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr essid_;
  double frequency_;
  double signal_level_;
  friend void  protobuf_AddDesc_wireless_5fnode_2eproto();
  friend void protobuf_AssignDesc_wireless_5fnode_2eproto();
  friend void protobuf_ShutdownFile_wireless_5fnode_2eproto();

  void InitAsDefaultInstance();
  static WirelessNode* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// WirelessNode

// required string essid = 1;
inline bool WirelessNode::has_essid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void WirelessNode::set_has_essid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void WirelessNode::clear_has_essid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void WirelessNode::clear_essid() {
  essid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_essid();
}
inline const ::std::string& WirelessNode::essid() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.WirelessNode.essid)
  return essid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void WirelessNode::set_essid(const ::std::string& value) {
  set_has_essid();
  essid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.WirelessNode.essid)
}
inline void WirelessNode::set_essid(const char* value) {
  set_has_essid();
  essid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Indriya.Core.Msgs.WirelessNode.essid)
}
inline void WirelessNode::set_essid(const char* value, size_t size) {
  set_has_essid();
  essid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Indriya.Core.Msgs.WirelessNode.essid)
}
inline ::std::string* WirelessNode::mutable_essid() {
  set_has_essid();
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.WirelessNode.essid)
  return essid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* WirelessNode::release_essid() {
  clear_has_essid();
  return essid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void WirelessNode::set_allocated_essid(::std::string* essid) {
  if (essid != NULL) {
    set_has_essid();
  } else {
    clear_has_essid();
  }
  essid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), essid);
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.WirelessNode.essid)
}

// required double frequency = 2;
inline bool WirelessNode::has_frequency() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void WirelessNode::set_has_frequency() {
  _has_bits_[0] |= 0x00000002u;
}
inline void WirelessNode::clear_has_frequency() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void WirelessNode::clear_frequency() {
  frequency_ = 0;
  clear_has_frequency();
}
inline double WirelessNode::frequency() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.WirelessNode.frequency)
  return frequency_;
}
inline void WirelessNode::set_frequency(double value) {
  set_has_frequency();
  frequency_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.WirelessNode.frequency)
}

// required double signal_level = 3;
inline bool WirelessNode::has_signal_level() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void WirelessNode::set_has_signal_level() {
  _has_bits_[0] |= 0x00000004u;
}
inline void WirelessNode::clear_has_signal_level() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void WirelessNode::clear_signal_level() {
  signal_level_ = 0;
  clear_has_signal_level();
}
inline double WirelessNode::signal_level() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.WirelessNode.signal_level)
  return signal_level_;
}
inline void WirelessNode::set_signal_level(double value) {
  set_has_signal_level();
  signal_level_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.WirelessNode.signal_level)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

typedef boost::shared_ptr<Indriya::Core::Msgs::WirelessNode> WirelessNodePtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace Msgs
}  // namespace Core
}  // namespace Indriya

typedef const boost::shared_ptr<Indriya::Core::Msgs::WirelessNode const> ConstWirelessNodePtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_wireless_5fnode_2eproto__INCLUDED
