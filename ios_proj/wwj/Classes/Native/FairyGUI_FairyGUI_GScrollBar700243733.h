#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_GComponent4106136290.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// FairyGUI.GObject
struct GObject_t2662234644;
// FairyGUI.ScrollPane
struct ScrollPane_t431787213;
// FairyGUI.EventCallback1
struct EventCallback1_t422277840;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.GScrollBar
struct  GScrollBar_t700243733  : public GComponent_t4106136290
{
public:
	// FairyGUI.GObject FairyGUI.GScrollBar::_grip
	GObject_t2662234644 * ____grip_92;
	// FairyGUI.GObject FairyGUI.GScrollBar::_arrowButton1
	GObject_t2662234644 * ____arrowButton1_93;
	// FairyGUI.GObject FairyGUI.GScrollBar::_arrowButton2
	GObject_t2662234644 * ____arrowButton2_94;
	// FairyGUI.GObject FairyGUI.GScrollBar::_bar
	GObject_t2662234644 * ____bar_95;
	// FairyGUI.ScrollPane FairyGUI.GScrollBar::_target
	ScrollPane_t431787213 * ____target_96;
	// System.Boolean FairyGUI.GScrollBar::_vertical
	bool ____vertical_97;
	// System.Single FairyGUI.GScrollBar::_scrollPerc
	float ____scrollPerc_98;
	// System.Boolean FairyGUI.GScrollBar::_fixedGripSize
	bool ____fixedGripSize_99;
	// UnityEngine.Vector2 FairyGUI.GScrollBar::_dragOffset
	Vector2_t2243707579  ____dragOffset_100;
	// System.Int32 FairyGUI.GScrollBar::_touchId
	int32_t ____touchId_101;
	// FairyGUI.EventCallback1 FairyGUI.GScrollBar::_touchMoveDelegate
	EventCallback1_t422277840 * ____touchMoveDelegate_102;

public:
	inline static int32_t get_offset_of__grip_92() { return static_cast<int32_t>(offsetof(GScrollBar_t700243733, ____grip_92)); }
	inline GObject_t2662234644 * get__grip_92() const { return ____grip_92; }
	inline GObject_t2662234644 ** get_address_of__grip_92() { return &____grip_92; }
	inline void set__grip_92(GObject_t2662234644 * value)
	{
		____grip_92 = value;
		Il2CppCodeGenWriteBarrier(&____grip_92, value);
	}

	inline static int32_t get_offset_of__arrowButton1_93() { return static_cast<int32_t>(offsetof(GScrollBar_t700243733, ____arrowButton1_93)); }
	inline GObject_t2662234644 * get__arrowButton1_93() const { return ____arrowButton1_93; }
	inline GObject_t2662234644 ** get_address_of__arrowButton1_93() { return &____arrowButton1_93; }
	inline void set__arrowButton1_93(GObject_t2662234644 * value)
	{
		____arrowButton1_93 = value;
		Il2CppCodeGenWriteBarrier(&____arrowButton1_93, value);
	}

	inline static int32_t get_offset_of__arrowButton2_94() { return static_cast<int32_t>(offsetof(GScrollBar_t700243733, ____arrowButton2_94)); }
	inline GObject_t2662234644 * get__arrowButton2_94() const { return ____arrowButton2_94; }
	inline GObject_t2662234644 ** get_address_of__arrowButton2_94() { return &____arrowButton2_94; }
	inline void set__arrowButton2_94(GObject_t2662234644 * value)
	{
		____arrowButton2_94 = value;
		Il2CppCodeGenWriteBarrier(&____arrowButton2_94, value);
	}

	inline static int32_t get_offset_of__bar_95() { return static_cast<int32_t>(offsetof(GScrollBar_t700243733, ____bar_95)); }
	inline GObject_t2662234644 * get__bar_95() const { return ____bar_95; }
	inline GObject_t2662234644 ** get_address_of__bar_95() { return &____bar_95; }
	inline void set__bar_95(GObject_t2662234644 * value)
	{
		____bar_95 = value;
		Il2CppCodeGenWriteBarrier(&____bar_95, value);
	}

	inline static int32_t get_offset_of__target_96() { return static_cast<int32_t>(offsetof(GScrollBar_t700243733, ____target_96)); }
	inline ScrollPane_t431787213 * get__target_96() const { return ____target_96; }
	inline ScrollPane_t431787213 ** get_address_of__target_96() { return &____target_96; }
	inline void set__target_96(ScrollPane_t431787213 * value)
	{
		____target_96 = value;
		Il2CppCodeGenWriteBarrier(&____target_96, value);
	}

	inline static int32_t get_offset_of__vertical_97() { return static_cast<int32_t>(offsetof(GScrollBar_t700243733, ____vertical_97)); }
	inline bool get__vertical_97() const { return ____vertical_97; }
	inline bool* get_address_of__vertical_97() { return &____vertical_97; }
	inline void set__vertical_97(bool value)
	{
		____vertical_97 = value;
	}

	inline static int32_t get_offset_of__scrollPerc_98() { return static_cast<int32_t>(offsetof(GScrollBar_t700243733, ____scrollPerc_98)); }
	inline float get__scrollPerc_98() const { return ____scrollPerc_98; }
	inline float* get_address_of__scrollPerc_98() { return &____scrollPerc_98; }
	inline void set__scrollPerc_98(float value)
	{
		____scrollPerc_98 = value;
	}

	inline static int32_t get_offset_of__fixedGripSize_99() { return static_cast<int32_t>(offsetof(GScrollBar_t700243733, ____fixedGripSize_99)); }
	inline bool get__fixedGripSize_99() const { return ____fixedGripSize_99; }
	inline bool* get_address_of__fixedGripSize_99() { return &____fixedGripSize_99; }
	inline void set__fixedGripSize_99(bool value)
	{
		____fixedGripSize_99 = value;
	}

	inline static int32_t get_offset_of__dragOffset_100() { return static_cast<int32_t>(offsetof(GScrollBar_t700243733, ____dragOffset_100)); }
	inline Vector2_t2243707579  get__dragOffset_100() const { return ____dragOffset_100; }
	inline Vector2_t2243707579 * get_address_of__dragOffset_100() { return &____dragOffset_100; }
	inline void set__dragOffset_100(Vector2_t2243707579  value)
	{
		____dragOffset_100 = value;
	}

	inline static int32_t get_offset_of__touchId_101() { return static_cast<int32_t>(offsetof(GScrollBar_t700243733, ____touchId_101)); }
	inline int32_t get__touchId_101() const { return ____touchId_101; }
	inline int32_t* get_address_of__touchId_101() { return &____touchId_101; }
	inline void set__touchId_101(int32_t value)
	{
		____touchId_101 = value;
	}

	inline static int32_t get_offset_of__touchMoveDelegate_102() { return static_cast<int32_t>(offsetof(GScrollBar_t700243733, ____touchMoveDelegate_102)); }
	inline EventCallback1_t422277840 * get__touchMoveDelegate_102() const { return ____touchMoveDelegate_102; }
	inline EventCallback1_t422277840 ** get_address_of__touchMoveDelegate_102() { return &____touchMoveDelegate_102; }
	inline void set__touchMoveDelegate_102(EventCallback1_t422277840 * value)
	{
		____touchMoveDelegate_102 = value;
		Il2CppCodeGenWriteBarrier(&____touchMoveDelegate_102, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
