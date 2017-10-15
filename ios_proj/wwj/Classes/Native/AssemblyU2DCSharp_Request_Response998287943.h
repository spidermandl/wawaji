#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Request
struct Request_t2032498015;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Request/Response
struct  Response_t998287943  : public Il2CppObject
{
public:
	// Request Request/Response::request
	Request_t2032498015 * ___request_0;
	// System.Int32 Request/Response::ret
	int32_t ___ret_1;
	// System.String Request/Response::msg
	String_t* ___msg_2;

public:
	inline static int32_t get_offset_of_request_0() { return static_cast<int32_t>(offsetof(Response_t998287943, ___request_0)); }
	inline Request_t2032498015 * get_request_0() const { return ___request_0; }
	inline Request_t2032498015 ** get_address_of_request_0() { return &___request_0; }
	inline void set_request_0(Request_t2032498015 * value)
	{
		___request_0 = value;
		Il2CppCodeGenWriteBarrier(&___request_0, value);
	}

	inline static int32_t get_offset_of_ret_1() { return static_cast<int32_t>(offsetof(Response_t998287943, ___ret_1)); }
	inline int32_t get_ret_1() const { return ___ret_1; }
	inline int32_t* get_address_of_ret_1() { return &___ret_1; }
	inline void set_ret_1(int32_t value)
	{
		___ret_1 = value;
	}

	inline static int32_t get_offset_of_msg_2() { return static_cast<int32_t>(offsetof(Response_t998287943, ___msg_2)); }
	inline String_t* get_msg_2() const { return ___msg_2; }
	inline String_t** get_address_of_msg_2() { return &___msg_2; }
	inline void set_msg_2(String_t* value)
	{
		___msg_2 = value;
		Il2CppCodeGenWriteBarrier(&___msg_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
