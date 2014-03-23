// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rtapi_message.proto

#ifndef PROTOBUF_rtapi_5fmessage_2eproto__INCLUDED
#define PROTOBUF_rtapi_5fmessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "nanopb.pb.h"
#include "types.pb.h"
#include "value.pb.h"
// @@protoc_insertion_point(includes)

namespace pb {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_rtapi_5fmessage_2eproto();
void protobuf_AssignDesc_rtapi_5fmessage_2eproto();
void protobuf_ShutdownFile_rtapi_5fmessage_2eproto();

class RTAPI_Message;

// ===================================================================

class RTAPI_Message : public ::google::protobuf::Message {
 public:
  RTAPI_Message();
  virtual ~RTAPI_Message();

  RTAPI_Message(const RTAPI_Message& from);

  inline RTAPI_Message& operator=(const RTAPI_Message& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const RTAPI_Message& default_instance();

  void Swap(RTAPI_Message* other);

  // implements Message ----------------------------------------------

  RTAPI_Message* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RTAPI_Message& from);
  void MergeFrom(const RTAPI_Message& from);
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
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 msglevel = 10;
  inline bool has_msglevel() const;
  inline void clear_msglevel();
  static const int kMsglevelFieldNumber = 10;
  inline ::google::protobuf::int32 msglevel() const;
  inline void set_msglevel(::google::protobuf::int32 value);

  // required string format = 20 [default = "*** uninitialized ***"];
  inline bool has_format() const;
  inline void clear_format();
  static const int kFormatFieldNumber = 20;
  inline const ::std::string& format() const;
  inline void set_format(const ::std::string& value);
  inline void set_format(const char* value);
  inline void set_format(const char* value, size_t size);
  inline ::std::string* mutable_format();
  inline ::std::string* release_format();
  inline void set_allocated_format(::std::string* format);

  // repeated .pb.Value arg = 30;
  inline int arg_size() const;
  inline void clear_arg();
  static const int kArgFieldNumber = 30;
  inline const ::pb::Value& arg(int index) const;
  inline ::pb::Value* mutable_arg(int index);
  inline ::pb::Value* add_arg();
  inline const ::google::protobuf::RepeatedPtrField< ::pb::Value >&
      arg() const;
  inline ::google::protobuf::RepeatedPtrField< ::pb::Value >*
      mutable_arg();

  // @@protoc_insertion_point(class_scope:pb.RTAPI_Message)
 private:
  inline void set_has_msglevel();
  inline void clear_has_msglevel();
  inline void set_has_format();
  inline void clear_has_format();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* format_;
  static ::std::string* _default_format_;
  ::google::protobuf::RepeatedPtrField< ::pb::Value > arg_;
  ::google::protobuf::int32 msglevel_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_rtapi_5fmessage_2eproto();
  friend void protobuf_AssignDesc_rtapi_5fmessage_2eproto();
  friend void protobuf_ShutdownFile_rtapi_5fmessage_2eproto();

  void InitAsDefaultInstance();
  static RTAPI_Message* default_instance_;
};
// ===================================================================


// ===================================================================

// RTAPI_Message

// required int32 msglevel = 10;
inline bool RTAPI_Message::has_msglevel() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RTAPI_Message::set_has_msglevel() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RTAPI_Message::clear_has_msglevel() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RTAPI_Message::clear_msglevel() {
  msglevel_ = 0;
  clear_has_msglevel();
}
inline ::google::protobuf::int32 RTAPI_Message::msglevel() const {
  return msglevel_;
}
inline void RTAPI_Message::set_msglevel(::google::protobuf::int32 value) {
  set_has_msglevel();
  msglevel_ = value;
}

// required string format = 20 [default = "*** uninitialized ***"];
inline bool RTAPI_Message::has_format() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RTAPI_Message::set_has_format() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RTAPI_Message::clear_has_format() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RTAPI_Message::clear_format() {
  if (format_ != _default_format_) {
    format_->assign(*_default_format_);
  }
  clear_has_format();
}
inline const ::std::string& RTAPI_Message::format() const {
  return *format_;
}
inline void RTAPI_Message::set_format(const ::std::string& value) {
  set_has_format();
  if (format_ == _default_format_) {
    format_ = new ::std::string;
  }
  format_->assign(value);
}
inline void RTAPI_Message::set_format(const char* value) {
  set_has_format();
  if (format_ == _default_format_) {
    format_ = new ::std::string;
  }
  format_->assign(value);
}
inline void RTAPI_Message::set_format(const char* value, size_t size) {
  set_has_format();
  if (format_ == _default_format_) {
    format_ = new ::std::string;
  }
  format_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* RTAPI_Message::mutable_format() {
  set_has_format();
  if (format_ == _default_format_) {
    format_ = new ::std::string(*_default_format_);
  }
  return format_;
}
inline ::std::string* RTAPI_Message::release_format() {
  clear_has_format();
  if (format_ == _default_format_) {
    return NULL;
  } else {
    ::std::string* temp = format_;
    format_ = const_cast< ::std::string*>(_default_format_);
    return temp;
  }
}
inline void RTAPI_Message::set_allocated_format(::std::string* format) {
  if (format_ != _default_format_) {
    delete format_;
  }
  if (format) {
    set_has_format();
    format_ = format;
  } else {
    clear_has_format();
    format_ = const_cast< ::std::string*>(_default_format_);
  }
}

// repeated .pb.Value arg = 30;
inline int RTAPI_Message::arg_size() const {
  return arg_.size();
}
inline void RTAPI_Message::clear_arg() {
  arg_.Clear();
}
inline const ::pb::Value& RTAPI_Message::arg(int index) const {
  return arg_.Get(index);
}
inline ::pb::Value* RTAPI_Message::mutable_arg(int index) {
  return arg_.Mutable(index);
}
inline ::pb::Value* RTAPI_Message::add_arg() {
  return arg_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::pb::Value >&
RTAPI_Message::arg() const {
  return arg_;
}
inline ::google::protobuf::RepeatedPtrField< ::pb::Value >*
RTAPI_Message::mutable_arg() {
  return &arg_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace pb

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_rtapi_5fmessage_2eproto__INCLUDED
