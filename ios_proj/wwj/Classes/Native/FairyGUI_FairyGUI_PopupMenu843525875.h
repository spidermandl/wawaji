#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// FairyGUI.GComponent
struct GComponent_t4106136290;
// FairyGUI.GList
struct GList_t2527012171;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.PopupMenu
struct  PopupMenu_t843525875  : public Il2CppObject
{
public:
	// FairyGUI.GComponent FairyGUI.PopupMenu::_contentPane
	GComponent_t4106136290 * ____contentPane_0;
	// FairyGUI.GList FairyGUI.PopupMenu::_list
	GList_t2527012171 * ____list_1;

public:
	inline static int32_t get_offset_of__contentPane_0() { return static_cast<int32_t>(offsetof(PopupMenu_t843525875, ____contentPane_0)); }
	inline GComponent_t4106136290 * get__contentPane_0() const { return ____contentPane_0; }
	inline GComponent_t4106136290 ** get_address_of__contentPane_0() { return &____contentPane_0; }
	inline void set__contentPane_0(GComponent_t4106136290 * value)
	{
		____contentPane_0 = value;
		Il2CppCodeGenWriteBarrier(&____contentPane_0, value);
	}

	inline static int32_t get_offset_of__list_1() { return static_cast<int32_t>(offsetof(PopupMenu_t843525875, ____list_1)); }
	inline GList_t2527012171 * get__list_1() const { return ____list_1; }
	inline GList_t2527012171 ** get_address_of__list_1() { return &____list_1; }
	inline void set__list_1(GList_t2527012171 * value)
	{
		____list_1 = value;
		Il2CppCodeGenWriteBarrier(&____list_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
