// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: OpticalFlow.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_OpticalFlow_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_OpticalFlow_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_OpticalFlow_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_OpticalFlow_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_OpticalFlow_2eproto;
namespace sensor_msgs {
namespace msgs {
class OpticalFlow;
class OpticalFlowDefaultTypeInternal;
extern OpticalFlowDefaultTypeInternal _OpticalFlow_default_instance_;
}  // namespace msgs
}  // namespace sensor_msgs
PROTOBUF_NAMESPACE_OPEN
template<> ::sensor_msgs::msgs::OpticalFlow* Arena::CreateMaybeMessage<::sensor_msgs::msgs::OpticalFlow>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace sensor_msgs {
namespace msgs {

// ===================================================================

class OpticalFlow PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:sensor_msgs.msgs.OpticalFlow) */ {
 public:
  inline OpticalFlow() : OpticalFlow(nullptr) {};
  virtual ~OpticalFlow();

  OpticalFlow(const OpticalFlow& from);
  OpticalFlow(OpticalFlow&& from) noexcept
    : OpticalFlow() {
    *this = ::std::move(from);
  }

  inline OpticalFlow& operator=(const OpticalFlow& from) {
    CopyFrom(from);
    return *this;
  }
  inline OpticalFlow& operator=(OpticalFlow&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const OpticalFlow& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const OpticalFlow* internal_default_instance() {
    return reinterpret_cast<const OpticalFlow*>(
               &_OpticalFlow_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(OpticalFlow& a, OpticalFlow& b) {
    a.Swap(&b);
  }
  inline void Swap(OpticalFlow* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(OpticalFlow* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline OpticalFlow* New() const final {
    return CreateMaybeMessage<OpticalFlow>(nullptr);
  }

  OpticalFlow* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<OpticalFlow>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const OpticalFlow& from);
  void MergeFrom(const OpticalFlow& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(OpticalFlow* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "sensor_msgs.msgs.OpticalFlow";
  }
  protected:
  explicit OpticalFlow(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_OpticalFlow_2eproto);
    return ::descriptor_table_OpticalFlow_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTimeUsecFieldNumber = 1,
    kSensorIdFieldNumber = 2,
    kIntegrationTimeUsFieldNumber = 3,
    kIntegratedXFieldNumber = 4,
    kIntegratedYFieldNumber = 5,
    kIntegratedXgyroFieldNumber = 6,
    kIntegratedYgyroFieldNumber = 7,
    kIntegratedZgyroFieldNumber = 8,
    kTemperatureFieldNumber = 9,
    kQualityFieldNumber = 10,
    kTimeDeltaDistanceUsFieldNumber = 11,
    kDistanceFieldNumber = 12,
  };
  // required int64 time_usec = 1;
  bool has_time_usec() const;
  private:
  bool _internal_has_time_usec() const;
  public:
  void clear_time_usec();
  ::PROTOBUF_NAMESPACE_ID::int64 time_usec() const;
  void set_time_usec(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_time_usec() const;
  void _internal_set_time_usec(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // required int32 sensor_id = 2;
  bool has_sensor_id() const;
  private:
  bool _internal_has_sensor_id() const;
  public:
  void clear_sensor_id();
  ::PROTOBUF_NAMESPACE_ID::int32 sensor_id() const;
  void set_sensor_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_sensor_id() const;
  void _internal_set_sensor_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // required int32 integration_time_us = 3;
  bool has_integration_time_us() const;
  private:
  bool _internal_has_integration_time_us() const;
  public:
  void clear_integration_time_us();
  ::PROTOBUF_NAMESPACE_ID::int32 integration_time_us() const;
  void set_integration_time_us(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_integration_time_us() const;
  void _internal_set_integration_time_us(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // required float integrated_x = 4;
  bool has_integrated_x() const;
  private:
  bool _internal_has_integrated_x() const;
  public:
  void clear_integrated_x();
  float integrated_x() const;
  void set_integrated_x(float value);
  private:
  float _internal_integrated_x() const;
  void _internal_set_integrated_x(float value);
  public:

  // required float integrated_y = 5;
  bool has_integrated_y() const;
  private:
  bool _internal_has_integrated_y() const;
  public:
  void clear_integrated_y();
  float integrated_y() const;
  void set_integrated_y(float value);
  private:
  float _internal_integrated_y() const;
  void _internal_set_integrated_y(float value);
  public:

  // required float integrated_xgyro = 6;
  bool has_integrated_xgyro() const;
  private:
  bool _internal_has_integrated_xgyro() const;
  public:
  void clear_integrated_xgyro();
  float integrated_xgyro() const;
  void set_integrated_xgyro(float value);
  private:
  float _internal_integrated_xgyro() const;
  void _internal_set_integrated_xgyro(float value);
  public:

  // required float integrated_ygyro = 7;
  bool has_integrated_ygyro() const;
  private:
  bool _internal_has_integrated_ygyro() const;
  public:
  void clear_integrated_ygyro();
  float integrated_ygyro() const;
  void set_integrated_ygyro(float value);
  private:
  float _internal_integrated_ygyro() const;
  void _internal_set_integrated_ygyro(float value);
  public:

  // required float integrated_zgyro = 8;
  bool has_integrated_zgyro() const;
  private:
  bool _internal_has_integrated_zgyro() const;
  public:
  void clear_integrated_zgyro();
  float integrated_zgyro() const;
  void set_integrated_zgyro(float value);
  private:
  float _internal_integrated_zgyro() const;
  void _internal_set_integrated_zgyro(float value);
  public:

  // required float temperature = 9;
  bool has_temperature() const;
  private:
  bool _internal_has_temperature() const;
  public:
  void clear_temperature();
  float temperature() const;
  void set_temperature(float value);
  private:
  float _internal_temperature() const;
  void _internal_set_temperature(float value);
  public:

  // required int32 quality = 10;
  bool has_quality() const;
  private:
  bool _internal_has_quality() const;
  public:
  void clear_quality();
  ::PROTOBUF_NAMESPACE_ID::int32 quality() const;
  void set_quality(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_quality() const;
  void _internal_set_quality(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // required int32 time_delta_distance_us = 11;
  bool has_time_delta_distance_us() const;
  private:
  bool _internal_has_time_delta_distance_us() const;
  public:
  void clear_time_delta_distance_us();
  ::PROTOBUF_NAMESPACE_ID::int32 time_delta_distance_us() const;
  void set_time_delta_distance_us(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_time_delta_distance_us() const;
  void _internal_set_time_delta_distance_us(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // required float distance = 12;
  bool has_distance() const;
  private:
  bool _internal_has_distance() const;
  public:
  void clear_distance();
  float distance() const;
  void set_distance(float value);
  private:
  float _internal_distance() const;
  void _internal_set_distance(float value);
  public:

  // @@protoc_insertion_point(class_scope:sensor_msgs.msgs.OpticalFlow)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int64 time_usec_;
  ::PROTOBUF_NAMESPACE_ID::int32 sensor_id_;
  ::PROTOBUF_NAMESPACE_ID::int32 integration_time_us_;
  float integrated_x_;
  float integrated_y_;
  float integrated_xgyro_;
  float integrated_ygyro_;
  float integrated_zgyro_;
  float temperature_;
  ::PROTOBUF_NAMESPACE_ID::int32 quality_;
  ::PROTOBUF_NAMESPACE_ID::int32 time_delta_distance_us_;
  float distance_;
  friend struct ::TableStruct_OpticalFlow_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// OpticalFlow

// required int64 time_usec = 1;
inline bool OpticalFlow::_internal_has_time_usec() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool OpticalFlow::has_time_usec() const {
  return _internal_has_time_usec();
}
inline void OpticalFlow::clear_time_usec() {
  time_usec_ = PROTOBUF_LONGLONG(0);
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 OpticalFlow::_internal_time_usec() const {
  return time_usec_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 OpticalFlow::time_usec() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.OpticalFlow.time_usec)
  return _internal_time_usec();
}
inline void OpticalFlow::_internal_set_time_usec(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _has_bits_[0] |= 0x00000001u;
  time_usec_ = value;
}
inline void OpticalFlow::set_time_usec(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_time_usec(value);
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.OpticalFlow.time_usec)
}

// required int32 sensor_id = 2;
inline bool OpticalFlow::_internal_has_sensor_id() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool OpticalFlow::has_sensor_id() const {
  return _internal_has_sensor_id();
}
inline void OpticalFlow::clear_sensor_id() {
  sensor_id_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 OpticalFlow::_internal_sensor_id() const {
  return sensor_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 OpticalFlow::sensor_id() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.OpticalFlow.sensor_id)
  return _internal_sensor_id();
}
inline void OpticalFlow::_internal_set_sensor_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000002u;
  sensor_id_ = value;
}
inline void OpticalFlow::set_sensor_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_sensor_id(value);
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.OpticalFlow.sensor_id)
}

// required int32 integration_time_us = 3;
inline bool OpticalFlow::_internal_has_integration_time_us() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool OpticalFlow::has_integration_time_us() const {
  return _internal_has_integration_time_us();
}
inline void OpticalFlow::clear_integration_time_us() {
  integration_time_us_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 OpticalFlow::_internal_integration_time_us() const {
  return integration_time_us_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 OpticalFlow::integration_time_us() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.OpticalFlow.integration_time_us)
  return _internal_integration_time_us();
}
inline void OpticalFlow::_internal_set_integration_time_us(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000004u;
  integration_time_us_ = value;
}
inline void OpticalFlow::set_integration_time_us(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_integration_time_us(value);
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.OpticalFlow.integration_time_us)
}

// required float integrated_x = 4;
inline bool OpticalFlow::_internal_has_integrated_x() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool OpticalFlow::has_integrated_x() const {
  return _internal_has_integrated_x();
}
inline void OpticalFlow::clear_integrated_x() {
  integrated_x_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline float OpticalFlow::_internal_integrated_x() const {
  return integrated_x_;
}
inline float OpticalFlow::integrated_x() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.OpticalFlow.integrated_x)
  return _internal_integrated_x();
}
inline void OpticalFlow::_internal_set_integrated_x(float value) {
  _has_bits_[0] |= 0x00000008u;
  integrated_x_ = value;
}
inline void OpticalFlow::set_integrated_x(float value) {
  _internal_set_integrated_x(value);
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.OpticalFlow.integrated_x)
}

// required float integrated_y = 5;
inline bool OpticalFlow::_internal_has_integrated_y() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool OpticalFlow::has_integrated_y() const {
  return _internal_has_integrated_y();
}
inline void OpticalFlow::clear_integrated_y() {
  integrated_y_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline float OpticalFlow::_internal_integrated_y() const {
  return integrated_y_;
}
inline float OpticalFlow::integrated_y() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.OpticalFlow.integrated_y)
  return _internal_integrated_y();
}
inline void OpticalFlow::_internal_set_integrated_y(float value) {
  _has_bits_[0] |= 0x00000010u;
  integrated_y_ = value;
}
inline void OpticalFlow::set_integrated_y(float value) {
  _internal_set_integrated_y(value);
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.OpticalFlow.integrated_y)
}

// required float integrated_xgyro = 6;
inline bool OpticalFlow::_internal_has_integrated_xgyro() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool OpticalFlow::has_integrated_xgyro() const {
  return _internal_has_integrated_xgyro();
}
inline void OpticalFlow::clear_integrated_xgyro() {
  integrated_xgyro_ = 0;
  _has_bits_[0] &= ~0x00000020u;
}
inline float OpticalFlow::_internal_integrated_xgyro() const {
  return integrated_xgyro_;
}
inline float OpticalFlow::integrated_xgyro() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.OpticalFlow.integrated_xgyro)
  return _internal_integrated_xgyro();
}
inline void OpticalFlow::_internal_set_integrated_xgyro(float value) {
  _has_bits_[0] |= 0x00000020u;
  integrated_xgyro_ = value;
}
inline void OpticalFlow::set_integrated_xgyro(float value) {
  _internal_set_integrated_xgyro(value);
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.OpticalFlow.integrated_xgyro)
}

// required float integrated_ygyro = 7;
inline bool OpticalFlow::_internal_has_integrated_ygyro() const {
  bool value = (_has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool OpticalFlow::has_integrated_ygyro() const {
  return _internal_has_integrated_ygyro();
}
inline void OpticalFlow::clear_integrated_ygyro() {
  integrated_ygyro_ = 0;
  _has_bits_[0] &= ~0x00000040u;
}
inline float OpticalFlow::_internal_integrated_ygyro() const {
  return integrated_ygyro_;
}
inline float OpticalFlow::integrated_ygyro() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.OpticalFlow.integrated_ygyro)
  return _internal_integrated_ygyro();
}
inline void OpticalFlow::_internal_set_integrated_ygyro(float value) {
  _has_bits_[0] |= 0x00000040u;
  integrated_ygyro_ = value;
}
inline void OpticalFlow::set_integrated_ygyro(float value) {
  _internal_set_integrated_ygyro(value);
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.OpticalFlow.integrated_ygyro)
}

// required float integrated_zgyro = 8;
inline bool OpticalFlow::_internal_has_integrated_zgyro() const {
  bool value = (_has_bits_[0] & 0x00000080u) != 0;
  return value;
}
inline bool OpticalFlow::has_integrated_zgyro() const {
  return _internal_has_integrated_zgyro();
}
inline void OpticalFlow::clear_integrated_zgyro() {
  integrated_zgyro_ = 0;
  _has_bits_[0] &= ~0x00000080u;
}
inline float OpticalFlow::_internal_integrated_zgyro() const {
  return integrated_zgyro_;
}
inline float OpticalFlow::integrated_zgyro() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.OpticalFlow.integrated_zgyro)
  return _internal_integrated_zgyro();
}
inline void OpticalFlow::_internal_set_integrated_zgyro(float value) {
  _has_bits_[0] |= 0x00000080u;
  integrated_zgyro_ = value;
}
inline void OpticalFlow::set_integrated_zgyro(float value) {
  _internal_set_integrated_zgyro(value);
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.OpticalFlow.integrated_zgyro)
}

// required float temperature = 9;
inline bool OpticalFlow::_internal_has_temperature() const {
  bool value = (_has_bits_[0] & 0x00000100u) != 0;
  return value;
}
inline bool OpticalFlow::has_temperature() const {
  return _internal_has_temperature();
}
inline void OpticalFlow::clear_temperature() {
  temperature_ = 0;
  _has_bits_[0] &= ~0x00000100u;
}
inline float OpticalFlow::_internal_temperature() const {
  return temperature_;
}
inline float OpticalFlow::temperature() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.OpticalFlow.temperature)
  return _internal_temperature();
}
inline void OpticalFlow::_internal_set_temperature(float value) {
  _has_bits_[0] |= 0x00000100u;
  temperature_ = value;
}
inline void OpticalFlow::set_temperature(float value) {
  _internal_set_temperature(value);
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.OpticalFlow.temperature)
}

// required int32 quality = 10;
inline bool OpticalFlow::_internal_has_quality() const {
  bool value = (_has_bits_[0] & 0x00000200u) != 0;
  return value;
}
inline bool OpticalFlow::has_quality() const {
  return _internal_has_quality();
}
inline void OpticalFlow::clear_quality() {
  quality_ = 0;
  _has_bits_[0] &= ~0x00000200u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 OpticalFlow::_internal_quality() const {
  return quality_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 OpticalFlow::quality() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.OpticalFlow.quality)
  return _internal_quality();
}
inline void OpticalFlow::_internal_set_quality(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000200u;
  quality_ = value;
}
inline void OpticalFlow::set_quality(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_quality(value);
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.OpticalFlow.quality)
}

// required int32 time_delta_distance_us = 11;
inline bool OpticalFlow::_internal_has_time_delta_distance_us() const {
  bool value = (_has_bits_[0] & 0x00000400u) != 0;
  return value;
}
inline bool OpticalFlow::has_time_delta_distance_us() const {
  return _internal_has_time_delta_distance_us();
}
inline void OpticalFlow::clear_time_delta_distance_us() {
  time_delta_distance_us_ = 0;
  _has_bits_[0] &= ~0x00000400u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 OpticalFlow::_internal_time_delta_distance_us() const {
  return time_delta_distance_us_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 OpticalFlow::time_delta_distance_us() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.OpticalFlow.time_delta_distance_us)
  return _internal_time_delta_distance_us();
}
inline void OpticalFlow::_internal_set_time_delta_distance_us(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000400u;
  time_delta_distance_us_ = value;
}
inline void OpticalFlow::set_time_delta_distance_us(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_time_delta_distance_us(value);
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.OpticalFlow.time_delta_distance_us)
}

// required float distance = 12;
inline bool OpticalFlow::_internal_has_distance() const {
  bool value = (_has_bits_[0] & 0x00000800u) != 0;
  return value;
}
inline bool OpticalFlow::has_distance() const {
  return _internal_has_distance();
}
inline void OpticalFlow::clear_distance() {
  distance_ = 0;
  _has_bits_[0] &= ~0x00000800u;
}
inline float OpticalFlow::_internal_distance() const {
  return distance_;
}
inline float OpticalFlow::distance() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.OpticalFlow.distance)
  return _internal_distance();
}
inline void OpticalFlow::_internal_set_distance(float value) {
  _has_bits_[0] |= 0x00000800u;
  distance_ = value;
}
inline void OpticalFlow::set_distance(float value) {
  _internal_set_distance(value);
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.OpticalFlow.distance)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace sensor_msgs

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_OpticalFlow_2eproto
