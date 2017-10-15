#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.StageEngine
struct  StageEngine_t3344032290  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 FairyGUI.StageEngine::ObjectsOnStage
	int32_t ___ObjectsOnStage_2;
	// System.Int32 FairyGUI.StageEngine::GraphicsOnStage
	int32_t ___GraphicsOnStage_3;

public:
	inline static int32_t get_offset_of_ObjectsOnStage_2() { return static_cast<int32_t>(offsetof(StageEngine_t3344032290, ___ObjectsOnStage_2)); }
	inline int32_t get_ObjectsOnStage_2() const { return ___ObjectsOnStage_2; }
	inline int32_t* get_address_of_ObjectsOnStage_2() { return &___ObjectsOnStage_2; }
	inline void set_ObjectsOnStage_2(int32_t value)
	{
		___ObjectsOnStage_2 = value;
	}

	inline static int32_t get_offset_of_GraphicsOnStage_3() { return static_cast<int32_t>(offsetof(StageEngine_t3344032290, ___GraphicsOnStage_3)); }
	inline int32_t get_GraphicsOnStage_3() const { return ___GraphicsOnStage_3; }
	inline int32_t* get_address_of_GraphicsOnStage_3() { return &___GraphicsOnStage_3; }
	inline void set_GraphicsOnStage_3(int32_t value)
	{
		___GraphicsOnStage_3 = value;
	}
};

struct StageEngine_t3344032290_StaticFields
{
public:
	// System.Boolean FairyGUI.StageEngine::beingQuit
	bool ___beingQuit_4;

public:
	inline static int32_t get_offset_of_beingQuit_4() { return static_cast<int32_t>(offsetof(StageEngine_t3344032290_StaticFields, ___beingQuit_4)); }
	inline bool get_beingQuit_4() const { return ___beingQuit_4; }
	inline bool* get_address_of_beingQuit_4() { return &___beingQuit_4; }
	inline void set_beingQuit_4(bool value)
	{
		___beingQuit_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
