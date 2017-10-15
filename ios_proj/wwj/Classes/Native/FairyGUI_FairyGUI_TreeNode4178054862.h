#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Object
struct Il2CppObject;
// FairyGUI.TreeNode
struct TreeNode_t4178054862;
// FairyGUI.TreeView
struct TreeView_t1704903693;
// FairyGUI.GComponent
struct GComponent_t4106136290;
// System.Collections.Generic.List`1<FairyGUI.TreeNode>
struct List_1_t3547175994;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.TreeNode
struct  TreeNode_t4178054862  : public Il2CppObject
{
public:
	// System.Object FairyGUI.TreeNode::data
	Il2CppObject * ___data_0;
	// FairyGUI.TreeNode FairyGUI.TreeNode::<parent>k__BackingField
	TreeNode_t4178054862 * ___U3CparentU3Ek__BackingField_1;
	// FairyGUI.TreeView FairyGUI.TreeNode::<tree>k__BackingField
	TreeView_t1704903693 * ___U3CtreeU3Ek__BackingField_2;
	// FairyGUI.GComponent FairyGUI.TreeNode::<cell>k__BackingField
	GComponent_t4106136290 * ___U3CcellU3Ek__BackingField_3;
	// System.Int32 FairyGUI.TreeNode::<level>k__BackingField
	int32_t ___U3ClevelU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<FairyGUI.TreeNode> FairyGUI.TreeNode::_children
	List_1_t3547175994 * ____children_5;
	// System.Boolean FairyGUI.TreeNode::_expanded
	bool ____expanded_6;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(TreeNode_t4178054862, ___data_0)); }
	inline Il2CppObject * get_data_0() const { return ___data_0; }
	inline Il2CppObject ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(Il2CppObject * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier(&___data_0, value);
	}

	inline static int32_t get_offset_of_U3CparentU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TreeNode_t4178054862, ___U3CparentU3Ek__BackingField_1)); }
	inline TreeNode_t4178054862 * get_U3CparentU3Ek__BackingField_1() const { return ___U3CparentU3Ek__BackingField_1; }
	inline TreeNode_t4178054862 ** get_address_of_U3CparentU3Ek__BackingField_1() { return &___U3CparentU3Ek__BackingField_1; }
	inline void set_U3CparentU3Ek__BackingField_1(TreeNode_t4178054862 * value)
	{
		___U3CparentU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CparentU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CtreeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TreeNode_t4178054862, ___U3CtreeU3Ek__BackingField_2)); }
	inline TreeView_t1704903693 * get_U3CtreeU3Ek__BackingField_2() const { return ___U3CtreeU3Ek__BackingField_2; }
	inline TreeView_t1704903693 ** get_address_of_U3CtreeU3Ek__BackingField_2() { return &___U3CtreeU3Ek__BackingField_2; }
	inline void set_U3CtreeU3Ek__BackingField_2(TreeView_t1704903693 * value)
	{
		___U3CtreeU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtreeU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CcellU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TreeNode_t4178054862, ___U3CcellU3Ek__BackingField_3)); }
	inline GComponent_t4106136290 * get_U3CcellU3Ek__BackingField_3() const { return ___U3CcellU3Ek__BackingField_3; }
	inline GComponent_t4106136290 ** get_address_of_U3CcellU3Ek__BackingField_3() { return &___U3CcellU3Ek__BackingField_3; }
	inline void set_U3CcellU3Ek__BackingField_3(GComponent_t4106136290 * value)
	{
		___U3CcellU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcellU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3ClevelU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TreeNode_t4178054862, ___U3ClevelU3Ek__BackingField_4)); }
	inline int32_t get_U3ClevelU3Ek__BackingField_4() const { return ___U3ClevelU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3ClevelU3Ek__BackingField_4() { return &___U3ClevelU3Ek__BackingField_4; }
	inline void set_U3ClevelU3Ek__BackingField_4(int32_t value)
	{
		___U3ClevelU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of__children_5() { return static_cast<int32_t>(offsetof(TreeNode_t4178054862, ____children_5)); }
	inline List_1_t3547175994 * get__children_5() const { return ____children_5; }
	inline List_1_t3547175994 ** get_address_of__children_5() { return &____children_5; }
	inline void set__children_5(List_1_t3547175994 * value)
	{
		____children_5 = value;
		Il2CppCodeGenWriteBarrier(&____children_5, value);
	}

	inline static int32_t get_offset_of__expanded_6() { return static_cast<int32_t>(offsetof(TreeNode_t4178054862, ____expanded_6)); }
	inline bool get__expanded_6() const { return ____expanded_6; }
	inline bool* get_address_of__expanded_6() { return &____expanded_6; }
	inline void set__expanded_6(bool value)
	{
		____expanded_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
