#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Stack`1<FairyGUI.Utils.IHtmlObject>
struct Stack_1_t4117695473;
// FairyGUI.Utils.HtmlPageContext
struct HtmlPageContext_t1230981647;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.Utils.HtmlPageContext
struct  HtmlPageContext_t1230981647  : public Il2CppObject
{
public:
	// System.Collections.Generic.Stack`1<FairyGUI.Utils.IHtmlObject> FairyGUI.Utils.HtmlPageContext::_imagePool
	Stack_1_t4117695473 * ____imagePool_0;
	// System.Collections.Generic.Stack`1<FairyGUI.Utils.IHtmlObject> FairyGUI.Utils.HtmlPageContext::_inputPool
	Stack_1_t4117695473 * ____inputPool_1;
	// System.Collections.Generic.Stack`1<FairyGUI.Utils.IHtmlObject> FairyGUI.Utils.HtmlPageContext::_buttonPool
	Stack_1_t4117695473 * ____buttonPool_2;
	// System.Collections.Generic.Stack`1<FairyGUI.Utils.IHtmlObject> FairyGUI.Utils.HtmlPageContext::_selectPool
	Stack_1_t4117695473 * ____selectPool_3;
	// System.Collections.Generic.Stack`1<FairyGUI.Utils.IHtmlObject> FairyGUI.Utils.HtmlPageContext::_linkPool
	Stack_1_t4117695473 * ____linkPool_4;

public:
	inline static int32_t get_offset_of__imagePool_0() { return static_cast<int32_t>(offsetof(HtmlPageContext_t1230981647, ____imagePool_0)); }
	inline Stack_1_t4117695473 * get__imagePool_0() const { return ____imagePool_0; }
	inline Stack_1_t4117695473 ** get_address_of__imagePool_0() { return &____imagePool_0; }
	inline void set__imagePool_0(Stack_1_t4117695473 * value)
	{
		____imagePool_0 = value;
		Il2CppCodeGenWriteBarrier(&____imagePool_0, value);
	}

	inline static int32_t get_offset_of__inputPool_1() { return static_cast<int32_t>(offsetof(HtmlPageContext_t1230981647, ____inputPool_1)); }
	inline Stack_1_t4117695473 * get__inputPool_1() const { return ____inputPool_1; }
	inline Stack_1_t4117695473 ** get_address_of__inputPool_1() { return &____inputPool_1; }
	inline void set__inputPool_1(Stack_1_t4117695473 * value)
	{
		____inputPool_1 = value;
		Il2CppCodeGenWriteBarrier(&____inputPool_1, value);
	}

	inline static int32_t get_offset_of__buttonPool_2() { return static_cast<int32_t>(offsetof(HtmlPageContext_t1230981647, ____buttonPool_2)); }
	inline Stack_1_t4117695473 * get__buttonPool_2() const { return ____buttonPool_2; }
	inline Stack_1_t4117695473 ** get_address_of__buttonPool_2() { return &____buttonPool_2; }
	inline void set__buttonPool_2(Stack_1_t4117695473 * value)
	{
		____buttonPool_2 = value;
		Il2CppCodeGenWriteBarrier(&____buttonPool_2, value);
	}

	inline static int32_t get_offset_of__selectPool_3() { return static_cast<int32_t>(offsetof(HtmlPageContext_t1230981647, ____selectPool_3)); }
	inline Stack_1_t4117695473 * get__selectPool_3() const { return ____selectPool_3; }
	inline Stack_1_t4117695473 ** get_address_of__selectPool_3() { return &____selectPool_3; }
	inline void set__selectPool_3(Stack_1_t4117695473 * value)
	{
		____selectPool_3 = value;
		Il2CppCodeGenWriteBarrier(&____selectPool_3, value);
	}

	inline static int32_t get_offset_of__linkPool_4() { return static_cast<int32_t>(offsetof(HtmlPageContext_t1230981647, ____linkPool_4)); }
	inline Stack_1_t4117695473 * get__linkPool_4() const { return ____linkPool_4; }
	inline Stack_1_t4117695473 ** get_address_of__linkPool_4() { return &____linkPool_4; }
	inline void set__linkPool_4(Stack_1_t4117695473 * value)
	{
		____linkPool_4 = value;
		Il2CppCodeGenWriteBarrier(&____linkPool_4, value);
	}
};

struct HtmlPageContext_t1230981647_StaticFields
{
public:
	// FairyGUI.Utils.HtmlPageContext FairyGUI.Utils.HtmlPageContext::inst
	HtmlPageContext_t1230981647 * ___inst_5;
	// UnityEngine.Transform FairyGUI.Utils.HtmlPageContext::_poolManager
	Transform_t3275118058 * ____poolManager_6;

public:
	inline static int32_t get_offset_of_inst_5() { return static_cast<int32_t>(offsetof(HtmlPageContext_t1230981647_StaticFields, ___inst_5)); }
	inline HtmlPageContext_t1230981647 * get_inst_5() const { return ___inst_5; }
	inline HtmlPageContext_t1230981647 ** get_address_of_inst_5() { return &___inst_5; }
	inline void set_inst_5(HtmlPageContext_t1230981647 * value)
	{
		___inst_5 = value;
		Il2CppCodeGenWriteBarrier(&___inst_5, value);
	}

	inline static int32_t get_offset_of__poolManager_6() { return static_cast<int32_t>(offsetof(HtmlPageContext_t1230981647_StaticFields, ____poolManager_6)); }
	inline Transform_t3275118058 * get__poolManager_6() const { return ____poolManager_6; }
	inline Transform_t3275118058 ** get_address_of__poolManager_6() { return &____poolManager_6; }
	inline void set__poolManager_6(Transform_t3275118058 * value)
	{
		____poolManager_6 = value;
		Il2CppCodeGenWriteBarrier(&____poolManager_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
