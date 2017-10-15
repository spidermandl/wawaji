#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UpdatesProxy/ResVersion/Entry[]
struct EntryU5BU5D_t3309956859;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UpdatesProxy/ResVersion/Data
struct  Data_t2615592746  : public Il2CppObject
{
public:
	// UpdatesProxy/ResVersion/Entry[] UpdatesProxy/ResVersion/Data::prize
	EntryU5BU5D_t3309956859* ___prize_0;
	// UpdatesProxy/ResVersion/Entry[] UpdatesProxy/ResVersion/Data::ball
	EntryU5BU5D_t3309956859* ___ball_1;
	// UpdatesProxy/ResVersion/Entry[] UpdatesProxy/ResVersion/Data::raw
	EntryU5BU5D_t3309956859* ___raw_2;

public:
	inline static int32_t get_offset_of_prize_0() { return static_cast<int32_t>(offsetof(Data_t2615592746, ___prize_0)); }
	inline EntryU5BU5D_t3309956859* get_prize_0() const { return ___prize_0; }
	inline EntryU5BU5D_t3309956859** get_address_of_prize_0() { return &___prize_0; }
	inline void set_prize_0(EntryU5BU5D_t3309956859* value)
	{
		___prize_0 = value;
		Il2CppCodeGenWriteBarrier(&___prize_0, value);
	}

	inline static int32_t get_offset_of_ball_1() { return static_cast<int32_t>(offsetof(Data_t2615592746, ___ball_1)); }
	inline EntryU5BU5D_t3309956859* get_ball_1() const { return ___ball_1; }
	inline EntryU5BU5D_t3309956859** get_address_of_ball_1() { return &___ball_1; }
	inline void set_ball_1(EntryU5BU5D_t3309956859* value)
	{
		___ball_1 = value;
		Il2CppCodeGenWriteBarrier(&___ball_1, value);
	}

	inline static int32_t get_offset_of_raw_2() { return static_cast<int32_t>(offsetof(Data_t2615592746, ___raw_2)); }
	inline EntryU5BU5D_t3309956859* get_raw_2() const { return ___raw_2; }
	inline EntryU5BU5D_t3309956859** get_address_of_raw_2() { return &___raw_2; }
	inline void set_raw_2(EntryU5BU5D_t3309956859* value)
	{
		___raw_2 = value;
		Il2CppCodeGenWriteBarrier(&___raw_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
