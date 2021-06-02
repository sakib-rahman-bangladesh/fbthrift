/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.params;

import java.util.*;
import org.apache.thrift.protocol.*;

public class NestedContainersRpcServerHandler 
  implements com.facebook.thrift.server.RpcServerHandler {

  private final java.util.Map<String, com.facebook.thrift.server.RpcServerHandler> _methodMap;

  private final NestedContainers.Reactive _delegate;

  private final java.util.List<com.facebook.thrift.payload.Reader> _mapListReaders;
  private final java.util.List<com.facebook.thrift.payload.Reader> _mapSetReaders;
  private final java.util.List<com.facebook.thrift.payload.Reader> _listMapReaders;
  private final java.util.List<com.facebook.thrift.payload.Reader> _listSetReaders;
  private final java.util.List<com.facebook.thrift.payload.Reader> _turtlesReaders;

  private final java.util.List<com.facebook.swift.service.ThriftEventHandler> _eventHandlers;

  public NestedContainersRpcServerHandler(NestedContainers _delegate,
                                    java.util.List<com.facebook.swift.service.ThriftEventHandler> _eventHandlers) {
    this(new NestedContainersBlockingReactiveWrapper(_delegate), _eventHandlers);
  }

  public NestedContainersRpcServerHandler(NestedContainers.Async _delegate,
                                    java.util.List<com.facebook.swift.service.ThriftEventHandler> _eventHandlers) {
    this(new NestedContainersAsyncReactiveWrapper(_delegate), _eventHandlers);
  }

  public NestedContainersRpcServerHandler(NestedContainers.Reactive _delegate,
                                    java.util.List<com.facebook.swift.service.ThriftEventHandler> _eventHandlers) {
    
    this._methodMap = new java.util.HashMap<>();
    this._delegate = _delegate;
    this._eventHandlers = _eventHandlers;

    _methodMap.put("mapList", this);
    _mapListReaders = _createmapListReaders();

    _methodMap.put("mapSet", this);
    _mapSetReaders = _createmapSetReaders();

    _methodMap.put("listMap", this);
    _listMapReaders = _createlistMapReaders();

    _methodMap.put("listSet", this);
    _listSetReaders = _createlistSetReaders();

    _methodMap.put("turtles", this);
    _turtlesReaders = _createturtlesReaders();

  }

  private static java.util.List<com.facebook.thrift.payload.Reader> _createmapListReaders() {
    java.util.List<com.facebook.thrift.payload.Reader> _readerList = new java.util.ArrayList<>();

    
    _readerList.add(oprot -> {
      try {
        Map<Integer, List<Integer>> _r;
            {
            TMap _map = oprot.readMapBegin();
            _r = new HashMap<Integer, List<Integer>>(Math.max(0, _map.size));
            for (int _i = 0; (_map.size < 0) ? oprot.peekMap() : (_i < _map.size); _i++) {
                
                int _key1 = oprot.readI32();
                List<Integer> _value1;
            {
            TList _list1 = oprot.readListBegin();
            _value1 = new ArrayList<Integer>(Math.max(0, _list1.size));
            for (int _i1 = 0; (_list1.size < 0) ? oprot.peekList() : (_i1 < _list1.size); _i1++) {
                
                
                int _value2 = oprot.readI32();
                
                
                _value1.add(_value2);
                
            }
            oprot.readListEnd();
            }

                _r.put(_key1, _value1);
            }
            }
            oprot.readMapEnd();
        return _r;

      } catch (Throwable _e) {
        throw reactor.core.Exceptions.propagate(_e);
      }
    });

    return _readerList;
  }

  private static com.facebook.thrift.payload.Writer _createmapListWriter(
      final Object _r,
      final com.facebook.swift.service.ContextChain _chain,
      final int _seqId) {
      return oprot -> {
      try {
        oprot.writeMessageBegin(new org.apache.thrift.protocol.TMessage("mapList", TMessageType.REPLY, _seqId));
        oprot.writeStructBegin(com.facebook.thrift.util.GeneratedUtil.TSTRUCT);

        

        oprot.writeFieldBegin(com.facebook.thrift.util.GeneratedUtil.VOID_FIELD);


        oprot.writeFieldEnd();
        oprot.writeFieldStop();
        oprot.writeStructEnd();
        oprot.writeMessageEnd();

        _chain.postWrite(_r);
      } catch (Throwable _e) {
        throw reactor.core.Exceptions.propagate(_e);
      }
    };
  }

  private static reactor.core.publisher.Mono<com.facebook.thrift.payload.ServerResponsePayload>
    _domapList(
    NestedContainers.Reactive _delegate,
    String _name,
    com.facebook.thrift.payload.ServerRequestPayload _payload,
    java.util.List<com.facebook.thrift.payload.Reader> _readers,
    java.util.List<com.facebook.swift.service.ThriftEventHandler> _eventHandlers) {
    final com.facebook.swift.service.ContextChain _chain = new com.facebook.swift.service.ContextChain(_eventHandlers, _name, _payload.getRequestContext());
          _chain.preRead();
          java.util.List<Object>_data = _payload.getData(_readers);
          java.util.Iterator<Object> _iterator = _data.iterator();

          Map<Integer, List<Integer>> foo = (Map<Integer, List<Integer>>) _iterator.next();

          _chain.postRead(_data);

          reactor.core.publisher.Mono<com.facebook.thrift.payload.ServerResponsePayload> _internalResponse =
            _delegate
            .mapList(foo)
            .map(_response -> {
              _chain.preWrite(_response);
                com.facebook.thrift.payload.ServerResponsePayload _serverResponsePayload =
                    com.facebook.thrift.util.GeneratedUtil.createServerResponsePayload(
                        _payload,
                        _createmapListWriter(_response, _chain, _payload.getMessageSeqId()));

                return _serverResponsePayload;
            })
            .<com.facebook.thrift.payload.ServerResponsePayload>onErrorResume(_t -> {
                _chain.preWriteException(_t);
                com.facebook.thrift.payload.Writer _exceptionWriter = null;

                com.facebook.thrift.payload.ServerResponsePayload _serverResponsePayload =
                    com.facebook.thrift.util.GeneratedUtil.createServerResponsePayload(
                        _payload,
                        _exceptionWriter);

                return reactor.core.publisher.Mono.just(_serverResponsePayload);
            });
          if (com.facebook.thrift.util.resources.RpcResources.isForceExecutionOffEventLoop()) {
            _internalResponse = _internalResponse.publishOn(com.facebook.thrift.util.resources.RpcResources.getOffLoopScheduler());
          }

          return _internalResponse;
  }
  private static java.util.List<com.facebook.thrift.payload.Reader> _createmapSetReaders() {
    java.util.List<com.facebook.thrift.payload.Reader> _readerList = new java.util.ArrayList<>();

    
    _readerList.add(oprot -> {
      try {
        Map<Integer, Set<Integer>> _r;
            {
            TMap _map = oprot.readMapBegin();
            _r = new HashMap<Integer, Set<Integer>>(Math.max(0, _map.size));
            for (int _i = 0; (_map.size < 0) ? oprot.peekMap() : (_i < _map.size); _i++) {
                
                int _key1 = oprot.readI32();
                Set<Integer> _value1;
            {
            TSet _set1 = oprot.readSetBegin();
            _value1 = new HashSet<Integer>(Math.max(0, _set1.size));
            for (int _i1 = 0; (_set1.size < 0) ? oprot.peekSet() : (_i1 < _set1.size); _i1++) {
                
                
                int _value2 = oprot.readI32();
                
                
                _value1.add(_value2);
                
            }
            oprot.readSetEnd();
            }

                _r.put(_key1, _value1);
            }
            }
            oprot.readMapEnd();
        return _r;

      } catch (Throwable _e) {
        throw reactor.core.Exceptions.propagate(_e);
      }
    });

    return _readerList;
  }

  private static com.facebook.thrift.payload.Writer _createmapSetWriter(
      final Object _r,
      final com.facebook.swift.service.ContextChain _chain,
      final int _seqId) {
      return oprot -> {
      try {
        oprot.writeMessageBegin(new org.apache.thrift.protocol.TMessage("mapSet", TMessageType.REPLY, _seqId));
        oprot.writeStructBegin(com.facebook.thrift.util.GeneratedUtil.TSTRUCT);

        

        oprot.writeFieldBegin(com.facebook.thrift.util.GeneratedUtil.VOID_FIELD);


        oprot.writeFieldEnd();
        oprot.writeFieldStop();
        oprot.writeStructEnd();
        oprot.writeMessageEnd();

        _chain.postWrite(_r);
      } catch (Throwable _e) {
        throw reactor.core.Exceptions.propagate(_e);
      }
    };
  }

  private static reactor.core.publisher.Mono<com.facebook.thrift.payload.ServerResponsePayload>
    _domapSet(
    NestedContainers.Reactive _delegate,
    String _name,
    com.facebook.thrift.payload.ServerRequestPayload _payload,
    java.util.List<com.facebook.thrift.payload.Reader> _readers,
    java.util.List<com.facebook.swift.service.ThriftEventHandler> _eventHandlers) {
    final com.facebook.swift.service.ContextChain _chain = new com.facebook.swift.service.ContextChain(_eventHandlers, _name, _payload.getRequestContext());
          _chain.preRead();
          java.util.List<Object>_data = _payload.getData(_readers);
          java.util.Iterator<Object> _iterator = _data.iterator();

          Map<Integer, Set<Integer>> foo = (Map<Integer, Set<Integer>>) _iterator.next();

          _chain.postRead(_data);

          reactor.core.publisher.Mono<com.facebook.thrift.payload.ServerResponsePayload> _internalResponse =
            _delegate
            .mapSet(foo)
            .map(_response -> {
              _chain.preWrite(_response);
                com.facebook.thrift.payload.ServerResponsePayload _serverResponsePayload =
                    com.facebook.thrift.util.GeneratedUtil.createServerResponsePayload(
                        _payload,
                        _createmapSetWriter(_response, _chain, _payload.getMessageSeqId()));

                return _serverResponsePayload;
            })
            .<com.facebook.thrift.payload.ServerResponsePayload>onErrorResume(_t -> {
                _chain.preWriteException(_t);
                com.facebook.thrift.payload.Writer _exceptionWriter = null;

                com.facebook.thrift.payload.ServerResponsePayload _serverResponsePayload =
                    com.facebook.thrift.util.GeneratedUtil.createServerResponsePayload(
                        _payload,
                        _exceptionWriter);

                return reactor.core.publisher.Mono.just(_serverResponsePayload);
            });
          if (com.facebook.thrift.util.resources.RpcResources.isForceExecutionOffEventLoop()) {
            _internalResponse = _internalResponse.publishOn(com.facebook.thrift.util.resources.RpcResources.getOffLoopScheduler());
          }

          return _internalResponse;
  }
  private static java.util.List<com.facebook.thrift.payload.Reader> _createlistMapReaders() {
    java.util.List<com.facebook.thrift.payload.Reader> _readerList = new java.util.ArrayList<>();

    
    _readerList.add(oprot -> {
      try {
        List<Map<Integer, Integer>> _r;
            {
            TList _list = oprot.readListBegin();
            _r = new ArrayList<Map<Integer, Integer>>(Math.max(0, _list.size));
            for (int _i = 0; (_list.size < 0) ? oprot.peekList() : (_i < _list.size); _i++) {
                
                Map<Integer, Integer> _value1;
            {
            TMap _map1 = oprot.readMapBegin();
            _value1 = new HashMap<Integer, Integer>(Math.max(0, _map1.size));
            for (int _i1 = 0; (_map1.size < 0) ? oprot.peekMap() : (_i1 < _map1.size); _i1++) {
                
                
                int _key2 = oprot.readI32();
                

                
                int _value2 = oprot.readI32();
                
                
                _value1.put(_key2, _value2);
                
            }
            }
            oprot.readMapEnd();

_r.add(_value1);
            }
            oprot.readListEnd();
            }
        return _r;

      } catch (Throwable _e) {
        throw reactor.core.Exceptions.propagate(_e);
      }
    });

    return _readerList;
  }

  private static com.facebook.thrift.payload.Writer _createlistMapWriter(
      final Object _r,
      final com.facebook.swift.service.ContextChain _chain,
      final int _seqId) {
      return oprot -> {
      try {
        oprot.writeMessageBegin(new org.apache.thrift.protocol.TMessage("listMap", TMessageType.REPLY, _seqId));
        oprot.writeStructBegin(com.facebook.thrift.util.GeneratedUtil.TSTRUCT);

        

        oprot.writeFieldBegin(com.facebook.thrift.util.GeneratedUtil.VOID_FIELD);


        oprot.writeFieldEnd();
        oprot.writeFieldStop();
        oprot.writeStructEnd();
        oprot.writeMessageEnd();

        _chain.postWrite(_r);
      } catch (Throwable _e) {
        throw reactor.core.Exceptions.propagate(_e);
      }
    };
  }

  private static reactor.core.publisher.Mono<com.facebook.thrift.payload.ServerResponsePayload>
    _dolistMap(
    NestedContainers.Reactive _delegate,
    String _name,
    com.facebook.thrift.payload.ServerRequestPayload _payload,
    java.util.List<com.facebook.thrift.payload.Reader> _readers,
    java.util.List<com.facebook.swift.service.ThriftEventHandler> _eventHandlers) {
    final com.facebook.swift.service.ContextChain _chain = new com.facebook.swift.service.ContextChain(_eventHandlers, _name, _payload.getRequestContext());
          _chain.preRead();
          java.util.List<Object>_data = _payload.getData(_readers);
          java.util.Iterator<Object> _iterator = _data.iterator();

          List<Map<Integer, Integer>> foo = (List<Map<Integer, Integer>>) _iterator.next();

          _chain.postRead(_data);

          reactor.core.publisher.Mono<com.facebook.thrift.payload.ServerResponsePayload> _internalResponse =
            _delegate
            .listMap(foo)
            .map(_response -> {
              _chain.preWrite(_response);
                com.facebook.thrift.payload.ServerResponsePayload _serverResponsePayload =
                    com.facebook.thrift.util.GeneratedUtil.createServerResponsePayload(
                        _payload,
                        _createlistMapWriter(_response, _chain, _payload.getMessageSeqId()));

                return _serverResponsePayload;
            })
            .<com.facebook.thrift.payload.ServerResponsePayload>onErrorResume(_t -> {
                _chain.preWriteException(_t);
                com.facebook.thrift.payload.Writer _exceptionWriter = null;

                com.facebook.thrift.payload.ServerResponsePayload _serverResponsePayload =
                    com.facebook.thrift.util.GeneratedUtil.createServerResponsePayload(
                        _payload,
                        _exceptionWriter);

                return reactor.core.publisher.Mono.just(_serverResponsePayload);
            });
          if (com.facebook.thrift.util.resources.RpcResources.isForceExecutionOffEventLoop()) {
            _internalResponse = _internalResponse.publishOn(com.facebook.thrift.util.resources.RpcResources.getOffLoopScheduler());
          }

          return _internalResponse;
  }
  private static java.util.List<com.facebook.thrift.payload.Reader> _createlistSetReaders() {
    java.util.List<com.facebook.thrift.payload.Reader> _readerList = new java.util.ArrayList<>();

    
    _readerList.add(oprot -> {
      try {
        List<Set<Integer>> _r;
            {
            TList _list = oprot.readListBegin();
            _r = new ArrayList<Set<Integer>>(Math.max(0, _list.size));
            for (int _i = 0; (_list.size < 0) ? oprot.peekList() : (_i < _list.size); _i++) {
                
                Set<Integer> _value1;
            {
            TSet _set1 = oprot.readSetBegin();
            _value1 = new HashSet<Integer>(Math.max(0, _set1.size));
            for (int _i1 = 0; (_set1.size < 0) ? oprot.peekSet() : (_i1 < _set1.size); _i1++) {
                
                
                int _value2 = oprot.readI32();
                
                
                _value1.add(_value2);
                
            }
            oprot.readSetEnd();
            }

_r.add(_value1);
            }
            oprot.readListEnd();
            }
        return _r;

      } catch (Throwable _e) {
        throw reactor.core.Exceptions.propagate(_e);
      }
    });

    return _readerList;
  }

  private static com.facebook.thrift.payload.Writer _createlistSetWriter(
      final Object _r,
      final com.facebook.swift.service.ContextChain _chain,
      final int _seqId) {
      return oprot -> {
      try {
        oprot.writeMessageBegin(new org.apache.thrift.protocol.TMessage("listSet", TMessageType.REPLY, _seqId));
        oprot.writeStructBegin(com.facebook.thrift.util.GeneratedUtil.TSTRUCT);

        

        oprot.writeFieldBegin(com.facebook.thrift.util.GeneratedUtil.VOID_FIELD);


        oprot.writeFieldEnd();
        oprot.writeFieldStop();
        oprot.writeStructEnd();
        oprot.writeMessageEnd();

        _chain.postWrite(_r);
      } catch (Throwable _e) {
        throw reactor.core.Exceptions.propagate(_e);
      }
    };
  }

  private static reactor.core.publisher.Mono<com.facebook.thrift.payload.ServerResponsePayload>
    _dolistSet(
    NestedContainers.Reactive _delegate,
    String _name,
    com.facebook.thrift.payload.ServerRequestPayload _payload,
    java.util.List<com.facebook.thrift.payload.Reader> _readers,
    java.util.List<com.facebook.swift.service.ThriftEventHandler> _eventHandlers) {
    final com.facebook.swift.service.ContextChain _chain = new com.facebook.swift.service.ContextChain(_eventHandlers, _name, _payload.getRequestContext());
          _chain.preRead();
          java.util.List<Object>_data = _payload.getData(_readers);
          java.util.Iterator<Object> _iterator = _data.iterator();

          List<Set<Integer>> foo = (List<Set<Integer>>) _iterator.next();

          _chain.postRead(_data);

          reactor.core.publisher.Mono<com.facebook.thrift.payload.ServerResponsePayload> _internalResponse =
            _delegate
            .listSet(foo)
            .map(_response -> {
              _chain.preWrite(_response);
                com.facebook.thrift.payload.ServerResponsePayload _serverResponsePayload =
                    com.facebook.thrift.util.GeneratedUtil.createServerResponsePayload(
                        _payload,
                        _createlistSetWriter(_response, _chain, _payload.getMessageSeqId()));

                return _serverResponsePayload;
            })
            .<com.facebook.thrift.payload.ServerResponsePayload>onErrorResume(_t -> {
                _chain.preWriteException(_t);
                com.facebook.thrift.payload.Writer _exceptionWriter = null;

                com.facebook.thrift.payload.ServerResponsePayload _serverResponsePayload =
                    com.facebook.thrift.util.GeneratedUtil.createServerResponsePayload(
                        _payload,
                        _exceptionWriter);

                return reactor.core.publisher.Mono.just(_serverResponsePayload);
            });
          if (com.facebook.thrift.util.resources.RpcResources.isForceExecutionOffEventLoop()) {
            _internalResponse = _internalResponse.publishOn(com.facebook.thrift.util.resources.RpcResources.getOffLoopScheduler());
          }

          return _internalResponse;
  }
  private static java.util.List<com.facebook.thrift.payload.Reader> _createturtlesReaders() {
    java.util.List<com.facebook.thrift.payload.Reader> _readerList = new java.util.ArrayList<>();

    
    _readerList.add(oprot -> {
      try {
        List<List<Map<Integer, Map<Integer, Set<Integer>>>>> _r;
            {
            TList _list = oprot.readListBegin();
            _r = new ArrayList<List<Map<Integer, Map<Integer, Set<Integer>>>>>(Math.max(0, _list.size));
            for (int _i = 0; (_list.size < 0) ? oprot.peekList() : (_i < _list.size); _i++) {
                
                List<Map<Integer, Map<Integer, Set<Integer>>>> _value1;
            {
            TList _list1 = oprot.readListBegin();
            _value1 = new ArrayList<Map<Integer, Map<Integer, Set<Integer>>>>(Math.max(0, _list1.size));
            for (int _i1 = 0; (_list1.size < 0) ? oprot.peekList() : (_i1 < _list1.size); _i1++) {
                
                Map<Integer, Map<Integer, Set<Integer>>> _value2;
            {
            TMap _map2 = oprot.readMapBegin();
            _value2 = new HashMap<Integer, Map<Integer, Set<Integer>>>(Math.max(0, _map2.size));
            for (int _i2 = 0; (_map2.size < 0) ? oprot.peekMap() : (_i2 < _map2.size); _i2++) {
                
                
                int _key3 = oprot.readI32();
                

                Map<Integer, Set<Integer>> _value3;
            {
            TMap _map3 = oprot.readMapBegin();
            _value3 = new HashMap<Integer, Set<Integer>>(Math.max(0, _map3.size));
            for (int _i3 = 0; (_map3.size < 0) ? oprot.peekMap() : (_i3 < _map3.size); _i3++) {
                
                
                int _key4 = oprot.readI32();
                

                Set<Integer> _value4;
            {
            TSet _set4 = oprot.readSetBegin();
            _value4 = new HashSet<Integer>(Math.max(0, _set4.size));
            for (int _i4 = 0; (_set4.size < 0) ? oprot.peekSet() : (_i4 < _set4.size); _i4++) {
                
                
                int _value5 = oprot.readI32();
                
                
                _value4.add(_value5);
                
            }
            oprot.readSetEnd();
            }

                
                _value3.put(_key4, _value4);
                
            }
            }
            oprot.readMapEnd();

                
                _value2.put(_key3, _value3);
                
            }
            }
            oprot.readMapEnd();

                
                _value1.add(_value2);
                
            }
            oprot.readListEnd();
            }

_r.add(_value1);
            }
            oprot.readListEnd();
            }
        return _r;

      } catch (Throwable _e) {
        throw reactor.core.Exceptions.propagate(_e);
      }
    });

    return _readerList;
  }

  private static com.facebook.thrift.payload.Writer _createturtlesWriter(
      final Object _r,
      final com.facebook.swift.service.ContextChain _chain,
      final int _seqId) {
      return oprot -> {
      try {
        oprot.writeMessageBegin(new org.apache.thrift.protocol.TMessage("turtles", TMessageType.REPLY, _seqId));
        oprot.writeStructBegin(com.facebook.thrift.util.GeneratedUtil.TSTRUCT);

        

        oprot.writeFieldBegin(com.facebook.thrift.util.GeneratedUtil.VOID_FIELD);


        oprot.writeFieldEnd();
        oprot.writeFieldStop();
        oprot.writeStructEnd();
        oprot.writeMessageEnd();

        _chain.postWrite(_r);
      } catch (Throwable _e) {
        throw reactor.core.Exceptions.propagate(_e);
      }
    };
  }

  private static reactor.core.publisher.Mono<com.facebook.thrift.payload.ServerResponsePayload>
    _doturtles(
    NestedContainers.Reactive _delegate,
    String _name,
    com.facebook.thrift.payload.ServerRequestPayload _payload,
    java.util.List<com.facebook.thrift.payload.Reader> _readers,
    java.util.List<com.facebook.swift.service.ThriftEventHandler> _eventHandlers) {
    final com.facebook.swift.service.ContextChain _chain = new com.facebook.swift.service.ContextChain(_eventHandlers, _name, _payload.getRequestContext());
          _chain.preRead();
          java.util.List<Object>_data = _payload.getData(_readers);
          java.util.Iterator<Object> _iterator = _data.iterator();

          List<List<Map<Integer, Map<Integer, Set<Integer>>>>> foo = (List<List<Map<Integer, Map<Integer, Set<Integer>>>>>) _iterator.next();

          _chain.postRead(_data);

          reactor.core.publisher.Mono<com.facebook.thrift.payload.ServerResponsePayload> _internalResponse =
            _delegate
            .turtles(foo)
            .map(_response -> {
              _chain.preWrite(_response);
                com.facebook.thrift.payload.ServerResponsePayload _serverResponsePayload =
                    com.facebook.thrift.util.GeneratedUtil.createServerResponsePayload(
                        _payload,
                        _createturtlesWriter(_response, _chain, _payload.getMessageSeqId()));

                return _serverResponsePayload;
            })
            .<com.facebook.thrift.payload.ServerResponsePayload>onErrorResume(_t -> {
                _chain.preWriteException(_t);
                com.facebook.thrift.payload.Writer _exceptionWriter = null;

                com.facebook.thrift.payload.ServerResponsePayload _serverResponsePayload =
                    com.facebook.thrift.util.GeneratedUtil.createServerResponsePayload(
                        _payload,
                        _exceptionWriter);

                return reactor.core.publisher.Mono.just(_serverResponsePayload);
            });
          if (com.facebook.thrift.util.resources.RpcResources.isForceExecutionOffEventLoop()) {
            _internalResponse = _internalResponse.publishOn(com.facebook.thrift.util.resources.RpcResources.getOffLoopScheduler());
          }

          return _internalResponse;
  }

  @Override
  public reactor.core.publisher.Mono<com.facebook.thrift.payload.ServerResponsePayload> singleRequestSingleResponse(com.facebook.thrift.payload.ServerRequestPayload _payload) {
    final String _name = _payload.getRequestRpcMetadata().getName();

    reactor.core.publisher.Mono<com.facebook.thrift.payload.ServerResponsePayload> _result;
    try {
      switch (_name) {
        case "mapList":
          _result = _domapList(_delegate, _name, _payload, _mapListReaders, _eventHandlers);
        break;
        case "mapSet":
          _result = _domapSet(_delegate, _name, _payload, _mapSetReaders, _eventHandlers);
        break;
        case "listMap":
          _result = _dolistMap(_delegate, _name, _payload, _listMapReaders, _eventHandlers);
        break;
        case "listSet":
          _result = _dolistSet(_delegate, _name, _payload, _listSetReaders, _eventHandlers);
        break;
        case "turtles":
          _result = _doturtles(_delegate, _name, _payload, _turtlesReaders, _eventHandlers);
        break;
        default: {
          _result = reactor.core.publisher.Mono.error(new org.apache.thrift.TApplicationException(org.apache.thrift.TApplicationException.UNKNOWN_METHOD, "no method found with name " + _name));
        }
      }
    } catch (Throwable _t) {
      _result = reactor.core.publisher.Mono.error(_t);
    }

    return _result;
  }

  public java.util.Map<String, com.facebook.thrift.server.RpcServerHandler> getMethodMap() {
      return _methodMap;
  }

}
