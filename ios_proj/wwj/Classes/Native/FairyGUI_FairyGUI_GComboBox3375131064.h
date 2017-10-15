#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_GComponent4106136290.h"

// FairyGUI.EventListener
struct EventListener_t2764096410;
// FairyGUI.GComponent
struct GComponent_t4106136290;
// FairyGUI.GObject
struct GObject_t2662234644;
// FairyGUI.GList
struct GList_t2527012171;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.String
struct String_t;
// FairyGUI.Controller
struct Controller_t4051336914;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.GComboBox
struct  GComboBox_t3375131064  : public GComponent_t4106136290
{
public:
	// System.Int32 FairyGUI.GComboBox::visibleItemCount
	int32_t ___visibleItemCount_92;
	// FairyGUI.EventListener FairyGUI.GComboBox::<onChanged>k__BackingField
	EventListener_t2764096410 * ___U3ConChangedU3Ek__BackingField_93;
	// FairyGUI.GComponent FairyGUI.GComboBox::dropdown
	GComponent_t4106136290 * ___dropdown_94;
	// FairyGUI.GObject FairyGUI.GComboBox::_titleObject
	GObject_t2662234644 * ____titleObject_95;
	// FairyGUI.GObject FairyGUI.GComboBox::_iconObject
	GObject_t2662234644 * ____iconObject_96;
	// FairyGUI.GList FairyGUI.GComboBox::_list
	GList_t2527012171 * ____list_97;
	// System.String[] FairyGUI.GComboBox::_items
	StringU5BU5D_t1642385972* ____items_98;
	// System.String[] FairyGUI.GComboBox::_icons
	StringU5BU5D_t1642385972* ____icons_99;
	// System.String[] FairyGUI.GComboBox::_values
	StringU5BU5D_t1642385972* ____values_100;
	// System.String FairyGUI.GComboBox::_popupDirection
	String_t* ____popupDirection_101;
	// FairyGUI.Controller FairyGUI.GComboBox::_selectionController
	Controller_t4051336914 * ____selectionController_102;
	// System.Boolean FairyGUI.GComboBox::_itemsUpdated
	bool ____itemsUpdated_103;
	// System.Int32 FairyGUI.GComboBox::_selectedIndex
	int32_t ____selectedIndex_104;
	// FairyGUI.Controller FairyGUI.GComboBox::_buttonController
	Controller_t4051336914 * ____buttonController_105;
	// System.Boolean FairyGUI.GComboBox::_down
	bool ____down_106;
	// System.Boolean FairyGUI.GComboBox::_over
	bool ____over_107;

public:
	inline static int32_t get_offset_of_visibleItemCount_92() { return static_cast<int32_t>(offsetof(GComboBox_t3375131064, ___visibleItemCount_92)); }
	inline int32_t get_visibleItemCount_92() const { return ___visibleItemCount_92; }
	inline int32_t* get_address_of_visibleItemCount_92() { return &___visibleItemCount_92; }
	inline void set_visibleItemCount_92(int32_t value)
	{
		___visibleItemCount_92 = value;
	}

	inline static int32_t get_offset_of_U3ConChangedU3Ek__BackingField_93() { return static_cast<int32_t>(offsetof(GComboBox_t3375131064, ___U3ConChangedU3Ek__BackingField_93)); }
	inline EventListener_t2764096410 * get_U3ConChangedU3Ek__BackingField_93() const { return ___U3ConChangedU3Ek__BackingField_93; }
	inline EventListener_t2764096410 ** get_address_of_U3ConChangedU3Ek__BackingField_93() { return &___U3ConChangedU3Ek__BackingField_93; }
	inline void set_U3ConChangedU3Ek__BackingField_93(EventListener_t2764096410 * value)
	{
		___U3ConChangedU3Ek__BackingField_93 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConChangedU3Ek__BackingField_93, value);
	}

	inline static int32_t get_offset_of_dropdown_94() { return static_cast<int32_t>(offsetof(GComboBox_t3375131064, ___dropdown_94)); }
	inline GComponent_t4106136290 * get_dropdown_94() const { return ___dropdown_94; }
	inline GComponent_t4106136290 ** get_address_of_dropdown_94() { return &___dropdown_94; }
	inline void set_dropdown_94(GComponent_t4106136290 * value)
	{
		___dropdown_94 = value;
		Il2CppCodeGenWriteBarrier(&___dropdown_94, value);
	}

	inline static int32_t get_offset_of__titleObject_95() { return static_cast<int32_t>(offsetof(GComboBox_t3375131064, ____titleObject_95)); }
	inline GObject_t2662234644 * get__titleObject_95() const { return ____titleObject_95; }
	inline GObject_t2662234644 ** get_address_of__titleObject_95() { return &____titleObject_95; }
	inline void set__titleObject_95(GObject_t2662234644 * value)
	{
		____titleObject_95 = value;
		Il2CppCodeGenWriteBarrier(&____titleObject_95, value);
	}

	inline static int32_t get_offset_of__iconObject_96() { return static_cast<int32_t>(offsetof(GComboBox_t3375131064, ____iconObject_96)); }
	inline GObject_t2662234644 * get__iconObject_96() const { return ____iconObject_96; }
	inline GObject_t2662234644 ** get_address_of__iconObject_96() { return &____iconObject_96; }
	inline void set__iconObject_96(GObject_t2662234644 * value)
	{
		____iconObject_96 = value;
		Il2CppCodeGenWriteBarrier(&____iconObject_96, value);
	}

	inline static int32_t get_offset_of__list_97() { return static_cast<int32_t>(offsetof(GComboBox_t3375131064, ____list_97)); }
	inline GList_t2527012171 * get__list_97() const { return ____list_97; }
	inline GList_t2527012171 ** get_address_of__list_97() { return &____list_97; }
	inline void set__list_97(GList_t2527012171 * value)
	{
		____list_97 = value;
		Il2CppCodeGenWriteBarrier(&____list_97, value);
	}

	inline static int32_t get_offset_of__items_98() { return static_cast<int32_t>(offsetof(GComboBox_t3375131064, ____items_98)); }
	inline StringU5BU5D_t1642385972* get__items_98() const { return ____items_98; }
	inline StringU5BU5D_t1642385972** get_address_of__items_98() { return &____items_98; }
	inline void set__items_98(StringU5BU5D_t1642385972* value)
	{
		____items_98 = value;
		Il2CppCodeGenWriteBarrier(&____items_98, value);
	}

	inline static int32_t get_offset_of__icons_99() { return static_cast<int32_t>(offsetof(GComboBox_t3375131064, ____icons_99)); }
	inline StringU5BU5D_t1642385972* get__icons_99() const { return ____icons_99; }
	inline StringU5BU5D_t1642385972** get_address_of__icons_99() { return &____icons_99; }
	inline void set__icons_99(StringU5BU5D_t1642385972* value)
	{
		____icons_99 = value;
		Il2CppCodeGenWriteBarrier(&____icons_99, value);
	}

	inline static int32_t get_offset_of__values_100() { return static_cast<int32_t>(offsetof(GComboBox_t3375131064, ____values_100)); }
	inline StringU5BU5D_t1642385972* get__values_100() const { return ____values_100; }
	inline StringU5BU5D_t1642385972** get_address_of__values_100() { return &____values_100; }
	inline void set__values_100(StringU5BU5D_t1642385972* value)
	{
		____values_100 = value;
		Il2CppCodeGenWriteBarrier(&____values_100, value);
	}

	inline static int32_t get_offset_of__popupDirection_101() { return static_cast<int32_t>(offsetof(GComboBox_t3375131064, ____popupDirection_101)); }
	inline String_t* get__popupDirection_101() const { return ____popupDirection_101; }
	inline String_t** get_address_of__popupDirection_101() { return &____popupDirection_101; }
	inline void set__popupDirection_101(String_t* value)
	{
		____popupDirection_101 = value;
		Il2CppCodeGenWriteBarrier(&____popupDirection_101, value);
	}

	inline static int32_t get_offset_of__selectionController_102() { return static_cast<int32_t>(offsetof(GComboBox_t3375131064, ____selectionController_102)); }
	inline Controller_t4051336914 * get__selectionController_102() const { return ____selectionController_102; }
	inline Controller_t4051336914 ** get_address_of__selectionController_102() { return &____selectionController_102; }
	inline void set__selectionController_102(Controller_t4051336914 * value)
	{
		____selectionController_102 = value;
		Il2CppCodeGenWriteBarrier(&____selectionController_102, value);
	}

	inline static int32_t get_offset_of__itemsUpdated_103() { return static_cast<int32_t>(offsetof(GComboBox_t3375131064, ____itemsUpdated_103)); }
	inline bool get__itemsUpdated_103() const { return ____itemsUpdated_103; }
	inline bool* get_address_of__itemsUpdated_103() { return &____itemsUpdated_103; }
	inline void set__itemsUpdated_103(bool value)
	{
		____itemsUpdated_103 = value;
	}

	inline static int32_t get_offset_of__selectedIndex_104() { return static_cast<int32_t>(offsetof(GComboBox_t3375131064, ____selectedIndex_104)); }
	inline int32_t get__selectedIndex_104() const { return ____selectedIndex_104; }
	inline int32_t* get_address_of__selectedIndex_104() { return &____selectedIndex_104; }
	inline void set__selectedIndex_104(int32_t value)
	{
		____selectedIndex_104 = value;
	}

	inline static int32_t get_offset_of__buttonController_105() { return static_cast<int32_t>(offsetof(GComboBox_t3375131064, ____buttonController_105)); }
	inline Controller_t4051336914 * get__buttonController_105() const { return ____buttonController_105; }
	inline Controller_t4051336914 ** get_address_of__buttonController_105() { return &____buttonController_105; }
	inline void set__buttonController_105(Controller_t4051336914 * value)
	{
		____buttonController_105 = value;
		Il2CppCodeGenWriteBarrier(&____buttonController_105, value);
	}

	inline static int32_t get_offset_of__down_106() { return static_cast<int32_t>(offsetof(GComboBox_t3375131064, ____down_106)); }
	inline bool get__down_106() const { return ____down_106; }
	inline bool* get_address_of__down_106() { return &____down_106; }
	inline void set__down_106(bool value)
	{
		____down_106 = value;
	}

	inline static int32_t get_offset_of__over_107() { return static_cast<int32_t>(offsetof(GComboBox_t3375131064, ____over_107)); }
	inline bool get__over_107() const { return ____over_107; }
	inline bool* get_address_of__over_107() { return &____over_107; }
	inline void set__over_107(bool value)
	{
		____over_107 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
