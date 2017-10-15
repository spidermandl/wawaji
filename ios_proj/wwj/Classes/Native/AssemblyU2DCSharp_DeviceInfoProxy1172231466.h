#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_BaseProxy1490705299.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DeviceInfoProxy
struct  DeviceInfoProxy_t1172231466  : public BaseProxy_t1490705299
{
public:
	// System.Int32 DeviceInfoProxy::type
	int32_t ___type_7;
	// System.String DeviceInfoProxy::uuid
	String_t* ___uuid_8;

public:
	inline static int32_t get_offset_of_type_7() { return static_cast<int32_t>(offsetof(DeviceInfoProxy_t1172231466, ___type_7)); }
	inline int32_t get_type_7() const { return ___type_7; }
	inline int32_t* get_address_of_type_7() { return &___type_7; }
	inline void set_type_7(int32_t value)
	{
		___type_7 = value;
	}

	inline static int32_t get_offset_of_uuid_8() { return static_cast<int32_t>(offsetof(DeviceInfoProxy_t1172231466, ___uuid_8)); }
	inline String_t* get_uuid_8() const { return ___uuid_8; }
	inline String_t** get_address_of_uuid_8() { return &___uuid_8; }
	inline void set_uuid_8(String_t* value)
	{
		___uuid_8 = value;
		Il2CppCodeGenWriteBarrier(&___uuid_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
