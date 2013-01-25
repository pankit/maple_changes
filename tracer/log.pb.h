// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tracer/log.proto

#ifndef PROTOBUF_tracer_2flog_2eproto__INCLUDED
#define PROTOBUF_tracer_2flog_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace tracer {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_tracer_2flog_2eproto();
void protobuf_AssignDesc_tracer_2flog_2eproto();
void protobuf_ShutdownFile_tracer_2flog_2eproto();

class LogEntryProto;
class LogMetaProto;
class LogSliceProto;

enum LogEntryType {
  LOG_ENTRY_INVALID = 0,
  LOG_ENTRY_PROGRAM_START = 1,
  LOG_ENTRY_PROGRAM_EXIT = 2,
  LOG_ENTRY_IMAGE_LOAD = 3,
  LOG_ENTRY_IMAGE_UNLOAD = 4,
  LOG_ENTRY_SYSCALL_ENTRY = 5,
  LOG_ENTRY_SYSCALL_EXIT = 6,
  LOG_ENTRY_SIGNAL_RECEIVED = 7,
  LOG_ENTRY_THREAD_START = 8,
  LOG_ENTRY_THREAD_EXIT = 9,
  LOG_ENTRY_MAIN = 10,
  LOG_ENTRY_THREAD_MAIN = 11,
  LOG_ENTRY_BEFORE_MEM_READ = 12,
  LOG_ENTRY_AFTER_MEM_READ = 13,
  LOG_ENTRY_BEFORE_MEM_WRITE = 14,
  LOG_ENTRY_AFTER_MEM_WRITE = 15,
  LOG_ENTRY_BEFORE_ATOMIC_INST = 16,
  LOG_ENTRY_AFTER_ATOMIC_INST = 17,
  LOG_ENTRY_BEFORE_PTHREAD_CREATE = 101,
  LOG_ENTRY_AFTER_PTHREAD_CREATE = 102,
  LOG_ENTRY_BEFORE_PTHREAD_JOIN = 103,
  LOG_ENTRY_AFTER_PTHREAD_JOIN = 104,
  LOG_ENTRY_BEFORE_PTHREAD_MUTEX_TRYLOCK = 105,
  LOG_ENTRY_AFTER_PTHREAD_MUTEX_TRYLOCK = 106,
  LOG_ENTRY_BEFORE_PTHREAD_MUTEX_LOCK = 107,
  LOG_ENTRY_AFTER_PTHREAD_MUTEX_LOCK = 108,
  LOG_ENTRY_BEFORE_PTHREAD_MUTEX_UNLOCK = 109,
  LOG_ENTRY_AFTER_PTHREAD_MUTEX_UNLOCK = 110,
  LOG_ENTRY_BEFORE_PTHREAD_COND_SIGNAL = 111,
  LOG_ENTRY_AFTER_PTHREAD_COND_SIGNAL = 112,
  LOG_ENTRY_BEFORE_PTHREAD_COND_BROADCAST = 113,
  LOG_ENTRY_AFTER_PTHREAD_COND_BROADCAST = 114,
  LOG_ENTRY_BEFORE_PTHREAD_COND_WAIT = 115,
  LOG_ENTRY_AFTER_PTHREAD_COND_WAIT = 116,
  LOG_ENTRY_BEFORE_PTHREAD_COND_TIMEDWAIT = 117,
  LOG_ENTRY_AFTER_PTHREAD_COND_TIMEDWAIT = 118,
  LOG_ENTRY_BEFORE_PTHREAD_BARRIER_INIT = 119,
  LOG_ENTRY_AFTER_PTHREAD_BARRIER_INIT = 120,
  LOG_ENTRY_BEFORE_PTHREAD_BARRIER_WAIT = 121,
  LOG_ENTRY_AFTER_PTHREAD_BARRIER_WAIT = 122,
  LOG_ENTRY_BEFORE_MALLOC = 201,
  LOG_ENTRY_AFTER_MALLOC = 202,
  LOG_ENTRY_BEFORE_CALLOC = 203,
  LOG_ENTRY_AFTER_CALLOC = 204,
  LOG_ENTRY_BEFORE_REALLOC = 205,
  LOG_ENTRY_AFTER_REALLOC = 206,
  LOG_ENTRY_BEFORE_FREE = 207,
  LOG_ENTRY_AFTER_FREE = 208,
  LOG_ENTRY_BEFORE_VALLOC = 209,
  LOG_ENTRY_AFTER_VALLOC = 210
};
bool LogEntryType_IsValid(int value);
const LogEntryType LogEntryType_MIN = LOG_ENTRY_INVALID;
const LogEntryType LogEntryType_MAX = LOG_ENTRY_AFTER_VALLOC;
const int LogEntryType_ARRAYSIZE = LogEntryType_MAX + 1;

const ::google::protobuf::EnumDescriptor* LogEntryType_descriptor();
inline const ::std::string& LogEntryType_Name(LogEntryType value) {
  return ::google::protobuf::internal::NameOfEnum(
    LogEntryType_descriptor(), value);
}
inline bool LogEntryType_Parse(
    const ::std::string& name, LogEntryType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<LogEntryType>(
    LogEntryType_descriptor(), name, value);
}
// ===================================================================

class LogEntryProto : public ::google::protobuf::Message {
 public:
  LogEntryProto();
  virtual ~LogEntryProto();
  
  LogEntryProto(const LogEntryProto& from);
  
  inline LogEntryProto& operator=(const LogEntryProto& from) {
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
  static const LogEntryProto& default_instance();
  
  void Swap(LogEntryProto* other);
  
  // implements Message ----------------------------------------------
  
  LogEntryProto* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LogEntryProto& from);
  void MergeFrom(const LogEntryProto& from);
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
  
  // required .tracer.LogEntryType type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline tracer::LogEntryType type() const;
  inline void set_type(tracer::LogEntryType value);
  
  // optional uint64 thd_id = 2;
  inline bool has_thd_id() const;
  inline void clear_thd_id();
  static const int kThdIdFieldNumber = 2;
  inline ::google::protobuf::uint64 thd_id() const;
  inline void set_thd_id(::google::protobuf::uint64 value);
  
  // optional uint64 thd_clk = 3;
  inline bool has_thd_clk() const;
  inline void clear_thd_clk();
  static const int kThdClkFieldNumber = 3;
  inline ::google::protobuf::uint64 thd_clk() const;
  inline void set_thd_clk(::google::protobuf::uint64 value);
  
  // optional uint32 inst_id = 4;
  inline bool has_inst_id() const;
  inline void clear_inst_id();
  static const int kInstIdFieldNumber = 4;
  inline ::google::protobuf::uint32 inst_id() const;
  inline void set_inst_id(::google::protobuf::uint32 value);
  
  // repeated uint64 arg = 5;
  inline int arg_size() const;
  inline void clear_arg();
  static const int kArgFieldNumber = 5;
  inline ::google::protobuf::uint64 arg(int index) const;
  inline void set_arg(int index, ::google::protobuf::uint64 value);
  inline void add_arg(::google::protobuf::uint64 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      arg() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_arg();
  
  // repeated string str_arg = 6;
  inline int str_arg_size() const;
  inline void clear_str_arg();
  static const int kStrArgFieldNumber = 6;
  inline const ::std::string& str_arg(int index) const;
  inline ::std::string* mutable_str_arg(int index);
  inline void set_str_arg(int index, const ::std::string& value);
  inline void set_str_arg(int index, const char* value);
  inline void set_str_arg(int index, const char* value, size_t size);
  inline ::std::string* add_str_arg();
  inline void add_str_arg(const ::std::string& value);
  inline void add_str_arg(const char* value);
  inline void add_str_arg(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& str_arg() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_str_arg();
  
  // @@protoc_insertion_point(class_scope:tracer.LogEntryProto)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_thd_id();
  inline void clear_has_thd_id();
  inline void set_has_thd_clk();
  inline void clear_has_thd_clk();
  inline void set_has_inst_id();
  inline void clear_has_inst_id();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::uint64 thd_id_;
  int type_;
  ::google::protobuf::uint32 inst_id_;
  ::google::protobuf::uint64 thd_clk_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > arg_;
  ::google::protobuf::RepeatedPtrField< ::std::string> str_arg_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];
  
  friend void  protobuf_AddDesc_tracer_2flog_2eproto();
  friend void protobuf_AssignDesc_tracer_2flog_2eproto();
  friend void protobuf_ShutdownFile_tracer_2flog_2eproto();
  
  void InitAsDefaultInstance();
  static LogEntryProto* default_instance_;
};
// -------------------------------------------------------------------

class LogMetaProto : public ::google::protobuf::Message {
 public:
  LogMetaProto();
  virtual ~LogMetaProto();
  
  LogMetaProto(const LogMetaProto& from);
  
  inline LogMetaProto& operator=(const LogMetaProto& from) {
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
  static const LogMetaProto& default_instance();
  
  void Swap(LogMetaProto* other);
  
  // implements Message ----------------------------------------------
  
  LogMetaProto* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LogMetaProto& from);
  void MergeFrom(const LogMetaProto& from);
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
  
  // required uint64 uid = 1;
  inline bool has_uid() const;
  inline void clear_uid();
  static const int kUidFieldNumber = 1;
  inline ::google::protobuf::uint64 uid() const;
  inline void set_uid(::google::protobuf::uint64 value);
  
  // required uint32 slice_count = 3;
  inline bool has_slice_count() const;
  inline void clear_slice_count();
  static const int kSliceCountFieldNumber = 3;
  inline ::google::protobuf::uint32 slice_count() const;
  inline void set_slice_count(::google::protobuf::uint32 value);
  
  // @@protoc_insertion_point(class_scope:tracer.LogMetaProto)
 private:
  inline void set_has_uid();
  inline void clear_has_uid();
  inline void set_has_slice_count();
  inline void clear_has_slice_count();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::uint64 uid_;
  ::google::protobuf::uint32 slice_count_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_tracer_2flog_2eproto();
  friend void protobuf_AssignDesc_tracer_2flog_2eproto();
  friend void protobuf_ShutdownFile_tracer_2flog_2eproto();
  
  void InitAsDefaultInstance();
  static LogMetaProto* default_instance_;
};
// -------------------------------------------------------------------

class LogSliceProto : public ::google::protobuf::Message {
 public:
  LogSliceProto();
  virtual ~LogSliceProto();
  
  LogSliceProto(const LogSliceProto& from);
  
  inline LogSliceProto& operator=(const LogSliceProto& from) {
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
  static const LogSliceProto& default_instance();
  
  void Swap(LogSliceProto* other);
  
  // implements Message ----------------------------------------------
  
  LogSliceProto* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LogSliceProto& from);
  void MergeFrom(const LogSliceProto& from);
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
  
  // required uint64 uid = 1;
  inline bool has_uid() const;
  inline void clear_uid();
  static const int kUidFieldNumber = 1;
  inline ::google::protobuf::uint64 uid() const;
  inline void set_uid(::google::protobuf::uint64 value);
  
  // required uint32 slice_no = 2;
  inline bool has_slice_no() const;
  inline void clear_slice_no();
  static const int kSliceNoFieldNumber = 2;
  inline ::google::protobuf::uint32 slice_no() const;
  inline void set_slice_no(::google::protobuf::uint32 value);
  
  // repeated .tracer.LogEntryProto entry = 3;
  inline int entry_size() const;
  inline void clear_entry();
  static const int kEntryFieldNumber = 3;
  inline const ::tracer::LogEntryProto& entry(int index) const;
  inline ::tracer::LogEntryProto* mutable_entry(int index);
  inline ::tracer::LogEntryProto* add_entry();
  inline const ::google::protobuf::RepeatedPtrField< ::tracer::LogEntryProto >&
      entry() const;
  inline ::google::protobuf::RepeatedPtrField< ::tracer::LogEntryProto >*
      mutable_entry();
  
  // @@protoc_insertion_point(class_scope:tracer.LogSliceProto)
 private:
  inline void set_has_uid();
  inline void clear_has_uid();
  inline void set_has_slice_no();
  inline void clear_has_slice_no();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::uint64 uid_;
  ::google::protobuf::RepeatedPtrField< ::tracer::LogEntryProto > entry_;
  ::google::protobuf::uint32 slice_no_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_tracer_2flog_2eproto();
  friend void protobuf_AssignDesc_tracer_2flog_2eproto();
  friend void protobuf_ShutdownFile_tracer_2flog_2eproto();
  
  void InitAsDefaultInstance();
  static LogSliceProto* default_instance_;
};
// ===================================================================


// ===================================================================

// LogEntryProto

// required .tracer.LogEntryType type = 1;
inline bool LogEntryProto::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LogEntryProto::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LogEntryProto::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LogEntryProto::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline tracer::LogEntryType LogEntryProto::type() const {
  return static_cast< tracer::LogEntryType >(type_);
}
inline void LogEntryProto::set_type(tracer::LogEntryType value) {
  GOOGLE_DCHECK(tracer::LogEntryType_IsValid(value));
  set_has_type();
  type_ = value;
}

// optional uint64 thd_id = 2;
inline bool LogEntryProto::has_thd_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LogEntryProto::set_has_thd_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LogEntryProto::clear_has_thd_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LogEntryProto::clear_thd_id() {
  thd_id_ = GOOGLE_ULONGLONG(0);
  clear_has_thd_id();
}
inline ::google::protobuf::uint64 LogEntryProto::thd_id() const {
  return thd_id_;
}
inline void LogEntryProto::set_thd_id(::google::protobuf::uint64 value) {
  set_has_thd_id();
  thd_id_ = value;
}

// optional uint64 thd_clk = 3;
inline bool LogEntryProto::has_thd_clk() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LogEntryProto::set_has_thd_clk() {
  _has_bits_[0] |= 0x00000004u;
}
inline void LogEntryProto::clear_has_thd_clk() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void LogEntryProto::clear_thd_clk() {
  thd_clk_ = GOOGLE_ULONGLONG(0);
  clear_has_thd_clk();
}
inline ::google::protobuf::uint64 LogEntryProto::thd_clk() const {
  return thd_clk_;
}
inline void LogEntryProto::set_thd_clk(::google::protobuf::uint64 value) {
  set_has_thd_clk();
  thd_clk_ = value;
}

// optional uint32 inst_id = 4;
inline bool LogEntryProto::has_inst_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void LogEntryProto::set_has_inst_id() {
  _has_bits_[0] |= 0x00000008u;
}
inline void LogEntryProto::clear_has_inst_id() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void LogEntryProto::clear_inst_id() {
  inst_id_ = 0u;
  clear_has_inst_id();
}
inline ::google::protobuf::uint32 LogEntryProto::inst_id() const {
  return inst_id_;
}
inline void LogEntryProto::set_inst_id(::google::protobuf::uint32 value) {
  set_has_inst_id();
  inst_id_ = value;
}

// repeated uint64 arg = 5;
inline int LogEntryProto::arg_size() const {
  return arg_.size();
}
inline void LogEntryProto::clear_arg() {
  arg_.Clear();
}
inline ::google::protobuf::uint64 LogEntryProto::arg(int index) const {
  return arg_.Get(index);
}
inline void LogEntryProto::set_arg(int index, ::google::protobuf::uint64 value) {
  arg_.Set(index, value);
}
inline void LogEntryProto::add_arg(::google::protobuf::uint64 value) {
  arg_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
LogEntryProto::arg() const {
  return arg_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
LogEntryProto::mutable_arg() {
  return &arg_;
}

// repeated string str_arg = 6;
inline int LogEntryProto::str_arg_size() const {
  return str_arg_.size();
}
inline void LogEntryProto::clear_str_arg() {
  str_arg_.Clear();
}
inline const ::std::string& LogEntryProto::str_arg(int index) const {
  return str_arg_.Get(index);
}
inline ::std::string* LogEntryProto::mutable_str_arg(int index) {
  return str_arg_.Mutable(index);
}
inline void LogEntryProto::set_str_arg(int index, const ::std::string& value) {
  str_arg_.Mutable(index)->assign(value);
}
inline void LogEntryProto::set_str_arg(int index, const char* value) {
  str_arg_.Mutable(index)->assign(value);
}
inline void LogEntryProto::set_str_arg(int index, const char* value, size_t size) {
  str_arg_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* LogEntryProto::add_str_arg() {
  return str_arg_.Add();
}
inline void LogEntryProto::add_str_arg(const ::std::string& value) {
  str_arg_.Add()->assign(value);
}
inline void LogEntryProto::add_str_arg(const char* value) {
  str_arg_.Add()->assign(value);
}
inline void LogEntryProto::add_str_arg(const char* value, size_t size) {
  str_arg_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
LogEntryProto::str_arg() const {
  return str_arg_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
LogEntryProto::mutable_str_arg() {
  return &str_arg_;
}

// -------------------------------------------------------------------

// LogMetaProto

// required uint64 uid = 1;
inline bool LogMetaProto::has_uid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LogMetaProto::set_has_uid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LogMetaProto::clear_has_uid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LogMetaProto::clear_uid() {
  uid_ = GOOGLE_ULONGLONG(0);
  clear_has_uid();
}
inline ::google::protobuf::uint64 LogMetaProto::uid() const {
  return uid_;
}
inline void LogMetaProto::set_uid(::google::protobuf::uint64 value) {
  set_has_uid();
  uid_ = value;
}

// required uint32 slice_count = 3;
inline bool LogMetaProto::has_slice_count() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LogMetaProto::set_has_slice_count() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LogMetaProto::clear_has_slice_count() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LogMetaProto::clear_slice_count() {
  slice_count_ = 0u;
  clear_has_slice_count();
}
inline ::google::protobuf::uint32 LogMetaProto::slice_count() const {
  return slice_count_;
}
inline void LogMetaProto::set_slice_count(::google::protobuf::uint32 value) {
  set_has_slice_count();
  slice_count_ = value;
}

// -------------------------------------------------------------------

// LogSliceProto

// required uint64 uid = 1;
inline bool LogSliceProto::has_uid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LogSliceProto::set_has_uid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LogSliceProto::clear_has_uid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LogSliceProto::clear_uid() {
  uid_ = GOOGLE_ULONGLONG(0);
  clear_has_uid();
}
inline ::google::protobuf::uint64 LogSliceProto::uid() const {
  return uid_;
}
inline void LogSliceProto::set_uid(::google::protobuf::uint64 value) {
  set_has_uid();
  uid_ = value;
}

// required uint32 slice_no = 2;
inline bool LogSliceProto::has_slice_no() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LogSliceProto::set_has_slice_no() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LogSliceProto::clear_has_slice_no() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LogSliceProto::clear_slice_no() {
  slice_no_ = 0u;
  clear_has_slice_no();
}
inline ::google::protobuf::uint32 LogSliceProto::slice_no() const {
  return slice_no_;
}
inline void LogSliceProto::set_slice_no(::google::protobuf::uint32 value) {
  set_has_slice_no();
  slice_no_ = value;
}

// repeated .tracer.LogEntryProto entry = 3;
inline int LogSliceProto::entry_size() const {
  return entry_.size();
}
inline void LogSliceProto::clear_entry() {
  entry_.Clear();
}
inline const ::tracer::LogEntryProto& LogSliceProto::entry(int index) const {
  return entry_.Get(index);
}
inline ::tracer::LogEntryProto* LogSliceProto::mutable_entry(int index) {
  return entry_.Mutable(index);
}
inline ::tracer::LogEntryProto* LogSliceProto::add_entry() {
  return entry_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::tracer::LogEntryProto >&
LogSliceProto::entry() const {
  return entry_;
}
inline ::google::protobuf::RepeatedPtrField< ::tracer::LogEntryProto >*
LogSliceProto::mutable_entry() {
  return &entry_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace tracer

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< tracer::LogEntryType>() {
  return tracer::LogEntryType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_tracer_2flog_2eproto__INCLUDED