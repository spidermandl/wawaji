#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String[]
struct StringU5BU5D_t1642385972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Req_MachineEndGrab/Response/Info
struct  Info_t3771838238  : public Il2CppObject
{
public:
	// System.Int32 Req_MachineEndGrab/Response/Info::coin
	int32_t ___coin_0;
	// System.String[] Req_MachineEndGrab/Response/Info::ball_arr
	StringU5BU5D_t1642385972* ___ball_arr_1;
	// System.Int32 Req_MachineEndGrab/Response/Info::user_prize_log_id
	int32_t ___user_prize_log_id_2;

public:
	inline static int32_t get_offset_of_coin_0() { return static_cast<int32_t>(offsetof(Info_t3771838238, ___coin_0)); }
	inline int32_t get_coin_0() const { return ___coin_0; }
	inline int32_t* get_address_of_coin_0() { return &___coin_0; }
	inline void set_coin_0(int32_t value)
	{
		___coin_0 = value;
	}

	inline static int32_t get_offset_of_ball_arr_1() { return static_cast<int32_t>(offsetof(Info_t3771838238, ___ball_arr_1)); }
	inline StringU5BU5D_t1642385972* get_ball_arr_1() const { return ___ball_arr_1; }
	inline StringU5BU5D_t1642385972** get_address_of_ball_arr_1() { return &___ball_arr_1; }
	inline void set_ball_arr_1(StringU5BU5D_t1642385972* value)
	{
		___ball_arr_1 = value;
		Il2CppCodeGenWriteBarrier(&___ball_arr_1, value);
	}

	inline static int32_t get_offset_of_user_prize_log_id_2() { return static_cast<int32_t>(offsetof(Info_t3771838238, ___user_prize_log_id_2)); }
	inline int32_t get_user_prize_log_id_2() const { return ___user_prize_log_id_2; }
	inline int32_t* get_address_of_user_prize_log_id_2() { return &___user_prize_log_id_2; }
	inline void set_user_prize_log_id_2(int32_t value)
	{
		___user_prize_log_id_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
