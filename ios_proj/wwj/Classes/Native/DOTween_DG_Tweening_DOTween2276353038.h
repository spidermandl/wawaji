#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "DOTween_DG_Tweening_LogBehaviour3505725029.h"
#include "DOTween_DG_Tweening_UpdateType3357224513.h"
#include "DOTween_DG_Tweening_AutoPlay2503223703.h"
#include "DOTween_DG_Tweening_LoopType2249218064.h"
#include "DOTween_DG_Tweening_Ease2502520296.h"

// System.String
struct String_t;
// DG.Tweening.Core.DOTweenComponent
struct DOTweenComponent_t696744215;
// System.Collections.Generic.List`1<DG.Tweening.TweenCallback>
struct List_1_t3066263266;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.DOTween
struct  DOTween_t2276353038  : public Il2CppObject
{
public:

public:
};

struct DOTween_t2276353038_StaticFields
{
public:
	// System.String DG.Tweening.DOTween::Version
	String_t* ___Version_0;
	// System.Boolean DG.Tweening.DOTween::useSafeMode
	bool ___useSafeMode_1;
	// System.Boolean DG.Tweening.DOTween::showUnityEditorReport
	bool ___showUnityEditorReport_2;
	// System.Single DG.Tweening.DOTween::timeScale
	float ___timeScale_3;
	// System.Boolean DG.Tweening.DOTween::useSmoothDeltaTime
	bool ___useSmoothDeltaTime_4;
	// DG.Tweening.LogBehaviour DG.Tweening.DOTween::_logBehaviour
	int32_t ____logBehaviour_5;
	// System.Boolean DG.Tweening.DOTween::drawGizmos
	bool ___drawGizmos_6;
	// DG.Tweening.UpdateType DG.Tweening.DOTween::defaultUpdateType
	int32_t ___defaultUpdateType_7;
	// System.Boolean DG.Tweening.DOTween::defaultTimeScaleIndependent
	bool ___defaultTimeScaleIndependent_8;
	// DG.Tweening.AutoPlay DG.Tweening.DOTween::defaultAutoPlay
	int32_t ___defaultAutoPlay_9;
	// System.Boolean DG.Tweening.DOTween::defaultAutoKill
	bool ___defaultAutoKill_10;
	// DG.Tweening.LoopType DG.Tweening.DOTween::defaultLoopType
	int32_t ___defaultLoopType_11;
	// System.Boolean DG.Tweening.DOTween::defaultRecyclable
	bool ___defaultRecyclable_12;
	// DG.Tweening.Ease DG.Tweening.DOTween::defaultEaseType
	int32_t ___defaultEaseType_13;
	// System.Single DG.Tweening.DOTween::defaultEaseOvershootOrAmplitude
	float ___defaultEaseOvershootOrAmplitude_14;
	// System.Single DG.Tweening.DOTween::defaultEasePeriod
	float ___defaultEasePeriod_15;
	// DG.Tweening.Core.DOTweenComponent DG.Tweening.DOTween::instance
	DOTweenComponent_t696744215 * ___instance_16;
	// System.Boolean DG.Tweening.DOTween::isUnityEditor
	bool ___isUnityEditor_17;
	// System.Int32 DG.Tweening.DOTween::maxActiveTweenersReached
	int32_t ___maxActiveTweenersReached_18;
	// System.Int32 DG.Tweening.DOTween::maxActiveSequencesReached
	int32_t ___maxActiveSequencesReached_19;
	// System.Collections.Generic.List`1<DG.Tweening.TweenCallback> DG.Tweening.DOTween::GizmosDelegates
	List_1_t3066263266 * ___GizmosDelegates_20;
	// System.Boolean DG.Tweening.DOTween::initialized
	bool ___initialized_21;
	// System.Boolean DG.Tweening.DOTween::isQuitting
	bool ___isQuitting_22;

public:
	inline static int32_t get_offset_of_Version_0() { return static_cast<int32_t>(offsetof(DOTween_t2276353038_StaticFields, ___Version_0)); }
	inline String_t* get_Version_0() const { return ___Version_0; }
	inline String_t** get_address_of_Version_0() { return &___Version_0; }
	inline void set_Version_0(String_t* value)
	{
		___Version_0 = value;
		Il2CppCodeGenWriteBarrier(&___Version_0, value);
	}

	inline static int32_t get_offset_of_useSafeMode_1() { return static_cast<int32_t>(offsetof(DOTween_t2276353038_StaticFields, ___useSafeMode_1)); }
	inline bool get_useSafeMode_1() const { return ___useSafeMode_1; }
	inline bool* get_address_of_useSafeMode_1() { return &___useSafeMode_1; }
	inline void set_useSafeMode_1(bool value)
	{
		___useSafeMode_1 = value;
	}

	inline static int32_t get_offset_of_showUnityEditorReport_2() { return static_cast<int32_t>(offsetof(DOTween_t2276353038_StaticFields, ___showUnityEditorReport_2)); }
	inline bool get_showUnityEditorReport_2() const { return ___showUnityEditorReport_2; }
	inline bool* get_address_of_showUnityEditorReport_2() { return &___showUnityEditorReport_2; }
	inline void set_showUnityEditorReport_2(bool value)
	{
		___showUnityEditorReport_2 = value;
	}

	inline static int32_t get_offset_of_timeScale_3() { return static_cast<int32_t>(offsetof(DOTween_t2276353038_StaticFields, ___timeScale_3)); }
	inline float get_timeScale_3() const { return ___timeScale_3; }
	inline float* get_address_of_timeScale_3() { return &___timeScale_3; }
	inline void set_timeScale_3(float value)
	{
		___timeScale_3 = value;
	}

	inline static int32_t get_offset_of_useSmoothDeltaTime_4() { return static_cast<int32_t>(offsetof(DOTween_t2276353038_StaticFields, ___useSmoothDeltaTime_4)); }
	inline bool get_useSmoothDeltaTime_4() const { return ___useSmoothDeltaTime_4; }
	inline bool* get_address_of_useSmoothDeltaTime_4() { return &___useSmoothDeltaTime_4; }
	inline void set_useSmoothDeltaTime_4(bool value)
	{
		___useSmoothDeltaTime_4 = value;
	}

	inline static int32_t get_offset_of__logBehaviour_5() { return static_cast<int32_t>(offsetof(DOTween_t2276353038_StaticFields, ____logBehaviour_5)); }
	inline int32_t get__logBehaviour_5() const { return ____logBehaviour_5; }
	inline int32_t* get_address_of__logBehaviour_5() { return &____logBehaviour_5; }
	inline void set__logBehaviour_5(int32_t value)
	{
		____logBehaviour_5 = value;
	}

	inline static int32_t get_offset_of_drawGizmos_6() { return static_cast<int32_t>(offsetof(DOTween_t2276353038_StaticFields, ___drawGizmos_6)); }
	inline bool get_drawGizmos_6() const { return ___drawGizmos_6; }
	inline bool* get_address_of_drawGizmos_6() { return &___drawGizmos_6; }
	inline void set_drawGizmos_6(bool value)
	{
		___drawGizmos_6 = value;
	}

	inline static int32_t get_offset_of_defaultUpdateType_7() { return static_cast<int32_t>(offsetof(DOTween_t2276353038_StaticFields, ___defaultUpdateType_7)); }
	inline int32_t get_defaultUpdateType_7() const { return ___defaultUpdateType_7; }
	inline int32_t* get_address_of_defaultUpdateType_7() { return &___defaultUpdateType_7; }
	inline void set_defaultUpdateType_7(int32_t value)
	{
		___defaultUpdateType_7 = value;
	}

	inline static int32_t get_offset_of_defaultTimeScaleIndependent_8() { return static_cast<int32_t>(offsetof(DOTween_t2276353038_StaticFields, ___defaultTimeScaleIndependent_8)); }
	inline bool get_defaultTimeScaleIndependent_8() const { return ___defaultTimeScaleIndependent_8; }
	inline bool* get_address_of_defaultTimeScaleIndependent_8() { return &___defaultTimeScaleIndependent_8; }
	inline void set_defaultTimeScaleIndependent_8(bool value)
	{
		___defaultTimeScaleIndependent_8 = value;
	}

	inline static int32_t get_offset_of_defaultAutoPlay_9() { return static_cast<int32_t>(offsetof(DOTween_t2276353038_StaticFields, ___defaultAutoPlay_9)); }
	inline int32_t get_defaultAutoPlay_9() const { return ___defaultAutoPlay_9; }
	inline int32_t* get_address_of_defaultAutoPlay_9() { return &___defaultAutoPlay_9; }
	inline void set_defaultAutoPlay_9(int32_t value)
	{
		___defaultAutoPlay_9 = value;
	}

	inline static int32_t get_offset_of_defaultAutoKill_10() { return static_cast<int32_t>(offsetof(DOTween_t2276353038_StaticFields, ___defaultAutoKill_10)); }
	inline bool get_defaultAutoKill_10() const { return ___defaultAutoKill_10; }
	inline bool* get_address_of_defaultAutoKill_10() { return &___defaultAutoKill_10; }
	inline void set_defaultAutoKill_10(bool value)
	{
		___defaultAutoKill_10 = value;
	}

	inline static int32_t get_offset_of_defaultLoopType_11() { return static_cast<int32_t>(offsetof(DOTween_t2276353038_StaticFields, ___defaultLoopType_11)); }
	inline int32_t get_defaultLoopType_11() const { return ___defaultLoopType_11; }
	inline int32_t* get_address_of_defaultLoopType_11() { return &___defaultLoopType_11; }
	inline void set_defaultLoopType_11(int32_t value)
	{
		___defaultLoopType_11 = value;
	}

	inline static int32_t get_offset_of_defaultRecyclable_12() { return static_cast<int32_t>(offsetof(DOTween_t2276353038_StaticFields, ___defaultRecyclable_12)); }
	inline bool get_defaultRecyclable_12() const { return ___defaultRecyclable_12; }
	inline bool* get_address_of_defaultRecyclable_12() { return &___defaultRecyclable_12; }
	inline void set_defaultRecyclable_12(bool value)
	{
		___defaultRecyclable_12 = value;
	}

	inline static int32_t get_offset_of_defaultEaseType_13() { return static_cast<int32_t>(offsetof(DOTween_t2276353038_StaticFields, ___defaultEaseType_13)); }
	inline int32_t get_defaultEaseType_13() const { return ___defaultEaseType_13; }
	inline int32_t* get_address_of_defaultEaseType_13() { return &___defaultEaseType_13; }
	inline void set_defaultEaseType_13(int32_t value)
	{
		___defaultEaseType_13 = value;
	}

	inline static int32_t get_offset_of_defaultEaseOvershootOrAmplitude_14() { return static_cast<int32_t>(offsetof(DOTween_t2276353038_StaticFields, ___defaultEaseOvershootOrAmplitude_14)); }
	inline float get_defaultEaseOvershootOrAmplitude_14() const { return ___defaultEaseOvershootOrAmplitude_14; }
	inline float* get_address_of_defaultEaseOvershootOrAmplitude_14() { return &___defaultEaseOvershootOrAmplitude_14; }
	inline void set_defaultEaseOvershootOrAmplitude_14(float value)
	{
		___defaultEaseOvershootOrAmplitude_14 = value;
	}

	inline static int32_t get_offset_of_defaultEasePeriod_15() { return static_cast<int32_t>(offsetof(DOTween_t2276353038_StaticFields, ___defaultEasePeriod_15)); }
	inline float get_defaultEasePeriod_15() const { return ___defaultEasePeriod_15; }
	inline float* get_address_of_defaultEasePeriod_15() { return &___defaultEasePeriod_15; }
	inline void set_defaultEasePeriod_15(float value)
	{
		___defaultEasePeriod_15 = value;
	}

	inline static int32_t get_offset_of_instance_16() { return static_cast<int32_t>(offsetof(DOTween_t2276353038_StaticFields, ___instance_16)); }
	inline DOTweenComponent_t696744215 * get_instance_16() const { return ___instance_16; }
	inline DOTweenComponent_t696744215 ** get_address_of_instance_16() { return &___instance_16; }
	inline void set_instance_16(DOTweenComponent_t696744215 * value)
	{
		___instance_16 = value;
		Il2CppCodeGenWriteBarrier(&___instance_16, value);
	}

	inline static int32_t get_offset_of_isUnityEditor_17() { return static_cast<int32_t>(offsetof(DOTween_t2276353038_StaticFields, ___isUnityEditor_17)); }
	inline bool get_isUnityEditor_17() const { return ___isUnityEditor_17; }
	inline bool* get_address_of_isUnityEditor_17() { return &___isUnityEditor_17; }
	inline void set_isUnityEditor_17(bool value)
	{
		___isUnityEditor_17 = value;
	}

	inline static int32_t get_offset_of_maxActiveTweenersReached_18() { return static_cast<int32_t>(offsetof(DOTween_t2276353038_StaticFields, ___maxActiveTweenersReached_18)); }
	inline int32_t get_maxActiveTweenersReached_18() const { return ___maxActiveTweenersReached_18; }
	inline int32_t* get_address_of_maxActiveTweenersReached_18() { return &___maxActiveTweenersReached_18; }
	inline void set_maxActiveTweenersReached_18(int32_t value)
	{
		___maxActiveTweenersReached_18 = value;
	}

	inline static int32_t get_offset_of_maxActiveSequencesReached_19() { return static_cast<int32_t>(offsetof(DOTween_t2276353038_StaticFields, ___maxActiveSequencesReached_19)); }
	inline int32_t get_maxActiveSequencesReached_19() const { return ___maxActiveSequencesReached_19; }
	inline int32_t* get_address_of_maxActiveSequencesReached_19() { return &___maxActiveSequencesReached_19; }
	inline void set_maxActiveSequencesReached_19(int32_t value)
	{
		___maxActiveSequencesReached_19 = value;
	}

	inline static int32_t get_offset_of_GizmosDelegates_20() { return static_cast<int32_t>(offsetof(DOTween_t2276353038_StaticFields, ___GizmosDelegates_20)); }
	inline List_1_t3066263266 * get_GizmosDelegates_20() const { return ___GizmosDelegates_20; }
	inline List_1_t3066263266 ** get_address_of_GizmosDelegates_20() { return &___GizmosDelegates_20; }
	inline void set_GizmosDelegates_20(List_1_t3066263266 * value)
	{
		___GizmosDelegates_20 = value;
		Il2CppCodeGenWriteBarrier(&___GizmosDelegates_20, value);
	}

	inline static int32_t get_offset_of_initialized_21() { return static_cast<int32_t>(offsetof(DOTween_t2276353038_StaticFields, ___initialized_21)); }
	inline bool get_initialized_21() const { return ___initialized_21; }
	inline bool* get_address_of_initialized_21() { return &___initialized_21; }
	inline void set_initialized_21(bool value)
	{
		___initialized_21 = value;
	}

	inline static int32_t get_offset_of_isQuitting_22() { return static_cast<int32_t>(offsetof(DOTween_t2276353038_StaticFields, ___isQuitting_22)); }
	inline bool get_isQuitting_22() const { return ___isQuitting_22; }
	inline bool* get_address_of_isQuitting_22() { return &___isQuitting_22; }
	inline void set_isQuitting_22(bool value)
	{
		___isQuitting_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
