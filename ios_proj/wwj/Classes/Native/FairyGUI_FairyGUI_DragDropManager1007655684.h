#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// FairyGUI.GLoader
struct GLoader_t3665669800;
// System.Object
struct Il2CppObject;
// FairyGUI.DragDropManager
struct DragDropManager_t1007655684;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.DragDropManager
struct  DragDropManager_t1007655684  : public Il2CppObject
{
public:
	// FairyGUI.GLoader FairyGUI.DragDropManager::_agent
	GLoader_t3665669800 * ____agent_0;
	// System.Object FairyGUI.DragDropManager::_sourceData
	Il2CppObject * ____sourceData_1;

public:
	inline static int32_t get_offset_of__agent_0() { return static_cast<int32_t>(offsetof(DragDropManager_t1007655684, ____agent_0)); }
	inline GLoader_t3665669800 * get__agent_0() const { return ____agent_0; }
	inline GLoader_t3665669800 ** get_address_of__agent_0() { return &____agent_0; }
	inline void set__agent_0(GLoader_t3665669800 * value)
	{
		____agent_0 = value;
		Il2CppCodeGenWriteBarrier(&____agent_0, value);
	}

	inline static int32_t get_offset_of__sourceData_1() { return static_cast<int32_t>(offsetof(DragDropManager_t1007655684, ____sourceData_1)); }
	inline Il2CppObject * get__sourceData_1() const { return ____sourceData_1; }
	inline Il2CppObject ** get_address_of__sourceData_1() { return &____sourceData_1; }
	inline void set__sourceData_1(Il2CppObject * value)
	{
		____sourceData_1 = value;
		Il2CppCodeGenWriteBarrier(&____sourceData_1, value);
	}
};

struct DragDropManager_t1007655684_StaticFields
{
public:
	// FairyGUI.DragDropManager FairyGUI.DragDropManager::_inst
	DragDropManager_t1007655684 * ____inst_2;

public:
	inline static int32_t get_offset_of__inst_2() { return static_cast<int32_t>(offsetof(DragDropManager_t1007655684_StaticFields, ____inst_2)); }
	inline DragDropManager_t1007655684 * get__inst_2() const { return ____inst_2; }
	inline DragDropManager_t1007655684 ** get_address_of__inst_2() { return &____inst_2; }
	inline void set__inst_2(DragDropManager_t1007655684 * value)
	{
		____inst_2 = value;
		Il2CppCodeGenWriteBarrier(&____inst_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
