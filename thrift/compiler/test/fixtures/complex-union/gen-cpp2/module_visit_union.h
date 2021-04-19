/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/complex-union/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/visitation/visit_union.h>

namespace apache {
namespace thrift {
namespace detail {

template <>
struct VisitUnion<::cpp2::ComplexUnion> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, T&& t) const {
    using Union = std::remove_reference_t<T>;
    switch (t.getType()) {
    case Union::Type::intValue:
      return f(0, *static_cast<T&&>(t).intValue_ref());
    case Union::Type::stringValue:
      return f(1, *static_cast<T&&>(t).stringValue_ref());
    case Union::Type::intListValue:
      return f(2, *static_cast<T&&>(t).intListValue_ref());
    case Union::Type::stringListValue:
      return f(3, *static_cast<T&&>(t).stringListValue_ref());
    case Union::Type::typedefValue:
      return f(4, *static_cast<T&&>(t).typedefValue_ref());
    case Union::Type::stringRef:
      return f(5, *static_cast<T&&>(t).stringRef_ref());
    case Union::Type::__EMPTY__: ;
    }
  }
};
template <>
struct VisitUnion<::cpp2::ListUnion> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, T&& t) const {
    using Union = std::remove_reference_t<T>;
    switch (t.getType()) {
    case Union::Type::intListValue:
      return f(0, *static_cast<T&&>(t).intListValue_ref());
    case Union::Type::stringListValue:
      return f(1, *static_cast<T&&>(t).stringListValue_ref());
    case Union::Type::__EMPTY__: ;
    }
  }
};
template <>
struct VisitUnion<::cpp2::DataUnion> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, T&& t) const {
    using Union = std::remove_reference_t<T>;
    switch (t.getType()) {
    case Union::Type::binaryData:
      return f(0, *static_cast<T&&>(t).binaryData_ref());
    case Union::Type::stringData:
      return f(1, *static_cast<T&&>(t).stringData_ref());
    case Union::Type::__EMPTY__: ;
    }
  }
};
template <>
struct VisitUnion<::cpp2::ValUnion> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, T&& t) const {
    using Union = std::remove_reference_t<T>;
    switch (t.getType()) {
    case Union::Type::v1:
      return f(0, *static_cast<T&&>(t).v1_ref());
    case Union::Type::v2:
      return f(1, *static_cast<T&&>(t).v2_ref());
    case Union::Type::__EMPTY__: ;
    }
  }
};
template <>
struct VisitUnion<::cpp2::VirtualComplexUnion> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, T&& t) const {
    using Union = std::remove_reference_t<T>;
    switch (t.getType()) {
    case Union::Type::thingOne:
      return f(0, *static_cast<T&&>(t).thingOne_ref());
    case Union::Type::thingTwo:
      return f(1, *static_cast<T&&>(t).thingTwo_ref());
    case Union::Type::__EMPTY__: ;
    }
  }
};
template <>
struct VisitUnion<::cpp2::NonCopyableUnion> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, T&& t) const {
    using Union = std::remove_reference_t<T>;
    switch (t.getType()) {
    case Union::Type::s:
      return f(0, *static_cast<T&&>(t).s_ref());
    case Union::Type::__EMPTY__: ;
    }
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
