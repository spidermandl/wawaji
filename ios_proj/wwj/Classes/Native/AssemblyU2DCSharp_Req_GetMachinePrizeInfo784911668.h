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

// Req_GetMachinePrizeInfo
struct  Req_GetMachinePrizeInfo_t784911668  : public Request_t2032498015
{
public:
	// System.String Req_GetMachinePrizeInfo::_api
	String_t* ____api_8;
	// System.Int32 Req_GetMachinePrizeInfo::mtId
	int32_t ___mtId_9;

public:
	inline static int32_t get_offset_of__api_8() { return static_cast<int32_t>(offsetof(Req_GetMachinePrizeInfo_t784911668, ____api_8)); }
	inline String_t* get__api_8() const { return ____api_8; }
	inline String_t** get_address_of__api_8() { return &____api_8; }
	inline void set__api_8(String_t* value)
	{
		____api_8 = value;
		Il2CppCodeGenWriteBarrier(&____api_8, value);
	}

	inline static int32_t get_offset_of_mtId_9() { return static_cast<int32_t>(offsetof(Req_GetMachinePrizeInfo_t784911668, ___mtId_9)); }
	inline int32_t get_mtId_9() const { return ___mtId_9; }
	inline int32_t* get_address_of_mtId_9() { return &___mtId_9; }
	inline void set_mtId_9(int32_t value)
	{
		___mtId_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
