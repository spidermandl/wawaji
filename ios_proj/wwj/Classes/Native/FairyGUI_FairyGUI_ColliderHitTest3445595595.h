#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.Collider
struct Collider_t3497673348;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.ColliderHitTest
struct  ColliderHitTest_t3445595595  : public Il2CppObject
{
public:
	// UnityEngine.Collider FairyGUI.ColliderHitTest::collider
	Collider_t3497673348 * ___collider_0;

public:
	inline static int32_t get_offset_of_collider_0() { return static_cast<int32_t>(offsetof(ColliderHitTest_t3445595595, ___collider_0)); }
	inline Collider_t3497673348 * get_collider_0() const { return ___collider_0; }
	inline Collider_t3497673348 ** get_address_of_collider_0() { return &___collider_0; }
	inline void set_collider_0(Collider_t3497673348 * value)
	{
		___collider_0 = value;
		Il2CppCodeGenWriteBarrier(&___collider_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
