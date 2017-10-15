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

// Req_GetPrizeUseCoin/Response/Info
struct  Info_t3515140334  : public Il2CppObject
{
public:
	// System.String Req_GetPrizeUseCoin/Response/Info::prize_coin
	String_t* ___prize_coin_0;

public:
	inline static int32_t get_offset_of_prize_coin_0() { return static_cast<int32_t>(offsetof(Info_t3515140334, ___prize_coin_0)); }
	inline String_t* get_prize_coin_0() const { return ___prize_coin_0; }
	inline String_t** get_address_of_prize_coin_0() { return &___prize_coin_0; }
	inline void set_prize_coin_0(String_t* value)
	{
		___prize_coin_0 = value;
		Il2CppCodeGenWriteBarrier(&___prize_coin_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
