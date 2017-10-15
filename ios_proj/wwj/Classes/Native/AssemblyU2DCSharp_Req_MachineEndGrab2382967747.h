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

// Req_MachineEndGrab
struct  Req_MachineEndGrab_t2382967747  : public Request_t2032498015
{
public:
	// System.String Req_MachineEndGrab::_api
	String_t* ____api_8;
	// System.Int32 Req_MachineEndGrab::logId
	int32_t ___logId_11;
	// System.String Req_MachineEndGrab::ballIdStr
	String_t* ___ballIdStr_12;

public:
	inline static int32_t get_offset_of__api_8() { return static_cast<int32_t>(offsetof(Req_MachineEndGrab_t2382967747, ____api_8)); }
	inline String_t* get__api_8() const { return ____api_8; }
	inline String_t** get_address_of__api_8() { return &____api_8; }
	inline void set__api_8(String_t* value)
	{
		____api_8 = value;
		Il2CppCodeGenWriteBarrier(&____api_8, value);
	}

	inline static int32_t get_offset_of_logId_11() { return static_cast<int32_t>(offsetof(Req_MachineEndGrab_t2382967747, ___logId_11)); }
	inline int32_t get_logId_11() const { return ___logId_11; }
	inline int32_t* get_address_of_logId_11() { return &___logId_11; }
	inline void set_logId_11(int32_t value)
	{
		___logId_11 = value;
	}

	inline static int32_t get_offset_of_ballIdStr_12() { return static_cast<int32_t>(offsetof(Req_MachineEndGrab_t2382967747, ___ballIdStr_12)); }
	inline String_t* get_ballIdStr_12() const { return ___ballIdStr_12; }
	inline String_t** get_address_of_ballIdStr_12() { return &___ballIdStr_12; }
	inline void set_ballIdStr_12(String_t* value)
	{
		___ballIdStr_12 = value;
		Il2CppCodeGenWriteBarrier(&___ballIdStr_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
