#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from folly.iobuf import IOBuf as __IOBuf
import typing as _typing
from thrift.py3.server import RequestContext, ServiceInterface
from abc import abstractmethod

import module.types as _module_types

_MyServiceInterfaceT = _typing.TypeVar('_MyServiceInterfaceT', bound='MyServiceInterface')


class MyServiceInterface(
    ServiceInterface
):

    @staticmethod
    def pass_context_hasDataById(
        fn: _typing.Callable[
                [_MyServiceInterfaceT, RequestContext, int],
                _typing.Awaitable[bool]
        ]
    ) -> _typing.Callable[
        [_MyServiceInterfaceT, int],
        _typing.Awaitable[bool]
    ]: ...

    @abstractmethod
    async def hasDataById(
        self,
        id: int
    ) -> bool: ...

    @staticmethod
    def pass_context_getDataById(
        fn: _typing.Callable[
                [_MyServiceInterfaceT, RequestContext, int],
                _typing.Awaitable[str]
        ]
    ) -> _typing.Callable[
        [_MyServiceInterfaceT, int],
        _typing.Awaitable[str]
    ]: ...

    @abstractmethod
    async def getDataById(
        self,
        id: int
    ) -> str: ...

    @staticmethod
    def pass_context_putDataById(
        fn: _typing.Callable[
                [_MyServiceInterfaceT, RequestContext, int, str],
                _typing.Awaitable[None]
        ]
    ) -> _typing.Callable[
        [_MyServiceInterfaceT, int, str],
        _typing.Awaitable[None]
    ]: ...

    @abstractmethod
    async def putDataById(
        self,
        id: int,
        data: str
    ) -> None: ...

    @staticmethod
    def pass_context_lobDataById(
        fn: _typing.Callable[
                [_MyServiceInterfaceT, RequestContext, int, str],
                _typing.Awaitable[None]
        ]
    ) -> _typing.Callable[
        [_MyServiceInterfaceT, int, str],
        _typing.Awaitable[None]
    ]: ...

    @abstractmethod
    async def lobDataById(
        self,
        id: int,
        data: str
    ) -> None: ...
    pass


_MyServiceFastInterfaceT = _typing.TypeVar('_MyServiceFastInterfaceT', bound='MyServiceFastInterface')


class MyServiceFastInterface(
    ServiceInterface
):

    @staticmethod
    def pass_context_hasDataById(
        fn: _typing.Callable[
                [_MyServiceFastInterfaceT, RequestContext, int],
                _typing.Awaitable[bool]
        ]
    ) -> _typing.Callable[
        [_MyServiceFastInterfaceT, int],
        _typing.Awaitable[bool]
    ]: ...

    @abstractmethod
    async def hasDataById(
        self,
        id: int
    ) -> bool: ...

    @staticmethod
    def pass_context_getDataById(
        fn: _typing.Callable[
                [_MyServiceFastInterfaceT, RequestContext, int],
                _typing.Awaitable[str]
        ]
    ) -> _typing.Callable[
        [_MyServiceFastInterfaceT, int],
        _typing.Awaitable[str]
    ]: ...

    @abstractmethod
    async def getDataById(
        self,
        id: int
    ) -> str: ...

    @staticmethod
    def pass_context_putDataById(
        fn: _typing.Callable[
                [_MyServiceFastInterfaceT, RequestContext, int, str],
                _typing.Awaitable[None]
        ]
    ) -> _typing.Callable[
        [_MyServiceFastInterfaceT, int, str],
        _typing.Awaitable[None]
    ]: ...

    @abstractmethod
    async def putDataById(
        self,
        id: int,
        data: str
    ) -> None: ...

    @staticmethod
    def pass_context_lobDataById(
        fn: _typing.Callable[
                [_MyServiceFastInterfaceT, RequestContext, int, str],
                _typing.Awaitable[None]
        ]
    ) -> _typing.Callable[
        [_MyServiceFastInterfaceT, int, str],
        _typing.Awaitable[None]
    ]: ...

    @abstractmethod
    async def lobDataById(
        self,
        id: int,
        data: str
    ) -> None: ...
    pass


