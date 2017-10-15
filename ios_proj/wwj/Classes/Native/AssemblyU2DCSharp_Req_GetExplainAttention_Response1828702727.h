#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Req_GetExplainAttention/Response/Info
struct Info_t1532822933;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Req_GetExplainAttention/Response/Data
struct  Data_t1828702727  : public Il2CppObject
{
public:
	// System.Int32 Req_GetExplainAttention/Response/Data::code
	int32_t ___code_0;
	// Req_GetExplainAttention/Response/Info Req_GetExplainAttention/Response/Data::info
	Info_t1532822933 * ___info_1;

public:
	inline static int32_t get_offset_of_code_0() { return static_cast<int32_t>(offsetof(Data_t1828702727, ___code_0)); }
	inline int32_t get_code_0() const { return ___code_0; }
	inline int32_t* get_address_of_code_0() { return &___code_0; }
	inline void set_code_0(int32_t value)
	{
		___code_0 = value;
	}

	inline static int32_t get_offset_of_info_1() { return static_cast<int32_t>(offsetof(Data_t1828702727, ___info_1)); }
	inline Info_t1532822933 * get_info_1() const { return ___info_1; }
	inline Info_t1532822933 ** get_address_of_info_1() { return &___info_1; }
	inline void set_info_1(Info_t1532822933 * value)
	{
		___info_1 = value;
		Il2CppCodeGenWriteBarrier(&___info_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
