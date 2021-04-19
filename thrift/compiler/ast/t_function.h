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

#include <memory>
#include <string>

#include <thrift/compiler/ast/t_named.h>
#include <thrift/compiler/ast/t_node.h>
#include <thrift/compiler/ast/t_paramlist.h>
#include <thrift/compiler/ast/t_sink.h>
#include <thrift/compiler/ast/t_struct.h>
#include <thrift/compiler/ast/t_type.h>

namespace apache {
namespace thrift {
namespace compiler {

enum class t_function_qualifier {
  none = 0,
  one_way,
  idempotent,
  read_only,
};

/**
 * class t_function
 *
 * Representation of a function. Key parts are return type, function name,
 * optional modifiers, and an argument list, which is implemented as a thrift
 * struct.
 *
 */
class t_function : public t_named {
 public:
  /**
   * Constructor for t_function
   *
   * @param return_type      - The type of the value that will be returned
   * @param name             - The symbolic name of the function
   * @param paramlist        - The parameters that are passed to the functions
   * @param exceptions        - Declare the exceptions that function might throw
   * @param stream_exceptions - Exceptions to be sent via the stream
   * @param qualifier        - The qualifier of the function, if any.
   */
  t_function(
      t_type_ref return_type,
      std::string name,
      std::unique_ptr<t_paramlist> paramlist,
      std::unique_ptr<t_struct> exceptions = nullptr,
      std::unique_ptr<t_struct> stream_exceptions = nullptr,
      t_function_qualifier qualifier = t_function_qualifier::none)
      : t_named(std::move(name)),
        return_type_(std::move(return_type)),
        paramlist_(std::move(paramlist)),
        exceptions_(std::move(exceptions)),
        stream_exceptions_(std::move(stream_exceptions)),
        qualifier_(qualifier) {
    // sinks are supposed to use the other ctor
    assert(return_type_.type() == nullptr || !return_type_.type()->is_sink());
    if (is_oneway()) {
      if (!exceptions_->get_members().empty()) {
        throw std::string("Oneway methods can't throw exceptions.");
      }

      if (return_type_.type() == nullptr || !return_type_.type()->is_void()) {
        throw std::string("Oneway methods must have void return type.");
      }
    }

    if (!exceptions_) {
      exceptions_ = t_struct::new_throws();
    }

    if (!stream_exceptions_) {
      stream_exceptions_ = t_struct::new_throws();
    }

    sink_exceptions_ = t_struct::new_throws();
    sink_final_response_exceptions_ = t_struct::new_throws();

    if (!stream_exceptions_->get_members().empty()) {
      if (return_type_.type() == nullptr ||
          !return_type_.type()->is_streamresponse()) {
        throw std::string("`stream throws` only valid on stream methods");
      }
    }
  }

  t_function(
      const t_sink* return_type,
      std::string name,
      std::unique_ptr<t_paramlist> paramlist,
      std::unique_ptr<t_struct> exceptions)
      : t_named(std::move(name)),
        return_type_(return_type),
        paramlist_(std::move(paramlist)),
        exceptions_(std::move(exceptions)),
        sink_exceptions_(
            std::unique_ptr<t_struct>(return_type->get_sink_exceptions())),
        sink_final_response_exceptions_(std::unique_ptr<t_struct>(
            return_type->get_final_response_exceptions())),
        qualifier_(t_function_qualifier::none) {
    if (!exceptions_) {
      exceptions_ = t_struct::new_throws();
    }
    stream_exceptions_ = t_struct::new_throws();
    if (!sink_exceptions_) {
      sink_exceptions_ = t_struct::new_throws();
    }
    if (!sink_final_response_exceptions_) {
      sink_final_response_exceptions_ = t_struct::new_throws();
    }
  }

  /**
   * t_function getters
   */
  const t_type* get_return_type() const { return return_type_.type(); }

  t_paramlist* get_paramlist() const { return paramlist_.get(); }

  // TODO: remove "xception" function once everything changed to "exception"
  t_struct* get_xceptions() const { return get_exceptions(); }

  t_struct* get_exceptions() const { return exceptions_.get(); }

  // TODO: remove "xception" function once everything changed to "exception"
  t_struct* get_stream_xceptions() const { return get_stream_exceptions(); }

  t_struct* get_stream_exceptions() const { return stream_exceptions_.get(); }

  // TODO: remove "xception" function once everything changed to "exception"
  t_struct* get_sink_xceptions() const { return get_sink_exceptions(); }

  t_struct* get_sink_exceptions() const { return sink_exceptions_.get(); }

  // TODO: remove "xception" function once everything changed to "exception"
  t_struct* get_sink_final_response_xceptions() const {
    return get_sink_final_response_exceptions();
  }

  t_struct* get_sink_final_response_exceptions() const {
    return sink_final_response_exceptions_.get();
  }

  bool is_oneway() const { return qualifier_ == t_function_qualifier::one_way; }

  bool returns_stream() const {
    return return_type_.type()->is_streamresponse();
  }

  bool returns_sink() const { return return_type_.type()->is_sink(); }

  bool is_interaction_constructor() const { return isInteractionConstructor_; }
  void set_is_interaction_constructor() { isInteractionConstructor_ = true; }
  bool is_interaction_member() const { return isInteractionMember_; }
  void set_is_interaction_member() { isInteractionMember_ = true; }

 private:
  t_type_ref return_type_;
  std::unique_ptr<t_paramlist> paramlist_;
  std::unique_ptr<t_struct> exceptions_;
  std::unique_ptr<t_struct> stream_exceptions_;
  std::unique_ptr<t_struct> sink_exceptions_;
  std::unique_ptr<t_struct> sink_final_response_exceptions_;
  t_function_qualifier qualifier_;
  bool isInteractionConstructor_{false};
  bool isInteractionMember_{false};

 public:
  // TODO(afuller): Delete everything below here. It is only provided for
  // backwards compatibility.

  t_function(
      const t_type* return_type,
      std::string name,
      std::unique_ptr<t_paramlist> paramlist,
      std::unique_ptr<t_struct> exceptions = nullptr,
      std::unique_ptr<t_struct> stream_exceptions = nullptr,
      t_function_qualifier qualifier = t_function_qualifier::none)
      : t_function(
            t_type_ref(return_type),
            std::move(name),
            std::move(paramlist),
            std::move(exceptions),
            std::move(stream_exceptions),
            qualifier) {}

  const t_type* get_returntype() const { return get_return_type(); }
};

} // namespace compiler
} // namespace thrift
} // namespace apache
