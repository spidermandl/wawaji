#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_MachineSelection_Action706816272.h"

// FairyGUI.GList
struct GList_t2527012171;
// FairyGUI.GButton
struct GButton_t337864779;
// FairyGUI.GComponent
struct GComponent_t4106136290;
// MachineInfoProxy
struct MachineInfoProxy_t2135355597;
// MachineInfoProxy/TypeAndItem[]
struct TypeAndItemU5BU5D_t1069315843;
// MachineSelection/EnterGame
struct EnterGame_t3032962226;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MachineSelection
struct  MachineSelection_t2904596515  : public Il2CppObject
{
public:
	// FairyGUI.GList MachineSelection::_list
	GList_t2527012171 * ____list_0;
	// FairyGUI.GButton MachineSelection::b_coin_1
	GButton_t337864779 * ___b_coin_1_1;
	// FairyGUI.GButton MachineSelection::b_coin_5
	GButton_t337864779 * ___b_coin_5_2;
	// FairyGUI.GButton MachineSelection::b_coin_10
	GButton_t337864779 * ___b_coin_10_3;
	// FairyGUI.GComponent MachineSelection::_left_arrow
	GComponent_t4106136290 * ____left_arrow_4;
	// FairyGUI.GComponent MachineSelection::_right_arrow
	GComponent_t4106136290 * ____right_arrow_5;
	// MachineInfoProxy MachineSelection::m_proxy
	MachineInfoProxy_t2135355597 * ___m_proxy_6;
	// MachineInfoProxy/TypeAndItem[] MachineSelection::machine_list
	TypeAndItemU5BU5D_t1069315843* ___machine_list_7;
	// System.Int32 MachineSelection::item_index
	int32_t ___item_index_8;
	// MachineSelection/Action MachineSelection::action
	int32_t ___action_9;
	// MachineSelection/EnterGame MachineSelection::_enterGame
	EnterGame_t3032962226 * ____enterGame_10;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(MachineSelection_t2904596515, ____list_0)); }
	inline GList_t2527012171 * get__list_0() const { return ____list_0; }
	inline GList_t2527012171 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(GList_t2527012171 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier(&____list_0, value);
	}

	inline static int32_t get_offset_of_b_coin_1_1() { return static_cast<int32_t>(offsetof(MachineSelection_t2904596515, ___b_coin_1_1)); }
	inline GButton_t337864779 * get_b_coin_1_1() const { return ___b_coin_1_1; }
	inline GButton_t337864779 ** get_address_of_b_coin_1_1() { return &___b_coin_1_1; }
	inline void set_b_coin_1_1(GButton_t337864779 * value)
	{
		___b_coin_1_1 = value;
		Il2CppCodeGenWriteBarrier(&___b_coin_1_1, value);
	}

	inline static int32_t get_offset_of_b_coin_5_2() { return static_cast<int32_t>(offsetof(MachineSelection_t2904596515, ___b_coin_5_2)); }
	inline GButton_t337864779 * get_b_coin_5_2() const { return ___b_coin_5_2; }
	inline GButton_t337864779 ** get_address_of_b_coin_5_2() { return &___b_coin_5_2; }
	inline void set_b_coin_5_2(GButton_t337864779 * value)
	{
		___b_coin_5_2 = value;
		Il2CppCodeGenWriteBarrier(&___b_coin_5_2, value);
	}

	inline static int32_t get_offset_of_b_coin_10_3() { return static_cast<int32_t>(offsetof(MachineSelection_t2904596515, ___b_coin_10_3)); }
	inline GButton_t337864779 * get_b_coin_10_3() const { return ___b_coin_10_3; }
	inline GButton_t337864779 ** get_address_of_b_coin_10_3() { return &___b_coin_10_3; }
	inline void set_b_coin_10_3(GButton_t337864779 * value)
	{
		___b_coin_10_3 = value;
		Il2CppCodeGenWriteBarrier(&___b_coin_10_3, value);
	}

	inline static int32_t get_offset_of__left_arrow_4() { return static_cast<int32_t>(offsetof(MachineSelection_t2904596515, ____left_arrow_4)); }
	inline GComponent_t4106136290 * get__left_arrow_4() const { return ____left_arrow_4; }
	inline GComponent_t4106136290 ** get_address_of__left_arrow_4() { return &____left_arrow_4; }
	inline void set__left_arrow_4(GComponent_t4106136290 * value)
	{
		____left_arrow_4 = value;
		Il2CppCodeGenWriteBarrier(&____left_arrow_4, value);
	}

	inline static int32_t get_offset_of__right_arrow_5() { return static_cast<int32_t>(offsetof(MachineSelection_t2904596515, ____right_arrow_5)); }
	inline GComponent_t4106136290 * get__right_arrow_5() const { return ____right_arrow_5; }
	inline GComponent_t4106136290 ** get_address_of__right_arrow_5() { return &____right_arrow_5; }
	inline void set__right_arrow_5(GComponent_t4106136290 * value)
	{
		____right_arrow_5 = value;
		Il2CppCodeGenWriteBarrier(&____right_arrow_5, value);
	}

	inline static int32_t get_offset_of_m_proxy_6() { return static_cast<int32_t>(offsetof(MachineSelection_t2904596515, ___m_proxy_6)); }
	inline MachineInfoProxy_t2135355597 * get_m_proxy_6() const { return ___m_proxy_6; }
	inline MachineInfoProxy_t2135355597 ** get_address_of_m_proxy_6() { return &___m_proxy_6; }
	inline void set_m_proxy_6(MachineInfoProxy_t2135355597 * value)
	{
		___m_proxy_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_proxy_6, value);
	}

	inline static int32_t get_offset_of_machine_list_7() { return static_cast<int32_t>(offsetof(MachineSelection_t2904596515, ___machine_list_7)); }
	inline TypeAndItemU5BU5D_t1069315843* get_machine_list_7() const { return ___machine_list_7; }
	inline TypeAndItemU5BU5D_t1069315843** get_address_of_machine_list_7() { return &___machine_list_7; }
	inline void set_machine_list_7(TypeAndItemU5BU5D_t1069315843* value)
	{
		___machine_list_7 = value;
		Il2CppCodeGenWriteBarrier(&___machine_list_7, value);
	}

	inline static int32_t get_offset_of_item_index_8() { return static_cast<int32_t>(offsetof(MachineSelection_t2904596515, ___item_index_8)); }
	inline int32_t get_item_index_8() const { return ___item_index_8; }
	inline int32_t* get_address_of_item_index_8() { return &___item_index_8; }
	inline void set_item_index_8(int32_t value)
	{
		___item_index_8 = value;
	}

	inline static int32_t get_offset_of_action_9() { return static_cast<int32_t>(offsetof(MachineSelection_t2904596515, ___action_9)); }
	inline int32_t get_action_9() const { return ___action_9; }
	inline int32_t* get_address_of_action_9() { return &___action_9; }
	inline void set_action_9(int32_t value)
	{
		___action_9 = value;
	}

	inline static int32_t get_offset_of__enterGame_10() { return static_cast<int32_t>(offsetof(MachineSelection_t2904596515, ____enterGame_10)); }
	inline EnterGame_t3032962226 * get__enterGame_10() const { return ____enterGame_10; }
	inline EnterGame_t3032962226 ** get_address_of__enterGame_10() { return &____enterGame_10; }
	inline void set__enterGame_10(EnterGame_t3032962226 * value)
	{
		____enterGame_10 = value;
		Il2CppCodeGenWriteBarrier(&____enterGame_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
