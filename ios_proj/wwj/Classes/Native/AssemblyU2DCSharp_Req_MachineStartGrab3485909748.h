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

// Req_MachineStartGrab
struct  Req_MachineStartGrab_t3485909748  : public Request_t2032498015
{
public:
	// System.String Req_MachineStartGrab::_api
	String_t* ____api_8;

public:
	inline static int32_t get_offset_of__api_8() { return static_cast<int32_t>(offsetof(Req_MachineStartGrab_t3485909748, ____api_8)); }
	inline String_t* get__api_8() const { return ____api_8; }
	inline String_t** get_address_of__api_8() { return &____api_8; }
	inline void set__api_8(String_t* value)
	{
		____api_8 = value;
		Il2CppCodeGenWriteBarrier(&____api_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
