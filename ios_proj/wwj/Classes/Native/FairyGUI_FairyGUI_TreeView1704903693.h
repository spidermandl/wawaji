#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_EventDispatcher4068415185.h"

// FairyGUI.GList
struct GList_t2527012171;
// FairyGUI.TreeNode
struct TreeNode_t4178054862;
// FairyGUI.TreeView/TreeNodeCreateCellDelegate
struct TreeNodeCreateCellDelegate_t1243330501;
// FairyGUI.TreeView/TreeNodeRenderDelegate
struct TreeNodeRenderDelegate_t3817924829;
// FairyGUI.TreeView/TreeNodeWillExpandDelegate
struct TreeNodeWillExpandDelegate_t3990861167;
// FairyGUI.EventListener
struct EventListener_t2764096410;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.TreeView
struct  TreeView_t1704903693  : public EventDispatcher_t4068415185
{
public:
	// FairyGUI.GList FairyGUI.TreeView::<list>k__BackingField
	GList_t2527012171 * ___U3ClistU3Ek__BackingField_2;
	// FairyGUI.TreeNode FairyGUI.TreeView::<root>k__BackingField
	TreeNode_t4178054862 * ___U3CrootU3Ek__BackingField_3;
	// System.Int32 FairyGUI.TreeView::indent
	int32_t ___indent_4;
	// FairyGUI.TreeView/TreeNodeCreateCellDelegate FairyGUI.TreeView::treeNodeCreateCell
	TreeNodeCreateCellDelegate_t1243330501 * ___treeNodeCreateCell_5;
	// FairyGUI.TreeView/TreeNodeRenderDelegate FairyGUI.TreeView::treeNodeRender
	TreeNodeRenderDelegate_t3817924829 * ___treeNodeRender_6;
	// FairyGUI.TreeView/TreeNodeWillExpandDelegate FairyGUI.TreeView::treeNodeWillExpand
	TreeNodeWillExpandDelegate_t3990861167 * ___treeNodeWillExpand_7;
	// FairyGUI.EventListener FairyGUI.TreeView::<onClickNode>k__BackingField
	EventListener_t2764096410 * ___U3ConClickNodeU3Ek__BackingField_8;
	// FairyGUI.EventListener FairyGUI.TreeView::<onRightClickNode>k__BackingField
	EventListener_t2764096410 * ___U3ConRightClickNodeU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3ClistU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TreeView_t1704903693, ___U3ClistU3Ek__BackingField_2)); }
	inline GList_t2527012171 * get_U3ClistU3Ek__BackingField_2() const { return ___U3ClistU3Ek__BackingField_2; }
	inline GList_t2527012171 ** get_address_of_U3ClistU3Ek__BackingField_2() { return &___U3ClistU3Ek__BackingField_2; }
	inline void set_U3ClistU3Ek__BackingField_2(GList_t2527012171 * value)
	{
		___U3ClistU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3ClistU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CrootU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TreeView_t1704903693, ___U3CrootU3Ek__BackingField_3)); }
	inline TreeNode_t4178054862 * get_U3CrootU3Ek__BackingField_3() const { return ___U3CrootU3Ek__BackingField_3; }
	inline TreeNode_t4178054862 ** get_address_of_U3CrootU3Ek__BackingField_3() { return &___U3CrootU3Ek__BackingField_3; }
	inline void set_U3CrootU3Ek__BackingField_3(TreeNode_t4178054862 * value)
	{
		___U3CrootU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CrootU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_indent_4() { return static_cast<int32_t>(offsetof(TreeView_t1704903693, ___indent_4)); }
	inline int32_t get_indent_4() const { return ___indent_4; }
	inline int32_t* get_address_of_indent_4() { return &___indent_4; }
	inline void set_indent_4(int32_t value)
	{
		___indent_4 = value;
	}

	inline static int32_t get_offset_of_treeNodeCreateCell_5() { return static_cast<int32_t>(offsetof(TreeView_t1704903693, ___treeNodeCreateCell_5)); }
	inline TreeNodeCreateCellDelegate_t1243330501 * get_treeNodeCreateCell_5() const { return ___treeNodeCreateCell_5; }
	inline TreeNodeCreateCellDelegate_t1243330501 ** get_address_of_treeNodeCreateCell_5() { return &___treeNodeCreateCell_5; }
	inline void set_treeNodeCreateCell_5(TreeNodeCreateCellDelegate_t1243330501 * value)
	{
		___treeNodeCreateCell_5 = value;
		Il2CppCodeGenWriteBarrier(&___treeNodeCreateCell_5, value);
	}

	inline static int32_t get_offset_of_treeNodeRender_6() { return static_cast<int32_t>(offsetof(TreeView_t1704903693, ___treeNodeRender_6)); }
	inline TreeNodeRenderDelegate_t3817924829 * get_treeNodeRender_6() const { return ___treeNodeRender_6; }
	inline TreeNodeRenderDelegate_t3817924829 ** get_address_of_treeNodeRender_6() { return &___treeNodeRender_6; }
	inline void set_treeNodeRender_6(TreeNodeRenderDelegate_t3817924829 * value)
	{
		___treeNodeRender_6 = value;
		Il2CppCodeGenWriteBarrier(&___treeNodeRender_6, value);
	}

	inline static int32_t get_offset_of_treeNodeWillExpand_7() { return static_cast<int32_t>(offsetof(TreeView_t1704903693, ___treeNodeWillExpand_7)); }
	inline TreeNodeWillExpandDelegate_t3990861167 * get_treeNodeWillExpand_7() const { return ___treeNodeWillExpand_7; }
	inline TreeNodeWillExpandDelegate_t3990861167 ** get_address_of_treeNodeWillExpand_7() { return &___treeNodeWillExpand_7; }
	inline void set_treeNodeWillExpand_7(TreeNodeWillExpandDelegate_t3990861167 * value)
	{
		___treeNodeWillExpand_7 = value;
		Il2CppCodeGenWriteBarrier(&___treeNodeWillExpand_7, value);
	}

	inline static int32_t get_offset_of_U3ConClickNodeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TreeView_t1704903693, ___U3ConClickNodeU3Ek__BackingField_8)); }
	inline EventListener_t2764096410 * get_U3ConClickNodeU3Ek__BackingField_8() const { return ___U3ConClickNodeU3Ek__BackingField_8; }
	inline EventListener_t2764096410 ** get_address_of_U3ConClickNodeU3Ek__BackingField_8() { return &___U3ConClickNodeU3Ek__BackingField_8; }
	inline void set_U3ConClickNodeU3Ek__BackingField_8(EventListener_t2764096410 * value)
	{
		___U3ConClickNodeU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConClickNodeU3Ek__BackingField_8, value);
	}

	inline static int32_t get_offset_of_U3ConRightClickNodeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TreeView_t1704903693, ___U3ConRightClickNodeU3Ek__BackingField_9)); }
	inline EventListener_t2764096410 * get_U3ConRightClickNodeU3Ek__BackingField_9() const { return ___U3ConRightClickNodeU3Ek__BackingField_9; }
	inline EventListener_t2764096410 ** get_address_of_U3ConRightClickNodeU3Ek__BackingField_9() { return &___U3ConRightClickNodeU3Ek__BackingField_9; }
	inline void set_U3ConRightClickNodeU3Ek__BackingField_9(EventListener_t2764096410 * value)
	{
		___U3ConRightClickNodeU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConRightClickNodeU3Ek__BackingField_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
