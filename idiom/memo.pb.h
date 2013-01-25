// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: idiom/memo.proto

#ifndef PROTOBUF_idiom_2fmemo_2eproto__INCLUDED
#define PROTOBUF_idiom_2fmemo_2eproto__INCLUDED

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

namespace idiom {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_idiom_2fmemo_2eproto();
void protobuf_AssignDesc_idiom_2fmemo_2eproto();
void protobuf_ShutdownFile_idiom_2fmemo_2eproto();

class iRootInfoProto;
class CandidateProto;
class MemoProto;

// ===================================================================

class iRootInfoProto : public ::google::protobuf::Message {
 public:
  iRootInfoProto();
  virtual ~iRootInfoProto();
  
  iRootInfoProto(const iRootInfoProto& from);
  
  inline iRootInfoProto& operator=(const iRootInfoProto& from) {
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
  static const iRootInfoProto& default_instance();
  
  void Swap(iRootInfoProto* other);
  
  // implements Message ----------------------------------------------
  
  iRootInfoProto* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const iRootInfoProto& from);
  void MergeFrom(const iRootInfoProto& from);
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
  
  // required uint32 iroot_id = 1;
  inline bool has_iroot_id() const;
  inline void clear_iroot_id();
  static const int kIrootIdFieldNumber = 1;
  inline ::google::protobuf::uint32 iroot_id() const;
  inline void set_iroot_id(::google::protobuf::uint32 value);
  
  // required uint32 total_test_runs = 2;
  inline bool has_total_test_runs() const;
  inline void clear_total_test_runs();
  static const int kTotalTestRunsFieldNumber = 2;
  inline ::google::protobuf::uint32 total_test_runs() const;
  inline void set_total_test_runs(::google::protobuf::uint32 value);
  
  // optional bool async = 3;
  inline bool has_async() const;
  inline void clear_async();
  static const int kAsyncFieldNumber = 3;
  inline bool async() const;
  inline void set_async(bool value);
  
  // @@protoc_insertion_point(class_scope:idiom.iRootInfoProto)
 private:
  inline void set_has_iroot_id();
  inline void clear_has_iroot_id();
  inline void set_has_total_test_runs();
  inline void clear_has_total_test_runs();
  inline void set_has_async();
  inline void clear_has_async();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::uint32 iroot_id_;
  ::google::protobuf::uint32 total_test_runs_;
  bool async_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_idiom_2fmemo_2eproto();
  friend void protobuf_AssignDesc_idiom_2fmemo_2eproto();
  friend void protobuf_ShutdownFile_idiom_2fmemo_2eproto();
  
  void InitAsDefaultInstance();
  static iRootInfoProto* default_instance_;
};
// -------------------------------------------------------------------

class CandidateProto : public ::google::protobuf::Message {
 public:
  CandidateProto();
  virtual ~CandidateProto();
  
  CandidateProto(const CandidateProto& from);
  
  inline CandidateProto& operator=(const CandidateProto& from) {
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
  static const CandidateProto& default_instance();
  
  void Swap(CandidateProto* other);
  
  // implements Message ----------------------------------------------
  
  CandidateProto* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CandidateProto& from);
  void MergeFrom(const CandidateProto& from);
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
  
  // required uint32 iroot_id = 1;
  inline bool has_iroot_id() const;
  inline void clear_iroot_id();
  static const int kIrootIdFieldNumber = 1;
  inline ::google::protobuf::uint32 iroot_id() const;
  inline void set_iroot_id(::google::protobuf::uint32 value);
  
  // required uint32 test_runs = 2;
  inline bool has_test_runs() const;
  inline void clear_test_runs();
  static const int kTestRunsFieldNumber = 2;
  inline ::google::protobuf::uint32 test_runs() const;
  inline void set_test_runs(::google::protobuf::uint32 value);
  
  // @@protoc_insertion_point(class_scope:idiom.CandidateProto)
 private:
  inline void set_has_iroot_id();
  inline void clear_has_iroot_id();
  inline void set_has_test_runs();
  inline void clear_has_test_runs();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::uint32 iroot_id_;
  ::google::protobuf::uint32 test_runs_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_idiom_2fmemo_2eproto();
  friend void protobuf_AssignDesc_idiom_2fmemo_2eproto();
  friend void protobuf_ShutdownFile_idiom_2fmemo_2eproto();
  
  void InitAsDefaultInstance();
  static CandidateProto* default_instance_;
};
// -------------------------------------------------------------------

class MemoProto : public ::google::protobuf::Message {
 public:
  MemoProto();
  virtual ~MemoProto();
  
  MemoProto(const MemoProto& from);
  
  inline MemoProto& operator=(const MemoProto& from) {
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
  static const MemoProto& default_instance();
  
  void Swap(MemoProto* other);
  
  // implements Message ----------------------------------------------
  
  MemoProto* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MemoProto& from);
  void MergeFrom(const MemoProto& from);
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
  
  // repeated .idiom.iRootInfoProto iroot_info = 1;
  inline int iroot_info_size() const;
  inline void clear_iroot_info();
  static const int kIrootInfoFieldNumber = 1;
  inline const ::idiom::iRootInfoProto& iroot_info(int index) const;
  inline ::idiom::iRootInfoProto* mutable_iroot_info(int index);
  inline ::idiom::iRootInfoProto* add_iroot_info();
  inline const ::google::protobuf::RepeatedPtrField< ::idiom::iRootInfoProto >&
      iroot_info() const;
  inline ::google::protobuf::RepeatedPtrField< ::idiom::iRootInfoProto >*
      mutable_iroot_info();
  
  // repeated uint32 exposed = 2;
  inline int exposed_size() const;
  inline void clear_exposed();
  static const int kExposedFieldNumber = 2;
  inline ::google::protobuf::uint32 exposed(int index) const;
  inline void set_exposed(int index, ::google::protobuf::uint32 value);
  inline void add_exposed(::google::protobuf::uint32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      exposed() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_exposed();
  
  // repeated uint32 failed = 3;
  inline int failed_size() const;
  inline void clear_failed();
  static const int kFailedFieldNumber = 3;
  inline ::google::protobuf::uint32 failed(int index) const;
  inline void set_failed(int index, ::google::protobuf::uint32 value);
  inline void add_failed(::google::protobuf::uint32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      failed() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_failed();
  
  // repeated uint32 predicted = 4;
  inline int predicted_size() const;
  inline void clear_predicted();
  static const int kPredictedFieldNumber = 4;
  inline ::google::protobuf::uint32 predicted(int index) const;
  inline void set_predicted(int index, ::google::protobuf::uint32 value);
  inline void add_predicted(::google::protobuf::uint32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      predicted() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_predicted();
  
  // repeated uint32 shadow_exposed = 5;
  inline int shadow_exposed_size() const;
  inline void clear_shadow_exposed();
  static const int kShadowExposedFieldNumber = 5;
  inline ::google::protobuf::uint32 shadow_exposed(int index) const;
  inline void set_shadow_exposed(int index, ::google::protobuf::uint32 value);
  inline void add_shadow_exposed(::google::protobuf::uint32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      shadow_exposed() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_shadow_exposed();
  
  // repeated .idiom.CandidateProto candidate = 6;
  inline int candidate_size() const;
  inline void clear_candidate();
  static const int kCandidateFieldNumber = 6;
  inline const ::idiom::CandidateProto& candidate(int index) const;
  inline ::idiom::CandidateProto* mutable_candidate(int index);
  inline ::idiom::CandidateProto* add_candidate();
  inline const ::google::protobuf::RepeatedPtrField< ::idiom::CandidateProto >&
      candidate() const;
  inline ::google::protobuf::RepeatedPtrField< ::idiom::CandidateProto >*
      mutable_candidate();
  
  // @@protoc_insertion_point(class_scope:idiom.MemoProto)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::idiom::iRootInfoProto > iroot_info_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > exposed_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > failed_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > predicted_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > shadow_exposed_;
  ::google::protobuf::RepeatedPtrField< ::idiom::CandidateProto > candidate_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];
  
  friend void  protobuf_AddDesc_idiom_2fmemo_2eproto();
  friend void protobuf_AssignDesc_idiom_2fmemo_2eproto();
  friend void protobuf_ShutdownFile_idiom_2fmemo_2eproto();
  
  void InitAsDefaultInstance();
  static MemoProto* default_instance_;
};
// ===================================================================


// ===================================================================

// iRootInfoProto

// required uint32 iroot_id = 1;
inline bool iRootInfoProto::has_iroot_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void iRootInfoProto::set_has_iroot_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void iRootInfoProto::clear_has_iroot_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void iRootInfoProto::clear_iroot_id() {
  iroot_id_ = 0u;
  clear_has_iroot_id();
}
inline ::google::protobuf::uint32 iRootInfoProto::iroot_id() const {
  return iroot_id_;
}
inline void iRootInfoProto::set_iroot_id(::google::protobuf::uint32 value) {
  set_has_iroot_id();
  iroot_id_ = value;
}

// required uint32 total_test_runs = 2;
inline bool iRootInfoProto::has_total_test_runs() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void iRootInfoProto::set_has_total_test_runs() {
  _has_bits_[0] |= 0x00000002u;
}
inline void iRootInfoProto::clear_has_total_test_runs() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void iRootInfoProto::clear_total_test_runs() {
  total_test_runs_ = 0u;
  clear_has_total_test_runs();
}
inline ::google::protobuf::uint32 iRootInfoProto::total_test_runs() const {
  return total_test_runs_;
}
inline void iRootInfoProto::set_total_test_runs(::google::protobuf::uint32 value) {
  set_has_total_test_runs();
  total_test_runs_ = value;
}

// optional bool async = 3;
inline bool iRootInfoProto::has_async() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void iRootInfoProto::set_has_async() {
  _has_bits_[0] |= 0x00000004u;
}
inline void iRootInfoProto::clear_has_async() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void iRootInfoProto::clear_async() {
  async_ = false;
  clear_has_async();
}
inline bool iRootInfoProto::async() const {
  return async_;
}
inline void iRootInfoProto::set_async(bool value) {
  set_has_async();
  async_ = value;
}

// -------------------------------------------------------------------

// CandidateProto

// required uint32 iroot_id = 1;
inline bool CandidateProto::has_iroot_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CandidateProto::set_has_iroot_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CandidateProto::clear_has_iroot_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CandidateProto::clear_iroot_id() {
  iroot_id_ = 0u;
  clear_has_iroot_id();
}
inline ::google::protobuf::uint32 CandidateProto::iroot_id() const {
  return iroot_id_;
}
inline void CandidateProto::set_iroot_id(::google::protobuf::uint32 value) {
  set_has_iroot_id();
  iroot_id_ = value;
}

// required uint32 test_runs = 2;
inline bool CandidateProto::has_test_runs() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CandidateProto::set_has_test_runs() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CandidateProto::clear_has_test_runs() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CandidateProto::clear_test_runs() {
  test_runs_ = 0u;
  clear_has_test_runs();
}
inline ::google::protobuf::uint32 CandidateProto::test_runs() const {
  return test_runs_;
}
inline void CandidateProto::set_test_runs(::google::protobuf::uint32 value) {
  set_has_test_runs();
  test_runs_ = value;
}

// -------------------------------------------------------------------

// MemoProto

// repeated .idiom.iRootInfoProto iroot_info = 1;
inline int MemoProto::iroot_info_size() const {
  return iroot_info_.size();
}
inline void MemoProto::clear_iroot_info() {
  iroot_info_.Clear();
}
inline const ::idiom::iRootInfoProto& MemoProto::iroot_info(int index) const {
  return iroot_info_.Get(index);
}
inline ::idiom::iRootInfoProto* MemoProto::mutable_iroot_info(int index) {
  return iroot_info_.Mutable(index);
}
inline ::idiom::iRootInfoProto* MemoProto::add_iroot_info() {
  return iroot_info_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::idiom::iRootInfoProto >&
MemoProto::iroot_info() const {
  return iroot_info_;
}
inline ::google::protobuf::RepeatedPtrField< ::idiom::iRootInfoProto >*
MemoProto::mutable_iroot_info() {
  return &iroot_info_;
}

// repeated uint32 exposed = 2;
inline int MemoProto::exposed_size() const {
  return exposed_.size();
}
inline void MemoProto::clear_exposed() {
  exposed_.Clear();
}
inline ::google::protobuf::uint32 MemoProto::exposed(int index) const {
  return exposed_.Get(index);
}
inline void MemoProto::set_exposed(int index, ::google::protobuf::uint32 value) {
  exposed_.Set(index, value);
}
inline void MemoProto::add_exposed(::google::protobuf::uint32 value) {
  exposed_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
MemoProto::exposed() const {
  return exposed_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
MemoProto::mutable_exposed() {
  return &exposed_;
}

// repeated uint32 failed = 3;
inline int MemoProto::failed_size() const {
  return failed_.size();
}
inline void MemoProto::clear_failed() {
  failed_.Clear();
}
inline ::google::protobuf::uint32 MemoProto::failed(int index) const {
  return failed_.Get(index);
}
inline void MemoProto::set_failed(int index, ::google::protobuf::uint32 value) {
  failed_.Set(index, value);
}
inline void MemoProto::add_failed(::google::protobuf::uint32 value) {
  failed_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
MemoProto::failed() const {
  return failed_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
MemoProto::mutable_failed() {
  return &failed_;
}

// repeated uint32 predicted = 4;
inline int MemoProto::predicted_size() const {
  return predicted_.size();
}
inline void MemoProto::clear_predicted() {
  predicted_.Clear();
}
inline ::google::protobuf::uint32 MemoProto::predicted(int index) const {
  return predicted_.Get(index);
}
inline void MemoProto::set_predicted(int index, ::google::protobuf::uint32 value) {
  predicted_.Set(index, value);
}
inline void MemoProto::add_predicted(::google::protobuf::uint32 value) {
  predicted_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
MemoProto::predicted() const {
  return predicted_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
MemoProto::mutable_predicted() {
  return &predicted_;
}

// repeated uint32 shadow_exposed = 5;
inline int MemoProto::shadow_exposed_size() const {
  return shadow_exposed_.size();
}
inline void MemoProto::clear_shadow_exposed() {
  shadow_exposed_.Clear();
}
inline ::google::protobuf::uint32 MemoProto::shadow_exposed(int index) const {
  return shadow_exposed_.Get(index);
}
inline void MemoProto::set_shadow_exposed(int index, ::google::protobuf::uint32 value) {
  shadow_exposed_.Set(index, value);
}
inline void MemoProto::add_shadow_exposed(::google::protobuf::uint32 value) {
  shadow_exposed_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
MemoProto::shadow_exposed() const {
  return shadow_exposed_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
MemoProto::mutable_shadow_exposed() {
  return &shadow_exposed_;
}

// repeated .idiom.CandidateProto candidate = 6;
inline int MemoProto::candidate_size() const {
  return candidate_.size();
}
inline void MemoProto::clear_candidate() {
  candidate_.Clear();
}
inline const ::idiom::CandidateProto& MemoProto::candidate(int index) const {
  return candidate_.Get(index);
}
inline ::idiom::CandidateProto* MemoProto::mutable_candidate(int index) {
  return candidate_.Mutable(index);
}
inline ::idiom::CandidateProto* MemoProto::add_candidate() {
  return candidate_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::idiom::CandidateProto >&
MemoProto::candidate() const {
  return candidate_;
}
inline ::google::protobuf::RepeatedPtrField< ::idiom::CandidateProto >*
MemoProto::mutable_candidate() {
  return &candidate_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace idiom

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_idiom_2fmemo_2eproto__INCLUDED