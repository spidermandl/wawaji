#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_DisplayObject1069768653.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t2810717544;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.GoWrapper
struct  GoWrapper_t787541089  : public DisplayObject_t1069768653
{
public:
	// System.Boolean FairyGUI.GoWrapper::supportStencil
	bool ___supportStencil_52;
	// UnityEngine.GameObject FairyGUI.GoWrapper::_wrapTarget
	GameObject_t1756533147 * ____wrapTarget_53;
	// UnityEngine.Renderer[] FairyGUI.GoWrapper::_renders
	RendererU5BU5D_t2810717544* ____renders_54;

public:
	inline static int32_t get_offset_of_supportStencil_52() { return static_cast<int32_t>(offsetof(GoWrapper_t787541089, ___supportStencil_52)); }
	inline bool get_supportStencil_52() const { return ___supportStencil_52; }
	inline bool* get_address_of_supportStencil_52() { return &___supportStencil_52; }
	inline void set_supportStencil_52(bool value)
	{
		___supportStencil_52 = value;
	}

	inline static int32_t get_offset_of__wrapTarget_53() { return static_cast<int32_t>(offsetof(GoWrapper_t787541089, ____wrapTarget_53)); }
	inline GameObject_t1756533147 * get__wrapTarget_53() const { return ____wrapTarget_53; }
	inline GameObject_t1756533147 ** get_address_of__wrapTarget_53() { return &____wrapTarget_53; }
	inline void set__wrapTarget_53(GameObject_t1756533147 * value)
	{
		____wrapTarget_53 = value;
		Il2CppCodeGenWriteBarrier(&____wrapTarget_53, value);
	}

	inline static int32_t get_offset_of__renders_54() { return static_cast<int32_t>(offsetof(GoWrapper_t787541089, ____renders_54)); }
	inline RendererU5BU5D_t2810717544* get__renders_54() const { return ____renders_54; }
	inline RendererU5BU5D_t2810717544** get_address_of__renders_54() { return &____renders_54; }
	inline void set__renders_54(RendererU5BU5D_t2810717544* value)
	{
		____renders_54 = value;
		Il2CppCodeGenWriteBarrier(&____renders_54, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
