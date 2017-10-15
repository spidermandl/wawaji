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

// Req_UserRecharge
struct  Req_UserRecharge_t3565060991  : public Request_t2032498015
{
public:
	// System.String Req_UserRecharge::_api
	String_t* ____api_8;
	// System.Int32 Req_UserRecharge::amount
	int32_t ___amount_9;

public:
	inline static int32_t get_offset_of__api_8() { return static_cast<int32_t>(offsetof(Req_UserRecharge_t3565060991, ____api_8)); }
	inline String_t* get__api_8() const { return ____api_8; }
	inline String_t** get_address_of__api_8() { return &____api_8; }
	inline void set__api_8(String_t* value)
	{
		____api_8 = value;
		Il2CppCodeGenWriteBarrier(&____api_8, value);
	}

	inline static int32_t get_offset_of_amount_9() { return static_cast<int32_t>(offsetof(Req_UserRecharge_t3565060991, ___amount_9)); }
	inline int32_t get_amount_9() const { return ___amount_9; }
	inline int32_t* get_address_of_amount_9() { return &___amount_9; }
	inline void set_amount_9(int32_t value)
	{
		___amount_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
