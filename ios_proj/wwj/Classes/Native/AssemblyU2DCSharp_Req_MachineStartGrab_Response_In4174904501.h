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
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Req_MachineStartGrab/Response/Info
struct  Info_t4174904501  : public Il2CppObject
{
public:
	// System.String Req_MachineStartGrab/Response/Info::game_id
	String_t* ___game_id_0;
	// System.Collections.Generic.List`1<System.String> Req_MachineStartGrab/Response/Info::ball_arr
	List_1_t1398341365 * ___ball_arr_1;

public:
	inline static int32_t get_offset_of_game_id_0() { return static_cast<int32_t>(offsetof(Info_t4174904501, ___game_id_0)); }
	inline String_t* get_game_id_0() const { return ___game_id_0; }
	inline String_t** get_address_of_game_id_0() { return &___game_id_0; }
	inline void set_game_id_0(String_t* value)
	{
		___game_id_0 = value;
		Il2CppCodeGenWriteBarrier(&___game_id_0, value);
	}

	inline static int32_t get_offset_of_ball_arr_1() { return static_cast<int32_t>(offsetof(Info_t4174904501, ___ball_arr_1)); }
	inline List_1_t1398341365 * get_ball_arr_1() const { return ___ball_arr_1; }
	inline List_1_t1398341365 ** get_address_of_ball_arr_1() { return &___ball_arr_1; }
	inline void set_ball_arr_1(List_1_t1398341365 * value)
	{
		___ball_arr_1 = value;
		Il2CppCodeGenWriteBarrier(&___ball_arr_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
