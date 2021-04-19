/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.exceptions;

import java.util.*;

public class RaiserAsyncReactiveWrapper 
    implements Raiser.Reactive {
    private final Raiser.Async _delegate;

    public RaiserAsyncReactiveWrapper(Raiser.Async _delegate) {
        
        this._delegate = _delegate;
    }

    @java.lang.Override
    public void dispose() {
        _delegate.close();
    }

    @java.lang.Override
    public reactor.core.publisher.Mono<Void> doBland() {
        return com.facebook.swift.transport.util.FutureUtil.toMono(_delegate.doBland());
    }

    @java.lang.Override
    public reactor.core.publisher.Mono<Void> doRaise() {
        return com.facebook.swift.transport.util.FutureUtil.toMono(_delegate.doRaise());
    }

    @java.lang.Override
    public reactor.core.publisher.Mono<String> get200() {
        return com.facebook.swift.transport.util.FutureUtil.toMono(_delegate.get200());
    }

    @java.lang.Override
    public reactor.core.publisher.Mono<String> get500() {
        return com.facebook.swift.transport.util.FutureUtil.toMono(_delegate.get500());
    }

}
