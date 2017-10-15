#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_GComponent4106136290.h"

// FairyGUI.GGraph
struct GGraph_t1610186177;
// FairyGUI.GObject
struct GObject_t2662234644;
// System.Collections.Generic.List`1<FairyGUI.GObject>
struct List_1_t2031355776;
// FairyGUI.GRoot
struct GRoot_t2728525843;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.GRoot
struct  GRoot_t2728525843  : public GComponent_t4106136290
{
public:
	// FairyGUI.GGraph FairyGUI.GRoot::_modalLayer
	GGraph_t1610186177 * ____modalLayer_92;
	// FairyGUI.GObject FairyGUI.GRoot::_modalWaitPane
	GObject_t2662234644 * ____modalWaitPane_93;
	// System.Collections.Generic.List`1<FairyGUI.GObject> FairyGUI.GRoot::_popupStack
	List_1_t2031355776 * ____popupStack_94;
	// System.Collections.Generic.List`1<FairyGUI.GObject> FairyGUI.GRoot::_justClosedPopups
	List_1_t2031355776 * ____justClosedPopups_95;
	// FairyGUI.GObject FairyGUI.GRoot::_tooltipWin
	GObject_t2662234644 * ____tooltipWin_96;
	// FairyGUI.GObject FairyGUI.GRoot::_defaultTooltipWin
	GObject_t2662234644 * ____defaultTooltipWin_97;

public:
	inline static int32_t get_offset_of__modalLayer_92() { return static_cast<int32_t>(offsetof(GRoot_t2728525843, ____modalLayer_92)); }
	inline GGraph_t1610186177 * get__modalLayer_92() const { return ____modalLayer_92; }
	inline GGraph_t1610186177 ** get_address_of__modalLayer_92() { return &____modalLayer_92; }
	inline void set__modalLayer_92(GGraph_t1610186177 * value)
	{
		____modalLayer_92 = value;
		Il2CppCodeGenWriteBarrier(&____modalLayer_92, value);
	}

	inline static int32_t get_offset_of__modalWaitPane_93() { return static_cast<int32_t>(offsetof(GRoot_t2728525843, ____modalWaitPane_93)); }
	inline GObject_t2662234644 * get__modalWaitPane_93() const { return ____modalWaitPane_93; }
	inline GObject_t2662234644 ** get_address_of__modalWaitPane_93() { return &____modalWaitPane_93; }
	inline void set__modalWaitPane_93(GObject_t2662234644 * value)
	{
		____modalWaitPane_93 = value;
		Il2CppCodeGenWriteBarrier(&____modalWaitPane_93, value);
	}

	inline static int32_t get_offset_of__popupStack_94() { return static_cast<int32_t>(offsetof(GRoot_t2728525843, ____popupStack_94)); }
	inline List_1_t2031355776 * get__popupStack_94() const { return ____popupStack_94; }
	inline List_1_t2031355776 ** get_address_of__popupStack_94() { return &____popupStack_94; }
	inline void set__popupStack_94(List_1_t2031355776 * value)
	{
		____popupStack_94 = value;
		Il2CppCodeGenWriteBarrier(&____popupStack_94, value);
	}

	inline static int32_t get_offset_of__justClosedPopups_95() { return static_cast<int32_t>(offsetof(GRoot_t2728525843, ____justClosedPopups_95)); }
	inline List_1_t2031355776 * get__justClosedPopups_95() const { return ____justClosedPopups_95; }
	inline List_1_t2031355776 ** get_address_of__justClosedPopups_95() { return &____justClosedPopups_95; }
	inline void set__justClosedPopups_95(List_1_t2031355776 * value)
	{
		____justClosedPopups_95 = value;
		Il2CppCodeGenWriteBarrier(&____justClosedPopups_95, value);
	}

	inline static int32_t get_offset_of__tooltipWin_96() { return static_cast<int32_t>(offsetof(GRoot_t2728525843, ____tooltipWin_96)); }
	inline GObject_t2662234644 * get__tooltipWin_96() const { return ____tooltipWin_96; }
	inline GObject_t2662234644 ** get_address_of__tooltipWin_96() { return &____tooltipWin_96; }
	inline void set__tooltipWin_96(GObject_t2662234644 * value)
	{
		____tooltipWin_96 = value;
		Il2CppCodeGenWriteBarrier(&____tooltipWin_96, value);
	}

	inline static int32_t get_offset_of__defaultTooltipWin_97() { return static_cast<int32_t>(offsetof(GRoot_t2728525843, ____defaultTooltipWin_97)); }
	inline GObject_t2662234644 * get__defaultTooltipWin_97() const { return ____defaultTooltipWin_97; }
	inline GObject_t2662234644 ** get_address_of__defaultTooltipWin_97() { return &____defaultTooltipWin_97; }
	inline void set__defaultTooltipWin_97(GObject_t2662234644 * value)
	{
		____defaultTooltipWin_97 = value;
		Il2CppCodeGenWriteBarrier(&____defaultTooltipWin_97, value);
	}
};

struct GRoot_t2728525843_StaticFields
{
public:
	// FairyGUI.GRoot FairyGUI.GRoot::_inst
	GRoot_t2728525843 * ____inst_98;

public:
	inline static int32_t get_offset_of__inst_98() { return static_cast<int32_t>(offsetof(GRoot_t2728525843_StaticFields, ____inst_98)); }
	inline GRoot_t2728525843 * get__inst_98() const { return ____inst_98; }
	inline GRoot_t2728525843 ** get_address_of__inst_98() { return &____inst_98; }
	inline void set__inst_98(GRoot_t2728525843 * value)
	{
		____inst_98 = value;
		Il2CppCodeGenWriteBarrier(&____inst_98, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
