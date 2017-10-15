#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.UIPackage/AtlasSprite
struct  AtlasSprite_t3512169349  : public Il2CppObject
{
public:
	// System.String FairyGUI.UIPackage/AtlasSprite::atlas
	String_t* ___atlas_0;
	// UnityEngine.Rect FairyGUI.UIPackage/AtlasSprite::rect
	Rect_t3681755626  ___rect_1;
	// System.Boolean FairyGUI.UIPackage/AtlasSprite::rotated
	bool ___rotated_2;

public:
	inline static int32_t get_offset_of_atlas_0() { return static_cast<int32_t>(offsetof(AtlasSprite_t3512169349, ___atlas_0)); }
	inline String_t* get_atlas_0() const { return ___atlas_0; }
	inline String_t** get_address_of_atlas_0() { return &___atlas_0; }
	inline void set_atlas_0(String_t* value)
	{
		___atlas_0 = value;
		Il2CppCodeGenWriteBarrier(&___atlas_0, value);
	}

	inline static int32_t get_offset_of_rect_1() { return static_cast<int32_t>(offsetof(AtlasSprite_t3512169349, ___rect_1)); }
	inline Rect_t3681755626  get_rect_1() const { return ___rect_1; }
	inline Rect_t3681755626 * get_address_of_rect_1() { return &___rect_1; }
	inline void set_rect_1(Rect_t3681755626  value)
	{
		___rect_1 = value;
	}

	inline static int32_t get_offset_of_rotated_2() { return static_cast<int32_t>(offsetof(AtlasSprite_t3512169349, ___rotated_2)); }
	inline bool get_rotated_2() const { return ___rotated_2; }
	inline bool* get_address_of_rotated_2() { return &___rotated_2; }
	inline void set_rotated_2(bool value)
	{
		___rotated_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
