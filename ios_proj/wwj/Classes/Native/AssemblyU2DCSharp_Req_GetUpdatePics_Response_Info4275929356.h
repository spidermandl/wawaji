#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Req_GetUpdatePics/Response/Entry[]
struct EntryU5BU5D_t4095601145;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Req_GetUpdatePics/Response/Info
struct  Info_t4275929356  : public Il2CppObject
{
public:
	// Req_GetUpdatePics/Response/Entry[] Req_GetUpdatePics/Response/Info::prize
	EntryU5BU5D_t4095601145* ___prize_0;
	// Req_GetUpdatePics/Response/Entry[] Req_GetUpdatePics/Response/Info::ball
	EntryU5BU5D_t4095601145* ___ball_1;
	// System.Int32 Req_GetUpdatePics/Response/Info::version
	int32_t ___version_2;

public:
	inline static int32_t get_offset_of_prize_0() { return static_cast<int32_t>(offsetof(Info_t4275929356, ___prize_0)); }
	inline EntryU5BU5D_t4095601145* get_prize_0() const { return ___prize_0; }
	inline EntryU5BU5D_t4095601145** get_address_of_prize_0() { return &___prize_0; }
	inline void set_prize_0(EntryU5BU5D_t4095601145* value)
	{
		___prize_0 = value;
		Il2CppCodeGenWriteBarrier(&___prize_0, value);
	}

	inline static int32_t get_offset_of_ball_1() { return static_cast<int32_t>(offsetof(Info_t4275929356, ___ball_1)); }
	inline EntryU5BU5D_t4095601145* get_ball_1() const { return ___ball_1; }
	inline EntryU5BU5D_t4095601145** get_address_of_ball_1() { return &___ball_1; }
	inline void set_ball_1(EntryU5BU5D_t4095601145* value)
	{
		___ball_1 = value;
		Il2CppCodeGenWriteBarrier(&___ball_1, value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Info_t4275929356, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
