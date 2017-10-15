#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// FairyGUI.TextField
struct TextField_t1207703749;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.TypingEffect
struct  TypingEffect_t1565469740  : public Il2CppObject
{
public:
	// FairyGUI.TextField FairyGUI.TypingEffect::_textField
	TextField_t1207703749 * ____textField_0;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> FairyGUI.TypingEffect::_backupVerts
	List_1_t1612828712 * ____backupVerts_1;
	// System.Boolean FairyGUI.TypingEffect::_stroke
	bool ____stroke_2;
	// System.Boolean FairyGUI.TypingEffect::_shadow
	bool ____shadow_3;
	// System.Int32 FairyGUI.TypingEffect::_printIndex
	int32_t ____printIndex_4;
	// System.Int32 FairyGUI.TypingEffect::_mainLayerStart
	int32_t ____mainLayerStart_5;
	// System.Int32 FairyGUI.TypingEffect::_strokeLayerStart
	int32_t ____strokeLayerStart_6;
	// System.Int32 FairyGUI.TypingEffect::_vertIndex
	int32_t ____vertIndex_7;
	// System.Int32 FairyGUI.TypingEffect::_mainLayerVertCount
	int32_t ____mainLayerVertCount_8;
	// System.Boolean FairyGUI.TypingEffect::_started
	bool ____started_9;

public:
	inline static int32_t get_offset_of__textField_0() { return static_cast<int32_t>(offsetof(TypingEffect_t1565469740, ____textField_0)); }
	inline TextField_t1207703749 * get__textField_0() const { return ____textField_0; }
	inline TextField_t1207703749 ** get_address_of__textField_0() { return &____textField_0; }
	inline void set__textField_0(TextField_t1207703749 * value)
	{
		____textField_0 = value;
		Il2CppCodeGenWriteBarrier(&____textField_0, value);
	}

	inline static int32_t get_offset_of__backupVerts_1() { return static_cast<int32_t>(offsetof(TypingEffect_t1565469740, ____backupVerts_1)); }
	inline List_1_t1612828712 * get__backupVerts_1() const { return ____backupVerts_1; }
	inline List_1_t1612828712 ** get_address_of__backupVerts_1() { return &____backupVerts_1; }
	inline void set__backupVerts_1(List_1_t1612828712 * value)
	{
		____backupVerts_1 = value;
		Il2CppCodeGenWriteBarrier(&____backupVerts_1, value);
	}

	inline static int32_t get_offset_of__stroke_2() { return static_cast<int32_t>(offsetof(TypingEffect_t1565469740, ____stroke_2)); }
	inline bool get__stroke_2() const { return ____stroke_2; }
	inline bool* get_address_of__stroke_2() { return &____stroke_2; }
	inline void set__stroke_2(bool value)
	{
		____stroke_2 = value;
	}

	inline static int32_t get_offset_of__shadow_3() { return static_cast<int32_t>(offsetof(TypingEffect_t1565469740, ____shadow_3)); }
	inline bool get__shadow_3() const { return ____shadow_3; }
	inline bool* get_address_of__shadow_3() { return &____shadow_3; }
	inline void set__shadow_3(bool value)
	{
		____shadow_3 = value;
	}

	inline static int32_t get_offset_of__printIndex_4() { return static_cast<int32_t>(offsetof(TypingEffect_t1565469740, ____printIndex_4)); }
	inline int32_t get__printIndex_4() const { return ____printIndex_4; }
	inline int32_t* get_address_of__printIndex_4() { return &____printIndex_4; }
	inline void set__printIndex_4(int32_t value)
	{
		____printIndex_4 = value;
	}

	inline static int32_t get_offset_of__mainLayerStart_5() { return static_cast<int32_t>(offsetof(TypingEffect_t1565469740, ____mainLayerStart_5)); }
	inline int32_t get__mainLayerStart_5() const { return ____mainLayerStart_5; }
	inline int32_t* get_address_of__mainLayerStart_5() { return &____mainLayerStart_5; }
	inline void set__mainLayerStart_5(int32_t value)
	{
		____mainLayerStart_5 = value;
	}

	inline static int32_t get_offset_of__strokeLayerStart_6() { return static_cast<int32_t>(offsetof(TypingEffect_t1565469740, ____strokeLayerStart_6)); }
	inline int32_t get__strokeLayerStart_6() const { return ____strokeLayerStart_6; }
	inline int32_t* get_address_of__strokeLayerStart_6() { return &____strokeLayerStart_6; }
	inline void set__strokeLayerStart_6(int32_t value)
	{
		____strokeLayerStart_6 = value;
	}

	inline static int32_t get_offset_of__vertIndex_7() { return static_cast<int32_t>(offsetof(TypingEffect_t1565469740, ____vertIndex_7)); }
	inline int32_t get__vertIndex_7() const { return ____vertIndex_7; }
	inline int32_t* get_address_of__vertIndex_7() { return &____vertIndex_7; }
	inline void set__vertIndex_7(int32_t value)
	{
		____vertIndex_7 = value;
	}

	inline static int32_t get_offset_of__mainLayerVertCount_8() { return static_cast<int32_t>(offsetof(TypingEffect_t1565469740, ____mainLayerVertCount_8)); }
	inline int32_t get__mainLayerVertCount_8() const { return ____mainLayerVertCount_8; }
	inline int32_t* get_address_of__mainLayerVertCount_8() { return &____mainLayerVertCount_8; }
	inline void set__mainLayerVertCount_8(int32_t value)
	{
		____mainLayerVertCount_8 = value;
	}

	inline static int32_t get_offset_of__started_9() { return static_cast<int32_t>(offsetof(TypingEffect_t1565469740, ____started_9)); }
	inline bool get__started_9() const { return ____started_9; }
	inline bool* get_address_of__started_9() { return &____started_9; }
	inline void set__started_9(bool value)
	{
		____started_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
