#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// FairyGUI.GComponent
struct GComponent_t4106136290;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIMain
struct  UIMain_t658973805  : public MonoBehaviour_t1158329972
{
public:
	// FairyGUI.GComponent UIMain::_mainView
	GComponent_t4106136290 * ____mainView_5;
	// System.Boolean UIMain::is_stacked
	bool ___is_stacked_6;

public:
	inline static int32_t get_offset_of__mainView_5() { return static_cast<int32_t>(offsetof(UIMain_t658973805, ____mainView_5)); }
	inline GComponent_t4106136290 * get__mainView_5() const { return ____mainView_5; }
	inline GComponent_t4106136290 ** get_address_of__mainView_5() { return &____mainView_5; }
	inline void set__mainView_5(GComponent_t4106136290 * value)
	{
		____mainView_5 = value;
		Il2CppCodeGenWriteBarrier(&____mainView_5, value);
	}

	inline static int32_t get_offset_of_is_stacked_6() { return static_cast<int32_t>(offsetof(UIMain_t658973805, ___is_stacked_6)); }
	inline bool get_is_stacked_6() const { return ___is_stacked_6; }
	inline bool* get_address_of_is_stacked_6() { return &___is_stacked_6; }
	inline void set_is_stacked_6(bool value)
	{
		___is_stacked_6 = value;
	}
};

struct UIMain_t658973805_StaticFields
{
public:
	// UnityEngine.GameObject UIMain::_3dGameObj
	GameObject_t1756533147 * ____3dGameObj_4;

public:
	inline static int32_t get_offset_of__3dGameObj_4() { return static_cast<int32_t>(offsetof(UIMain_t658973805_StaticFields, ____3dGameObj_4)); }
	inline GameObject_t1756533147 * get__3dGameObj_4() const { return ____3dGameObj_4; }
	inline GameObject_t1756533147 ** get_address_of__3dGameObj_4() { return &____3dGameObj_4; }
	inline void set__3dGameObj_4(GameObject_t1756533147 * value)
	{
		____3dGameObj_4 = value;
		Il2CppCodeGenWriteBarrier(&____3dGameObj_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
