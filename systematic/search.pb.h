// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: systematic/search.proto

#ifndef PROTOBUF_systematic_2fsearch_2eproto__INCLUDED
#define PROTOBUF_systematic_2fsearch_2eproto__INCLUDED

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
#include "systematic/program.pb.h"
// @@protoc_insertion_point(includes)

namespace systematic {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_systematic_2fsearch_2eproto();
void protobuf_AssignDesc_systematic_2fsearch_2eproto();
void protobuf_ShutdownFile_systematic_2fsearch_2eproto();

class ActionInfoProto;
class SearchNodeProto;
class SearchInfoProto;

// ===================================================================

class ActionInfoProto : public ::google::protobuf::Message {
 public:
  ActionInfoProto();
  virtual ~ActionInfoProto();
  
  ActionInfoProto(const ActionInfoProto& from);
  
  inline ActionInfoProto& operator=(const ActionInfoProto& from) {
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
  static const ActionInfoProto& default_instance();
  
  void Swap(ActionInfoProto* other);
  
  // implements Message ----------------------------------------------
  
  ActionInfoProto* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ActionInfoProto& from);
  void MergeFrom(const ActionInfoProto& from);
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
  
  // required uint32 thd_uid = 1;
  inline bool has_thd_uid() const;
  inline void clear_thd_uid();
  static const int kThdUidFieldNumber = 1;
  inline ::google::protobuf::uint32 thd_uid() const;
  inline void set_thd_uid(::google::protobuf::uint32 value);
  
  // optional uint32 obj_uid = 2;
  inline bool has_obj_uid() const;
  inline void clear_obj_uid();
  static const int kObjUidFieldNumber = 2;
  inline ::google::protobuf::uint32 obj_uid() const;
  inline void set_obj_uid(::google::protobuf::uint32 value);
  
  // required .systematic.Operation op = 3;
  inline bool has_op() const;
  inline void clear_op();
  static const int kOpFieldNumber = 3;
  inline systematic::Operation op() const;
  inline void set_op(systematic::Operation value);
  
  // optional uint32 inst_id = 4;
  inline bool has_inst_id() const;
  inline void clear_inst_id();
  static const int kInstIdFieldNumber = 4;
  inline ::google::protobuf::uint32 inst_id() const;
  inline void set_inst_id(::google::protobuf::uint32 value);
  
  // @@protoc_insertion_point(class_scope:systematic.ActionInfoProto)
 private:
  inline void set_has_thd_uid();
  inline void clear_has_thd_uid();
  inline void set_has_obj_uid();
  inline void clear_has_obj_uid();
  inline void set_has_op();
  inline void clear_has_op();
  inline void set_has_inst_id();
  inline void clear_has_inst_id();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::uint32 thd_uid_;
  ::google::protobuf::uint32 obj_uid_;
  int op_;
  ::google::protobuf::uint32 inst_id_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
  friend void  protobuf_AddDesc_systematic_2fsearch_2eproto();
  friend void protobuf_AssignDesc_systematic_2fsearch_2eproto();
  friend void protobuf_ShutdownFile_systematic_2fsearch_2eproto();
  
  void InitAsDefaultInstance();
  static ActionInfoProto* default_instance_;
};
// -------------------------------------------------------------------

class SearchNodeProto : public ::google::protobuf::Message {
 public:
  SearchNodeProto();
  virtual ~SearchNodeProto();
  
  SearchNodeProto(const SearchNodeProto& from);
  
  inline SearchNodeProto& operator=(const SearchNodeProto& from) {
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
  static const SearchNodeProto& default_instance();
  
  void Swap(SearchNodeProto* other);
  
  // implements Message ----------------------------------------------
  
  SearchNodeProto* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SearchNodeProto& from);
  void MergeFrom(const SearchNodeProto& from);
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
  
  // required uint32 sel = 1;
  inline bool has_sel() const;
  inline void clear_sel();
  static const int kSelFieldNumber = 1;
  inline ::google::protobuf::uint32 sel() const;
  inline void set_sel(::google::protobuf::uint32 value);
  
  // repeated uint32 backtrack = 2;
  inline int backtrack_size() const;
  inline void clear_backtrack();
  static const int kBacktrackFieldNumber = 2;
  inline ::google::protobuf::uint32 backtrack(int index) const;
  inline void set_backtrack(int index, ::google::protobuf::uint32 value);
  inline void add_backtrack(::google::protobuf::uint32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      backtrack() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_backtrack();
  
  // repeated uint32 done = 3;
  inline int done_size() const;
  inline void clear_done();
  static const int kDoneFieldNumber = 3;
  inline ::google::protobuf::uint32 done(int index) const;
  inline void set_done(int index, ::google::protobuf::uint32 value);
  inline void add_done(::google::protobuf::uint32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      done() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_done();
  
  // repeated .systematic.ActionInfoProto enabled = 4;
  inline int enabled_size() const;
  inline void clear_enabled();
  static const int kEnabledFieldNumber = 4;
  inline const ::systematic::ActionInfoProto& enabled(int index) const;
  inline ::systematic::ActionInfoProto* mutable_enabled(int index);
  inline ::systematic::ActionInfoProto* add_enabled();
  inline const ::google::protobuf::RepeatedPtrField< ::systematic::ActionInfoProto >&
      enabled() const;
  inline ::google::protobuf::RepeatedPtrField< ::systematic::ActionInfoProto >*
      mutable_enabled();
  
  // @@protoc_insertion_point(class_scope:systematic.SearchNodeProto)
 private:
  inline void set_has_sel();
  inline void clear_has_sel();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > backtrack_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > done_;
  ::google::protobuf::RepeatedPtrField< ::systematic::ActionInfoProto > enabled_;
  ::google::protobuf::uint32 sel_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
  friend void  protobuf_AddDesc_systematic_2fsearch_2eproto();
  friend void protobuf_AssignDesc_systematic_2fsearch_2eproto();
  friend void protobuf_ShutdownFile_systematic_2fsearch_2eproto();
  
  void InitAsDefaultInstance();
  static SearchNodeProto* default_instance_;
};
// -------------------------------------------------------------------

class SearchInfoProto : public ::google::protobuf::Message {
 public:
  SearchInfoProto();
  virtual ~SearchInfoProto();
  
  SearchInfoProto(const SearchInfoProto& from);
  
  inline SearchInfoProto& operator=(const SearchInfoProto& from) {
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
  static const SearchInfoProto& default_instance();
  
  void Swap(SearchInfoProto* other);
  
  // implements Message ----------------------------------------------
  
  SearchInfoProto* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SearchInfoProto& from);
  void MergeFrom(const SearchInfoProto& from);
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
  
  // required bool done = 1;
  inline bool has_done() const;
  inline void clear_done();
  static const int kDoneFieldNumber = 1;
  inline bool done() const;
  inline void set_done(bool value);
  
  // required uint32 num_runs = 2;
  inline bool has_num_runs() const;
  inline void clear_num_runs();
  static const int kNumRunsFieldNumber = 2;
  inline ::google::protobuf::uint32 num_runs() const;
  inline void set_num_runs(::google::protobuf::uint32 value);
  
  // repeated .systematic.SearchNodeProto node = 3;
  inline int node_size() const;
  inline void clear_node();
  static const int kNodeFieldNumber = 3;
  inline const ::systematic::SearchNodeProto& node(int index) const;
  inline ::systematic::SearchNodeProto* mutable_node(int index);
  inline ::systematic::SearchNodeProto* add_node();
  inline const ::google::protobuf::RepeatedPtrField< ::systematic::SearchNodeProto >&
      node() const;
  inline ::google::protobuf::RepeatedPtrField< ::systematic::SearchNodeProto >*
      mutable_node();
  
  // @@protoc_insertion_point(class_scope:systematic.SearchInfoProto)
 private:
  inline void set_has_done();
  inline void clear_has_done();
  inline void set_has_num_runs();
  inline void clear_has_num_runs();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  bool done_;
  ::google::protobuf::uint32 num_runs_;
  ::google::protobuf::RepeatedPtrField< ::systematic::SearchNodeProto > node_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_systematic_2fsearch_2eproto();
  friend void protobuf_AssignDesc_systematic_2fsearch_2eproto();
  friend void protobuf_ShutdownFile_systematic_2fsearch_2eproto();
  
  void InitAsDefaultInstance();
  static SearchInfoProto* default_instance_;
};
// ===================================================================


// ===================================================================

// ActionInfoProto

// required uint32 thd_uid = 1;
inline bool ActionInfoProto::has_thd_uid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ActionInfoProto::set_has_thd_uid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ActionInfoProto::clear_has_thd_uid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ActionInfoProto::clear_thd_uid() {
  thd_uid_ = 0u;
  clear_has_thd_uid();
}
inline ::google::protobuf::uint32 ActionInfoProto::thd_uid() const {
  return thd_uid_;
}
inline void ActionInfoProto::set_thd_uid(::google::protobuf::uint32 value) {
  set_has_thd_uid();
  thd_uid_ = value;
}

// optional uint32 obj_uid = 2;
inline bool ActionInfoProto::has_obj_uid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ActionInfoProto::set_has_obj_uid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ActionInfoProto::clear_has_obj_uid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ActionInfoProto::clear_obj_uid() {
  obj_uid_ = 0u;
  clear_has_obj_uid();
}
inline ::google::protobuf::uint32 ActionInfoProto::obj_uid() const {
  return obj_uid_;
}
inline void ActionInfoProto::set_obj_uid(::google::protobuf::uint32 value) {
  set_has_obj_uid();
  obj_uid_ = value;
}

// required .systematic.Operation op = 3;
inline bool ActionInfoProto::has_op() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ActionInfoProto::set_has_op() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ActionInfoProto::clear_has_op() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ActionInfoProto::clear_op() {
  op_ = 0;
  clear_has_op();
}
inline systematic::Operation ActionInfoProto::op() const {
  return static_cast< systematic::Operation >(op_);
}
inline void ActionInfoProto::set_op(systematic::Operation value) {
  GOOGLE_DCHECK(systematic::Operation_IsValid(value));
  set_has_op();
  op_ = value;
}

// optional uint32 inst_id = 4;
inline bool ActionInfoProto::has_inst_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ActionInfoProto::set_has_inst_id() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ActionInfoProto::clear_has_inst_id() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ActionInfoProto::clear_inst_id() {
  inst_id_ = 0u;
  clear_has_inst_id();
}
inline ::google::protobuf::uint32 ActionInfoProto::inst_id() const {
  return inst_id_;
}
inline void ActionInfoProto::set_inst_id(::google::protobuf::uint32 value) {
  set_has_inst_id();
  inst_id_ = value;
}

// -------------------------------------------------------------------

// SearchNodeProto

// required uint32 sel = 1;
inline bool SearchNodeProto::has_sel() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SearchNodeProto::set_has_sel() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SearchNodeProto::clear_has_sel() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SearchNodeProto::clear_sel() {
  sel_ = 0u;
  clear_has_sel();
}
inline ::google::protobuf::uint32 SearchNodeProto::sel() const {
  return sel_;
}
inline void SearchNodeProto::set_sel(::google::protobuf::uint32 value) {
  set_has_sel();
  sel_ = value;
}

// repeated uint32 backtrack = 2;
inline int SearchNodeProto::backtrack_size() const {
  return backtrack_.size();
}
inline void SearchNodeProto::clear_backtrack() {
  backtrack_.Clear();
}
inline ::google::protobuf::uint32 SearchNodeProto::backtrack(int index) const {
  return backtrack_.Get(index);
}
inline void SearchNodeProto::set_backtrack(int index, ::google::protobuf::uint32 value) {
  backtrack_.Set(index, value);
}
inline void SearchNodeProto::add_backtrack(::google::protobuf::uint32 value) {
  backtrack_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
SearchNodeProto::backtrack() const {
  return backtrack_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
SearchNodeProto::mutable_backtrack() {
  return &backtrack_;
}

// repeated uint32 done = 3;
inline int SearchNodeProto::done_size() const {
  return done_.size();
}
inline void SearchNodeProto::clear_done() {
  done_.Clear();
}
inline ::google::protobuf::uint32 SearchNodeProto::done(int index) const {
  return done_.Get(index);
}
inline void SearchNodeProto::set_done(int index, ::google::protobuf::uint32 value) {
  done_.Set(index, value);
}
inline void SearchNodeProto::add_done(::google::protobuf::uint32 value) {
  done_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
SearchNodeProto::done() const {
  return done_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
SearchNodeProto::mutable_done() {
  return &done_;
}

// repeated .systematic.ActionInfoProto enabled = 4;
inline int SearchNodeProto::enabled_size() const {
  return enabled_.size();
}
inline void SearchNodeProto::clear_enabled() {
  enabled_.Clear();
}
inline const ::systematic::ActionInfoProto& SearchNodeProto::enabled(int index) const {
  return enabled_.Get(index);
}
inline ::systematic::ActionInfoProto* SearchNodeProto::mutable_enabled(int index) {
  return enabled_.Mutable(index);
}
inline ::systematic::ActionInfoProto* SearchNodeProto::add_enabled() {
  return enabled_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::systematic::ActionInfoProto >&
SearchNodeProto::enabled() const {
  return enabled_;
}
inline ::google::protobuf::RepeatedPtrField< ::systematic::ActionInfoProto >*
SearchNodeProto::mutable_enabled() {
  return &enabled_;
}

// -------------------------------------------------------------------

// SearchInfoProto

// required bool done = 1;
inline bool SearchInfoProto::has_done() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SearchInfoProto::set_has_done() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SearchInfoProto::clear_has_done() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SearchInfoProto::clear_done() {
  done_ = false;
  clear_has_done();
}
inline bool SearchInfoProto::done() const {
  return done_;
}
inline void SearchInfoProto::set_done(bool value) {
  set_has_done();
  done_ = value;
}

// required uint32 num_runs = 2;
inline bool SearchInfoProto::has_num_runs() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SearchInfoProto::set_has_num_runs() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SearchInfoProto::clear_has_num_runs() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SearchInfoProto::clear_num_runs() {
  num_runs_ = 0u;
  clear_has_num_runs();
}
inline ::google::protobuf::uint32 SearchInfoProto::num_runs() const {
  return num_runs_;
}
inline void SearchInfoProto::set_num_runs(::google::protobuf::uint32 value) {
  set_has_num_runs();
  num_runs_ = value;
}

// repeated .systematic.SearchNodeProto node = 3;
inline int SearchInfoProto::node_size() const {
  return node_.size();
}
inline void SearchInfoProto::clear_node() {
  node_.Clear();
}
inline const ::systematic::SearchNodeProto& SearchInfoProto::node(int index) const {
  return node_.Get(index);
}
inline ::systematic::SearchNodeProto* SearchInfoProto::mutable_node(int index) {
  return node_.Mutable(index);
}
inline ::systematic::SearchNodeProto* SearchInfoProto::add_node() {
  return node_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::systematic::SearchNodeProto >&
SearchInfoProto::node() const {
  return node_;
}
inline ::google::protobuf::RepeatedPtrField< ::systematic::SearchNodeProto >*
SearchInfoProto::mutable_node() {
  return &node_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace systematic

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_systematic_2fsearch_2eproto__INCLUDED
