#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// GameBallProxy/BallsItem[]
struct BallsItemU5BU5D_t1598022360;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameBallProxy/Answer
struct  Answer_t3120038084  : public Il2CppObject
{
public:
	// GameBallProxy/BallsItem[] GameBallProxy/Answer::prizes
	BallsItemU5BU5D_t1598022360* ___prizes_0;
	// System.Int32 GameBallProxy/Answer::coin
	int32_t ___coin_1;
	// System.Int32 GameBallProxy/Answer::type
	int32_t ___type_2;

public:
	inline static int32_t get_offset_of_prizes_0() { return static_cast<int32_t>(offsetof(Answer_t3120038084, ___prizes_0)); }
	inline BallsItemU5BU5D_t1598022360* get_prizes_0() const { return ___prizes_0; }
	inline BallsItemU5BU5D_t1598022360** get_address_of_prizes_0() { return &___prizes_0; }
	inline void set_prizes_0(BallsItemU5BU5D_t1598022360* value)
	{
		___prizes_0 = value;
		Il2CppCodeGenWriteBarrier(&___prizes_0, value);
	}

	inline static int32_t get_offset_of_coin_1() { return static_cast<int32_t>(offsetof(Answer_t3120038084, ___coin_1)); }
	inline int32_t get_coin_1() const { return ___coin_1; }
	inline int32_t* get_address_of_coin_1() { return &___coin_1; }
	inline void set_coin_1(int32_t value)
	{
		___coin_1 = value;
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(Answer_t3120038084, ___type_2)); }
	inline int32_t get_type_2() const { return ___type_2; }
	inline int32_t* get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(int32_t value)
	{
		___type_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
