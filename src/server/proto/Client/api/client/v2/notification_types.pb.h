// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: api/client/v2/notification_types.proto

#ifndef PROTOBUF_api_2fclient_2fv2_2fnotification_5ftypes_2eproto__INCLUDED
#define PROTOBUF_api_2fclient_2fv2_2fnotification_5ftypes_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "account_types.pb.h"
#include "rpc_types.pb.h"
#include "api/common/v2/attribute_types.pb.h"
#include "api/common/v2/game_account_handle.pb.h"
#include "Define.h" // for TC_PROTO_API
// @@protoc_insertion_point(includes)

namespace bgs {
namespace protocol {
namespace notification {
namespace v2 {
namespace client {

// Internal implementation detail -- do not call these.
void TC_PROTO_API protobuf_AddDesc_api_2fclient_2fv2_2fnotification_5ftypes_2eproto();
void protobuf_AssignDesc_api_2fclient_2fv2_2fnotification_5ftypes_2eproto();
void protobuf_ShutdownFile_api_2fclient_2fv2_2fnotification_5ftypes_2eproto();

class UserDescription;
class Filter;
class SendNotificationOptions;
class Notification;

// ===================================================================

class TC_PROTO_API UserDescription : public ::google::protobuf::Message {
 public:
  UserDescription();
  virtual ~UserDescription();

  UserDescription(const UserDescription& from);

  inline UserDescription& operator=(const UserDescription& from) {
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
  static const UserDescription& default_instance();

  void Swap(UserDescription* other);

  // implements Message ----------------------------------------------

  UserDescription* New() const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint64 account_id = 1;
  inline bool has_account_id() const;
  inline void clear_account_id();
  static const int kAccountIdFieldNumber = 1;
  inline ::google::protobuf::uint64 account_id() const;
  inline void set_account_id(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:bgs.protocol.notification.v2.client.UserDescription)
 private:
  inline void set_has_account_id();
  inline void clear_has_account_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint64 account_id_;
  friend void TC_PROTO_API protobuf_AddDesc_api_2fclient_2fv2_2fnotification_5ftypes_2eproto();
  friend void protobuf_AssignDesc_api_2fclient_2fv2_2fnotification_5ftypes_2eproto();
  friend void protobuf_ShutdownFile_api_2fclient_2fv2_2fnotification_5ftypes_2eproto();

  void InitAsDefaultInstance();
  static UserDescription* default_instance_;
};
// -------------------------------------------------------------------

class TC_PROTO_API Filter : public ::google::protobuf::Message {
 public:
  Filter();
  virtual ~Filter();

  Filter(const Filter& from);

  inline Filter& operator=(const Filter& from) {
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
  static const Filter& default_instance();

  enum TypeCase {
    kTitleId = 1,
    kDeprecatedHandle = 2,
    kGameAccount = 3,
    TYPE_NOT_SET = 0,
  };

  void Swap(Filter* other);

  // implements Message ----------------------------------------------

  Filter* New() const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 title_id = 1;
  inline bool has_title_id() const;
  inline void clear_title_id();
  static const int kTitleIdFieldNumber = 1;
  inline ::google::protobuf::uint32 title_id() const;
  inline void set_title_id(::google::protobuf::uint32 value);

  // optional .bgs.protocol.account.v1.GameAccountHandle deprecated_handle = 2 [deprecated = true];
  inline bool has_deprecated_handle() const PROTOBUF_DEPRECATED;
  inline void clear_deprecated_handle() PROTOBUF_DEPRECATED;
  static const int kDeprecatedHandleFieldNumber = 2;
  inline const ::bgs::protocol::account::v1::GameAccountHandle& deprecated_handle() const PROTOBUF_DEPRECATED;
  inline ::bgs::protocol::account::v1::GameAccountHandle* mutable_deprecated_handle() PROTOBUF_DEPRECATED;
  inline ::bgs::protocol::account::v1::GameAccountHandle* release_deprecated_handle() PROTOBUF_DEPRECATED;
  inline void set_allocated_deprecated_handle(::bgs::protocol::account::v1::GameAccountHandle* deprecated_handle) PROTOBUF_DEPRECATED;

  // optional .bgs.protocol.account.v2.GameAccountHandle game_account = 3;
  inline bool has_game_account() const;
  inline void clear_game_account();
  static const int kGameAccountFieldNumber = 3;
  inline const ::bgs::protocol::account::v2::GameAccountHandle& game_account() const;
  inline ::bgs::protocol::account::v2::GameAccountHandle* mutable_game_account();
  inline ::bgs::protocol::account::v2::GameAccountHandle* release_game_account();
  inline void set_allocated_game_account(::bgs::protocol::account::v2::GameAccountHandle* game_account);

  inline TypeCase type_case() const;
  // @@protoc_insertion_point(class_scope:bgs.protocol.notification.v2.client.Filter)
 private:
  inline void set_has_title_id();
  inline void set_has_deprecated_handle();
  inline void set_has_game_account();

  inline bool has_type();
  void clear_type();
  inline void clear_has_type();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  union TypeUnion {
    ::google::protobuf::uint32 title_id_;
    ::bgs::protocol::account::v1::GameAccountHandle* deprecated_handle_;
    ::bgs::protocol::account::v2::GameAccountHandle* game_account_;
  } type_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend void TC_PROTO_API protobuf_AddDesc_api_2fclient_2fv2_2fnotification_5ftypes_2eproto();
  friend void protobuf_AssignDesc_api_2fclient_2fv2_2fnotification_5ftypes_2eproto();
  friend void protobuf_ShutdownFile_api_2fclient_2fv2_2fnotification_5ftypes_2eproto();

  void InitAsDefaultInstance();
  static Filter* default_instance_;
};
// -------------------------------------------------------------------

class TC_PROTO_API SendNotificationOptions : public ::google::protobuf::Message {
 public:
  SendNotificationOptions();
  virtual ~SendNotificationOptions();

  SendNotificationOptions(const SendNotificationOptions& from);

  inline SendNotificationOptions& operator=(const SendNotificationOptions& from) {
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
  static const SendNotificationOptions& default_instance();

  void Swap(SendNotificationOptions* other);

  // implements Message ----------------------------------------------

  SendNotificationOptions* New() const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline const ::std::string& type() const;
  inline void set_type(const ::std::string& value);
  inline void set_type(const char* value);
  inline void set_type(const char* value, size_t size);
  inline ::std::string* mutable_type();
  inline ::std::string* release_type();
  inline void set_allocated_type(::std::string* type);

  // optional uint64 target_account_id = 2;
  inline bool has_target_account_id() const;
  inline void clear_target_account_id();
  static const int kTargetAccountIdFieldNumber = 2;
  inline ::google::protobuf::uint64 target_account_id() const;
  inline void set_target_account_id(::google::protobuf::uint64 value);

  // optional .bgs.protocol.notification.v2.client.Filter filter = 3;
  inline bool has_filter() const;
  inline void clear_filter();
  static const int kFilterFieldNumber = 3;
  inline const ::bgs::protocol::notification::v2::client::Filter& filter() const;
  inline ::bgs::protocol::notification::v2::client::Filter* mutable_filter();
  inline ::bgs::protocol::notification::v2::client::Filter* release_filter();
  inline void set_allocated_filter(::bgs::protocol::notification::v2::client::Filter* filter);

  // repeated .bgs.protocol.v2.Attribute attribute = 4;
  inline int attribute_size() const;
  inline void clear_attribute();
  static const int kAttributeFieldNumber = 4;
  inline const ::bgs::protocol::v2::Attribute& attribute(int index) const;
  inline ::bgs::protocol::v2::Attribute* mutable_attribute(int index);
  inline ::bgs::protocol::v2::Attribute* add_attribute();
  inline const ::google::protobuf::RepeatedPtrField< ::bgs::protocol::v2::Attribute >&
      attribute() const;
  inline ::google::protobuf::RepeatedPtrField< ::bgs::protocol::v2::Attribute >*
      mutable_attribute();

  // @@protoc_insertion_point(class_scope:bgs.protocol.notification.v2.client.SendNotificationOptions)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_target_account_id();
  inline void clear_has_target_account_id();
  inline void set_has_filter();
  inline void clear_has_filter();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* type_;
  ::google::protobuf::uint64 target_account_id_;
  ::bgs::protocol::notification::v2::client::Filter* filter_;
  ::google::protobuf::RepeatedPtrField< ::bgs::protocol::v2::Attribute > attribute_;
  friend void TC_PROTO_API protobuf_AddDesc_api_2fclient_2fv2_2fnotification_5ftypes_2eproto();
  friend void protobuf_AssignDesc_api_2fclient_2fv2_2fnotification_5ftypes_2eproto();
  friend void protobuf_ShutdownFile_api_2fclient_2fv2_2fnotification_5ftypes_2eproto();

  void InitAsDefaultInstance();
  static SendNotificationOptions* default_instance_;
};
// -------------------------------------------------------------------

class TC_PROTO_API Notification : public ::google::protobuf::Message {
 public:
  Notification();
  virtual ~Notification();

  Notification(const Notification& from);

  inline Notification& operator=(const Notification& from) {
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
  static const Notification& default_instance();

  void Swap(Notification* other);

  // implements Message ----------------------------------------------

  Notification* New() const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline const ::std::string& type() const;
  inline void set_type(const ::std::string& value);
  inline void set_type(const char* value);
  inline void set_type(const char* value, size_t size);
  inline ::std::string* mutable_type();
  inline ::std::string* release_type();
  inline void set_allocated_type(::std::string* type);

  // optional .bgs.protocol.notification.v2.client.UserDescription sender = 2;
  inline bool has_sender() const;
  inline void clear_sender();
  static const int kSenderFieldNumber = 2;
  inline const ::bgs::protocol::notification::v2::client::UserDescription& sender() const;
  inline ::bgs::protocol::notification::v2::client::UserDescription* mutable_sender();
  inline ::bgs::protocol::notification::v2::client::UserDescription* release_sender();
  inline void set_allocated_sender(::bgs::protocol::notification::v2::client::UserDescription* sender);

  // optional .bgs.protocol.notification.v2.client.UserDescription target = 3;
  inline bool has_target() const;
  inline void clear_target();
  static const int kTargetFieldNumber = 3;
  inline const ::bgs::protocol::notification::v2::client::UserDescription& target() const;
  inline ::bgs::protocol::notification::v2::client::UserDescription* mutable_target();
  inline ::bgs::protocol::notification::v2::client::UserDescription* release_target();
  inline void set_allocated_target(::bgs::protocol::notification::v2::client::UserDescription* target);

  // repeated .bgs.protocol.v2.Attribute attribute = 4;
  inline int attribute_size() const;
  inline void clear_attribute();
  static const int kAttributeFieldNumber = 4;
  inline const ::bgs::protocol::v2::Attribute& attribute(int index) const;
  inline ::bgs::protocol::v2::Attribute* mutable_attribute(int index);
  inline ::bgs::protocol::v2::Attribute* add_attribute();
  inline const ::google::protobuf::RepeatedPtrField< ::bgs::protocol::v2::Attribute >&
      attribute() const;
  inline ::google::protobuf::RepeatedPtrField< ::bgs::protocol::v2::Attribute >*
      mutable_attribute();

  // optional uint64 creation_time_ms = 5;
  inline bool has_creation_time_ms() const;
  inline void clear_creation_time_ms();
  static const int kCreationTimeMsFieldNumber = 5;
  inline ::google::protobuf::uint64 creation_time_ms() const;
  inline void set_creation_time_ms(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:bgs.protocol.notification.v2.client.Notification)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_sender();
  inline void clear_has_sender();
  inline void set_has_target();
  inline void clear_has_target();
  inline void set_has_creation_time_ms();
  inline void clear_has_creation_time_ms();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* type_;
  ::bgs::protocol::notification::v2::client::UserDescription* sender_;
  ::bgs::protocol::notification::v2::client::UserDescription* target_;
  ::google::protobuf::RepeatedPtrField< ::bgs::protocol::v2::Attribute > attribute_;
  ::google::protobuf::uint64 creation_time_ms_;
  friend void TC_PROTO_API protobuf_AddDesc_api_2fclient_2fv2_2fnotification_5ftypes_2eproto();
  friend void protobuf_AssignDesc_api_2fclient_2fv2_2fnotification_5ftypes_2eproto();
  friend void protobuf_ShutdownFile_api_2fclient_2fv2_2fnotification_5ftypes_2eproto();

  void InitAsDefaultInstance();
  static Notification* default_instance_;
};
// ===================================================================

// ===================================================================

// ===================================================================

// UserDescription

// optional uint64 account_id = 1;
inline bool UserDescription::has_account_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UserDescription::set_has_account_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UserDescription::clear_has_account_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UserDescription::clear_account_id() {
  account_id_ = GOOGLE_ULONGLONG(0);
  clear_has_account_id();
}
inline ::google::protobuf::uint64 UserDescription::account_id() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.notification.v2.client.UserDescription.account_id)
  return account_id_;
}
inline void UserDescription::set_account_id(::google::protobuf::uint64 value) {
  set_has_account_id();
  account_id_ = value;
  // @@protoc_insertion_point(field_set:bgs.protocol.notification.v2.client.UserDescription.account_id)
}

// -------------------------------------------------------------------

// Filter

// optional uint32 title_id = 1;
inline bool Filter::has_title_id() const {
  return type_case() == kTitleId;
}
inline void Filter::set_has_title_id() {
  _oneof_case_[0] = kTitleId;
}
inline void Filter::clear_title_id() {
  if (has_title_id()) {
    type_.title_id_ = 0u;
    clear_has_type();
  }
}
inline ::google::protobuf::uint32 Filter::title_id() const {
  if (has_title_id()) {
    return type_.title_id_;
  }
  return 0u;
}
inline void Filter::set_title_id(::google::protobuf::uint32 value) {
  if (!has_title_id()) {
    clear_type();
    set_has_title_id();
  }
  type_.title_id_ = value;
}

// optional .bgs.protocol.account.v1.GameAccountHandle deprecated_handle = 2 [deprecated = true];
inline bool Filter::has_deprecated_handle() const {
  return type_case() == kDeprecatedHandle;
}
inline void Filter::set_has_deprecated_handle() {
  _oneof_case_[0] = kDeprecatedHandle;
}
inline void Filter::clear_deprecated_handle() {
  if (has_deprecated_handle()) {
    delete type_.deprecated_handle_;
    clear_has_type();
  }
}
inline const ::bgs::protocol::account::v1::GameAccountHandle& Filter::deprecated_handle() const {
  return has_deprecated_handle() ? *type_.deprecated_handle_
                      : ::bgs::protocol::account::v1::GameAccountHandle::default_instance();
}
inline ::bgs::protocol::account::v1::GameAccountHandle* Filter::mutable_deprecated_handle() {
  if (!has_deprecated_handle()) {
    clear_type();
    set_has_deprecated_handle();
    type_.deprecated_handle_ = new ::bgs::protocol::account::v1::GameAccountHandle;
  }
  return type_.deprecated_handle_;
}
inline ::bgs::protocol::account::v1::GameAccountHandle* Filter::release_deprecated_handle() {
  if (has_deprecated_handle()) {
    clear_has_type();
    ::bgs::protocol::account::v1::GameAccountHandle* temp = type_.deprecated_handle_;
    type_.deprecated_handle_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void Filter::set_allocated_deprecated_handle(::bgs::protocol::account::v1::GameAccountHandle* deprecated_handle) {
  clear_type();
  if (deprecated_handle) {
    set_has_deprecated_handle();
    type_.deprecated_handle_ = deprecated_handle;
  }
}

// optional .bgs.protocol.account.v2.GameAccountHandle game_account = 3;
inline bool Filter::has_game_account() const {
  return type_case() == kGameAccount;
}
inline void Filter::set_has_game_account() {
  _oneof_case_[0] = kGameAccount;
}
inline void Filter::clear_game_account() {
  if (has_game_account()) {
    delete type_.game_account_;
    clear_has_type();
  }
}
inline const ::bgs::protocol::account::v2::GameAccountHandle& Filter::game_account() const {
  return has_game_account() ? *type_.game_account_
                      : ::bgs::protocol::account::v2::GameAccountHandle::default_instance();
}
inline ::bgs::protocol::account::v2::GameAccountHandle* Filter::mutable_game_account() {
  if (!has_game_account()) {
    clear_type();
    set_has_game_account();
    type_.game_account_ = new ::bgs::protocol::account::v2::GameAccountHandle;
  }
  return type_.game_account_;
}
inline ::bgs::protocol::account::v2::GameAccountHandle* Filter::release_game_account() {
  if (has_game_account()) {
    clear_has_type();
    ::bgs::protocol::account::v2::GameAccountHandle* temp = type_.game_account_;
    type_.game_account_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void Filter::set_allocated_game_account(::bgs::protocol::account::v2::GameAccountHandle* game_account) {
  clear_type();
  if (game_account) {
    set_has_game_account();
    type_.game_account_ = game_account;
  }
}

inline bool Filter::has_type() {
  return type_case() != TYPE_NOT_SET;
}
inline void Filter::clear_has_type() {
  _oneof_case_[0] = TYPE_NOT_SET;
}
inline Filter::TypeCase Filter::type_case() const {
  return Filter::TypeCase(_oneof_case_[0]);
}
// -------------------------------------------------------------------

// SendNotificationOptions

// optional string type = 1;
inline bool SendNotificationOptions::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SendNotificationOptions::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SendNotificationOptions::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SendNotificationOptions::clear_type() {
  if (type_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    type_->clear();
  }
  clear_has_type();
}
inline const ::std::string& SendNotificationOptions::type() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.notification.v2.client.SendNotificationOptions.type)
  return *type_;
}
inline void SendNotificationOptions::set_type(const ::std::string& value) {
  set_has_type();
  if (type_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    type_ = new ::std::string;
  }
  type_->assign(value);
  // @@protoc_insertion_point(field_set:bgs.protocol.notification.v2.client.SendNotificationOptions.type)
}
inline void SendNotificationOptions::set_type(const char* value) {
  set_has_type();
  if (type_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    type_ = new ::std::string;
  }
  type_->assign(value);
  // @@protoc_insertion_point(field_set_char:bgs.protocol.notification.v2.client.SendNotificationOptions.type)
}
inline void SendNotificationOptions::set_type(const char* value, size_t size) {
  set_has_type();
  if (type_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    type_ = new ::std::string;
  }
  type_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:bgs.protocol.notification.v2.client.SendNotificationOptions.type)
}
inline ::std::string* SendNotificationOptions::mutable_type() {
  set_has_type();
  if (type_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    type_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:bgs.protocol.notification.v2.client.SendNotificationOptions.type)
  return type_;
}
inline ::std::string* SendNotificationOptions::release_type() {
  clear_has_type();
  if (type_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = type_;
    type_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void SendNotificationOptions::set_allocated_type(::std::string* type) {
  if (type_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete type_;
  }
  if (type) {
    set_has_type();
    type_ = type;
  } else {
    clear_has_type();
    type_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:bgs.protocol.notification.v2.client.SendNotificationOptions.type)
}

// optional uint64 target_account_id = 2;
inline bool SendNotificationOptions::has_target_account_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SendNotificationOptions::set_has_target_account_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SendNotificationOptions::clear_has_target_account_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SendNotificationOptions::clear_target_account_id() {
  target_account_id_ = GOOGLE_ULONGLONG(0);
  clear_has_target_account_id();
}
inline ::google::protobuf::uint64 SendNotificationOptions::target_account_id() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.notification.v2.client.SendNotificationOptions.target_account_id)
  return target_account_id_;
}
inline void SendNotificationOptions::set_target_account_id(::google::protobuf::uint64 value) {
  set_has_target_account_id();
  target_account_id_ = value;
  // @@protoc_insertion_point(field_set:bgs.protocol.notification.v2.client.SendNotificationOptions.target_account_id)
}

// optional .bgs.protocol.notification.v2.client.Filter filter = 3;
inline bool SendNotificationOptions::has_filter() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SendNotificationOptions::set_has_filter() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SendNotificationOptions::clear_has_filter() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SendNotificationOptions::clear_filter() {
  if (filter_ != NULL) filter_->::bgs::protocol::notification::v2::client::Filter::Clear();
  clear_has_filter();
}
inline const ::bgs::protocol::notification::v2::client::Filter& SendNotificationOptions::filter() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.notification.v2.client.SendNotificationOptions.filter)
  return filter_ != NULL ? *filter_ : *default_instance_->filter_;
}
inline ::bgs::protocol::notification::v2::client::Filter* SendNotificationOptions::mutable_filter() {
  set_has_filter();
  if (filter_ == NULL) filter_ = new ::bgs::protocol::notification::v2::client::Filter;
  // @@protoc_insertion_point(field_mutable:bgs.protocol.notification.v2.client.SendNotificationOptions.filter)
  return filter_;
}
inline ::bgs::protocol::notification::v2::client::Filter* SendNotificationOptions::release_filter() {
  clear_has_filter();
  ::bgs::protocol::notification::v2::client::Filter* temp = filter_;
  filter_ = NULL;
  return temp;
}
inline void SendNotificationOptions::set_allocated_filter(::bgs::protocol::notification::v2::client::Filter* filter) {
  delete filter_;
  filter_ = filter;
  if (filter) {
    set_has_filter();
  } else {
    clear_has_filter();
  }
  // @@protoc_insertion_point(field_set_allocated:bgs.protocol.notification.v2.client.SendNotificationOptions.filter)
}

// repeated .bgs.protocol.v2.Attribute attribute = 4;
inline int SendNotificationOptions::attribute_size() const {
  return attribute_.size();
}
inline void SendNotificationOptions::clear_attribute() {
  attribute_.Clear();
}
inline const ::bgs::protocol::v2::Attribute& SendNotificationOptions::attribute(int index) const {
  // @@protoc_insertion_point(field_get:bgs.protocol.notification.v2.client.SendNotificationOptions.attribute)
  return attribute_.Get(index);
}
inline ::bgs::protocol::v2::Attribute* SendNotificationOptions::mutable_attribute(int index) {
  // @@protoc_insertion_point(field_mutable:bgs.protocol.notification.v2.client.SendNotificationOptions.attribute)
  return attribute_.Mutable(index);
}
inline ::bgs::protocol::v2::Attribute* SendNotificationOptions::add_attribute() {
  // @@protoc_insertion_point(field_add:bgs.protocol.notification.v2.client.SendNotificationOptions.attribute)
  return attribute_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::bgs::protocol::v2::Attribute >&
SendNotificationOptions::attribute() const {
  // @@protoc_insertion_point(field_list:bgs.protocol.notification.v2.client.SendNotificationOptions.attribute)
  return attribute_;
}
inline ::google::protobuf::RepeatedPtrField< ::bgs::protocol::v2::Attribute >*
SendNotificationOptions::mutable_attribute() {
  // @@protoc_insertion_point(field_mutable_list:bgs.protocol.notification.v2.client.SendNotificationOptions.attribute)
  return &attribute_;
}

// -------------------------------------------------------------------

// Notification

// optional string type = 1;
inline bool Notification::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Notification::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Notification::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Notification::clear_type() {
  if (type_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    type_->clear();
  }
  clear_has_type();
}
inline const ::std::string& Notification::type() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.notification.v2.client.Notification.type)
  return *type_;
}
inline void Notification::set_type(const ::std::string& value) {
  set_has_type();
  if (type_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    type_ = new ::std::string;
  }
  type_->assign(value);
  // @@protoc_insertion_point(field_set:bgs.protocol.notification.v2.client.Notification.type)
}
inline void Notification::set_type(const char* value) {
  set_has_type();
  if (type_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    type_ = new ::std::string;
  }
  type_->assign(value);
  // @@protoc_insertion_point(field_set_char:bgs.protocol.notification.v2.client.Notification.type)
}
inline void Notification::set_type(const char* value, size_t size) {
  set_has_type();
  if (type_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    type_ = new ::std::string;
  }
  type_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:bgs.protocol.notification.v2.client.Notification.type)
}
inline ::std::string* Notification::mutable_type() {
  set_has_type();
  if (type_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    type_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:bgs.protocol.notification.v2.client.Notification.type)
  return type_;
}
inline ::std::string* Notification::release_type() {
  clear_has_type();
  if (type_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = type_;
    type_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Notification::set_allocated_type(::std::string* type) {
  if (type_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete type_;
  }
  if (type) {
    set_has_type();
    type_ = type;
  } else {
    clear_has_type();
    type_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:bgs.protocol.notification.v2.client.Notification.type)
}

// optional .bgs.protocol.notification.v2.client.UserDescription sender = 2;
inline bool Notification::has_sender() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Notification::set_has_sender() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Notification::clear_has_sender() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Notification::clear_sender() {
  if (sender_ != NULL) sender_->::bgs::protocol::notification::v2::client::UserDescription::Clear();
  clear_has_sender();
}
inline const ::bgs::protocol::notification::v2::client::UserDescription& Notification::sender() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.notification.v2.client.Notification.sender)
  return sender_ != NULL ? *sender_ : *default_instance_->sender_;
}
inline ::bgs::protocol::notification::v2::client::UserDescription* Notification::mutable_sender() {
  set_has_sender();
  if (sender_ == NULL) sender_ = new ::bgs::protocol::notification::v2::client::UserDescription;
  // @@protoc_insertion_point(field_mutable:bgs.protocol.notification.v2.client.Notification.sender)
  return sender_;
}
inline ::bgs::protocol::notification::v2::client::UserDescription* Notification::release_sender() {
  clear_has_sender();
  ::bgs::protocol::notification::v2::client::UserDescription* temp = sender_;
  sender_ = NULL;
  return temp;
}
inline void Notification::set_allocated_sender(::bgs::protocol::notification::v2::client::UserDescription* sender) {
  delete sender_;
  sender_ = sender;
  if (sender) {
    set_has_sender();
  } else {
    clear_has_sender();
  }
  // @@protoc_insertion_point(field_set_allocated:bgs.protocol.notification.v2.client.Notification.sender)
}

// optional .bgs.protocol.notification.v2.client.UserDescription target = 3;
inline bool Notification::has_target() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Notification::set_has_target() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Notification::clear_has_target() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Notification::clear_target() {
  if (target_ != NULL) target_->::bgs::protocol::notification::v2::client::UserDescription::Clear();
  clear_has_target();
}
inline const ::bgs::protocol::notification::v2::client::UserDescription& Notification::target() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.notification.v2.client.Notification.target)
  return target_ != NULL ? *target_ : *default_instance_->target_;
}
inline ::bgs::protocol::notification::v2::client::UserDescription* Notification::mutable_target() {
  set_has_target();
  if (target_ == NULL) target_ = new ::bgs::protocol::notification::v2::client::UserDescription;
  // @@protoc_insertion_point(field_mutable:bgs.protocol.notification.v2.client.Notification.target)
  return target_;
}
inline ::bgs::protocol::notification::v2::client::UserDescription* Notification::release_target() {
  clear_has_target();
  ::bgs::protocol::notification::v2::client::UserDescription* temp = target_;
  target_ = NULL;
  return temp;
}
inline void Notification::set_allocated_target(::bgs::protocol::notification::v2::client::UserDescription* target) {
  delete target_;
  target_ = target;
  if (target) {
    set_has_target();
  } else {
    clear_has_target();
  }
  // @@protoc_insertion_point(field_set_allocated:bgs.protocol.notification.v2.client.Notification.target)
}

// repeated .bgs.protocol.v2.Attribute attribute = 4;
inline int Notification::attribute_size() const {
  return attribute_.size();
}
inline void Notification::clear_attribute() {
  attribute_.Clear();
}
inline const ::bgs::protocol::v2::Attribute& Notification::attribute(int index) const {
  // @@protoc_insertion_point(field_get:bgs.protocol.notification.v2.client.Notification.attribute)
  return attribute_.Get(index);
}
inline ::bgs::protocol::v2::Attribute* Notification::mutable_attribute(int index) {
  // @@protoc_insertion_point(field_mutable:bgs.protocol.notification.v2.client.Notification.attribute)
  return attribute_.Mutable(index);
}
inline ::bgs::protocol::v2::Attribute* Notification::add_attribute() {
  // @@protoc_insertion_point(field_add:bgs.protocol.notification.v2.client.Notification.attribute)
  return attribute_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::bgs::protocol::v2::Attribute >&
Notification::attribute() const {
  // @@protoc_insertion_point(field_list:bgs.protocol.notification.v2.client.Notification.attribute)
  return attribute_;
}
inline ::google::protobuf::RepeatedPtrField< ::bgs::protocol::v2::Attribute >*
Notification::mutable_attribute() {
  // @@protoc_insertion_point(field_mutable_list:bgs.protocol.notification.v2.client.Notification.attribute)
  return &attribute_;
}

// optional uint64 creation_time_ms = 5;
inline bool Notification::has_creation_time_ms() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Notification::set_has_creation_time_ms() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Notification::clear_has_creation_time_ms() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Notification::clear_creation_time_ms() {
  creation_time_ms_ = GOOGLE_ULONGLONG(0);
  clear_has_creation_time_ms();
}
inline ::google::protobuf::uint64 Notification::creation_time_ms() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.notification.v2.client.Notification.creation_time_ms)
  return creation_time_ms_;
}
inline void Notification::set_creation_time_ms(::google::protobuf::uint64 value) {
  set_has_creation_time_ms();
  creation_time_ms_ = value;
  // @@protoc_insertion_point(field_set:bgs.protocol.notification.v2.client.Notification.creation_time_ms)
}

// @@protoc_insertion_point(namespace_scope)

}  // namespace client
}  // namespace v2
}  // namespace notification
}  // namespace protocol
}  // namespace bgs

#ifndef SWIG
namespace google {
namespace protobuf {
}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_api_2fclient_2fv2_2fnotification_5ftypes_2eproto__INCLUDED
