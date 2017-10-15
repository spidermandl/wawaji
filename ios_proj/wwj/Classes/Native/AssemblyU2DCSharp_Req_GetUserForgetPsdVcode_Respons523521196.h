#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Req_GetUserForgetPsdVcode/Response/Data
struct  Data_t523521196  : public Il2CppObject
{
public:
	// System.Int32 Req_GetUserForgetPsdVcode/Response/Data::code
	int32_t ___code_0;
	// System.String Req_GetUserForgetPsdVcode/Response/Data::msg
	String_t* ___msg_1;
	// System.String Req_GetUserForgetPsdVcode/Response/Data::info
	String_t* ___info_2;

public:
	inline static int32_t get_offset_of_code_0() { return static_cast<int32_t>(offsetof(Data_t523521196, ___code_0)); }
	inline int32_t get_code_0() const { return ___code_0; }
	inline int32_t* get_address_of_code_0() { return &___code_0; }
	inline void set_code_0(int32_t value)
	{
		___code_0 = value;
	}

	inline static int32_t get_offset_of_msg_1() { return static_cast<int32_t>(offsetof(Data_t523521196, ___msg_1)); }
	inline String_t* get_msg_1() const { return ___msg_1; }
	inline String_t** get_address_of_msg_1() { return &___msg_1; }
	inline void set_msg_1(String_t* value)
	{
		___msg_1 = value;
		Il2CppCodeGenWriteBarrier(&___msg_1, value);
	}

	inline static int32_t get_offset_of_info_2() { return static_cast<int32_t>(offsetof(Data_t523521196, ___info_2)); }
	inline String_t* get_info_2() const { return ___info_2; }
	inline String_t** get_address_of_info_2() { return &___info_2; }
	inline void set_info_2(String_t* value)
	{
		___info_2 = value;
		Il2CppCodeGenWriteBarrier(&___info_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
