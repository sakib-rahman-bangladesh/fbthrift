/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/deprecated-public-fields/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/visitation/for_each.h>

namespace apache {
namespace thrift {
namespace detail {

template <>
struct ForEachField<::cpp2::Foo> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).bar_ref()...);
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
