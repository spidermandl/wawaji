#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Request2032498015.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Req_UserForgetPsdSendMsg
struct  Req_UserForgetPsdSendMsg_t1014197417  : public Request_t2032498015
{
public:
	// System.String Req_UserForgetPsdSendMsg::_api
	String_t* ____api_8;
	// System.String Req_UserForgetPsdSendMsg::phone
	String_t* ___phone_9;
	// System.String Req_UserForgetPsdSendMsg::verCode
	String_t* ___verCode_10;

public:
	inline static int32_t get_offset_of__api_8() { return static_cast<int32_t>(offsetof(Req_UserForgetPsdSendMsg_t1014197417, ____api_8)); }
	inline String_t* get__api_8() const { return ____api_8; }
	inline String_t** get_address_of__api_8() { return &____api_8; }
	inline void set__api_8(String_t* value)
	{
		____api_8 = value;
		Il2CppCodeGenWriteBarrier(&____api_8, value);
	}

	inline static int32_t get_offset_of_phone_9() { return static_cast<int32_t>(offsetof(Req_UserForgetPsdSendMsg_t1014197417, ___phone_9)); }
	inline String_t* get_phone_9() const { return ___phone_9; }
	inline String_t** get_address_of_phone_9() { return &___phone_9; }
	inline void set_phone_9(String_t* value)
	{
		___phone_9 = value;
		Il2CppCodeGenWriteBarrier(&___phone_9, value);
	}

	inline static int32_t get_offset_of_verCode_10() { return static_cast<int32_t>(offsetof(Req_UserForgetPsdSendMsg_t1014197417, ___verCode_10)); }
	inline String_t* get_verCode_10() const { return ___verCode_10; }
	inline String_t** get_address_of_verCode_10() { return &___verCode_10; }
	inline void set_verCode_10(String_t* value)
	{
		___verCode_10 = value;
		Il2CppCodeGenWriteBarrier(&___verCode_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
