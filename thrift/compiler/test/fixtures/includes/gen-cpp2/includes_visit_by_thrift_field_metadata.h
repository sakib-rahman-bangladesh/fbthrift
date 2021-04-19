/**
 * Autogenerated by Thrift for src/includes.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/visitation/visit_by_thrift_field_metadata.h>
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/includes_metadata.h"

namespace apache {
namespace thrift {
namespace detail {

template <>
struct VisitByThriftId<::cpp2::Included> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, size_t id, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (id) {
    case 1:
      return f(0, static_cast<T&&>(t).MyIntField_ref());
    case 2:
      return f(1, static_cast<T&&>(t).MyTransitiveField_ref());
    default:
      throwInvalidThriftId(id, "::cpp2::Included");
    }
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
