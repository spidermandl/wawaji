#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_BaseProxy1490705299.h"

// System.String
struct String_t;
// System.Collections.Generic.List`1<GameBallProxy/BallsItem>
struct List_1_t529475617;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// GameBallProxy/Answer
struct Answer_t3120038084;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameBallProxy
struct  GameBallProxy_t2168316623  : public BaseProxy_t1490705299
{
public:
	// System.Int32 GameBallProxy::num
	int32_t ___num_7;
	// System.Int32 GameBallProxy::countDown
	int32_t ___countDown_8;
	// System.Collections.Generic.List`1<GameBallProxy/BallsItem> GameBallProxy::items
	List_1_t529475617 * ___items_9;
	// System.Int32 GameBallProxy::game_id
	int32_t ___game_id_10;
	// System.Int32[] GameBallProxy::ball_arr
	Int32U5BU5D_t3030399641* ___ball_arr_11;
	// GameBallProxy/Answer GameBallProxy::result
	Answer_t3120038084 * ___result_12;

public:
	inline static int32_t get_offset_of_num_7() { return static_cast<int32_t>(offsetof(GameBallProxy_t2168316623, ___num_7)); }
	inline int32_t get_num_7() const { return ___num_7; }
	inline int32_t* get_address_of_num_7() { return &___num_7; }
	inline void set_num_7(int32_t value)
	{
		___num_7 = value;
	}

	inline static int32_t get_offset_of_countDown_8() { return static_cast<int32_t>(offsetof(GameBallProxy_t2168316623, ___countDown_8)); }
	inline int32_t get_countDown_8() const { return ___countDown_8; }
	inline int32_t* get_address_of_countDown_8() { return &___countDown_8; }
	inline void set_countDown_8(int32_t value)
	{
		___countDown_8 = value;
	}

	inline static int32_t get_offset_of_items_9() { return static_cast<int32_t>(offsetof(GameBallProxy_t2168316623, ___items_9)); }
	inline List_1_t529475617 * get_items_9() const { return ___items_9; }
	inline List_1_t529475617 ** get_address_of_items_9() { return &___items_9; }
	inline void set_items_9(List_1_t529475617 * value)
	{
		___items_9 = value;
		Il2CppCodeGenWriteBarrier(&___items_9, value);
	}

	inline static int32_t get_offset_of_game_id_10() { return static_cast<int32_t>(offsetof(GameBallProxy_t2168316623, ___game_id_10)); }
	inline int32_t get_game_id_10() const { return ___game_id_10; }
	inline int32_t* get_address_of_game_id_10() { return &___game_id_10; }
	inline void set_game_id_10(int32_t value)
	{
		___game_id_10 = value;
	}

	inline static int32_t get_offset_of_ball_arr_11() { return static_cast<int32_t>(offsetof(GameBallProxy_t2168316623, ___ball_arr_11)); }
	inline Int32U5BU5D_t3030399641* get_ball_arr_11() const { return ___ball_arr_11; }
	inline Int32U5BU5D_t3030399641** get_address_of_ball_arr_11() { return &___ball_arr_11; }
	inline void set_ball_arr_11(Int32U5BU5D_t3030399641* value)
	{
		___ball_arr_11 = value;
		Il2CppCodeGenWriteBarrier(&___ball_arr_11, value);
	}

	inline static int32_t get_offset_of_result_12() { return static_cast<int32_t>(offsetof(GameBallProxy_t2168316623, ___result_12)); }
	inline Answer_t3120038084 * get_result_12() const { return ___result_12; }
	inline Answer_t3120038084 ** get_address_of_result_12() { return &___result_12; }
	inline void set_result_12(Answer_t3120038084 * value)
	{
		___result_12 = value;
		Il2CppCodeGenWriteBarrier(&___result_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
