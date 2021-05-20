/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <cstdint>
#include <memory>
#include <stdexcept>
#include <vector>

#include <thrift/compiler/ast/t_base_type.h>
#include <thrift/compiler/ast/t_const.h>
#include <thrift/compiler/ast/t_enum_value.h>
#include <thrift/compiler/ast/t_type.h>

namespace apache {
namespace thrift {
namespace compiler {

/**
 * An enumerated type. A list of constant objects with a name for the type.
 *
 */
class t_enum : public t_type {
 public:
  t_enum(t_program* program, std::string name)
      : t_type(program, std::move(name)) {}

  void set_values(t_enum_value_list values) {
    enum_values_raw_.clear();
    enum_values_.clear();
    constants_.clear();
    for (auto& value : values) {
      append(std::move(value));
    }
  }

  void append(std::unique_ptr<t_enum_value> enum_value) {
    if (!enum_value->has_value()) {
      auto last_value =
          enum_values_.empty() ? -1 : enum_values_.back()->get_value();
      if (last_value == INT32_MAX) {
        throw std::runtime_error(
            "enum value overflow: " + enum_value->get_name());
      }
      enum_value->set_implicit_value(last_value + 1);
    }
    auto const_val = std::make_unique<t_const_value>(enum_value->get_value());
    const_val->set_is_enum();
    const_val->set_enum(this);
    const_val->set_enum_value(enum_value.get());
    auto tconst = std::make_unique<t_const>(
        program_,
        &t_base_type::t_i32(),
        enum_value->get_name(),
        std::move(const_val));
    append(std::move(enum_value), std::move(tconst));
  }

  node_list_view<t_enum_value> enum_values() { return enum_values_; }
  node_list_view<const t_enum_value> enum_values() const {
    return enum_values_;
  }
  node_list_view<const t_const> enum_consts() const { return constants_; }

  const t_enum_value* find_value(const int32_t enum_value) const {
    for (auto const& it : enum_values_) {
      if (it->get_value() == enum_value) {
        return it.get();
      }
    }
    return nullptr;
  }

  std::string get_full_name() const override { return make_full_name("enum"); }

 private:
  t_enum_value_list enum_values_;
  node_list<t_const> constants_;

  // TODO(afuller): These methods are only provided for backwards
  // compatibility. Update all references and remove everything below.
 public:
  void append(
      std::unique_ptr<t_enum_value> enum_value,
      std::unique_ptr<t_const> constant) {
    enum_values_raw_.push_back(enum_value.get());
    enum_values_.push_back(std::move(enum_value));
    constants_.push_back(std::move(constant));
  }

  const std::vector<t_enum_value*>& get_enum_values() const {
    return enum_values_raw_;
  }

  bool is_enum() const override { return true; }
  type get_type_value() const override { return type::t_enum; }

 private:
  std::vector<t_enum_value*> enum_values_raw_;
};

} // namespace compiler
} // namespace thrift
} // namespace apache
