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

// Req_GetPrizeUseCoin
struct  Req_GetPrizeUseCoin_t235174161  : public Request_t2032498015
{
public:
	// System.String Req_GetPrizeUseCoin::_api
	String_t* ____api_8;
	// System.Int32 Req_GetPrizeUseCoin::prizeId
	int32_t ___prizeId_12;

public:
	inline static int32_t get_offset_of__api_8() { return static_cast<int32_t>(offsetof(Req_GetPrizeUseCoin_t235174161, ____api_8)); }
	inline String_t* get__api_8() const { return ____api_8; }
	inline String_t** get_address_of__api_8() { return &____api_8; }
	inline void set__api_8(String_t* value)
	{
		____api_8 = value;
		Il2CppCodeGenWriteBarrier(&____api_8, value);
	}

	inline static int32_t get_offset_of_prizeId_12() { return static_cast<int32_t>(offsetof(Req_GetPrizeUseCoin_t235174161, ___prizeId_12)); }
	inline int32_t get_prizeId_12() const { return ___prizeId_12; }
	inline int32_t* get_address_of_prizeId_12() { return &___prizeId_12; }
	inline void set_prizeId_12(int32_t value)
	{
		___prizeId_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
