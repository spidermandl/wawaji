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

// Req_GetUpdatePics
struct  Req_GetUpdatePics_t1118469089  : public Request_t2032498015
{
public:
	// System.String Req_GetUpdatePics::_api
	String_t* ____api_10;
	// System.Int32 Req_GetUpdatePics::version
	int32_t ___version_11;

public:
	inline static int32_t get_offset_of__api_10() { return static_cast<int32_t>(offsetof(Req_GetUpdatePics_t1118469089, ____api_10)); }
	inline String_t* get__api_10() const { return ____api_10; }
	inline String_t** get_address_of__api_10() { return &____api_10; }
	inline void set__api_10(String_t* value)
	{
		____api_10 = value;
		Il2CppCodeGenWriteBarrier(&____api_10, value);
	}

	inline static int32_t get_offset_of_version_11() { return static_cast<int32_t>(offsetof(Req_GetUpdatePics_t1118469089, ___version_11)); }
	inline int32_t get_version_11() const { return ___version_11; }
	inline int32_t* get_address_of_version_11() { return &___version_11; }
	inline void set_version_11(int32_t value)
	{
		___version_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
