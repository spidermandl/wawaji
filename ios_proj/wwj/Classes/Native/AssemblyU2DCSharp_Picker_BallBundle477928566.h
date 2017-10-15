#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Picker/BallBundle
struct  BallBundle_t477928566  : public Il2CppObject
{
public:
	// System.Single Picker/BallBundle::dis
	float ___dis_0;
	// UnityEngine.GameObject Picker/BallBundle::ball
	GameObject_t1756533147 * ___ball_1;

public:
	inline static int32_t get_offset_of_dis_0() { return static_cast<int32_t>(offsetof(BallBundle_t477928566, ___dis_0)); }
	inline float get_dis_0() const { return ___dis_0; }
	inline float* get_address_of_dis_0() { return &___dis_0; }
	inline void set_dis_0(float value)
	{
		___dis_0 = value;
	}

	inline static int32_t get_offset_of_ball_1() { return static_cast<int32_t>(offsetof(BallBundle_t477928566, ___ball_1)); }
	inline GameObject_t1756533147 * get_ball_1() const { return ___ball_1; }
	inline GameObject_t1756533147 ** get_address_of_ball_1() { return &___ball_1; }
	inline void set_ball_1(GameObject_t1756533147 * value)
	{
		___ball_1 = value;
		Il2CppCodeGenWriteBarrier(&___ball_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
