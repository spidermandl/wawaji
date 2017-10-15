#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_GComponent4106136290.h"
#include "FairyGUI_FairyGUI_ListSelectionMode1654429599.h"
#include "FairyGUI_FairyGUI_ListLayoutType2026894668.h"
#include "FairyGUI_FairyGUI_AlignType3064532699.h"
#include "FairyGUI_FairyGUI_VertAlignType2062725310.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.String
struct String_t;
// FairyGUI.ListItemRenderer
struct ListItemRenderer_t4171974890;
// FairyGUI.ListItemProvider
struct ListItemProvider_t945064320;
// FairyGUI.EventListener
struct EventListener_t2764096410;
// FairyGUI.Controller
struct Controller_t4051336914;
// FairyGUI.GObjectPool
struct GObjectPool_t562794502;
// System.Collections.Generic.List`1<FairyGUI.GList/ItemInfo>
struct List_1_t4258870299;
// FairyGUI.EventCallback1
struct EventCallback1_t422277840;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.GList
struct  GList_t2527012171  : public GComponent_t4106136290
{
public:
	// System.String FairyGUI.GList::defaultItem
	String_t* ___defaultItem_92;
	// System.Boolean FairyGUI.GList::foldInvisibleItems
	bool ___foldInvisibleItems_93;
	// FairyGUI.ListSelectionMode FairyGUI.GList::selectionMode
	int32_t ___selectionMode_94;
	// FairyGUI.ListItemRenderer FairyGUI.GList::itemRenderer
	ListItemRenderer_t4171974890 * ___itemRenderer_95;
	// FairyGUI.ListItemProvider FairyGUI.GList::itemProvider
	ListItemProvider_t945064320 * ___itemProvider_96;
	// FairyGUI.EventListener FairyGUI.GList::<onClickItem>k__BackingField
	EventListener_t2764096410 * ___U3ConClickItemU3Ek__BackingField_97;
	// FairyGUI.EventListener FairyGUI.GList::<onRightClickItem>k__BackingField
	EventListener_t2764096410 * ___U3ConRightClickItemU3Ek__BackingField_98;
	// System.Boolean FairyGUI.GList::scrollItemToViewOnClick
	bool ___scrollItemToViewOnClick_99;
	// FairyGUI.ListLayoutType FairyGUI.GList::_layout
	int32_t ____layout_100;
	// System.Int32 FairyGUI.GList::_lineCount
	int32_t ____lineCount_101;
	// System.Int32 FairyGUI.GList::_columnCount
	int32_t ____columnCount_102;
	// System.Int32 FairyGUI.GList::_lineGap
	int32_t ____lineGap_103;
	// System.Int32 FairyGUI.GList::_columnGap
	int32_t ____columnGap_104;
	// FairyGUI.AlignType FairyGUI.GList::_align
	int32_t ____align_105;
	// FairyGUI.VertAlignType FairyGUI.GList::_verticalAlign
	int32_t ____verticalAlign_106;
	// System.Boolean FairyGUI.GList::_autoResizeItem
	bool ____autoResizeItem_107;
	// FairyGUI.Controller FairyGUI.GList::_selectionController
	Controller_t4051336914 * ____selectionController_108;
	// FairyGUI.GObjectPool FairyGUI.GList::_pool
	GObjectPool_t562794502 * ____pool_109;
	// System.Boolean FairyGUI.GList::_selectionHandled
	bool ____selectionHandled_110;
	// System.Int32 FairyGUI.GList::_lastSelectedIndex
	int32_t ____lastSelectedIndex_111;
	// System.Boolean FairyGUI.GList::_virtual
	bool ____virtual_112;
	// System.Boolean FairyGUI.GList::_loop
	bool ____loop_113;
	// System.Int32 FairyGUI.GList::_numItems
	int32_t ____numItems_114;
	// System.Int32 FairyGUI.GList::_realNumItems
	int32_t ____realNumItems_115;
	// System.Int32 FairyGUI.GList::_firstIndex
	int32_t ____firstIndex_116;
	// System.Int32 FairyGUI.GList::_curLineItemCount
	int32_t ____curLineItemCount_117;
	// System.Int32 FairyGUI.GList::_curLineItemCount2
	int32_t ____curLineItemCount2_118;
	// UnityEngine.Vector2 FairyGUI.GList::_itemSize
	Vector2_t2243707579  ____itemSize_119;
	// System.Int32 FairyGUI.GList::_virtualListChanged
	int32_t ____virtualListChanged_120;
	// System.Boolean FairyGUI.GList::_eventLocked
	bool ____eventLocked_121;
	// System.Collections.Generic.List`1<FairyGUI.GList/ItemInfo> FairyGUI.GList::_virtualItems
	List_1_t4258870299 * ____virtualItems_122;
	// FairyGUI.EventCallback1 FairyGUI.GList::_itemClickDelegate
	EventCallback1_t422277840 * ____itemClickDelegate_123;
	// FairyGUI.EventCallback1 FairyGUI.GList::_itemTouchBeginDelegate
	EventCallback1_t422277840 * ____itemTouchBeginDelegate_124;

public:
	inline static int32_t get_offset_of_defaultItem_92() { return static_cast<int32_t>(offsetof(GList_t2527012171, ___defaultItem_92)); }
	inline String_t* get_defaultItem_92() const { return ___defaultItem_92; }
	inline String_t** get_address_of_defaultItem_92() { return &___defaultItem_92; }
	inline void set_defaultItem_92(String_t* value)
	{
		___defaultItem_92 = value;
		Il2CppCodeGenWriteBarrier(&___defaultItem_92, value);
	}

	inline static int32_t get_offset_of_foldInvisibleItems_93() { return static_cast<int32_t>(offsetof(GList_t2527012171, ___foldInvisibleItems_93)); }
	inline bool get_foldInvisibleItems_93() const { return ___foldInvisibleItems_93; }
	inline bool* get_address_of_foldInvisibleItems_93() { return &___foldInvisibleItems_93; }
	inline void set_foldInvisibleItems_93(bool value)
	{
		___foldInvisibleItems_93 = value;
	}

	inline static int32_t get_offset_of_selectionMode_94() { return static_cast<int32_t>(offsetof(GList_t2527012171, ___selectionMode_94)); }
	inline int32_t get_selectionMode_94() const { return ___selectionMode_94; }
	inline int32_t* get_address_of_selectionMode_94() { return &___selectionMode_94; }
	inline void set_selectionMode_94(int32_t value)
	{
		___selectionMode_94 = value;
	}

	inline static int32_t get_offset_of_itemRenderer_95() { return static_cast<int32_t>(offsetof(GList_t2527012171, ___itemRenderer_95)); }
	inline ListItemRenderer_t4171974890 * get_itemRenderer_95() const { return ___itemRenderer_95; }
	inline ListItemRenderer_t4171974890 ** get_address_of_itemRenderer_95() { return &___itemRenderer_95; }
	inline void set_itemRenderer_95(ListItemRenderer_t4171974890 * value)
	{
		___itemRenderer_95 = value;
		Il2CppCodeGenWriteBarrier(&___itemRenderer_95, value);
	}

	inline static int32_t get_offset_of_itemProvider_96() { return static_cast<int32_t>(offsetof(GList_t2527012171, ___itemProvider_96)); }
	inline ListItemProvider_t945064320 * get_itemProvider_96() const { return ___itemProvider_96; }
	inline ListItemProvider_t945064320 ** get_address_of_itemProvider_96() { return &___itemProvider_96; }
	inline void set_itemProvider_96(ListItemProvider_t945064320 * value)
	{
		___itemProvider_96 = value;
		Il2CppCodeGenWriteBarrier(&___itemProvider_96, value);
	}

	inline static int32_t get_offset_of_U3ConClickItemU3Ek__BackingField_97() { return static_cast<int32_t>(offsetof(GList_t2527012171, ___U3ConClickItemU3Ek__BackingField_97)); }
	inline EventListener_t2764096410 * get_U3ConClickItemU3Ek__BackingField_97() const { return ___U3ConClickItemU3Ek__BackingField_97; }
	inline EventListener_t2764096410 ** get_address_of_U3ConClickItemU3Ek__BackingField_97() { return &___U3ConClickItemU3Ek__BackingField_97; }
	inline void set_U3ConClickItemU3Ek__BackingField_97(EventListener_t2764096410 * value)
	{
		___U3ConClickItemU3Ek__BackingField_97 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConClickItemU3Ek__BackingField_97, value);
	}

	inline static int32_t get_offset_of_U3ConRightClickItemU3Ek__BackingField_98() { return static_cast<int32_t>(offsetof(GList_t2527012171, ___U3ConRightClickItemU3Ek__BackingField_98)); }
	inline EventListener_t2764096410 * get_U3ConRightClickItemU3Ek__BackingField_98() const { return ___U3ConRightClickItemU3Ek__BackingField_98; }
	inline EventListener_t2764096410 ** get_address_of_U3ConRightClickItemU3Ek__BackingField_98() { return &___U3ConRightClickItemU3Ek__BackingField_98; }
	inline void set_U3ConRightClickItemU3Ek__BackingField_98(EventListener_t2764096410 * value)
	{
		___U3ConRightClickItemU3Ek__BackingField_98 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConRightClickItemU3Ek__BackingField_98, value);
	}

	inline static int32_t get_offset_of_scrollItemToViewOnClick_99() { return static_cast<int32_t>(offsetof(GList_t2527012171, ___scrollItemToViewOnClick_99)); }
	inline bool get_scrollItemToViewOnClick_99() const { return ___scrollItemToViewOnClick_99; }
	inline bool* get_address_of_scrollItemToViewOnClick_99() { return &___scrollItemToViewOnClick_99; }
	inline void set_scrollItemToViewOnClick_99(bool value)
	{
		___scrollItemToViewOnClick_99 = value;
	}

	inline static int32_t get_offset_of__layout_100() { return static_cast<int32_t>(offsetof(GList_t2527012171, ____layout_100)); }
	inline int32_t get__layout_100() const { return ____layout_100; }
	inline int32_t* get_address_of__layout_100() { return &____layout_100; }
	inline void set__layout_100(int32_t value)
	{
		____layout_100 = value;
	}

	inline static int32_t get_offset_of__lineCount_101() { return static_cast<int32_t>(offsetof(GList_t2527012171, ____lineCount_101)); }
	inline int32_t get__lineCount_101() const { return ____lineCount_101; }
	inline int32_t* get_address_of__lineCount_101() { return &____lineCount_101; }
	inline void set__lineCount_101(int32_t value)
	{
		____lineCount_101 = value;
	}

	inline static int32_t get_offset_of__columnCount_102() { return static_cast<int32_t>(offsetof(GList_t2527012171, ____columnCount_102)); }
	inline int32_t get__columnCount_102() const { return ____columnCount_102; }
	inline int32_t* get_address_of__columnCount_102() { return &____columnCount_102; }
	inline void set__columnCount_102(int32_t value)
	{
		____columnCount_102 = value;
	}

	inline static int32_t get_offset_of__lineGap_103() { return static_cast<int32_t>(offsetof(GList_t2527012171, ____lineGap_103)); }
	inline int32_t get__lineGap_103() const { return ____lineGap_103; }
	inline int32_t* get_address_of__lineGap_103() { return &____lineGap_103; }
	inline void set__lineGap_103(int32_t value)
	{
		____lineGap_103 = value;
	}

	inline static int32_t get_offset_of__columnGap_104() { return static_cast<int32_t>(offsetof(GList_t2527012171, ____columnGap_104)); }
	inline int32_t get__columnGap_104() const { return ____columnGap_104; }
	inline int32_t* get_address_of__columnGap_104() { return &____columnGap_104; }
	inline void set__columnGap_104(int32_t value)
	{
		____columnGap_104 = value;
	}

	inline static int32_t get_offset_of__align_105() { return static_cast<int32_t>(offsetof(GList_t2527012171, ____align_105)); }
	inline int32_t get__align_105() const { return ____align_105; }
	inline int32_t* get_address_of__align_105() { return &____align_105; }
	inline void set__align_105(int32_t value)
	{
		____align_105 = value;
	}

	inline static int32_t get_offset_of__verticalAlign_106() { return static_cast<int32_t>(offsetof(GList_t2527012171, ____verticalAlign_106)); }
	inline int32_t get__verticalAlign_106() const { return ____verticalAlign_106; }
	inline int32_t* get_address_of__verticalAlign_106() { return &____verticalAlign_106; }
	inline void set__verticalAlign_106(int32_t value)
	{
		____verticalAlign_106 = value;
	}

	inline static int32_t get_offset_of__autoResizeItem_107() { return static_cast<int32_t>(offsetof(GList_t2527012171, ____autoResizeItem_107)); }
	inline bool get__autoResizeItem_107() const { return ____autoResizeItem_107; }
	inline bool* get_address_of__autoResizeItem_107() { return &____autoResizeItem_107; }
	inline void set__autoResizeItem_107(bool value)
	{
		____autoResizeItem_107 = value;
	}

	inline static int32_t get_offset_of__selectionController_108() { return static_cast<int32_t>(offsetof(GList_t2527012171, ____selectionController_108)); }
	inline Controller_t4051336914 * get__selectionController_108() const { return ____selectionController_108; }
	inline Controller_t4051336914 ** get_address_of__selectionController_108() { return &____selectionController_108; }
	inline void set__selectionController_108(Controller_t4051336914 * value)
	{
		____selectionController_108 = value;
		Il2CppCodeGenWriteBarrier(&____selectionController_108, value);
	}

	inline static int32_t get_offset_of__pool_109() { return static_cast<int32_t>(offsetof(GList_t2527012171, ____pool_109)); }
	inline GObjectPool_t562794502 * get__pool_109() const { return ____pool_109; }
	inline GObjectPool_t562794502 ** get_address_of__pool_109() { return &____pool_109; }
	inline void set__pool_109(GObjectPool_t562794502 * value)
	{
		____pool_109 = value;
		Il2CppCodeGenWriteBarrier(&____pool_109, value);
	}

	inline static int32_t get_offset_of__selectionHandled_110() { return static_cast<int32_t>(offsetof(GList_t2527012171, ____selectionHandled_110)); }
	inline bool get__selectionHandled_110() const { return ____selectionHandled_110; }
	inline bool* get_address_of__selectionHandled_110() { return &____selectionHandled_110; }
	inline void set__selectionHandled_110(bool value)
	{
		____selectionHandled_110 = value;
	}

	inline static int32_t get_offset_of__lastSelectedIndex_111() { return static_cast<int32_t>(offsetof(GList_t2527012171, ____lastSelectedIndex_111)); }
	inline int32_t get__lastSelectedIndex_111() const { return ____lastSelectedIndex_111; }
	inline int32_t* get_address_of__lastSelectedIndex_111() { return &____lastSelectedIndex_111; }
	inline void set__lastSelectedIndex_111(int32_t value)
	{
		____lastSelectedIndex_111 = value;
	}

	inline static int32_t get_offset_of__virtual_112() { return static_cast<int32_t>(offsetof(GList_t2527012171, ____virtual_112)); }
	inline bool get__virtual_112() const { return ____virtual_112; }
	inline bool* get_address_of__virtual_112() { return &____virtual_112; }
	inline void set__virtual_112(bool value)
	{
		____virtual_112 = value;
	}

	inline static int32_t get_offset_of__loop_113() { return static_cast<int32_t>(offsetof(GList_t2527012171, ____loop_113)); }
	inline bool get__loop_113() const { return ____loop_113; }
	inline bool* get_address_of__loop_113() { return &____loop_113; }
	inline void set__loop_113(bool value)
	{
		____loop_113 = value;
	}

	inline static int32_t get_offset_of__numItems_114() { return static_cast<int32_t>(offsetof(GList_t2527012171, ____numItems_114)); }
	inline int32_t get__numItems_114() const { return ____numItems_114; }
	inline int32_t* get_address_of__numItems_114() { return &____numItems_114; }
	inline void set__numItems_114(int32_t value)
	{
		____numItems_114 = value;
	}

	inline static int32_t get_offset_of__realNumItems_115() { return static_cast<int32_t>(offsetof(GList_t2527012171, ____realNumItems_115)); }
	inline int32_t get__realNumItems_115() const { return ____realNumItems_115; }
	inline int32_t* get_address_of__realNumItems_115() { return &____realNumItems_115; }
	inline void set__realNumItems_115(int32_t value)
	{
		____realNumItems_115 = value;
	}

	inline static int32_t get_offset_of__firstIndex_116() { return static_cast<int32_t>(offsetof(GList_t2527012171, ____firstIndex_116)); }
	inline int32_t get__firstIndex_116() const { return ____firstIndex_116; }
	inline int32_t* get_address_of__firstIndex_116() { return &____firstIndex_116; }
	inline void set__firstIndex_116(int32_t value)
	{
		____firstIndex_116 = value;
	}

	inline static int32_t get_offset_of__curLineItemCount_117() { return static_cast<int32_t>(offsetof(GList_t2527012171, ____curLineItemCount_117)); }
	inline int32_t get__curLineItemCount_117() const { return ____curLineItemCount_117; }
	inline int32_t* get_address_of__curLineItemCount_117() { return &____curLineItemCount_117; }
	inline void set__curLineItemCount_117(int32_t value)
	{
		____curLineItemCount_117 = value;
	}

	inline static int32_t get_offset_of__curLineItemCount2_118() { return static_cast<int32_t>(offsetof(GList_t2527012171, ____curLineItemCount2_118)); }
	inline int32_t get__curLineItemCount2_118() const { return ____curLineItemCount2_118; }
	inline int32_t* get_address_of__curLineItemCount2_118() { return &____curLineItemCount2_118; }
	inline void set__curLineItemCount2_118(int32_t value)
	{
		____curLineItemCount2_118 = value;
	}

	inline static int32_t get_offset_of__itemSize_119() { return static_cast<int32_t>(offsetof(GList_t2527012171, ____itemSize_119)); }
	inline Vector2_t2243707579  get__itemSize_119() const { return ____itemSize_119; }
	inline Vector2_t2243707579 * get_address_of__itemSize_119() { return &____itemSize_119; }
	inline void set__itemSize_119(Vector2_t2243707579  value)
	{
		____itemSize_119 = value;
	}

	inline static int32_t get_offset_of__virtualListChanged_120() { return static_cast<int32_t>(offsetof(GList_t2527012171, ____virtualListChanged_120)); }
	inline int32_t get__virtualListChanged_120() const { return ____virtualListChanged_120; }
	inline int32_t* get_address_of__virtualListChanged_120() { return &____virtualListChanged_120; }
	inline void set__virtualListChanged_120(int32_t value)
	{
		____virtualListChanged_120 = value;
	}

	inline static int32_t get_offset_of__eventLocked_121() { return static_cast<int32_t>(offsetof(GList_t2527012171, ____eventLocked_121)); }
	inline bool get__eventLocked_121() const { return ____eventLocked_121; }
	inline bool* get_address_of__eventLocked_121() { return &____eventLocked_121; }
	inline void set__eventLocked_121(bool value)
	{
		____eventLocked_121 = value;
	}

	inline static int32_t get_offset_of__virtualItems_122() { return static_cast<int32_t>(offsetof(GList_t2527012171, ____virtualItems_122)); }
	inline List_1_t4258870299 * get__virtualItems_122() const { return ____virtualItems_122; }
	inline List_1_t4258870299 ** get_address_of__virtualItems_122() { return &____virtualItems_122; }
	inline void set__virtualItems_122(List_1_t4258870299 * value)
	{
		____virtualItems_122 = value;
		Il2CppCodeGenWriteBarrier(&____virtualItems_122, value);
	}

	inline static int32_t get_offset_of__itemClickDelegate_123() { return static_cast<int32_t>(offsetof(GList_t2527012171, ____itemClickDelegate_123)); }
	inline EventCallback1_t422277840 * get__itemClickDelegate_123() const { return ____itemClickDelegate_123; }
	inline EventCallback1_t422277840 ** get_address_of__itemClickDelegate_123() { return &____itemClickDelegate_123; }
	inline void set__itemClickDelegate_123(EventCallback1_t422277840 * value)
	{
		____itemClickDelegate_123 = value;
		Il2CppCodeGenWriteBarrier(&____itemClickDelegate_123, value);
	}

	inline static int32_t get_offset_of__itemTouchBeginDelegate_124() { return static_cast<int32_t>(offsetof(GList_t2527012171, ____itemTouchBeginDelegate_124)); }
	inline EventCallback1_t422277840 * get__itemTouchBeginDelegate_124() const { return ____itemTouchBeginDelegate_124; }
	inline EventCallback1_t422277840 ** get_address_of__itemTouchBeginDelegate_124() { return &____itemTouchBeginDelegate_124; }
	inline void set__itemTouchBeginDelegate_124(EventCallback1_t422277840 * value)
	{
		____itemTouchBeginDelegate_124 = value;
		Il2CppCodeGenWriteBarrier(&____itemTouchBeginDelegate_124, value);
	}
};

struct GList_t2527012171_StaticFields
{
public:
	// System.UInt32 FairyGUI.GList::itemInfoVer
	uint32_t ___itemInfoVer_125;
	// System.UInt32 FairyGUI.GList::enterCounter
	uint32_t ___enterCounter_126;

public:
	inline static int32_t get_offset_of_itemInfoVer_125() { return static_cast<int32_t>(offsetof(GList_t2527012171_StaticFields, ___itemInfoVer_125)); }
	inline uint32_t get_itemInfoVer_125() const { return ___itemInfoVer_125; }
	inline uint32_t* get_address_of_itemInfoVer_125() { return &___itemInfoVer_125; }
	inline void set_itemInfoVer_125(uint32_t value)
	{
		___itemInfoVer_125 = value;
	}

	inline static int32_t get_offset_of_enterCounter_126() { return static_cast<int32_t>(offsetof(GList_t2527012171_StaticFields, ___enterCounter_126)); }
	inline uint32_t get_enterCounter_126() const { return ___enterCounter_126; }
	inline uint32_t* get_address_of_enterCounter_126() { return &___enterCounter_126; }
	inline void set_enterCounter_126(uint32_t value)
	{
		___enterCounter_126 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
