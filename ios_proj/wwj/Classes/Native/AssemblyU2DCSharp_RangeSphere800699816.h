#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// RangeSphere/SelectingBall
struct SelectingBall_t3956942226;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RangeSphere
struct  RangeSphere_t800699816  : public MonoBehaviour_t1158329972
{
public:
	// RangeSphere/SelectingBall RangeSphere::_picking
	SelectingBall_t3956942226 * ____picking_2;

public:
	inline static int32_t get_offset_of__picking_2() { return static_cast<int32_t>(offsetof(RangeSphere_t800699816, ____picking_2)); }
	inline SelectingBall_t3956942226 * get__picking_2() const { return ____picking_2; }
	inline SelectingBall_t3956942226 ** get_address_of__picking_2() { return &____picking_2; }
	inline void set__picking_2(SelectingBall_t3956942226 * value)
	{
		____picking_2 = value;
		Il2CppCodeGenWriteBarrier(&____picking_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
