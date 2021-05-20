/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/types/gen-cpp2/SomeServiceAsyncClient.h"
#include "thrift/compiler/test/fixtures/types/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/types/gen-cpp2/include_types.h"

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace apache { namespace thrift { namespace fixtures { namespace types {

class SomeServiceSvAsyncIf {
 public:
  virtual ~SomeServiceSvAsyncIf() {}
  virtual void async_tm_bounce_map(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::apache::thrift::fixtures::types::SomeMap>>> callback, std::unique_ptr<::apache::thrift::fixtures::types::SomeMap> p_m) = 0;
  virtual folly::Future<std::unique_ptr<::apache::thrift::fixtures::types::SomeMap>> future_bounce_map(std::unique_ptr<::apache::thrift::fixtures::types::SomeMap> p_m) = 0;
  virtual folly::SemiFuture<std::unique_ptr<::apache::thrift::fixtures::types::SomeMap>> semifuture_bounce_map(std::unique_ptr<::apache::thrift::fixtures::types::SomeMap> p_m) = 0;
  virtual void async_tm_binary_keyed_map(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>>>> callback, std::unique_ptr<::std::vector<::std::int64_t>> p_r) = 0;
  virtual folly::Future<std::unique_ptr<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>>> future_binary_keyed_map(std::unique_ptr<::std::vector<::std::int64_t>> p_r) = 0;
  virtual folly::SemiFuture<std::unique_ptr<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>>> semifuture_binary_keyed_map(std::unique_ptr<::std::vector<::std::int64_t>> p_r) = 0;
};

class SomeServiceAsyncProcessor;

class SomeServiceSvIf : public SomeServiceSvAsyncIf, public apache::thrift::ServerInterface {
 public:
  typedef SomeServiceAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;


  virtual void bounce_map(::apache::thrift::fixtures::types::SomeMap& /*_return*/, std::unique_ptr<::apache::thrift::fixtures::types::SomeMap> /*m*/);
  folly::Future<std::unique_ptr<::apache::thrift::fixtures::types::SomeMap>> future_bounce_map(std::unique_ptr<::apache::thrift::fixtures::types::SomeMap> p_m) override;
  folly::SemiFuture<std::unique_ptr<::apache::thrift::fixtures::types::SomeMap>> semifuture_bounce_map(std::unique_ptr<::apache::thrift::fixtures::types::SomeMap> p_m) override;
  void async_tm_bounce_map(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::apache::thrift::fixtures::types::SomeMap>>> callback, std::unique_ptr<::apache::thrift::fixtures::types::SomeMap> p_m) override;
  virtual void binary_keyed_map(::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>& /*_return*/, std::unique_ptr<::std::vector<::std::int64_t>> /*r*/);
  folly::Future<std::unique_ptr<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>>> future_binary_keyed_map(std::unique_ptr<::std::vector<::std::int64_t>> p_r) override;
  folly::SemiFuture<std::unique_ptr<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>>> semifuture_binary_keyed_map(std::unique_ptr<::std::vector<::std::int64_t>> p_r) override;
  void async_tm_binary_keyed_map(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>>>> callback, std::unique_ptr<::std::vector<::std::int64_t>> p_r) override;
 private:
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_bounce_map{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_binary_keyed_map{apache::thrift::detail::si::InvocationType::AsyncTm};
};

class SomeServiceSvNull : public SomeServiceSvIf {
 public:
  void bounce_map(::apache::thrift::fixtures::types::SomeMap& /*_return*/, std::unique_ptr<::apache::thrift::fixtures::types::SomeMap> /*m*/) override;
  void binary_keyed_map(::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t>& /*_return*/, std::unique_ptr<::std::vector<::std::int64_t>> /*r*/) override;
};

class SomeServiceAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = void;
 protected:
  SomeServiceSvIf* iface_;
 public:
  void processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 protected:
  std::shared_ptr<folly::RequestContext> getBaseContextForRequest() override;
 public:
  using ProcessFunc = GeneratedAsyncProcessor::ProcessFunc<SomeServiceAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessor::ProcessMap<ProcessFunc>;
  static const SomeServiceAsyncProcessor::ProcessMap& getBinaryProtocolProcessMap();
  static const SomeServiceAsyncProcessor::ProcessMap& getCompactProtocolProcessMap();
 private:
  static const SomeServiceAsyncProcessor::ProcessMap binaryProcessMap_;
  static const SomeServiceAsyncProcessor::ProcessMap compactProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_bounce_map(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_bounce_map(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::LegacySerializedResponse return_bounce_map(int32_t protoSeqId, apache::thrift::ContextStack* ctx, ::apache::thrift::fixtures::types::SomeMap const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_bounce_map(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_binary_keyed_map(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_binary_keyed_map(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::LegacySerializedResponse return_binary_keyed_map(int32_t protoSeqId, apache::thrift::ContextStack* ctx, ::std::map<::apache::thrift::fixtures::types::TBinary, ::std::int64_t> const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_binary_keyed_map(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  SomeServiceAsyncProcessor(SomeServiceSvIf* iface) :
      iface_(iface) {}

  virtual ~SomeServiceAsyncProcessor() {}
};

}}}} // apache::thrift::fixtures::types
