#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RingFence
struct  RingFence_t3382043263  : public MonoBehaviour_t1158329972
{
public:
	// System.Single RingFence::radius
	float ___radius_2;
	// System.Int32 RingFence::divide
	int32_t ___divide_3;

public:
	inline static int32_t get_offset_of_radius_2() { return static_cast<int32_t>(offsetof(RingFence_t3382043263, ___radius_2)); }
	inline float get_radius_2() const { return ___radius_2; }
	inline float* get_address_of_radius_2() { return &___radius_2; }
	inline void set_radius_2(float value)
	{
		___radius_2 = value;
	}

	inline static int32_t get_offset_of_divide_3() { return static_cast<int32_t>(offsetof(RingFence_t3382043263, ___divide_3)); }
	inline int32_t get_divide_3() const { return ___divide_3; }
	inline int32_t* get_address_of_divide_3() { return &___divide_3; }
	inline void set_divide_3(int32_t value)
	{
		___divide_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
