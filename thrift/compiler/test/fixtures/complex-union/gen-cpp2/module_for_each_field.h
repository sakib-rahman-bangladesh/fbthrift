/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/complex-union/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/visitation/for_each.h>

namespace apache {
namespace thrift {
namespace detail {

template <>
struct ForEachField<::cpp2::ComplexUnion> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).intValue_ref()...);
    f(1, static_cast<T&&>(t).stringValue_ref()...);
    f(2, static_cast<T&&>(t).intListValue_ref()...);
    f(3, static_cast<T&&>(t).stringListValue_ref()...);
    f(4, static_cast<T&&>(t).typedefValue_ref()...);
    f(5, static_cast<T&&>(t).stringRef_ref()...);
  }
};

template <>
struct ForEachField<::cpp2::ListUnion> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).intListValue_ref()...);
    f(1, static_cast<T&&>(t).stringListValue_ref()...);
  }
};

template <>
struct ForEachField<::cpp2::DataUnion> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).binaryData_ref()...);
    f(1, static_cast<T&&>(t).stringData_ref()...);
  }
};

template <>
struct ForEachField<::cpp2::Val> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).strVal_ref()...);
    f(1, static_cast<T&&>(t).intVal_ref()...);
    f(2, static_cast<T&&>(t).typedefValue_ref()...);
  }
};

template <>
struct ForEachField<::cpp2::ValUnion> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).v1_ref()...);
    f(1, static_cast<T&&>(t).v2_ref()...);
  }
};

template <>
struct ForEachField<::cpp2::VirtualComplexUnion> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).thingOne_ref()...);
    f(1, static_cast<T&&>(t).thingTwo_ref()...);
  }
};

template <>
struct ForEachField<::cpp2::NonCopyableStruct> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).num_ref()...);
  }
};

template <>
struct ForEachField<::cpp2::NonCopyableUnion> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).s_ref()...);
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
