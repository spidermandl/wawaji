#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_EventDispatcher4068415185.h"

// System.String
struct String_t;
// FairyGUI.EventListener
struct EventListener_t2764096410;
// FairyGUI.GComponent
struct GComponent_t4106136290;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.List`1<FairyGUI.ControllerAction>
struct List_1_t3944823712;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.Controller
struct  Controller_t4051336914  : public EventDispatcher_t4068415185
{
public:
	// System.String FairyGUI.Controller::name
	String_t* ___name_2;
	// FairyGUI.EventListener FairyGUI.Controller::<onChanged>k__BackingField
	EventListener_t2764096410 * ___U3ConChangedU3Ek__BackingField_3;
	// FairyGUI.GComponent FairyGUI.Controller::parent
	GComponent_t4106136290 * ___parent_4;
	// System.Boolean FairyGUI.Controller::autoRadioGroupDepth
	bool ___autoRadioGroupDepth_5;
	// System.Boolean FairyGUI.Controller::changing
	bool ___changing_6;
	// System.Int32 FairyGUI.Controller::_selectedIndex
	int32_t ____selectedIndex_7;
	// System.Int32 FairyGUI.Controller::_previousIndex
	int32_t ____previousIndex_8;
	// System.Collections.Generic.List`1<System.String> FairyGUI.Controller::_pageIds
	List_1_t1398341365 * ____pageIds_9;
	// System.Collections.Generic.List`1<System.String> FairyGUI.Controller::_pageNames
	List_1_t1398341365 * ____pageNames_10;
	// System.Collections.Generic.List`1<FairyGUI.ControllerAction> FairyGUI.Controller::_actions
	List_1_t3944823712 * ____actions_11;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(Controller_t4051336914, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}

	inline static int32_t get_offset_of_U3ConChangedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Controller_t4051336914, ___U3ConChangedU3Ek__BackingField_3)); }
	inline EventListener_t2764096410 * get_U3ConChangedU3Ek__BackingField_3() const { return ___U3ConChangedU3Ek__BackingField_3; }
	inline EventListener_t2764096410 ** get_address_of_U3ConChangedU3Ek__BackingField_3() { return &___U3ConChangedU3Ek__BackingField_3; }
	inline void set_U3ConChangedU3Ek__BackingField_3(EventListener_t2764096410 * value)
	{
		___U3ConChangedU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConChangedU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_parent_4() { return static_cast<int32_t>(offsetof(Controller_t4051336914, ___parent_4)); }
	inline GComponent_t4106136290 * get_parent_4() const { return ___parent_4; }
	inline GComponent_t4106136290 ** get_address_of_parent_4() { return &___parent_4; }
	inline void set_parent_4(GComponent_t4106136290 * value)
	{
		___parent_4 = value;
		Il2CppCodeGenWriteBarrier(&___parent_4, value);
	}

	inline static int32_t get_offset_of_autoRadioGroupDepth_5() { return static_cast<int32_t>(offsetof(Controller_t4051336914, ___autoRadioGroupDepth_5)); }
	inline bool get_autoRadioGroupDepth_5() const { return ___autoRadioGroupDepth_5; }
	inline bool* get_address_of_autoRadioGroupDepth_5() { return &___autoRadioGroupDepth_5; }
	inline void set_autoRadioGroupDepth_5(bool value)
	{
		___autoRadioGroupDepth_5 = value;
	}

	inline static int32_t get_offset_of_changing_6() { return static_cast<int32_t>(offsetof(Controller_t4051336914, ___changing_6)); }
	inline bool get_changing_6() const { return ___changing_6; }
	inline bool* get_address_of_changing_6() { return &___changing_6; }
	inline void set_changing_6(bool value)
	{
		___changing_6 = value;
	}

	inline static int32_t get_offset_of__selectedIndex_7() { return static_cast<int32_t>(offsetof(Controller_t4051336914, ____selectedIndex_7)); }
	inline int32_t get__selectedIndex_7() const { return ____selectedIndex_7; }
	inline int32_t* get_address_of__selectedIndex_7() { return &____selectedIndex_7; }
	inline void set__selectedIndex_7(int32_t value)
	{
		____selectedIndex_7 = value;
	}

	inline static int32_t get_offset_of__previousIndex_8() { return static_cast<int32_t>(offsetof(Controller_t4051336914, ____previousIndex_8)); }
	inline int32_t get__previousIndex_8() const { return ____previousIndex_8; }
	inline int32_t* get_address_of__previousIndex_8() { return &____previousIndex_8; }
	inline void set__previousIndex_8(int32_t value)
	{
		____previousIndex_8 = value;
	}

	inline static int32_t get_offset_of__pageIds_9() { return static_cast<int32_t>(offsetof(Controller_t4051336914, ____pageIds_9)); }
	inline List_1_t1398341365 * get__pageIds_9() const { return ____pageIds_9; }
	inline List_1_t1398341365 ** get_address_of__pageIds_9() { return &____pageIds_9; }
	inline void set__pageIds_9(List_1_t1398341365 * value)
	{
		____pageIds_9 = value;
		Il2CppCodeGenWriteBarrier(&____pageIds_9, value);
	}

	inline static int32_t get_offset_of__pageNames_10() { return static_cast<int32_t>(offsetof(Controller_t4051336914, ____pageNames_10)); }
	inline List_1_t1398341365 * get__pageNames_10() const { return ____pageNames_10; }
	inline List_1_t1398341365 ** get_address_of__pageNames_10() { return &____pageNames_10; }
	inline void set__pageNames_10(List_1_t1398341365 * value)
	{
		____pageNames_10 = value;
		Il2CppCodeGenWriteBarrier(&____pageNames_10, value);
	}

	inline static int32_t get_offset_of__actions_11() { return static_cast<int32_t>(offsetof(Controller_t4051336914, ____actions_11)); }
	inline List_1_t3944823712 * get__actions_11() const { return ____actions_11; }
	inline List_1_t3944823712 ** get_address_of__actions_11() { return &____actions_11; }
	inline void set__actions_11(List_1_t3944823712 * value)
	{
		____actions_11 = value;
		Il2CppCodeGenWriteBarrier(&____actions_11, value);
	}
};

struct Controller_t4051336914_StaticFields
{
public:
	// System.UInt32 FairyGUI.Controller::_nextPageId
	uint32_t ____nextPageId_12;

public:
	inline static int32_t get_offset_of__nextPageId_12() { return static_cast<int32_t>(offsetof(Controller_t4051336914_StaticFields, ____nextPageId_12)); }
	inline uint32_t get__nextPageId_12() const { return ____nextPageId_12; }
	inline uint32_t* get_address_of__nextPageId_12() { return &____nextPageId_12; }
	inline void set__nextPageId_12(uint32_t value)
	{
		____nextPageId_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
