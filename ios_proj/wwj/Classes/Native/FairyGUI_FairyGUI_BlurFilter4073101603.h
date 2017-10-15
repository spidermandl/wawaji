#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// FairyGUI.DisplayObject
struct DisplayObject_t1069768653;
// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.BlurFilter
struct  BlurFilter_t4073101603  : public Il2CppObject
{
public:
	// System.Single FairyGUI.BlurFilter::blurSize
	float ___blurSize_0;
	// FairyGUI.DisplayObject FairyGUI.BlurFilter::_target
	DisplayObject_t1069768653 * ____target_1;
	// UnityEngine.Material FairyGUI.BlurFilter::_blitMaterial
	Material_t193706927 * ____blitMaterial_2;

public:
	inline static int32_t get_offset_of_blurSize_0() { return static_cast<int32_t>(offsetof(BlurFilter_t4073101603, ___blurSize_0)); }
	inline float get_blurSize_0() const { return ___blurSize_0; }
	inline float* get_address_of_blurSize_0() { return &___blurSize_0; }
	inline void set_blurSize_0(float value)
	{
		___blurSize_0 = value;
	}

	inline static int32_t get_offset_of__target_1() { return static_cast<int32_t>(offsetof(BlurFilter_t4073101603, ____target_1)); }
	inline DisplayObject_t1069768653 * get__target_1() const { return ____target_1; }
	inline DisplayObject_t1069768653 ** get_address_of__target_1() { return &____target_1; }
	inline void set__target_1(DisplayObject_t1069768653 * value)
	{
		____target_1 = value;
		Il2CppCodeGenWriteBarrier(&____target_1, value);
	}

	inline static int32_t get_offset_of__blitMaterial_2() { return static_cast<int32_t>(offsetof(BlurFilter_t4073101603, ____blitMaterial_2)); }
	inline Material_t193706927 * get__blitMaterial_2() const { return ____blitMaterial_2; }
	inline Material_t193706927 ** get_address_of__blitMaterial_2() { return &____blitMaterial_2; }
	inline void set__blitMaterial_2(Material_t193706927 * value)
	{
		____blitMaterial_2 = value;
		Il2CppCodeGenWriteBarrier(&____blitMaterial_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
