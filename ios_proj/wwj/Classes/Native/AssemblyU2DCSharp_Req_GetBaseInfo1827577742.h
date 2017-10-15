#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Base_Req_UserInfo3817878412.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Req_GetBaseInfo
struct  Req_GetBaseInfo_t1827577742  : public Base_Req_UserInfo_t3817878412
{
public:
	// System.String Req_GetBaseInfo::_api
	String_t* ____api_13;

public:
	inline static int32_t get_offset_of__api_13() { return static_cast<int32_t>(offsetof(Req_GetBaseInfo_t1827577742, ____api_13)); }
	inline String_t* get__api_13() const { return ____api_13; }
	inline String_t** get_address_of__api_13() { return &____api_13; }
	inline void set__api_13(String_t* value)
	{
		____api_13 = value;
		Il2CppCodeGenWriteBarrier(&____api_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
