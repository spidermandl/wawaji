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

// Req_GetExplainAttention/Response/Info
struct  Info_t1532822933  : public Il2CppObject
{
public:
	// System.String Req_GetExplainAttention/Response/Info::explain
	String_t* ___explain_0;
	// System.String Req_GetExplainAttention/Response/Info::attention
	String_t* ___attention_1;

public:
	inline static int32_t get_offset_of_explain_0() { return static_cast<int32_t>(offsetof(Info_t1532822933, ___explain_0)); }
	inline String_t* get_explain_0() const { return ___explain_0; }
	inline String_t** get_address_of_explain_0() { return &___explain_0; }
	inline void set_explain_0(String_t* value)
	{
		___explain_0 = value;
		Il2CppCodeGenWriteBarrier(&___explain_0, value);
	}

	inline static int32_t get_offset_of_attention_1() { return static_cast<int32_t>(offsetof(Info_t1532822933, ___attention_1)); }
	inline String_t* get_attention_1() const { return ___attention_1; }
	inline String_t** get_address_of_attention_1() { return &___attention_1; }
	inline void set_attention_1(String_t* value)
	{
		___attention_1 = value;
		Il2CppCodeGenWriteBarrier(&___attention_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
