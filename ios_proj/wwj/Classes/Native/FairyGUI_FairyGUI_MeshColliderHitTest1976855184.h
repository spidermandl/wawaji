#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_ColliderHitTest3445595595.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.MeshColliderHitTest
struct  MeshColliderHitTest_t1976855184  : public ColliderHitTest_t3445595595
{
public:
	// System.Single FairyGUI.MeshColliderHitTest::width
	float ___width_1;
	// System.Single FairyGUI.MeshColliderHitTest::height
	float ___height_2;

public:
	inline static int32_t get_offset_of_width_1() { return static_cast<int32_t>(offsetof(MeshColliderHitTest_t1976855184, ___width_1)); }
	inline float get_width_1() const { return ___width_1; }
	inline float* get_address_of_width_1() { return &___width_1; }
	inline void set_width_1(float value)
	{
		___width_1 = value;
	}

	inline static int32_t get_offset_of_height_2() { return static_cast<int32_t>(offsetof(MeshColliderHitTest_t1976855184, ___height_2)); }
	inline float get_height_2() const { return ___height_2; }
	inline float* get_address_of_height_2() { return &___height_2; }
	inline void set_height_2(float value)
	{
		___height_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
