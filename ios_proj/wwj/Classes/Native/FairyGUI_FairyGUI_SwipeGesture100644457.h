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

// FairyGUI.SwipeGesture
struct  SwipeGesture_t100644457  : public EventDispatcher_t4068415185
{
public:
	// FairyGUI.GObject FairyGUI.SwipeGesture::<host>k__BackingField
	GObject_t2662234644 * ___U3ChostU3Ek__BackingField_2;
	// FairyGUI.EventListener FairyGUI.SwipeGesture::<onBegin>k__BackingField
	EventListener_t2764096410 * ___U3ConBeginU3Ek__BackingField_3;
	// FairyGUI.EventListener FairyGUI.SwipeGesture::<onEnd>k__BackingField
	EventListener_t2764096410 * ___U3ConEndU3Ek__BackingField_4;
	// FairyGUI.EventListener FairyGUI.SwipeGesture::<onMove>k__BackingField
	EventListener_t2764096410 * ___U3ConMoveU3Ek__BackingField_5;
	// FairyGUI.EventListener FairyGUI.SwipeGesture::<onAction>k__BackingField
	EventListener_t2764096410 * ___U3ConActionU3Ek__BackingField_6;
	// UnityEngine.Vector2 FairyGUI.SwipeGesture::velocity
	Vector2_t2243707579  ___velocity_7;
	// UnityEngine.Vector2 FairyGUI.SwipeGesture::position
	Vector2_t2243707579  ___position_8;
	// UnityEngine.Vector2 FairyGUI.SwipeGesture::delta
	Vector2_t2243707579  ___delta_9;
	// System.Int32 FairyGUI.SwipeGesture::actionDistance
	int32_t ___actionDistance_10;
	// System.Boolean FairyGUI.SwipeGesture::snapping
	bool ___snapping_11;
	// UnityEngine.Vector2 FairyGUI.SwipeGesture::_startPoint
	Vector2_t2243707579  ____startPoint_12;
	// UnityEngine.Vector2 FairyGUI.SwipeGesture::_lastPoint
	Vector2_t2243707579  ____lastPoint_13;
	// System.Single FairyGUI.SwipeGesture::_time
	float ____time_14;
	// System.Boolean FairyGUI.SwipeGesture::_started
	bool ____started_15;

public:
	inline static int32_t get_offset_of_U3ChostU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SwipeGesture_t100644457, ___U3ChostU3Ek__BackingField_2)); }
	inline GObject_t2662234644 * get_U3ChostU3Ek__BackingField_2() const { return ___U3ChostU3Ek__BackingField_2; }
	inline GObject_t2662234644 ** get_address_of_U3ChostU3Ek__BackingField_2() { return &___U3ChostU3Ek__BackingField_2; }
	inline void set_U3ChostU3Ek__BackingField_2(GObject_t2662234644 * value)
	{
		___U3ChostU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3ChostU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3ConBeginU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SwipeGesture_t100644457, ___U3ConBeginU3Ek__BackingField_3)); }
	inline EventListener_t2764096410 * get_U3ConBeginU3Ek__BackingField_3() const { return ___U3ConBeginU3Ek__BackingField_3; }
	inline EventListener_t2764096410 ** get_address_of_U3ConBeginU3Ek__BackingField_3() { return &___U3ConBeginU3Ek__BackingField_3; }
	inline void set_U3ConBeginU3Ek__BackingField_3(EventListener_t2764096410 * value)
	{
		___U3ConBeginU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConBeginU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3ConEndU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SwipeGesture_t100644457, ___U3ConEndU3Ek__BackingField_4)); }
	inline EventListener_t2764096410 * get_U3ConEndU3Ek__BackingField_4() const { return ___U3ConEndU3Ek__BackingField_4; }
	inline EventListener_t2764096410 ** get_address_of_U3ConEndU3Ek__BackingField_4() { return &___U3ConEndU3Ek__BackingField_4; }
	inline void set_U3ConEndU3Ek__BackingField_4(EventListener_t2764096410 * value)
	{
		___U3ConEndU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConEndU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3ConMoveU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SwipeGesture_t100644457, ___U3ConMoveU3Ek__BackingField_5)); }
	inline EventListener_t2764096410 * get_U3ConMoveU3Ek__BackingField_5() const { return ___U3ConMoveU3Ek__BackingField_5; }
	inline EventListener_t2764096410 ** get_address_of_U3ConMoveU3Ek__BackingField_5() { return &___U3ConMoveU3Ek__BackingField_5; }
	inline void set_U3ConMoveU3Ek__BackingField_5(EventListener_t2764096410 * value)
	{
		___U3ConMoveU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConMoveU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_U3ConActionU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SwipeGesture_t100644457, ___U3ConActionU3Ek__BackingField_6)); }
	inline EventListener_t2764096410 * get_U3ConActionU3Ek__BackingField_6() const { return ___U3ConActionU3Ek__BackingField_6; }
	inline EventListener_t2764096410 ** get_address_of_U3ConActionU3Ek__BackingField_6() { return &___U3ConActionU3Ek__BackingField_6; }
	inline void set_U3ConActionU3Ek__BackingField_6(EventListener_t2764096410 * value)
	{
		___U3ConActionU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConActionU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_velocity_7() { return static_cast<int32_t>(offsetof(SwipeGesture_t100644457, ___velocity_7)); }
	inline Vector2_t2243707579  get_velocity_7() const { return ___velocity_7; }
	inline Vector2_t2243707579 * get_address_of_velocity_7() { return &___velocity_7; }
	inline void set_velocity_7(Vector2_t2243707579  value)
	{
		___velocity_7 = value;
	}

	inline static int32_t get_offset_of_position_8() { return static_cast<int32_t>(offsetof(SwipeGesture_t100644457, ___position_8)); }
	inline Vector2_t2243707579  get_position_8() const { return ___position_8; }
	inline Vector2_t2243707579 * get_address_of_position_8() { return &___position_8; }
	inline void set_position_8(Vector2_t2243707579  value)
	{
		___position_8 = value;
	}

	inline static int32_t get_offset_of_delta_9() { return static_cast<int32_t>(offsetof(SwipeGesture_t100644457, ___delta_9)); }
	inline Vector2_t2243707579  get_delta_9() const { return ___delta_9; }
	inline Vector2_t2243707579 * get_address_of_delta_9() { return &___delta_9; }
	inline void set_delta_9(Vector2_t2243707579  value)
	{
		___delta_9 = value;
	}

	inline static int32_t get_offset_of_actionDistance_10() { return static_cast<int32_t>(offsetof(SwipeGesture_t100644457, ___actionDistance_10)); }
	inline int32_t get_actionDistance_10() const { return ___actionDistance_10; }
	inline int32_t* get_address_of_actionDistance_10() { return &___actionDistance_10; }
	inline void set_actionDistance_10(int32_t value)
	{
		___actionDistance_10 = value;
	}

	inline static int32_t get_offset_of_snapping_11() { return static_cast<int32_t>(offsetof(SwipeGesture_t100644457, ___snapping_11)); }
	inline bool get_snapping_11() const { return ___snapping_11; }
	inline bool* get_address_of_snapping_11() { return &___snapping_11; }
	inline void set_snapping_11(bool value)
	{
		___snapping_11 = value;
	}

	inline static int32_t get_offset_of__startPoint_12() { return static_cast<int32_t>(offsetof(SwipeGesture_t100644457, ____startPoint_12)); }
	inline Vector2_t2243707579  get__startPoint_12() const { return ____startPoint_12; }
	inline Vector2_t2243707579 * get_address_of__startPoint_12() { return &____startPoint_12; }
	inline void set__startPoint_12(Vector2_t2243707579  value)
	{
		____startPoint_12 = value;
	}

	inline static int32_t get_offset_of__lastPoint_13() { return static_cast<int32_t>(offsetof(SwipeGesture_t100644457, ____lastPoint_13)); }
	inline Vector2_t2243707579  get__lastPoint_13() const { return ____lastPoint_13; }
	inline Vector2_t2243707579 * get_address_of__lastPoint_13() { return &____lastPoint_13; }
	inline void set__lastPoint_13(Vector2_t2243707579  value)
	{
		____lastPoint_13 = value;
	}

	inline static int32_t get_offset_of__time_14() { return static_cast<int32_t>(offsetof(SwipeGesture_t100644457, ____time_14)); }
	inline float get__time_14() const { return ____time_14; }
	inline float* get_address_of__time_14() { return &____time_14; }
	inline void set__time_14(float value)
	{
		____time_14 = value;
	}

	inline static int32_t get_offset_of__started_15() { return static_cast<int32_t>(offsetof(SwipeGesture_t100644457, ____started_15)); }
	inline bool get__started_15() const { return ____started_15; }
	inline bool* get_address_of__started_15() { return &____started_15; }
	inline void set__started_15(bool value)
	{
		____started_15 = value;
	}
};

struct SwipeGesture_t100644457_StaticFields
{
public:
	// System.Int32 FairyGUI.SwipeGesture::ACTION_DISTANCE
	int32_t ___ACTION_DISTANCE_16;

public:
	inline static int32_t get_offset_of_ACTION_DISTANCE_16() { return static_cast<int32_t>(offsetof(SwipeGesture_t100644457_StaticFields, ___ACTION_DISTANCE_16)); }
	inline int32_t get_ACTION_DISTANCE_16() const { return ___ACTION_DISTANCE_16; }
	inline int32_t* get_address_of_ACTION_DISTANCE_16() { return &___ACTION_DISTANCE_16; }
	inline void set_ACTION_DISTANCE_16(int32_t value)
	{
		___ACTION_DISTANCE_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
