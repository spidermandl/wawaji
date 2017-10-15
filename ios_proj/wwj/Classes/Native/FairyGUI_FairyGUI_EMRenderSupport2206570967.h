#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// FairyGUI.UpdateContext
struct UpdateContext_t3866408942;
// System.Collections.Generic.List`1<FairyGUI.EMRenderTarget>
struct List_1_t130789885;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.EMRenderSupport
struct  EMRenderSupport_t2206570967  : public Il2CppObject
{
public:

public:
};

struct EMRenderSupport_t2206570967_StaticFields
{
public:
	// System.Boolean FairyGUI.EMRenderSupport::orderChanged
	bool ___orderChanged_0;
	// FairyGUI.UpdateContext FairyGUI.EMRenderSupport::_updateContext
	UpdateContext_t3866408942 * ____updateContext_1;
	// System.Collections.Generic.List`1<FairyGUI.EMRenderTarget> FairyGUI.EMRenderSupport::_targets
	List_1_t130789885 * ____targets_2;
	// System.Boolean FairyGUI.EMRenderSupport::<packageListReady>k__BackingField
	bool ___U3CpackageListReadyU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_orderChanged_0() { return static_cast<int32_t>(offsetof(EMRenderSupport_t2206570967_StaticFields, ___orderChanged_0)); }
	inline bool get_orderChanged_0() const { return ___orderChanged_0; }
	inline bool* get_address_of_orderChanged_0() { return &___orderChanged_0; }
	inline void set_orderChanged_0(bool value)
	{
		___orderChanged_0 = value;
	}

	inline static int32_t get_offset_of__updateContext_1() { return static_cast<int32_t>(offsetof(EMRenderSupport_t2206570967_StaticFields, ____updateContext_1)); }
	inline UpdateContext_t3866408942 * get__updateContext_1() const { return ____updateContext_1; }
	inline UpdateContext_t3866408942 ** get_address_of__updateContext_1() { return &____updateContext_1; }
	inline void set__updateContext_1(UpdateContext_t3866408942 * value)
	{
		____updateContext_1 = value;
		Il2CppCodeGenWriteBarrier(&____updateContext_1, value);
	}

	inline static int32_t get_offset_of__targets_2() { return static_cast<int32_t>(offsetof(EMRenderSupport_t2206570967_StaticFields, ____targets_2)); }
	inline List_1_t130789885 * get__targets_2() const { return ____targets_2; }
	inline List_1_t130789885 ** get_address_of__targets_2() { return &____targets_2; }
	inline void set__targets_2(List_1_t130789885 * value)
	{
		____targets_2 = value;
		Il2CppCodeGenWriteBarrier(&____targets_2, value);
	}

	inline static int32_t get_offset_of_U3CpackageListReadyU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(EMRenderSupport_t2206570967_StaticFields, ___U3CpackageListReadyU3Ek__BackingField_3)); }
	inline bool get_U3CpackageListReadyU3Ek__BackingField_3() const { return ___U3CpackageListReadyU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CpackageListReadyU3Ek__BackingField_3() { return &___U3CpackageListReadyU3Ek__BackingField_3; }
	inline void set_U3CpackageListReadyU3Ek__BackingField_3(bool value)
	{
		___U3CpackageListReadyU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
