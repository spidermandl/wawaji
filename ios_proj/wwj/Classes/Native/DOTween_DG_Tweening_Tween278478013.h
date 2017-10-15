#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "DOTween_DG_Tweening_Core_ABSSequentiable2284140720.h"
#include "DOTween_DG_Tweening_UpdateType3357224513.h"
#include "DOTween_DG_Tweening_LoopType2249218064.h"
#include "DOTween_DG_Tweening_Ease2502520296.h"
#include "DOTween_DG_Tweening_Core_Enums_SpecialStartupMode1501334721.h"

// System.Object
struct Il2CppObject;
// DG.Tweening.TweenCallback
struct TweenCallback_t3697142134;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_t3418705418;
// DG.Tweening.EaseFunction
struct EaseFunction_t3306356708;
// System.Type
struct Type_t;
// DG.Tweening.Sequence
struct Sequence_t110643099;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Tween
struct  Tween_t278478013  : public ABSSequentiable_t2284140720
{
public:
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Object DG.Tweening.Tween::id
	Il2CppObject * ___id_6;
	// System.Object DG.Tweening.Tween::target
	Il2CppObject * ___target_7;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_8;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_9;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_t3697142134 * ___onPlay_10;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_t3697142134 * ___onPause_11;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_t3697142134 * ___onRewind_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_t3697142134 * ___onUpdate_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_t3697142134 * ___onStepComplete_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_t3697142134 * ___onComplete_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_t3697142134 * ___onKill_16;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_t3418705418 * ___onWaypointChange_17;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_18;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_19;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_20;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_21;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_22;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_23;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_24;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_25;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_26;
	// System.Boolean DG.Tweening.Tween::isRelative
	bool ___isRelative_27;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_28;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_t3306356708 * ___customEase_29;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_30;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_31;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t * ___typeofT1_32;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t * ___typeofT2_33;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t * ___typeofTPlugOptions_34;
	// System.Boolean DG.Tweening.Tween::active
	bool ___active_35;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_36;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_t110643099 * ___sequenceParent_37;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_38;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_39;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_40;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_41;
	// System.Boolean DG.Tweening.Tween::playedOnce
	bool ___playedOnce_42;
	// System.Single DG.Tweening.Tween::position
	float ___position_43;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_44;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_45;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_46;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_47;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_48;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_49;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_50;

public:
	inline static int32_t get_offset_of_timeScale_4() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___timeScale_4)); }
	inline float get_timeScale_4() const { return ___timeScale_4; }
	inline float* get_address_of_timeScale_4() { return &___timeScale_4; }
	inline void set_timeScale_4(float value)
	{
		___timeScale_4 = value;
	}

	inline static int32_t get_offset_of_isBackwards_5() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___isBackwards_5)); }
	inline bool get_isBackwards_5() const { return ___isBackwards_5; }
	inline bool* get_address_of_isBackwards_5() { return &___isBackwards_5; }
	inline void set_isBackwards_5(bool value)
	{
		___isBackwards_5 = value;
	}

	inline static int32_t get_offset_of_id_6() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___id_6)); }
	inline Il2CppObject * get_id_6() const { return ___id_6; }
	inline Il2CppObject ** get_address_of_id_6() { return &___id_6; }
	inline void set_id_6(Il2CppObject * value)
	{
		___id_6 = value;
		Il2CppCodeGenWriteBarrier(&___id_6, value);
	}

	inline static int32_t get_offset_of_target_7() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___target_7)); }
	inline Il2CppObject * get_target_7() const { return ___target_7; }
	inline Il2CppObject ** get_address_of_target_7() { return &___target_7; }
	inline void set_target_7(Il2CppObject * value)
	{
		___target_7 = value;
		Il2CppCodeGenWriteBarrier(&___target_7, value);
	}

	inline static int32_t get_offset_of_updateType_8() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___updateType_8)); }
	inline int32_t get_updateType_8() const { return ___updateType_8; }
	inline int32_t* get_address_of_updateType_8() { return &___updateType_8; }
	inline void set_updateType_8(int32_t value)
	{
		___updateType_8 = value;
	}

	inline static int32_t get_offset_of_isIndependentUpdate_9() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___isIndependentUpdate_9)); }
	inline bool get_isIndependentUpdate_9() const { return ___isIndependentUpdate_9; }
	inline bool* get_address_of_isIndependentUpdate_9() { return &___isIndependentUpdate_9; }
	inline void set_isIndependentUpdate_9(bool value)
	{
		___isIndependentUpdate_9 = value;
	}

	inline static int32_t get_offset_of_onPlay_10() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___onPlay_10)); }
	inline TweenCallback_t3697142134 * get_onPlay_10() const { return ___onPlay_10; }
	inline TweenCallback_t3697142134 ** get_address_of_onPlay_10() { return &___onPlay_10; }
	inline void set_onPlay_10(TweenCallback_t3697142134 * value)
	{
		___onPlay_10 = value;
		Il2CppCodeGenWriteBarrier(&___onPlay_10, value);
	}

	inline static int32_t get_offset_of_onPause_11() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___onPause_11)); }
	inline TweenCallback_t3697142134 * get_onPause_11() const { return ___onPause_11; }
	inline TweenCallback_t3697142134 ** get_address_of_onPause_11() { return &___onPause_11; }
	inline void set_onPause_11(TweenCallback_t3697142134 * value)
	{
		___onPause_11 = value;
		Il2CppCodeGenWriteBarrier(&___onPause_11, value);
	}

	inline static int32_t get_offset_of_onRewind_12() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___onRewind_12)); }
	inline TweenCallback_t3697142134 * get_onRewind_12() const { return ___onRewind_12; }
	inline TweenCallback_t3697142134 ** get_address_of_onRewind_12() { return &___onRewind_12; }
	inline void set_onRewind_12(TweenCallback_t3697142134 * value)
	{
		___onRewind_12 = value;
		Il2CppCodeGenWriteBarrier(&___onRewind_12, value);
	}

	inline static int32_t get_offset_of_onUpdate_13() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___onUpdate_13)); }
	inline TweenCallback_t3697142134 * get_onUpdate_13() const { return ___onUpdate_13; }
	inline TweenCallback_t3697142134 ** get_address_of_onUpdate_13() { return &___onUpdate_13; }
	inline void set_onUpdate_13(TweenCallback_t3697142134 * value)
	{
		___onUpdate_13 = value;
		Il2CppCodeGenWriteBarrier(&___onUpdate_13, value);
	}

	inline static int32_t get_offset_of_onStepComplete_14() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___onStepComplete_14)); }
	inline TweenCallback_t3697142134 * get_onStepComplete_14() const { return ___onStepComplete_14; }
	inline TweenCallback_t3697142134 ** get_address_of_onStepComplete_14() { return &___onStepComplete_14; }
	inline void set_onStepComplete_14(TweenCallback_t3697142134 * value)
	{
		___onStepComplete_14 = value;
		Il2CppCodeGenWriteBarrier(&___onStepComplete_14, value);
	}

	inline static int32_t get_offset_of_onComplete_15() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___onComplete_15)); }
	inline TweenCallback_t3697142134 * get_onComplete_15() const { return ___onComplete_15; }
	inline TweenCallback_t3697142134 ** get_address_of_onComplete_15() { return &___onComplete_15; }
	inline void set_onComplete_15(TweenCallback_t3697142134 * value)
	{
		___onComplete_15 = value;
		Il2CppCodeGenWriteBarrier(&___onComplete_15, value);
	}

	inline static int32_t get_offset_of_onKill_16() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___onKill_16)); }
	inline TweenCallback_t3697142134 * get_onKill_16() const { return ___onKill_16; }
	inline TweenCallback_t3697142134 ** get_address_of_onKill_16() { return &___onKill_16; }
	inline void set_onKill_16(TweenCallback_t3697142134 * value)
	{
		___onKill_16 = value;
		Il2CppCodeGenWriteBarrier(&___onKill_16, value);
	}

	inline static int32_t get_offset_of_onWaypointChange_17() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___onWaypointChange_17)); }
	inline TweenCallback_1_t3418705418 * get_onWaypointChange_17() const { return ___onWaypointChange_17; }
	inline TweenCallback_1_t3418705418 ** get_address_of_onWaypointChange_17() { return &___onWaypointChange_17; }
	inline void set_onWaypointChange_17(TweenCallback_1_t3418705418 * value)
	{
		___onWaypointChange_17 = value;
		Il2CppCodeGenWriteBarrier(&___onWaypointChange_17, value);
	}

	inline static int32_t get_offset_of_isFrom_18() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___isFrom_18)); }
	inline bool get_isFrom_18() const { return ___isFrom_18; }
	inline bool* get_address_of_isFrom_18() { return &___isFrom_18; }
	inline void set_isFrom_18(bool value)
	{
		___isFrom_18 = value;
	}

	inline static int32_t get_offset_of_isBlendable_19() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___isBlendable_19)); }
	inline bool get_isBlendable_19() const { return ___isBlendable_19; }
	inline bool* get_address_of_isBlendable_19() { return &___isBlendable_19; }
	inline void set_isBlendable_19(bool value)
	{
		___isBlendable_19 = value;
	}

	inline static int32_t get_offset_of_isRecyclable_20() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___isRecyclable_20)); }
	inline bool get_isRecyclable_20() const { return ___isRecyclable_20; }
	inline bool* get_address_of_isRecyclable_20() { return &___isRecyclable_20; }
	inline void set_isRecyclable_20(bool value)
	{
		___isRecyclable_20 = value;
	}

	inline static int32_t get_offset_of_isSpeedBased_21() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___isSpeedBased_21)); }
	inline bool get_isSpeedBased_21() const { return ___isSpeedBased_21; }
	inline bool* get_address_of_isSpeedBased_21() { return &___isSpeedBased_21; }
	inline void set_isSpeedBased_21(bool value)
	{
		___isSpeedBased_21 = value;
	}

	inline static int32_t get_offset_of_autoKill_22() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___autoKill_22)); }
	inline bool get_autoKill_22() const { return ___autoKill_22; }
	inline bool* get_address_of_autoKill_22() { return &___autoKill_22; }
	inline void set_autoKill_22(bool value)
	{
		___autoKill_22 = value;
	}

	inline static int32_t get_offset_of_duration_23() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___duration_23)); }
	inline float get_duration_23() const { return ___duration_23; }
	inline float* get_address_of_duration_23() { return &___duration_23; }
	inline void set_duration_23(float value)
	{
		___duration_23 = value;
	}

	inline static int32_t get_offset_of_loops_24() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___loops_24)); }
	inline int32_t get_loops_24() const { return ___loops_24; }
	inline int32_t* get_address_of_loops_24() { return &___loops_24; }
	inline void set_loops_24(int32_t value)
	{
		___loops_24 = value;
	}

	inline static int32_t get_offset_of_loopType_25() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___loopType_25)); }
	inline int32_t get_loopType_25() const { return ___loopType_25; }
	inline int32_t* get_address_of_loopType_25() { return &___loopType_25; }
	inline void set_loopType_25(int32_t value)
	{
		___loopType_25 = value;
	}

	inline static int32_t get_offset_of_delay_26() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___delay_26)); }
	inline float get_delay_26() const { return ___delay_26; }
	inline float* get_address_of_delay_26() { return &___delay_26; }
	inline void set_delay_26(float value)
	{
		___delay_26 = value;
	}

	inline static int32_t get_offset_of_isRelative_27() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___isRelative_27)); }
	inline bool get_isRelative_27() const { return ___isRelative_27; }
	inline bool* get_address_of_isRelative_27() { return &___isRelative_27; }
	inline void set_isRelative_27(bool value)
	{
		___isRelative_27 = value;
	}

	inline static int32_t get_offset_of_easeType_28() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___easeType_28)); }
	inline int32_t get_easeType_28() const { return ___easeType_28; }
	inline int32_t* get_address_of_easeType_28() { return &___easeType_28; }
	inline void set_easeType_28(int32_t value)
	{
		___easeType_28 = value;
	}

	inline static int32_t get_offset_of_customEase_29() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___customEase_29)); }
	inline EaseFunction_t3306356708 * get_customEase_29() const { return ___customEase_29; }
	inline EaseFunction_t3306356708 ** get_address_of_customEase_29() { return &___customEase_29; }
	inline void set_customEase_29(EaseFunction_t3306356708 * value)
	{
		___customEase_29 = value;
		Il2CppCodeGenWriteBarrier(&___customEase_29, value);
	}

	inline static int32_t get_offset_of_easeOvershootOrAmplitude_30() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___easeOvershootOrAmplitude_30)); }
	inline float get_easeOvershootOrAmplitude_30() const { return ___easeOvershootOrAmplitude_30; }
	inline float* get_address_of_easeOvershootOrAmplitude_30() { return &___easeOvershootOrAmplitude_30; }
	inline void set_easeOvershootOrAmplitude_30(float value)
	{
		___easeOvershootOrAmplitude_30 = value;
	}

	inline static int32_t get_offset_of_easePeriod_31() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___easePeriod_31)); }
	inline float get_easePeriod_31() const { return ___easePeriod_31; }
	inline float* get_address_of_easePeriod_31() { return &___easePeriod_31; }
	inline void set_easePeriod_31(float value)
	{
		___easePeriod_31 = value;
	}

	inline static int32_t get_offset_of_typeofT1_32() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___typeofT1_32)); }
	inline Type_t * get_typeofT1_32() const { return ___typeofT1_32; }
	inline Type_t ** get_address_of_typeofT1_32() { return &___typeofT1_32; }
	inline void set_typeofT1_32(Type_t * value)
	{
		___typeofT1_32 = value;
		Il2CppCodeGenWriteBarrier(&___typeofT1_32, value);
	}

	inline static int32_t get_offset_of_typeofT2_33() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___typeofT2_33)); }
	inline Type_t * get_typeofT2_33() const { return ___typeofT2_33; }
	inline Type_t ** get_address_of_typeofT2_33() { return &___typeofT2_33; }
	inline void set_typeofT2_33(Type_t * value)
	{
		___typeofT2_33 = value;
		Il2CppCodeGenWriteBarrier(&___typeofT2_33, value);
	}

	inline static int32_t get_offset_of_typeofTPlugOptions_34() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___typeofTPlugOptions_34)); }
	inline Type_t * get_typeofTPlugOptions_34() const { return ___typeofTPlugOptions_34; }
	inline Type_t ** get_address_of_typeofTPlugOptions_34() { return &___typeofTPlugOptions_34; }
	inline void set_typeofTPlugOptions_34(Type_t * value)
	{
		___typeofTPlugOptions_34 = value;
		Il2CppCodeGenWriteBarrier(&___typeofTPlugOptions_34, value);
	}

	inline static int32_t get_offset_of_active_35() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___active_35)); }
	inline bool get_active_35() const { return ___active_35; }
	inline bool* get_address_of_active_35() { return &___active_35; }
	inline void set_active_35(bool value)
	{
		___active_35 = value;
	}

	inline static int32_t get_offset_of_isSequenced_36() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___isSequenced_36)); }
	inline bool get_isSequenced_36() const { return ___isSequenced_36; }
	inline bool* get_address_of_isSequenced_36() { return &___isSequenced_36; }
	inline void set_isSequenced_36(bool value)
	{
		___isSequenced_36 = value;
	}

	inline static int32_t get_offset_of_sequenceParent_37() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___sequenceParent_37)); }
	inline Sequence_t110643099 * get_sequenceParent_37() const { return ___sequenceParent_37; }
	inline Sequence_t110643099 ** get_address_of_sequenceParent_37() { return &___sequenceParent_37; }
	inline void set_sequenceParent_37(Sequence_t110643099 * value)
	{
		___sequenceParent_37 = value;
		Il2CppCodeGenWriteBarrier(&___sequenceParent_37, value);
	}

	inline static int32_t get_offset_of_activeId_38() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___activeId_38)); }
	inline int32_t get_activeId_38() const { return ___activeId_38; }
	inline int32_t* get_address_of_activeId_38() { return &___activeId_38; }
	inline void set_activeId_38(int32_t value)
	{
		___activeId_38 = value;
	}

	inline static int32_t get_offset_of_specialStartupMode_39() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___specialStartupMode_39)); }
	inline int32_t get_specialStartupMode_39() const { return ___specialStartupMode_39; }
	inline int32_t* get_address_of_specialStartupMode_39() { return &___specialStartupMode_39; }
	inline void set_specialStartupMode_39(int32_t value)
	{
		___specialStartupMode_39 = value;
	}

	inline static int32_t get_offset_of_creationLocked_40() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___creationLocked_40)); }
	inline bool get_creationLocked_40() const { return ___creationLocked_40; }
	inline bool* get_address_of_creationLocked_40() { return &___creationLocked_40; }
	inline void set_creationLocked_40(bool value)
	{
		___creationLocked_40 = value;
	}

	inline static int32_t get_offset_of_startupDone_41() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___startupDone_41)); }
	inline bool get_startupDone_41() const { return ___startupDone_41; }
	inline bool* get_address_of_startupDone_41() { return &___startupDone_41; }
	inline void set_startupDone_41(bool value)
	{
		___startupDone_41 = value;
	}

	inline static int32_t get_offset_of_playedOnce_42() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___playedOnce_42)); }
	inline bool get_playedOnce_42() const { return ___playedOnce_42; }
	inline bool* get_address_of_playedOnce_42() { return &___playedOnce_42; }
	inline void set_playedOnce_42(bool value)
	{
		___playedOnce_42 = value;
	}

	inline static int32_t get_offset_of_position_43() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___position_43)); }
	inline float get_position_43() const { return ___position_43; }
	inline float* get_address_of_position_43() { return &___position_43; }
	inline void set_position_43(float value)
	{
		___position_43 = value;
	}

	inline static int32_t get_offset_of_fullDuration_44() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___fullDuration_44)); }
	inline float get_fullDuration_44() const { return ___fullDuration_44; }
	inline float* get_address_of_fullDuration_44() { return &___fullDuration_44; }
	inline void set_fullDuration_44(float value)
	{
		___fullDuration_44 = value;
	}

	inline static int32_t get_offset_of_completedLoops_45() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___completedLoops_45)); }
	inline int32_t get_completedLoops_45() const { return ___completedLoops_45; }
	inline int32_t* get_address_of_completedLoops_45() { return &___completedLoops_45; }
	inline void set_completedLoops_45(int32_t value)
	{
		___completedLoops_45 = value;
	}

	inline static int32_t get_offset_of_isPlaying_46() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___isPlaying_46)); }
	inline bool get_isPlaying_46() const { return ___isPlaying_46; }
	inline bool* get_address_of_isPlaying_46() { return &___isPlaying_46; }
	inline void set_isPlaying_46(bool value)
	{
		___isPlaying_46 = value;
	}

	inline static int32_t get_offset_of_isComplete_47() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___isComplete_47)); }
	inline bool get_isComplete_47() const { return ___isComplete_47; }
	inline bool* get_address_of_isComplete_47() { return &___isComplete_47; }
	inline void set_isComplete_47(bool value)
	{
		___isComplete_47 = value;
	}

	inline static int32_t get_offset_of_elapsedDelay_48() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___elapsedDelay_48)); }
	inline float get_elapsedDelay_48() const { return ___elapsedDelay_48; }
	inline float* get_address_of_elapsedDelay_48() { return &___elapsedDelay_48; }
	inline void set_elapsedDelay_48(float value)
	{
		___elapsedDelay_48 = value;
	}

	inline static int32_t get_offset_of_delayComplete_49() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___delayComplete_49)); }
	inline bool get_delayComplete_49() const { return ___delayComplete_49; }
	inline bool* get_address_of_delayComplete_49() { return &___delayComplete_49; }
	inline void set_delayComplete_49(bool value)
	{
		___delayComplete_49 = value;
	}

	inline static int32_t get_offset_of_miscInt_50() { return static_cast<int32_t>(offsetof(Tween_t278478013, ___miscInt_50)); }
	inline int32_t get_miscInt_50() const { return ___miscInt_50; }
	inline int32_t* get_address_of_miscInt_50() { return &___miscInt_50; }
	inline void set_miscInt_50(int32_t value)
	{
		___miscInt_50 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
