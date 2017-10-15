#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.UpdateContext/ClipInfo
struct  ClipInfo_t128403627 
{
public:
	// UnityEngine.Rect FairyGUI.UpdateContext/ClipInfo::rect
	Rect_t3681755626  ___rect_0;
	// UnityEngine.Vector4 FairyGUI.UpdateContext/ClipInfo::clipBox
	Vector4_t2243707581  ___clipBox_1;
	// System.Boolean FairyGUI.UpdateContext/ClipInfo::soft
	bool ___soft_2;
	// UnityEngine.Vector4 FairyGUI.UpdateContext/ClipInfo::softness
	Vector4_t2243707581  ___softness_3;
	// System.UInt32 FairyGUI.UpdateContext/ClipInfo::clipId
	uint32_t ___clipId_4;
	// System.Boolean FairyGUI.UpdateContext/ClipInfo::stencil
	bool ___stencil_5;
	// System.Boolean FairyGUI.UpdateContext/ClipInfo::reversedMask
	bool ___reversedMask_6;

public:
	inline static int32_t get_offset_of_rect_0() { return static_cast<int32_t>(offsetof(ClipInfo_t128403627, ___rect_0)); }
	inline Rect_t3681755626  get_rect_0() const { return ___rect_0; }
	inline Rect_t3681755626 * get_address_of_rect_0() { return &___rect_0; }
	inline void set_rect_0(Rect_t3681755626  value)
	{
		___rect_0 = value;
	}

	inline static int32_t get_offset_of_clipBox_1() { return static_cast<int32_t>(offsetof(ClipInfo_t128403627, ___clipBox_1)); }
	inline Vector4_t2243707581  get_clipBox_1() const { return ___clipBox_1; }
	inline Vector4_t2243707581 * get_address_of_clipBox_1() { return &___clipBox_1; }
	inline void set_clipBox_1(Vector4_t2243707581  value)
	{
		___clipBox_1 = value;
	}

	inline static int32_t get_offset_of_soft_2() { return static_cast<int32_t>(offsetof(ClipInfo_t128403627, ___soft_2)); }
	inline bool get_soft_2() const { return ___soft_2; }
	inline bool* get_address_of_soft_2() { return &___soft_2; }
	inline void set_soft_2(bool value)
	{
		___soft_2 = value;
	}

	inline static int32_t get_offset_of_softness_3() { return static_cast<int32_t>(offsetof(ClipInfo_t128403627, ___softness_3)); }
	inline Vector4_t2243707581  get_softness_3() const { return ___softness_3; }
	inline Vector4_t2243707581 * get_address_of_softness_3() { return &___softness_3; }
	inline void set_softness_3(Vector4_t2243707581  value)
	{
		___softness_3 = value;
	}

	inline static int32_t get_offset_of_clipId_4() { return static_cast<int32_t>(offsetof(ClipInfo_t128403627, ___clipId_4)); }
	inline uint32_t get_clipId_4() const { return ___clipId_4; }
	inline uint32_t* get_address_of_clipId_4() { return &___clipId_4; }
	inline void set_clipId_4(uint32_t value)
	{
		___clipId_4 = value;
	}

	inline static int32_t get_offset_of_stencil_5() { return static_cast<int32_t>(offsetof(ClipInfo_t128403627, ___stencil_5)); }
	inline bool get_stencil_5() const { return ___stencil_5; }
	inline bool* get_address_of_stencil_5() { return &___stencil_5; }
	inline void set_stencil_5(bool value)
	{
		___stencil_5 = value;
	}

	inline static int32_t get_offset_of_reversedMask_6() { return static_cast<int32_t>(offsetof(ClipInfo_t128403627, ___reversedMask_6)); }
	inline bool get_reversedMask_6() const { return ___reversedMask_6; }
	inline bool* get_address_of_reversedMask_6() { return &___reversedMask_6; }
	inline void set_reversedMask_6(bool value)
	{
		___reversedMask_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of FairyGUI.UpdateContext/ClipInfo
struct ClipInfo_t128403627_marshaled_pinvoke
{
	Rect_t3681755626  ___rect_0;
	Vector4_t2243707581  ___clipBox_1;
	int32_t ___soft_2;
	Vector4_t2243707581  ___softness_3;
	uint32_t ___clipId_4;
	int32_t ___stencil_5;
	int32_t ___reversedMask_6;
};
// Native definition for COM marshalling of FairyGUI.UpdateContext/ClipInfo
struct ClipInfo_t128403627_marshaled_com
{
	Rect_t3681755626  ___rect_0;
	Vector4_t2243707581  ___clipBox_1;
	int32_t ___soft_2;
	Vector4_t2243707581  ___softness_3;
	uint32_t ___clipId_4;
	int32_t ___stencil_5;
	int32_t ___reversedMask_6;
};
