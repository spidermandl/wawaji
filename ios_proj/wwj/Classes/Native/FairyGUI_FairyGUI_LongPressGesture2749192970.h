#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_EventDispatcher4068415185.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// FairyGUI.GObject
struct GObject_t2662234644;
// FairyGUI.EventListener
struct EventListener_t2764096410;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.LongPressGesture
struct  LongPressGesture_t2749192970  : public EventDispatcher_t4068415185
{
public:
	// FairyGUI.GObject FairyGUI.LongPressGesture::<host>k__BackingField
	GObject_t2662234644 * ___U3ChostU3Ek__BackingField_2;
	// FairyGUI.EventListener FairyGUI.LongPressGesture::<onBegin>k__BackingField
	EventListener_t2764096410 * ___U3ConBeginU3Ek__BackingField_3;
	// FairyGUI.EventListener FairyGUI.LongPressGesture::<onEnd>k__BackingField
	EventListener_t2764096410 * ___U3ConEndU3Ek__BackingField_4;
	// FairyGUI.EventListener FairyGUI.LongPressGesture::<onAction>k__BackingField
	EventListener_t2764096410 * ___U3ConActionU3Ek__BackingField_5;
	// System.Single FairyGUI.LongPressGesture::trigger
	float ___trigger_6;
	// System.Single FairyGUI.LongPressGesture::interval
	float ___interval_7;
	// System.Boolean FairyGUI.LongPressGesture::once
	bool ___once_8;
	// System.Int32 FairyGUI.LongPressGesture::holdRangeRadius
	int32_t ___holdRangeRadius_9;
	// UnityEngine.Vector2 FairyGUI.LongPressGesture::_startPoint
	Vector2_t2243707579  ____startPoint_10;
	// System.Boolean FairyGUI.LongPressGesture::_started
	bool ____started_11;

public:
	inline static int32_t get_offset_of_U3ChostU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(LongPressGesture_t2749192970, ___U3ChostU3Ek__BackingField_2)); }
	inline GObject_t2662234644 * get_U3ChostU3Ek__BackingField_2() const { return ___U3ChostU3Ek__BackingField_2; }
	inline GObject_t2662234644 ** get_address_of_U3ChostU3Ek__BackingField_2() { return &___U3ChostU3Ek__BackingField_2; }
	inline void set_U3ChostU3Ek__BackingField_2(GObject_t2662234644 * value)
	{
		___U3ChostU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3ChostU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3ConBeginU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LongPressGesture_t2749192970, ___U3ConBeginU3Ek__BackingField_3)); }
	inline EventListener_t2764096410 * get_U3ConBeginU3Ek__BackingField_3() const { return ___U3ConBeginU3Ek__BackingField_3; }
	inline EventListener_t2764096410 ** get_address_of_U3ConBeginU3Ek__BackingField_3() { return &___U3ConBeginU3Ek__BackingField_3; }
	inline void set_U3ConBeginU3Ek__BackingField_3(EventListener_t2764096410 * value)
	{
		___U3ConBeginU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConBeginU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3ConEndU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(LongPressGesture_t2749192970, ___U3ConEndU3Ek__BackingField_4)); }
	inline EventListener_t2764096410 * get_U3ConEndU3Ek__BackingField_4() const { return ___U3ConEndU3Ek__BackingField_4; }
	inline EventListener_t2764096410 ** get_address_of_U3ConEndU3Ek__BackingField_4() { return &___U3ConEndU3Ek__BackingField_4; }
	inline void set_U3ConEndU3Ek__BackingField_4(EventListener_t2764096410 * value)
	{
		___U3ConEndU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConEndU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3ConActionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(LongPressGesture_t2749192970, ___U3ConActionU3Ek__BackingField_5)); }
	inline EventListener_t2764096410 * get_U3ConActionU3Ek__BackingField_5() const { return ___U3ConActionU3Ek__BackingField_5; }
	inline EventListener_t2764096410 ** get_address_of_U3ConActionU3Ek__BackingField_5() { return &___U3ConActionU3Ek__BackingField_5; }
	inline void set_U3ConActionU3Ek__BackingField_5(EventListener_t2764096410 * value)
	{
		___U3ConActionU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConActionU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_trigger_6() { return static_cast<int32_t>(offsetof(LongPressGesture_t2749192970, ___trigger_6)); }
	inline float get_trigger_6() const { return ___trigger_6; }
	inline float* get_address_of_trigger_6() { return &___trigger_6; }
	inline void set_trigger_6(float value)
	{
		___trigger_6 = value;
	}

	inline static int32_t get_offset_of_interval_7() { return static_cast<int32_t>(offsetof(LongPressGesture_t2749192970, ___interval_7)); }
	inline float get_interval_7() const { return ___interval_7; }
	inline float* get_address_of_interval_7() { return &___interval_7; }
	inline void set_interval_7(float value)
	{
		___interval_7 = value;
	}

	inline static int32_t get_offset_of_once_8() { return static_cast<int32_t>(offsetof(LongPressGesture_t2749192970, ___once_8)); }
	inline bool get_once_8() const { return ___once_8; }
	inline bool* get_address_of_once_8() { return &___once_8; }
	inline void set_once_8(bool value)
	{
		___once_8 = value;
	}

	inline static int32_t get_offset_of_holdRangeRadius_9() { return static_cast<int32_t>(offsetof(LongPressGesture_t2749192970, ___holdRangeRadius_9)); }
	inline int32_t get_holdRangeRadius_9() const { return ___holdRangeRadius_9; }
	inline int32_t* get_address_of_holdRangeRadius_9() { return &___holdRangeRadius_9; }
	inline void set_holdRangeRadius_9(int32_t value)
	{
		___holdRangeRadius_9 = value;
	}

	inline static int32_t get_offset_of__startPoint_10() { return static_cast<int32_t>(offsetof(LongPressGesture_t2749192970, ____startPoint_10)); }
	inline Vector2_t2243707579  get__startPoint_10() const { return ____startPoint_10; }
	inline Vector2_t2243707579 * get_address_of__startPoint_10() { return &____startPoint_10; }
	inline void set__startPoint_10(Vector2_t2243707579  value)
	{
		____startPoint_10 = value;
	}

	inline static int32_t get_offset_of__started_11() { return static_cast<int32_t>(offsetof(LongPressGesture_t2749192970, ____started_11)); }
	inline bool get__started_11() const { return ____started_11; }
	inline bool* get_address_of__started_11() { return &____started_11; }
	inline void set__started_11(bool value)
	{
		____started_11 = value;
	}
};

struct LongPressGesture_t2749192970_StaticFields
{
public:
	// System.Single FairyGUI.LongPressGesture::TRIGGER
	float ___TRIGGER_12;
	// System.Single FairyGUI.LongPressGesture::INTERVAL
	float ___INTERVAL_13;

public:
	inline static int32_t get_offset_of_TRIGGER_12() { return static_cast<int32_t>(offsetof(LongPressGesture_t2749192970_StaticFields, ___TRIGGER_12)); }
	inline float get_TRIGGER_12() const { return ___TRIGGER_12; }
	inline float* get_address_of_TRIGGER_12() { return &___TRIGGER_12; }
	inline void set_TRIGGER_12(float value)
	{
		___TRIGGER_12 = value;
	}

	inline static int32_t get_offset_of_INTERVAL_13() { return static_cast<int32_t>(offsetof(LongPressGesture_t2749192970_StaticFields, ___INTERVAL_13)); }
	inline float get_INTERVAL_13() const { return ___INTERVAL_13; }
	inline float* get_address_of_INTERVAL_13() { return &___INTERVAL_13; }
	inline void set_INTERVAL_13(float value)
	{
		___INTERVAL_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
