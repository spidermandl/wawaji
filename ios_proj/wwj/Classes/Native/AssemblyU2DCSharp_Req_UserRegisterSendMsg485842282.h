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

// Req_UserRegisterSendMsg
struct  Req_UserRegisterSendMsg_t485842282  : public Request_t2032498015
{
public:
	// System.String Req_UserRegisterSendMsg::_api
	String_t* ____api_8;
	// System.String Req_UserRegisterSendMsg::phone
	String_t* ___phone_12;
	// System.String Req_UserRegisterSendMsg::verCode
	String_t* ___verCode_13;

public:
	inline static int32_t get_offset_of__api_8() { return static_cast<int32_t>(offsetof(Req_UserRegisterSendMsg_t485842282, ____api_8)); }
	inline String_t* get__api_8() const { return ____api_8; }
	inline String_t** get_address_of__api_8() { return &____api_8; }
	inline void set__api_8(String_t* value)
	{
		____api_8 = value;
		Il2CppCodeGenWriteBarrier(&____api_8, value);
	}

	inline static int32_t get_offset_of_phone_12() { return static_cast<int32_t>(offsetof(Req_UserRegisterSendMsg_t485842282, ___phone_12)); }
	inline String_t* get_phone_12() const { return ___phone_12; }
	inline String_t** get_address_of_phone_12() { return &___phone_12; }
	inline void set_phone_12(String_t* value)
	{
		___phone_12 = value;
		Il2CppCodeGenWriteBarrier(&___phone_12, value);
	}

	inline static int32_t get_offset_of_verCode_13() { return static_cast<int32_t>(offsetof(Req_UserRegisterSendMsg_t485842282, ___verCode_13)); }
	inline String_t* get_verCode_13() const { return ___verCode_13; }
	inline String_t** get_address_of_verCode_13() { return &___verCode_13; }
	inline void set_verCode_13(String_t* value)
	{
		___verCode_13 = value;
		Il2CppCodeGenWriteBarrier(&___verCode_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
