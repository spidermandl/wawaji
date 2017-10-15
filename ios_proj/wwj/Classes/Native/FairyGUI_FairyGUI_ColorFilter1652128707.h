#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"

// FairyGUI.DisplayObject
struct DisplayObject_t1069768653;
// System.Single[]
struct SingleU5BU5D_t577127397;
// UnityEngine.Material
struct Material_t193706927;
// System.String[]
struct StringU5BU5D_t1642385972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.ColorFilter
struct  ColorFilter_t1652128707  : public Il2CppObject
{
public:
	// FairyGUI.DisplayObject FairyGUI.ColorFilter::_target
	DisplayObject_t1069768653 * ____target_0;
	// System.Single[] FairyGUI.ColorFilter::_matrix
	SingleU5BU5D_t577127397* ____matrix_1;
	// UnityEngine.Matrix4x4 FairyGUI.ColorFilter::_shaderMatrix
	Matrix4x4_t2933234003  ____shaderMatrix_2;
	// UnityEngine.Vector4 FairyGUI.ColorFilter::_offset
	Vector4_t2243707581  ____offset_3;
	// UnityEngine.Material FairyGUI.ColorFilter::_material
	Material_t193706927 * ____material_4;
	// UnityEngine.Material FairyGUI.ColorFilter::_savedMaterial
	Material_t193706927 * ____savedMaterial_5;

public:
	inline static int32_t get_offset_of__target_0() { return static_cast<int32_t>(offsetof(ColorFilter_t1652128707, ____target_0)); }
	inline DisplayObject_t1069768653 * get__target_0() const { return ____target_0; }
	inline DisplayObject_t1069768653 ** get_address_of__target_0() { return &____target_0; }
	inline void set__target_0(DisplayObject_t1069768653 * value)
	{
		____target_0 = value;
		Il2CppCodeGenWriteBarrier(&____target_0, value);
	}

	inline static int32_t get_offset_of__matrix_1() { return static_cast<int32_t>(offsetof(ColorFilter_t1652128707, ____matrix_1)); }
	inline SingleU5BU5D_t577127397* get__matrix_1() const { return ____matrix_1; }
	inline SingleU5BU5D_t577127397** get_address_of__matrix_1() { return &____matrix_1; }
	inline void set__matrix_1(SingleU5BU5D_t577127397* value)
	{
		____matrix_1 = value;
		Il2CppCodeGenWriteBarrier(&____matrix_1, value);
	}

	inline static int32_t get_offset_of__shaderMatrix_2() { return static_cast<int32_t>(offsetof(ColorFilter_t1652128707, ____shaderMatrix_2)); }
	inline Matrix4x4_t2933234003  get__shaderMatrix_2() const { return ____shaderMatrix_2; }
	inline Matrix4x4_t2933234003 * get_address_of__shaderMatrix_2() { return &____shaderMatrix_2; }
	inline void set__shaderMatrix_2(Matrix4x4_t2933234003  value)
	{
		____shaderMatrix_2 = value;
	}

	inline static int32_t get_offset_of__offset_3() { return static_cast<int32_t>(offsetof(ColorFilter_t1652128707, ____offset_3)); }
	inline Vector4_t2243707581  get__offset_3() const { return ____offset_3; }
	inline Vector4_t2243707581 * get_address_of__offset_3() { return &____offset_3; }
	inline void set__offset_3(Vector4_t2243707581  value)
	{
		____offset_3 = value;
	}

	inline static int32_t get_offset_of__material_4() { return static_cast<int32_t>(offsetof(ColorFilter_t1652128707, ____material_4)); }
	inline Material_t193706927 * get__material_4() const { return ____material_4; }
	inline Material_t193706927 ** get_address_of__material_4() { return &____material_4; }
	inline void set__material_4(Material_t193706927 * value)
	{
		____material_4 = value;
		Il2CppCodeGenWriteBarrier(&____material_4, value);
	}

	inline static int32_t get_offset_of__savedMaterial_5() { return static_cast<int32_t>(offsetof(ColorFilter_t1652128707, ____savedMaterial_5)); }
	inline Material_t193706927 * get__savedMaterial_5() const { return ____savedMaterial_5; }
	inline Material_t193706927 ** get_address_of__savedMaterial_5() { return &____savedMaterial_5; }
	inline void set__savedMaterial_5(Material_t193706927 * value)
	{
		____savedMaterial_5 = value;
		Il2CppCodeGenWriteBarrier(&____savedMaterial_5, value);
	}
};

struct ColorFilter_t1652128707_StaticFields
{
public:
	// System.Single[] FairyGUI.ColorFilter::IDENTITY
	SingleU5BU5D_t577127397* ___IDENTITY_9;
	// System.String[] FairyGUI.ColorFilter::FILTER_KEY
	StringU5BU5D_t1642385972* ___FILTER_KEY_10;
	// System.Single[] FairyGUI.ColorFilter::tmp
	SingleU5BU5D_t577127397* ___tmp_11;

public:
	inline static int32_t get_offset_of_IDENTITY_9() { return static_cast<int32_t>(offsetof(ColorFilter_t1652128707_StaticFields, ___IDENTITY_9)); }
	inline SingleU5BU5D_t577127397* get_IDENTITY_9() const { return ___IDENTITY_9; }
	inline SingleU5BU5D_t577127397** get_address_of_IDENTITY_9() { return &___IDENTITY_9; }
	inline void set_IDENTITY_9(SingleU5BU5D_t577127397* value)
	{
		___IDENTITY_9 = value;
		Il2CppCodeGenWriteBarrier(&___IDENTITY_9, value);
	}

	inline static int32_t get_offset_of_FILTER_KEY_10() { return static_cast<int32_t>(offsetof(ColorFilter_t1652128707_StaticFields, ___FILTER_KEY_10)); }
	inline StringU5BU5D_t1642385972* get_FILTER_KEY_10() const { return ___FILTER_KEY_10; }
	inline StringU5BU5D_t1642385972** get_address_of_FILTER_KEY_10() { return &___FILTER_KEY_10; }
	inline void set_FILTER_KEY_10(StringU5BU5D_t1642385972* value)
	{
		___FILTER_KEY_10 = value;
		Il2CppCodeGenWriteBarrier(&___FILTER_KEY_10, value);
	}

	inline static int32_t get_offset_of_tmp_11() { return static_cast<int32_t>(offsetof(ColorFilter_t1652128707_StaticFields, ___tmp_11)); }
	inline SingleU5BU5D_t577127397* get_tmp_11() const { return ___tmp_11; }
	inline SingleU5BU5D_t577127397** get_address_of_tmp_11() { return &___tmp_11; }
	inline void set_tmp_11(SingleU5BU5D_t577127397* value)
	{
		___tmp_11 = value;
		Il2CppCodeGenWriteBarrier(&___tmp_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
