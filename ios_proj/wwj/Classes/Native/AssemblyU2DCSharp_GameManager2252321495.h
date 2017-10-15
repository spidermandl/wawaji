#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// PathologicalGames.SpawnPool
struct SpawnPool_t2419717525;
// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,GameBallProxy/BallsItem>
struct Dictionary_2_t902009390;
// Picker
struct Picker_t1889162310;
// UnityEngine.Transform
struct Transform_t3275118058;
// MonsterLove.StateMachine.StateMachine`1<GameManager/States>
struct StateMachine_1_t3073175738;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2252321495  : public MonoBehaviour_t1158329972
{
public:
	// PathologicalGames.SpawnPool GameManager::pool
	SpawnPool_t2419717525 * ___pool_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,GameBallProxy/BallsItem> GameManager::balls
	Dictionary_2_t902009390 * ___balls_3;
	// Picker GameManager::picker
	Picker_t1889162310 * ___picker_12;
	// UnityEngine.Transform GameManager::_3dCamera
	Transform_t3275118058 * ____3dCamera_13;
	// MonsterLove.StateMachine.StateMachine`1<GameManager/States> GameManager::cameraStateMachine
	StateMachine_1_t3073175738 * ___cameraStateMachine_16;

public:
	inline static int32_t get_offset_of_pool_2() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___pool_2)); }
	inline SpawnPool_t2419717525 * get_pool_2() const { return ___pool_2; }
	inline SpawnPool_t2419717525 ** get_address_of_pool_2() { return &___pool_2; }
	inline void set_pool_2(SpawnPool_t2419717525 * value)
	{
		___pool_2 = value;
		Il2CppCodeGenWriteBarrier(&___pool_2, value);
	}

	inline static int32_t get_offset_of_balls_3() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___balls_3)); }
	inline Dictionary_2_t902009390 * get_balls_3() const { return ___balls_3; }
	inline Dictionary_2_t902009390 ** get_address_of_balls_3() { return &___balls_3; }
	inline void set_balls_3(Dictionary_2_t902009390 * value)
	{
		___balls_3 = value;
		Il2CppCodeGenWriteBarrier(&___balls_3, value);
	}

	inline static int32_t get_offset_of_picker_12() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___picker_12)); }
	inline Picker_t1889162310 * get_picker_12() const { return ___picker_12; }
	inline Picker_t1889162310 ** get_address_of_picker_12() { return &___picker_12; }
	inline void set_picker_12(Picker_t1889162310 * value)
	{
		___picker_12 = value;
		Il2CppCodeGenWriteBarrier(&___picker_12, value);
	}

	inline static int32_t get_offset_of__3dCamera_13() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ____3dCamera_13)); }
	inline Transform_t3275118058 * get__3dCamera_13() const { return ____3dCamera_13; }
	inline Transform_t3275118058 ** get_address_of__3dCamera_13() { return &____3dCamera_13; }
	inline void set__3dCamera_13(Transform_t3275118058 * value)
	{
		____3dCamera_13 = value;
		Il2CppCodeGenWriteBarrier(&____3dCamera_13, value);
	}

	inline static int32_t get_offset_of_cameraStateMachine_16() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___cameraStateMachine_16)); }
	inline StateMachine_1_t3073175738 * get_cameraStateMachine_16() const { return ___cameraStateMachine_16; }
	inline StateMachine_1_t3073175738 ** get_address_of_cameraStateMachine_16() { return &___cameraStateMachine_16; }
	inline void set_cameraStateMachine_16(StateMachine_1_t3073175738 * value)
	{
		___cameraStateMachine_16 = value;
		Il2CppCodeGenWriteBarrier(&___cameraStateMachine_16, value);
	}
};

struct GameManager_t2252321495_StaticFields
{
public:
	// System.Int32 GameManager::BALL_TOTAL
	int32_t ___BALL_TOTAL_4;

public:
	inline static int32_t get_offset_of_BALL_TOTAL_4() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___BALL_TOTAL_4)); }
	inline int32_t get_BALL_TOTAL_4() const { return ___BALL_TOTAL_4; }
	inline int32_t* get_address_of_BALL_TOTAL_4() { return &___BALL_TOTAL_4; }
	inline void set_BALL_TOTAL_4(int32_t value)
	{
		___BALL_TOTAL_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
