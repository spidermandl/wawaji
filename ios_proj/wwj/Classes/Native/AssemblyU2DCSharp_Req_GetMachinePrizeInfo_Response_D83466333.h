﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Req_GetMachinePrizeInfo/Response/Info[]
struct InfoU5BU5D_t803175946;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Req_GetMachinePrizeInfo/Response/Data
struct  Data_t83466333  : public Il2CppObject
{
public:
	// System.Int32 Req_GetMachinePrizeInfo/Response/Data::code
	int32_t ___code_0;
	// Req_GetMachinePrizeInfo/Response/Info[] Req_GetMachinePrizeInfo/Response/Data::info
	InfoU5BU5D_t803175946* ___info_1;
	// System.String Req_GetMachinePrizeInfo/Response/Data::msg
	String_t* ___msg_2;

public:
	inline static int32_t get_offset_of_code_0() { return static_cast<int32_t>(offsetof(Data_t83466333, ___code_0)); }
	inline int32_t get_code_0() const { return ___code_0; }
	inline int32_t* get_address_of_code_0() { return &___code_0; }
	inline void set_code_0(int32_t value)
	{
		___code_0 = value;
	}

	inline static int32_t get_offset_of_info_1() { return static_cast<int32_t>(offsetof(Data_t83466333, ___info_1)); }
	inline InfoU5BU5D_t803175946* get_info_1() const { return ___info_1; }
	inline InfoU5BU5D_t803175946** get_address_of_info_1() { return &___info_1; }
	inline void set_info_1(InfoU5BU5D_t803175946* value)
	{
		___info_1 = value;
		Il2CppCodeGenWriteBarrier(&___info_1, value);
	}

	inline static int32_t get_offset_of_msg_2() { return static_cast<int32_t>(offsetof(Data_t83466333, ___msg_2)); }
	inline String_t* get_msg_2() const { return ___msg_2; }
	inline String_t** get_address_of_msg_2() { return &___msg_2; }
	inline void set_msg_2(String_t* value)
	{
		___msg_2 = value;
		Il2CppCodeGenWriteBarrier(&___msg_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
