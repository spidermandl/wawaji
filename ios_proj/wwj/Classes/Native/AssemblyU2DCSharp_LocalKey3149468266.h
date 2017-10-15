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

// LocalKey
struct  LocalKey_t3149468266  : public Il2CppObject
{
public:

public:
};

struct LocalKey_t3149468266_StaticFields
{
public:
	// System.String LocalKey::TOKEN
	String_t* ___TOKEN_0;
	// System.String LocalKey::USERID
	String_t* ___USERID_1;

public:
	inline static int32_t get_offset_of_TOKEN_0() { return static_cast<int32_t>(offsetof(LocalKey_t3149468266_StaticFields, ___TOKEN_0)); }
	inline String_t* get_TOKEN_0() const { return ___TOKEN_0; }
	inline String_t** get_address_of_TOKEN_0() { return &___TOKEN_0; }
	inline void set_TOKEN_0(String_t* value)
	{
		___TOKEN_0 = value;
		Il2CppCodeGenWriteBarrier(&___TOKEN_0, value);
	}

	inline static int32_t get_offset_of_USERID_1() { return static_cast<int32_t>(offsetof(LocalKey_t3149468266_StaticFields, ___USERID_1)); }
	inline String_t* get_USERID_1() const { return ___USERID_1; }
	inline String_t** get_address_of_USERID_1() { return &___USERID_1; }
	inline void set_USERID_1(String_t* value)
	{
		___USERID_1 = value;
		Il2CppCodeGenWriteBarrier(&___USERID_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
