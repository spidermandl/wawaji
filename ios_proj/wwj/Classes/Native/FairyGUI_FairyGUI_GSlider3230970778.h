#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_GComponent4106136290.h"
#include "FairyGUI_FairyGUI_ProgressTitleType720796751.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// FairyGUI.GTextField
struct GTextField_t2527516740;
// FairyGUI.GObject
struct GObject_t2662234644;
// FairyGUI.EventCallback1
struct EventCallback1_t422277840;
// FairyGUI.EventListener
struct EventListener_t2764096410;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.GSlider
struct  GSlider_t3230970778  : public GComponent_t4106136290
{
public:
	// System.Double FairyGUI.GSlider::_max
	double ____max_92;
	// System.Double FairyGUI.GSlider::_value
	double ____value_93;
	// FairyGUI.ProgressTitleType FairyGUI.GSlider::_titleType
	int32_t ____titleType_94;
	// System.Boolean FairyGUI.GSlider::_reverse
	bool ____reverse_95;
	// FairyGUI.GTextField FairyGUI.GSlider::_titleObject
	GTextField_t2527516740 * ____titleObject_96;
	// FairyGUI.GObject FairyGUI.GSlider::_barObjectH
	GObject_t2662234644 * ____barObjectH_97;
	// FairyGUI.GObject FairyGUI.GSlider::_barObjectV
	GObject_t2662234644 * ____barObjectV_98;
	// System.Single FairyGUI.GSlider::_barMaxWidth
	float ____barMaxWidth_99;
	// System.Single FairyGUI.GSlider::_barMaxHeight
	float ____barMaxHeight_100;
	// System.Single FairyGUI.GSlider::_barMaxWidthDelta
	float ____barMaxWidthDelta_101;
	// System.Single FairyGUI.GSlider::_barMaxHeightDelta
	float ____barMaxHeightDelta_102;
	// FairyGUI.GObject FairyGUI.GSlider::_gripObject
	GObject_t2662234644 * ____gripObject_103;
	// UnityEngine.Vector2 FairyGUI.GSlider::_clickPos
	Vector2_t2243707579  ____clickPos_104;
	// System.Single FairyGUI.GSlider::_clickPercent
	float ____clickPercent_105;
	// System.Int32 FairyGUI.GSlider::_touchId
	int32_t ____touchId_106;
	// System.Single FairyGUI.GSlider::_barStartX
	float ____barStartX_107;
	// System.Single FairyGUI.GSlider::_barStartY
	float ____barStartY_108;
	// System.Boolean FairyGUI.GSlider::changeOnClick
	bool ___changeOnClick_109;
	// System.Boolean FairyGUI.GSlider::canDrag
	bool ___canDrag_110;
	// FairyGUI.EventCallback1 FairyGUI.GSlider::_touchMoveDelegate
	EventCallback1_t422277840 * ____touchMoveDelegate_111;
	// FairyGUI.EventListener FairyGUI.GSlider::<onChanged>k__BackingField
	EventListener_t2764096410 * ___U3ConChangedU3Ek__BackingField_112;
	// FairyGUI.EventListener FairyGUI.GSlider::<onGripTouchEnd>k__BackingField
	EventListener_t2764096410 * ___U3ConGripTouchEndU3Ek__BackingField_113;

public:
	inline static int32_t get_offset_of__max_92() { return static_cast<int32_t>(offsetof(GSlider_t3230970778, ____max_92)); }
	inline double get__max_92() const { return ____max_92; }
	inline double* get_address_of__max_92() { return &____max_92; }
	inline void set__max_92(double value)
	{
		____max_92 = value;
	}

	inline static int32_t get_offset_of__value_93() { return static_cast<int32_t>(offsetof(GSlider_t3230970778, ____value_93)); }
	inline double get__value_93() const { return ____value_93; }
	inline double* get_address_of__value_93() { return &____value_93; }
	inline void set__value_93(double value)
	{
		____value_93 = value;
	}

	inline static int32_t get_offset_of__titleType_94() { return static_cast<int32_t>(offsetof(GSlider_t3230970778, ____titleType_94)); }
	inline int32_t get__titleType_94() const { return ____titleType_94; }
	inline int32_t* get_address_of__titleType_94() { return &____titleType_94; }
	inline void set__titleType_94(int32_t value)
	{
		____titleType_94 = value;
	}

	inline static int32_t get_offset_of__reverse_95() { return static_cast<int32_t>(offsetof(GSlider_t3230970778, ____reverse_95)); }
	inline bool get__reverse_95() const { return ____reverse_95; }
	inline bool* get_address_of__reverse_95() { return &____reverse_95; }
	inline void set__reverse_95(bool value)
	{
		____reverse_95 = value;
	}

	inline static int32_t get_offset_of__titleObject_96() { return static_cast<int32_t>(offsetof(GSlider_t3230970778, ____titleObject_96)); }
	inline GTextField_t2527516740 * get__titleObject_96() const { return ____titleObject_96; }
	inline GTextField_t2527516740 ** get_address_of__titleObject_96() { return &____titleObject_96; }
	inline void set__titleObject_96(GTextField_t2527516740 * value)
	{
		____titleObject_96 = value;
		Il2CppCodeGenWriteBarrier(&____titleObject_96, value);
	}

	inline static int32_t get_offset_of__barObjectH_97() { return static_cast<int32_t>(offsetof(GSlider_t3230970778, ____barObjectH_97)); }
	inline GObject_t2662234644 * get__barObjectH_97() const { return ____barObjectH_97; }
	inline GObject_t2662234644 ** get_address_of__barObjectH_97() { return &____barObjectH_97; }
	inline void set__barObjectH_97(GObject_t2662234644 * value)
	{
		____barObjectH_97 = value;
		Il2CppCodeGenWriteBarrier(&____barObjectH_97, value);
	}

	inline static int32_t get_offset_of__barObjectV_98() { return static_cast<int32_t>(offsetof(GSlider_t3230970778, ____barObjectV_98)); }
	inline GObject_t2662234644 * get__barObjectV_98() const { return ____barObjectV_98; }
	inline GObject_t2662234644 ** get_address_of__barObjectV_98() { return &____barObjectV_98; }
	inline void set__barObjectV_98(GObject_t2662234644 * value)
	{
		____barObjectV_98 = value;
		Il2CppCodeGenWriteBarrier(&____barObjectV_98, value);
	}

	inline static int32_t get_offset_of__barMaxWidth_99() { return static_cast<int32_t>(offsetof(GSlider_t3230970778, ____barMaxWidth_99)); }
	inline float get__barMaxWidth_99() const { return ____barMaxWidth_99; }
	inline float* get_address_of__barMaxWidth_99() { return &____barMaxWidth_99; }
	inline void set__barMaxWidth_99(float value)
	{
		____barMaxWidth_99 = value;
	}

	inline static int32_t get_offset_of__barMaxHeight_100() { return static_cast<int32_t>(offsetof(GSlider_t3230970778, ____barMaxHeight_100)); }
	inline float get__barMaxHeight_100() const { return ____barMaxHeight_100; }
	inline float* get_address_of__barMaxHeight_100() { return &____barMaxHeight_100; }
	inline void set__barMaxHeight_100(float value)
	{
		____barMaxHeight_100 = value;
	}

	inline static int32_t get_offset_of__barMaxWidthDelta_101() { return static_cast<int32_t>(offsetof(GSlider_t3230970778, ____barMaxWidthDelta_101)); }
	inline float get__barMaxWidthDelta_101() const { return ____barMaxWidthDelta_101; }
	inline float* get_address_of__barMaxWidthDelta_101() { return &____barMaxWidthDelta_101; }
	inline void set__barMaxWidthDelta_101(float value)
	{
		____barMaxWidthDelta_101 = value;
	}

	inline static int32_t get_offset_of__barMaxHeightDelta_102() { return static_cast<int32_t>(offsetof(GSlider_t3230970778, ____barMaxHeightDelta_102)); }
	inline float get__barMaxHeightDelta_102() const { return ____barMaxHeightDelta_102; }
	inline float* get_address_of__barMaxHeightDelta_102() { return &____barMaxHeightDelta_102; }
	inline void set__barMaxHeightDelta_102(float value)
	{
		____barMaxHeightDelta_102 = value;
	}

	inline static int32_t get_offset_of__gripObject_103() { return static_cast<int32_t>(offsetof(GSlider_t3230970778, ____gripObject_103)); }
	inline GObject_t2662234644 * get__gripObject_103() const { return ____gripObject_103; }
	inline GObject_t2662234644 ** get_address_of__gripObject_103() { return &____gripObject_103; }
	inline void set__gripObject_103(GObject_t2662234644 * value)
	{
		____gripObject_103 = value;
		Il2CppCodeGenWriteBarrier(&____gripObject_103, value);
	}

	inline static int32_t get_offset_of__clickPos_104() { return static_cast<int32_t>(offsetof(GSlider_t3230970778, ____clickPos_104)); }
	inline Vector2_t2243707579  get__clickPos_104() const { return ____clickPos_104; }
	inline Vector2_t2243707579 * get_address_of__clickPos_104() { return &____clickPos_104; }
	inline void set__clickPos_104(Vector2_t2243707579  value)
	{
		____clickPos_104 = value;
	}

	inline static int32_t get_offset_of__clickPercent_105() { return static_cast<int32_t>(offsetof(GSlider_t3230970778, ____clickPercent_105)); }
	inline float get__clickPercent_105() const { return ____clickPercent_105; }
	inline float* get_address_of__clickPercent_105() { return &____clickPercent_105; }
	inline void set__clickPercent_105(float value)
	{
		____clickPercent_105 = value;
	}

	inline static int32_t get_offset_of__touchId_106() { return static_cast<int32_t>(offsetof(GSlider_t3230970778, ____touchId_106)); }
	inline int32_t get__touchId_106() const { return ____touchId_106; }
	inline int32_t* get_address_of__touchId_106() { return &____touchId_106; }
	inline void set__touchId_106(int32_t value)
	{
		____touchId_106 = value;
	}

	inline static int32_t get_offset_of__barStartX_107() { return static_cast<int32_t>(offsetof(GSlider_t3230970778, ____barStartX_107)); }
	inline float get__barStartX_107() const { return ____barStartX_107; }
	inline float* get_address_of__barStartX_107() { return &____barStartX_107; }
	inline void set__barStartX_107(float value)
	{
		____barStartX_107 = value;
	}

	inline static int32_t get_offset_of__barStartY_108() { return static_cast<int32_t>(offsetof(GSlider_t3230970778, ____barStartY_108)); }
	inline float get__barStartY_108() const { return ____barStartY_108; }
	inline float* get_address_of__barStartY_108() { return &____barStartY_108; }
	inline void set__barStartY_108(float value)
	{
		____barStartY_108 = value;
	}

	inline static int32_t get_offset_of_changeOnClick_109() { return static_cast<int32_t>(offsetof(GSlider_t3230970778, ___changeOnClick_109)); }
	inline bool get_changeOnClick_109() const { return ___changeOnClick_109; }
	inline bool* get_address_of_changeOnClick_109() { return &___changeOnClick_109; }
	inline void set_changeOnClick_109(bool value)
	{
		___changeOnClick_109 = value;
	}

	inline static int32_t get_offset_of_canDrag_110() { return static_cast<int32_t>(offsetof(GSlider_t3230970778, ___canDrag_110)); }
	inline bool get_canDrag_110() const { return ___canDrag_110; }
	inline bool* get_address_of_canDrag_110() { return &___canDrag_110; }
	inline void set_canDrag_110(bool value)
	{
		___canDrag_110 = value;
	}

	inline static int32_t get_offset_of__touchMoveDelegate_111() { return static_cast<int32_t>(offsetof(GSlider_t3230970778, ____touchMoveDelegate_111)); }
	inline EventCallback1_t422277840 * get__touchMoveDelegate_111() const { return ____touchMoveDelegate_111; }
	inline EventCallback1_t422277840 ** get_address_of__touchMoveDelegate_111() { return &____touchMoveDelegate_111; }
	inline void set__touchMoveDelegate_111(EventCallback1_t422277840 * value)
	{
		____touchMoveDelegate_111 = value;
		Il2CppCodeGenWriteBarrier(&____touchMoveDelegate_111, value);
	}

	inline static int32_t get_offset_of_U3ConChangedU3Ek__BackingField_112() { return static_cast<int32_t>(offsetof(GSlider_t3230970778, ___U3ConChangedU3Ek__BackingField_112)); }
	inline EventListener_t2764096410 * get_U3ConChangedU3Ek__BackingField_112() const { return ___U3ConChangedU3Ek__BackingField_112; }
	inline EventListener_t2764096410 ** get_address_of_U3ConChangedU3Ek__BackingField_112() { return &___U3ConChangedU3Ek__BackingField_112; }
	inline void set_U3ConChangedU3Ek__BackingField_112(EventListener_t2764096410 * value)
	{
		___U3ConChangedU3Ek__BackingField_112 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConChangedU3Ek__BackingField_112, value);
	}

	inline static int32_t get_offset_of_U3ConGripTouchEndU3Ek__BackingField_113() { return static_cast<int32_t>(offsetof(GSlider_t3230970778, ___U3ConGripTouchEndU3Ek__BackingField_113)); }
	inline EventListener_t2764096410 * get_U3ConGripTouchEndU3Ek__BackingField_113() const { return ___U3ConGripTouchEndU3Ek__BackingField_113; }
	inline EventListener_t2764096410 ** get_address_of_U3ConGripTouchEndU3Ek__BackingField_113() { return &___U3ConGripTouchEndU3Ek__BackingField_113; }
	inline void set_U3ConGripTouchEndU3Ek__BackingField_113(EventListener_t2764096410 * value)
	{
		___U3ConGripTouchEndU3Ek__BackingField_113 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConGripTouchEndU3Ek__BackingField_113, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
