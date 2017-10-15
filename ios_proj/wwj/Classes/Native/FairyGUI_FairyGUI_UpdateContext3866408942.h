#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "FairyGUI_FairyGUI_UpdateContext_ClipInfo128403627.h"

// System.Collections.Generic.Stack`1<FairyGUI.UpdateContext/ClipInfo>
struct Stack_1_t1216131781;
// FairyGUI.UpdateContext
struct UpdateContext_t3866408942;
// FairyGUI.EventCallback0
struct EventCallback0_t422277839;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.UpdateContext
struct  UpdateContext_t3866408942  : public Il2CppObject
{
public:
	// System.Collections.Generic.Stack`1<FairyGUI.UpdateContext/ClipInfo> FairyGUI.UpdateContext::_clipStack
	Stack_1_t1216131781 * ____clipStack_0;
	// System.Boolean FairyGUI.UpdateContext::clipped
	bool ___clipped_1;
	// FairyGUI.UpdateContext/ClipInfo FairyGUI.UpdateContext::clipInfo
	ClipInfo_t128403627  ___clipInfo_2;
	// System.Int32 FairyGUI.UpdateContext::renderingOrder
	int32_t ___renderingOrder_3;
	// System.Int32 FairyGUI.UpdateContext::batchingDepth
	int32_t ___batchingDepth_4;
	// System.Int32 FairyGUI.UpdateContext::rectMaskDepth
	int32_t ___rectMaskDepth_5;
	// System.Int32 FairyGUI.UpdateContext::stencilReferenceValue
	int32_t ___stencilReferenceValue_6;
	// System.Single FairyGUI.UpdateContext::alpha
	float ___alpha_7;
	// System.Boolean FairyGUI.UpdateContext::grayed
	bool ___grayed_8;

public:
	inline static int32_t get_offset_of__clipStack_0() { return static_cast<int32_t>(offsetof(UpdateContext_t3866408942, ____clipStack_0)); }
	inline Stack_1_t1216131781 * get__clipStack_0() const { return ____clipStack_0; }
	inline Stack_1_t1216131781 ** get_address_of__clipStack_0() { return &____clipStack_0; }
	inline void set__clipStack_0(Stack_1_t1216131781 * value)
	{
		____clipStack_0 = value;
		Il2CppCodeGenWriteBarrier(&____clipStack_0, value);
	}

	inline static int32_t get_offset_of_clipped_1() { return static_cast<int32_t>(offsetof(UpdateContext_t3866408942, ___clipped_1)); }
	inline bool get_clipped_1() const { return ___clipped_1; }
	inline bool* get_address_of_clipped_1() { return &___clipped_1; }
	inline void set_clipped_1(bool value)
	{
		___clipped_1 = value;
	}

	inline static int32_t get_offset_of_clipInfo_2() { return static_cast<int32_t>(offsetof(UpdateContext_t3866408942, ___clipInfo_2)); }
	inline ClipInfo_t128403627  get_clipInfo_2() const { return ___clipInfo_2; }
	inline ClipInfo_t128403627 * get_address_of_clipInfo_2() { return &___clipInfo_2; }
	inline void set_clipInfo_2(ClipInfo_t128403627  value)
	{
		___clipInfo_2 = value;
	}

	inline static int32_t get_offset_of_renderingOrder_3() { return static_cast<int32_t>(offsetof(UpdateContext_t3866408942, ___renderingOrder_3)); }
	inline int32_t get_renderingOrder_3() const { return ___renderingOrder_3; }
	inline int32_t* get_address_of_renderingOrder_3() { return &___renderingOrder_3; }
	inline void set_renderingOrder_3(int32_t value)
	{
		___renderingOrder_3 = value;
	}

	inline static int32_t get_offset_of_batchingDepth_4() { return static_cast<int32_t>(offsetof(UpdateContext_t3866408942, ___batchingDepth_4)); }
	inline int32_t get_batchingDepth_4() const { return ___batchingDepth_4; }
	inline int32_t* get_address_of_batchingDepth_4() { return &___batchingDepth_4; }
	inline void set_batchingDepth_4(int32_t value)
	{
		___batchingDepth_4 = value;
	}

	inline static int32_t get_offset_of_rectMaskDepth_5() { return static_cast<int32_t>(offsetof(UpdateContext_t3866408942, ___rectMaskDepth_5)); }
	inline int32_t get_rectMaskDepth_5() const { return ___rectMaskDepth_5; }
	inline int32_t* get_address_of_rectMaskDepth_5() { return &___rectMaskDepth_5; }
	inline void set_rectMaskDepth_5(int32_t value)
	{
		___rectMaskDepth_5 = value;
	}

	inline static int32_t get_offset_of_stencilReferenceValue_6() { return static_cast<int32_t>(offsetof(UpdateContext_t3866408942, ___stencilReferenceValue_6)); }
	inline int32_t get_stencilReferenceValue_6() const { return ___stencilReferenceValue_6; }
	inline int32_t* get_address_of_stencilReferenceValue_6() { return &___stencilReferenceValue_6; }
	inline void set_stencilReferenceValue_6(int32_t value)
	{
		___stencilReferenceValue_6 = value;
	}

	inline static int32_t get_offset_of_alpha_7() { return static_cast<int32_t>(offsetof(UpdateContext_t3866408942, ___alpha_7)); }
	inline float get_alpha_7() const { return ___alpha_7; }
	inline float* get_address_of_alpha_7() { return &___alpha_7; }
	inline void set_alpha_7(float value)
	{
		___alpha_7 = value;
	}

	inline static int32_t get_offset_of_grayed_8() { return static_cast<int32_t>(offsetof(UpdateContext_t3866408942, ___grayed_8)); }
	inline bool get_grayed_8() const { return ___grayed_8; }
	inline bool* get_address_of_grayed_8() { return &___grayed_8; }
	inline void set_grayed_8(bool value)
	{
		___grayed_8 = value;
	}
};

struct UpdateContext_t3866408942_StaticFields
{
public:
	// FairyGUI.UpdateContext FairyGUI.UpdateContext::current
	UpdateContext_t3866408942 * ___current_9;
	// System.UInt32 FairyGUI.UpdateContext::frameId
	uint32_t ___frameId_10;
	// System.Boolean FairyGUI.UpdateContext::working
	bool ___working_11;
	// FairyGUI.EventCallback0 FairyGUI.UpdateContext::OnBegin
	EventCallback0_t422277839 * ___OnBegin_12;
	// FairyGUI.EventCallback0 FairyGUI.UpdateContext::OnEnd
	EventCallback0_t422277839 * ___OnEnd_13;
	// FairyGUI.EventCallback0 FairyGUI.UpdateContext::_tmpBegin
	EventCallback0_t422277839 * ____tmpBegin_14;

public:
	inline static int32_t get_offset_of_current_9() { return static_cast<int32_t>(offsetof(UpdateContext_t3866408942_StaticFields, ___current_9)); }
	inline UpdateContext_t3866408942 * get_current_9() const { return ___current_9; }
	inline UpdateContext_t3866408942 ** get_address_of_current_9() { return &___current_9; }
	inline void set_current_9(UpdateContext_t3866408942 * value)
	{
		___current_9 = value;
		Il2CppCodeGenWriteBarrier(&___current_9, value);
	}

	inline static int32_t get_offset_of_frameId_10() { return static_cast<int32_t>(offsetof(UpdateContext_t3866408942_StaticFields, ___frameId_10)); }
	inline uint32_t get_frameId_10() const { return ___frameId_10; }
	inline uint32_t* get_address_of_frameId_10() { return &___frameId_10; }
	inline void set_frameId_10(uint32_t value)
	{
		___frameId_10 = value;
	}

	inline static int32_t get_offset_of_working_11() { return static_cast<int32_t>(offsetof(UpdateContext_t3866408942_StaticFields, ___working_11)); }
	inline bool get_working_11() const { return ___working_11; }
	inline bool* get_address_of_working_11() { return &___working_11; }
	inline void set_working_11(bool value)
	{
		___working_11 = value;
	}

	inline static int32_t get_offset_of_OnBegin_12() { return static_cast<int32_t>(offsetof(UpdateContext_t3866408942_StaticFields, ___OnBegin_12)); }
	inline EventCallback0_t422277839 * get_OnBegin_12() const { return ___OnBegin_12; }
	inline EventCallback0_t422277839 ** get_address_of_OnBegin_12() { return &___OnBegin_12; }
	inline void set_OnBegin_12(EventCallback0_t422277839 * value)
	{
		___OnBegin_12 = value;
		Il2CppCodeGenWriteBarrier(&___OnBegin_12, value);
	}

	inline static int32_t get_offset_of_OnEnd_13() { return static_cast<int32_t>(offsetof(UpdateContext_t3866408942_StaticFields, ___OnEnd_13)); }
	inline EventCallback0_t422277839 * get_OnEnd_13() const { return ___OnEnd_13; }
	inline EventCallback0_t422277839 ** get_address_of_OnEnd_13() { return &___OnEnd_13; }
	inline void set_OnEnd_13(EventCallback0_t422277839 * value)
	{
		___OnEnd_13 = value;
		Il2CppCodeGenWriteBarrier(&___OnEnd_13, value);
	}

	inline static int32_t get_offset_of__tmpBegin_14() { return static_cast<int32_t>(offsetof(UpdateContext_t3866408942_StaticFields, ____tmpBegin_14)); }
	inline EventCallback0_t422277839 * get__tmpBegin_14() const { return ____tmpBegin_14; }
	inline EventCallback0_t422277839 ** get_address_of__tmpBegin_14() { return &____tmpBegin_14; }
	inline void set__tmpBegin_14(EventCallback0_t422277839 * value)
	{
		____tmpBegin_14 = value;
		Il2CppCodeGenWriteBarrier(&____tmpBegin_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
