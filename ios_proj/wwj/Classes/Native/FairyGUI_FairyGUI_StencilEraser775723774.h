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
// UnityEngine.MeshFilter
struct MeshFilter_t3026937449;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.StencilEraser
struct  StencilEraser_t775723774  : public Il2CppObject
{
public:
	// UnityEngine.GameObject FairyGUI.StencilEraser::gameObject
	GameObject_t1756533147 * ___gameObject_0;
	// UnityEngine.MeshFilter FairyGUI.StencilEraser::meshFilter
	MeshFilter_t3026937449 * ___meshFilter_1;
	// UnityEngine.MeshRenderer FairyGUI.StencilEraser::meshRenderer
	MeshRenderer_t1268241104 * ___meshRenderer_2;

public:
	inline static int32_t get_offset_of_gameObject_0() { return static_cast<int32_t>(offsetof(StencilEraser_t775723774, ___gameObject_0)); }
	inline GameObject_t1756533147 * get_gameObject_0() const { return ___gameObject_0; }
	inline GameObject_t1756533147 ** get_address_of_gameObject_0() { return &___gameObject_0; }
	inline void set_gameObject_0(GameObject_t1756533147 * value)
	{
		___gameObject_0 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_0, value);
	}

	inline static int32_t get_offset_of_meshFilter_1() { return static_cast<int32_t>(offsetof(StencilEraser_t775723774, ___meshFilter_1)); }
	inline MeshFilter_t3026937449 * get_meshFilter_1() const { return ___meshFilter_1; }
	inline MeshFilter_t3026937449 ** get_address_of_meshFilter_1() { return &___meshFilter_1; }
	inline void set_meshFilter_1(MeshFilter_t3026937449 * value)
	{
		___meshFilter_1 = value;
		Il2CppCodeGenWriteBarrier(&___meshFilter_1, value);
	}

	inline static int32_t get_offset_of_meshRenderer_2() { return static_cast<int32_t>(offsetof(StencilEraser_t775723774, ___meshRenderer_2)); }
	inline MeshRenderer_t1268241104 * get_meshRenderer_2() const { return ___meshRenderer_2; }
	inline MeshRenderer_t1268241104 ** get_address_of_meshRenderer_2() { return &___meshRenderer_2; }
	inline void set_meshRenderer_2(MeshRenderer_t1268241104 * value)
	{
		___meshRenderer_2 = value;
		Il2CppCodeGenWriteBarrier(&___meshRenderer_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
