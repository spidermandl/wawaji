#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "FairyGUI_FairyGUI_TransitionActionType677114067.h"
#include "DOTween_DG_Tweening_Ease2502520296.h"

// System.String
struct String_t;
// FairyGUI.TransitionValue
struct TransitionValue_t4215437146;
// FairyGUI.TransitionHook
struct TransitionHook_t2349169138;
// DG.Tweening.Tween
struct Tween_t278478013;
// FairyGUI.GObject
struct GObject_t2662234644;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.TransitionItem
struct  TransitionItem_t3296900378  : public Il2CppObject
{
public:
	// System.Single FairyGUI.TransitionItem::time
	float ___time_0;
	// System.String FairyGUI.TransitionItem::targetId
	String_t* ___targetId_1;
	// FairyGUI.TransitionActionType FairyGUI.TransitionItem::type
	int32_t ___type_2;
	// System.Single FairyGUI.TransitionItem::duration
	float ___duration_3;
	// FairyGUI.TransitionValue FairyGUI.TransitionItem::value
	TransitionValue_t4215437146 * ___value_4;
	// FairyGUI.TransitionValue FairyGUI.TransitionItem::startValue
	TransitionValue_t4215437146 * ___startValue_5;
	// FairyGUI.TransitionValue FairyGUI.TransitionItem::endValue
	TransitionValue_t4215437146 * ___endValue_6;
	// DG.Tweening.Ease FairyGUI.TransitionItem::easeType
	int32_t ___easeType_7;
	// System.Int32 FairyGUI.TransitionItem::repeat
	int32_t ___repeat_8;
	// System.Boolean FairyGUI.TransitionItem::yoyo
	bool ___yoyo_9;
	// System.Boolean FairyGUI.TransitionItem::tween
	bool ___tween_10;
	// System.String FairyGUI.TransitionItem::label
	String_t* ___label_11;
	// System.String FairyGUI.TransitionItem::label2
	String_t* ___label2_12;
	// FairyGUI.TransitionHook FairyGUI.TransitionItem::hook
	TransitionHook_t2349169138 * ___hook_13;
	// FairyGUI.TransitionHook FairyGUI.TransitionItem::hook2
	TransitionHook_t2349169138 * ___hook2_14;
	// DG.Tweening.Tween FairyGUI.TransitionItem::tweener
	Tween_t278478013 * ___tweener_15;
	// System.Boolean FairyGUI.TransitionItem::completed
	bool ___completed_16;
	// FairyGUI.GObject FairyGUI.TransitionItem::target
	GObject_t2662234644 * ___target_17;
	// System.Boolean FairyGUI.TransitionItem::filterCreated
	bool ___filterCreated_18;
	// System.UInt32 FairyGUI.TransitionItem::displayLockToken
	uint32_t ___displayLockToken_19;

public:
	inline static int32_t get_offset_of_time_0() { return static_cast<int32_t>(offsetof(TransitionItem_t3296900378, ___time_0)); }
	inline float get_time_0() const { return ___time_0; }
	inline float* get_address_of_time_0() { return &___time_0; }
	inline void set_time_0(float value)
	{
		___time_0 = value;
	}

	inline static int32_t get_offset_of_targetId_1() { return static_cast<int32_t>(offsetof(TransitionItem_t3296900378, ___targetId_1)); }
	inline String_t* get_targetId_1() const { return ___targetId_1; }
	inline String_t** get_address_of_targetId_1() { return &___targetId_1; }
	inline void set_targetId_1(String_t* value)
	{
		___targetId_1 = value;
		Il2CppCodeGenWriteBarrier(&___targetId_1, value);
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(TransitionItem_t3296900378, ___type_2)); }
	inline int32_t get_type_2() const { return ___type_2; }
	inline int32_t* get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(int32_t value)
	{
		___type_2 = value;
	}

	inline static int32_t get_offset_of_duration_3() { return static_cast<int32_t>(offsetof(TransitionItem_t3296900378, ___duration_3)); }
	inline float get_duration_3() const { return ___duration_3; }
	inline float* get_address_of_duration_3() { return &___duration_3; }
	inline void set_duration_3(float value)
	{
		___duration_3 = value;
	}

	inline static int32_t get_offset_of_value_4() { return static_cast<int32_t>(offsetof(TransitionItem_t3296900378, ___value_4)); }
	inline TransitionValue_t4215437146 * get_value_4() const { return ___value_4; }
	inline TransitionValue_t4215437146 ** get_address_of_value_4() { return &___value_4; }
	inline void set_value_4(TransitionValue_t4215437146 * value)
	{
		___value_4 = value;
		Il2CppCodeGenWriteBarrier(&___value_4, value);
	}

	inline static int32_t get_offset_of_startValue_5() { return static_cast<int32_t>(offsetof(TransitionItem_t3296900378, ___startValue_5)); }
	inline TransitionValue_t4215437146 * get_startValue_5() const { return ___startValue_5; }
	inline TransitionValue_t4215437146 ** get_address_of_startValue_5() { return &___startValue_5; }
	inline void set_startValue_5(TransitionValue_t4215437146 * value)
	{
		___startValue_5 = value;
		Il2CppCodeGenWriteBarrier(&___startValue_5, value);
	}

	inline static int32_t get_offset_of_endValue_6() { return static_cast<int32_t>(offsetof(TransitionItem_t3296900378, ___endValue_6)); }
	inline TransitionValue_t4215437146 * get_endValue_6() const { return ___endValue_6; }
	inline TransitionValue_t4215437146 ** get_address_of_endValue_6() { return &___endValue_6; }
	inline void set_endValue_6(TransitionValue_t4215437146 * value)
	{
		___endValue_6 = value;
		Il2CppCodeGenWriteBarrier(&___endValue_6, value);
	}

	inline static int32_t get_offset_of_easeType_7() { return static_cast<int32_t>(offsetof(TransitionItem_t3296900378, ___easeType_7)); }
	inline int32_t get_easeType_7() const { return ___easeType_7; }
	inline int32_t* get_address_of_easeType_7() { return &___easeType_7; }
	inline void set_easeType_7(int32_t value)
	{
		___easeType_7 = value;
	}

	inline static int32_t get_offset_of_repeat_8() { return static_cast<int32_t>(offsetof(TransitionItem_t3296900378, ___repeat_8)); }
	inline int32_t get_repeat_8() const { return ___repeat_8; }
	inline int32_t* get_address_of_repeat_8() { return &___repeat_8; }
	inline void set_repeat_8(int32_t value)
	{
		___repeat_8 = value;
	}

	inline static int32_t get_offset_of_yoyo_9() { return static_cast<int32_t>(offsetof(TransitionItem_t3296900378, ___yoyo_9)); }
	inline bool get_yoyo_9() const { return ___yoyo_9; }
	inline bool* get_address_of_yoyo_9() { return &___yoyo_9; }
	inline void set_yoyo_9(bool value)
	{
		___yoyo_9 = value;
	}

	inline static int32_t get_offset_of_tween_10() { return static_cast<int32_t>(offsetof(TransitionItem_t3296900378, ___tween_10)); }
	inline bool get_tween_10() const { return ___tween_10; }
	inline bool* get_address_of_tween_10() { return &___tween_10; }
	inline void set_tween_10(bool value)
	{
		___tween_10 = value;
	}

	inline static int32_t get_offset_of_label_11() { return static_cast<int32_t>(offsetof(TransitionItem_t3296900378, ___label_11)); }
	inline String_t* get_label_11() const { return ___label_11; }
	inline String_t** get_address_of_label_11() { return &___label_11; }
	inline void set_label_11(String_t* value)
	{
		___label_11 = value;
		Il2CppCodeGenWriteBarrier(&___label_11, value);
	}

	inline static int32_t get_offset_of_label2_12() { return static_cast<int32_t>(offsetof(TransitionItem_t3296900378, ___label2_12)); }
	inline String_t* get_label2_12() const { return ___label2_12; }
	inline String_t** get_address_of_label2_12() { return &___label2_12; }
	inline void set_label2_12(String_t* value)
	{
		___label2_12 = value;
		Il2CppCodeGenWriteBarrier(&___label2_12, value);
	}

	inline static int32_t get_offset_of_hook_13() { return static_cast<int32_t>(offsetof(TransitionItem_t3296900378, ___hook_13)); }
	inline TransitionHook_t2349169138 * get_hook_13() const { return ___hook_13; }
	inline TransitionHook_t2349169138 ** get_address_of_hook_13() { return &___hook_13; }
	inline void set_hook_13(TransitionHook_t2349169138 * value)
	{
		___hook_13 = value;
		Il2CppCodeGenWriteBarrier(&___hook_13, value);
	}

	inline static int32_t get_offset_of_hook2_14() { return static_cast<int32_t>(offsetof(TransitionItem_t3296900378, ___hook2_14)); }
	inline TransitionHook_t2349169138 * get_hook2_14() const { return ___hook2_14; }
	inline TransitionHook_t2349169138 ** get_address_of_hook2_14() { return &___hook2_14; }
	inline void set_hook2_14(TransitionHook_t2349169138 * value)
	{
		___hook2_14 = value;
		Il2CppCodeGenWriteBarrier(&___hook2_14, value);
	}

	inline static int32_t get_offset_of_tweener_15() { return static_cast<int32_t>(offsetof(TransitionItem_t3296900378, ___tweener_15)); }
	inline Tween_t278478013 * get_tweener_15() const { return ___tweener_15; }
	inline Tween_t278478013 ** get_address_of_tweener_15() { return &___tweener_15; }
	inline void set_tweener_15(Tween_t278478013 * value)
	{
		___tweener_15 = value;
		Il2CppCodeGenWriteBarrier(&___tweener_15, value);
	}

	inline static int32_t get_offset_of_completed_16() { return static_cast<int32_t>(offsetof(TransitionItem_t3296900378, ___completed_16)); }
	inline bool get_completed_16() const { return ___completed_16; }
	inline bool* get_address_of_completed_16() { return &___completed_16; }
	inline void set_completed_16(bool value)
	{
		___completed_16 = value;
	}

	inline static int32_t get_offset_of_target_17() { return static_cast<int32_t>(offsetof(TransitionItem_t3296900378, ___target_17)); }
	inline GObject_t2662234644 * get_target_17() const { return ___target_17; }
	inline GObject_t2662234644 ** get_address_of_target_17() { return &___target_17; }
	inline void set_target_17(GObject_t2662234644 * value)
	{
		___target_17 = value;
		Il2CppCodeGenWriteBarrier(&___target_17, value);
	}

	inline static int32_t get_offset_of_filterCreated_18() { return static_cast<int32_t>(offsetof(TransitionItem_t3296900378, ___filterCreated_18)); }
	inline bool get_filterCreated_18() const { return ___filterCreated_18; }
	inline bool* get_address_of_filterCreated_18() { return &___filterCreated_18; }
	inline void set_filterCreated_18(bool value)
	{
		___filterCreated_18 = value;
	}

	inline static int32_t get_offset_of_displayLockToken_19() { return static_cast<int32_t>(offsetof(TransitionItem_t3296900378, ___displayLockToken_19)); }
	inline uint32_t get_displayLockToken_19() const { return ___displayLockToken_19; }
	inline uint32_t* get_address_of_displayLockToken_19() { return &___displayLockToken_19; }
	inline void set_displayLockToken_19(uint32_t value)
	{
		___displayLockToken_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
