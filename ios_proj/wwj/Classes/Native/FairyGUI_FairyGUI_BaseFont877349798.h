#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// FairyGUI.NTexture
struct NTexture_t84202663;
// FairyGUI.PackageItem
struct PackageItem_t1874577185;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.BaseFont
struct  BaseFont_t877349798  : public Il2CppObject
{
public:
	// System.String FairyGUI.BaseFont::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// FairyGUI.NTexture FairyGUI.BaseFont::mainTexture
	NTexture_t84202663 * ___mainTexture_1;
	// System.Boolean FairyGUI.BaseFont::canTint
	bool ___canTint_2;
	// System.Boolean FairyGUI.BaseFont::canLight
	bool ___canLight_3;
	// System.Boolean FairyGUI.BaseFont::canOutline
	bool ___canOutline_4;
	// System.Boolean FairyGUI.BaseFont::hasChannel
	bool ___hasChannel_5;
	// System.Boolean FairyGUI.BaseFont::customBold
	bool ___customBold_6;
	// System.Boolean FairyGUI.BaseFont::customBoldAndItalic
	bool ___customBoldAndItalic_7;
	// System.String FairyGUI.BaseFont::shader
	String_t* ___shader_8;
	// System.Boolean FairyGUI.BaseFont::keepCrisp
	bool ___keepCrisp_9;
	// FairyGUI.PackageItem FairyGUI.BaseFont::packageItem
	PackageItem_t1874577185 * ___packageItem_10;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseFont_t877349798, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CnameU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_mainTexture_1() { return static_cast<int32_t>(offsetof(BaseFont_t877349798, ___mainTexture_1)); }
	inline NTexture_t84202663 * get_mainTexture_1() const { return ___mainTexture_1; }
	inline NTexture_t84202663 ** get_address_of_mainTexture_1() { return &___mainTexture_1; }
	inline void set_mainTexture_1(NTexture_t84202663 * value)
	{
		___mainTexture_1 = value;
		Il2CppCodeGenWriteBarrier(&___mainTexture_1, value);
	}

	inline static int32_t get_offset_of_canTint_2() { return static_cast<int32_t>(offsetof(BaseFont_t877349798, ___canTint_2)); }
	inline bool get_canTint_2() const { return ___canTint_2; }
	inline bool* get_address_of_canTint_2() { return &___canTint_2; }
	inline void set_canTint_2(bool value)
	{
		___canTint_2 = value;
	}

	inline static int32_t get_offset_of_canLight_3() { return static_cast<int32_t>(offsetof(BaseFont_t877349798, ___canLight_3)); }
	inline bool get_canLight_3() const { return ___canLight_3; }
	inline bool* get_address_of_canLight_3() { return &___canLight_3; }
	inline void set_canLight_3(bool value)
	{
		___canLight_3 = value;
	}

	inline static int32_t get_offset_of_canOutline_4() { return static_cast<int32_t>(offsetof(BaseFont_t877349798, ___canOutline_4)); }
	inline bool get_canOutline_4() const { return ___canOutline_4; }
	inline bool* get_address_of_canOutline_4() { return &___canOutline_4; }
	inline void set_canOutline_4(bool value)
	{
		___canOutline_4 = value;
	}

	inline static int32_t get_offset_of_hasChannel_5() { return static_cast<int32_t>(offsetof(BaseFont_t877349798, ___hasChannel_5)); }
	inline bool get_hasChannel_5() const { return ___hasChannel_5; }
	inline bool* get_address_of_hasChannel_5() { return &___hasChannel_5; }
	inline void set_hasChannel_5(bool value)
	{
		___hasChannel_5 = value;
	}

	inline static int32_t get_offset_of_customBold_6() { return static_cast<int32_t>(offsetof(BaseFont_t877349798, ___customBold_6)); }
	inline bool get_customBold_6() const { return ___customBold_6; }
	inline bool* get_address_of_customBold_6() { return &___customBold_6; }
	inline void set_customBold_6(bool value)
	{
		___customBold_6 = value;
	}

	inline static int32_t get_offset_of_customBoldAndItalic_7() { return static_cast<int32_t>(offsetof(BaseFont_t877349798, ___customBoldAndItalic_7)); }
	inline bool get_customBoldAndItalic_7() const { return ___customBoldAndItalic_7; }
	inline bool* get_address_of_customBoldAndItalic_7() { return &___customBoldAndItalic_7; }
	inline void set_customBoldAndItalic_7(bool value)
	{
		___customBoldAndItalic_7 = value;
	}

	inline static int32_t get_offset_of_shader_8() { return static_cast<int32_t>(offsetof(BaseFont_t877349798, ___shader_8)); }
	inline String_t* get_shader_8() const { return ___shader_8; }
	inline String_t** get_address_of_shader_8() { return &___shader_8; }
	inline void set_shader_8(String_t* value)
	{
		___shader_8 = value;
		Il2CppCodeGenWriteBarrier(&___shader_8, value);
	}

	inline static int32_t get_offset_of_keepCrisp_9() { return static_cast<int32_t>(offsetof(BaseFont_t877349798, ___keepCrisp_9)); }
	inline bool get_keepCrisp_9() const { return ___keepCrisp_9; }
	inline bool* get_address_of_keepCrisp_9() { return &___keepCrisp_9; }
	inline void set_keepCrisp_9(bool value)
	{
		___keepCrisp_9 = value;
	}

	inline static int32_t get_offset_of_packageItem_10() { return static_cast<int32_t>(offsetof(BaseFont_t877349798, ___packageItem_10)); }
	inline PackageItem_t1874577185 * get_packageItem_10() const { return ___packageItem_10; }
	inline PackageItem_t1874577185 ** get_address_of_packageItem_10() { return &___packageItem_10; }
	inline void set_packageItem_10(PackageItem_t1874577185 * value)
	{
		___packageItem_10 = value;
		Il2CppCodeGenWriteBarrier(&___packageItem_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
