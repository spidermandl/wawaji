#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// SocketClient
struct SocketClient_t718412134;
// HttpClient
struct HttpClient_t517229427;
// System.Collections.Generic.Queue`1<System.Collections.Generic.KeyValuePair`2<System.Int32,ByteBuffer>>
struct Queue_1_t1892745824;
// System.Collections.Generic.Queue`1<Request>
struct Queue_1_t1852154850;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetworkManager
struct  NetworkManager_t226491143  : public MonoBehaviour_t1158329972
{
public:
	// SocketClient NetworkManager::socket
	SocketClient_t718412134 * ___socket_2;
	// HttpClient NetworkManager::http
	HttpClient_t517229427 * ___http_3;

public:
	inline static int32_t get_offset_of_socket_2() { return static_cast<int32_t>(offsetof(NetworkManager_t226491143, ___socket_2)); }
	inline SocketClient_t718412134 * get_socket_2() const { return ___socket_2; }
	inline SocketClient_t718412134 ** get_address_of_socket_2() { return &___socket_2; }
	inline void set_socket_2(SocketClient_t718412134 * value)
	{
		___socket_2 = value;
		Il2CppCodeGenWriteBarrier(&___socket_2, value);
	}

	inline static int32_t get_offset_of_http_3() { return static_cast<int32_t>(offsetof(NetworkManager_t226491143, ___http_3)); }
	inline HttpClient_t517229427 * get_http_3() const { return ___http_3; }
	inline HttpClient_t517229427 ** get_address_of_http_3() { return &___http_3; }
	inline void set_http_3(HttpClient_t517229427 * value)
	{
		___http_3 = value;
		Il2CppCodeGenWriteBarrier(&___http_3, value);
	}
};

struct NetworkManager_t226491143_StaticFields
{
public:
	// System.Collections.Generic.Queue`1<System.Collections.Generic.KeyValuePair`2<System.Int32,ByteBuffer>> NetworkManager::sEvents
	Queue_1_t1892745824 * ___sEvents_4;
	// System.Collections.Generic.Queue`1<Request> NetworkManager::hEvents
	Queue_1_t1852154850 * ___hEvents_5;

public:
	inline static int32_t get_offset_of_sEvents_4() { return static_cast<int32_t>(offsetof(NetworkManager_t226491143_StaticFields, ___sEvents_4)); }
	inline Queue_1_t1892745824 * get_sEvents_4() const { return ___sEvents_4; }
	inline Queue_1_t1892745824 ** get_address_of_sEvents_4() { return &___sEvents_4; }
	inline void set_sEvents_4(Queue_1_t1892745824 * value)
	{
		___sEvents_4 = value;
		Il2CppCodeGenWriteBarrier(&___sEvents_4, value);
	}

	inline static int32_t get_offset_of_hEvents_5() { return static_cast<int32_t>(offsetof(NetworkManager_t226491143_StaticFields, ___hEvents_5)); }
	inline Queue_1_t1852154850 * get_hEvents_5() const { return ___hEvents_5; }
	inline Queue_1_t1852154850 ** get_address_of_hEvents_5() { return &___hEvents_5; }
	inline void set_hEvents_5(Queue_1_t1852154850 * value)
	{
		___hEvents_5 = value;
		Il2CppCodeGenWriteBarrier(&___hEvents_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
