#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// DG.Tweening.Tween[]
struct TweenU5BU5D_t672698288;
// System.Collections.Generic.Stack`1<DG.Tweening.Tween>
struct Stack_1_t1366206167;
// System.Collections.Generic.List`1<DG.Tweening.Tween>
struct List_1_t3942566441;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.TweenManager
struct  TweenManager_t1979661952  : public Il2CppObject
{
public:

public:
};

struct TweenManager_t1979661952_StaticFields
{
public:
	// System.Int32 DG.Tweening.Core.TweenManager::maxActive
	int32_t ___maxActive_0;
	// System.Int32 DG.Tweening.Core.TweenManager::maxTweeners
	int32_t ___maxTweeners_1;
	// System.Int32 DG.Tweening.Core.TweenManager::maxSequences
	int32_t ___maxSequences_2;
	// System.Boolean DG.Tweening.Core.TweenManager::hasActiveTweens
	bool ___hasActiveTweens_3;
	// System.Boolean DG.Tweening.Core.TweenManager::hasActiveDefaultTweens
	bool ___hasActiveDefaultTweens_4;
	// System.Boolean DG.Tweening.Core.TweenManager::hasActiveLateTweens
	bool ___hasActiveLateTweens_5;
	// System.Boolean DG.Tweening.Core.TweenManager::hasActiveFixedTweens
	bool ___hasActiveFixedTweens_6;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveTweens
	int32_t ___totActiveTweens_7;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveDefaultTweens
	int32_t ___totActiveDefaultTweens_8;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveLateTweens
	int32_t ___totActiveLateTweens_9;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveFixedTweens
	int32_t ___totActiveFixedTweens_10;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveTweeners
	int32_t ___totActiveTweeners_11;
	// System.Int32 DG.Tweening.Core.TweenManager::totActiveSequences
	int32_t ___totActiveSequences_12;
	// System.Int32 DG.Tweening.Core.TweenManager::totPooledTweeners
	int32_t ___totPooledTweeners_13;
	// System.Int32 DG.Tweening.Core.TweenManager::totPooledSequences
	int32_t ___totPooledSequences_14;
	// System.Int32 DG.Tweening.Core.TweenManager::totTweeners
	int32_t ___totTweeners_15;
	// System.Int32 DG.Tweening.Core.TweenManager::totSequences
	int32_t ___totSequences_16;
	// System.Boolean DG.Tweening.Core.TweenManager::isUpdateLoop
	bool ___isUpdateLoop_17;
	// DG.Tweening.Tween[] DG.Tweening.Core.TweenManager::_activeTweens
	TweenU5BU5D_t672698288* ____activeTweens_18;
	// DG.Tweening.Tween[] DG.Tweening.Core.TweenManager::_pooledTweeners
	TweenU5BU5D_t672698288* ____pooledTweeners_19;
	// System.Collections.Generic.Stack`1<DG.Tweening.Tween> DG.Tweening.Core.TweenManager::_PooledSequences
	Stack_1_t1366206167 * ____PooledSequences_20;
	// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.Core.TweenManager::_KillList
	List_1_t3942566441 * ____KillList_21;
	// System.Int32 DG.Tweening.Core.TweenManager::_maxActiveLookupId
	int32_t ____maxActiveLookupId_22;
	// System.Boolean DG.Tweening.Core.TweenManager::_requiresActiveReorganization
	bool ____requiresActiveReorganization_23;
	// System.Int32 DG.Tweening.Core.TweenManager::_reorganizeFromId
	int32_t ____reorganizeFromId_24;
	// System.Int32 DG.Tweening.Core.TweenManager::_minPooledTweenerId
	int32_t ____minPooledTweenerId_25;
	// System.Int32 DG.Tweening.Core.TweenManager::_maxPooledTweenerId
	int32_t ____maxPooledTweenerId_26;
	// System.Boolean DG.Tweening.Core.TweenManager::_despawnAllCalledFromUpdateLoopCallback
	bool ____despawnAllCalledFromUpdateLoopCallback_27;

public:
	inline static int32_t get_offset_of_maxActive_0() { return static_cast<int32_t>(offsetof(TweenManager_t1979661952_StaticFields, ___maxActive_0)); }
	inline int32_t get_maxActive_0() const { return ___maxActive_0; }
	inline int32_t* get_address_of_maxActive_0() { return &___maxActive_0; }
	inline void set_maxActive_0(int32_t value)
	{
		___maxActive_0 = value;
	}

	inline static int32_t get_offset_of_maxTweeners_1() { return static_cast<int32_t>(offsetof(TweenManager_t1979661952_StaticFields, ___maxTweeners_1)); }
	inline int32_t get_maxTweeners_1() const { return ___maxTweeners_1; }
	inline int32_t* get_address_of_maxTweeners_1() { return &___maxTweeners_1; }
	inline void set_maxTweeners_1(int32_t value)
	{
		___maxTweeners_1 = value;
	}

	inline static int32_t get_offset_of_maxSequences_2() { return static_cast<int32_t>(offsetof(TweenManager_t1979661952_StaticFields, ___maxSequences_2)); }
	inline int32_t get_maxSequences_2() const { return ___maxSequences_2; }
	inline int32_t* get_address_of_maxSequences_2() { return &___maxSequences_2; }
	inline void set_maxSequences_2(int32_t value)
	{
		___maxSequences_2 = value;
	}

	inline static int32_t get_offset_of_hasActiveTweens_3() { return static_cast<int32_t>(offsetof(TweenManager_t1979661952_StaticFields, ___hasActiveTweens_3)); }
	inline bool get_hasActiveTweens_3() const { return ___hasActiveTweens_3; }
	inline bool* get_address_of_hasActiveTweens_3() { return &___hasActiveTweens_3; }
	inline void set_hasActiveTweens_3(bool value)
	{
		___hasActiveTweens_3 = value;
	}

	inline static int32_t get_offset_of_hasActiveDefaultTweens_4() { return static_cast<int32_t>(offsetof(TweenManager_t1979661952_StaticFields, ___hasActiveDefaultTweens_4)); }
	inline bool get_hasActiveDefaultTweens_4() const { return ___hasActiveDefaultTweens_4; }
	inline bool* get_address_of_hasActiveDefaultTweens_4() { return &___hasActiveDefaultTweens_4; }
	inline void set_hasActiveDefaultTweens_4(bool value)
	{
		___hasActiveDefaultTweens_4 = value;
	}

	inline static int32_t get_offset_of_hasActiveLateTweens_5() { return static_cast<int32_t>(offsetof(TweenManager_t1979661952_StaticFields, ___hasActiveLateTweens_5)); }
	inline bool get_hasActiveLateTweens_5() const { return ___hasActiveLateTweens_5; }
	inline bool* get_address_of_hasActiveLateTweens_5() { return &___hasActiveLateTweens_5; }
	inline void set_hasActiveLateTweens_5(bool value)
	{
		___hasActiveLateTweens_5 = value;
	}

	inline static int32_t get_offset_of_hasActiveFixedTweens_6() { return static_cast<int32_t>(offsetof(TweenManager_t1979661952_StaticFields, ___hasActiveFixedTweens_6)); }
	inline bool get_hasActiveFixedTweens_6() const { return ___hasActiveFixedTweens_6; }
	inline bool* get_address_of_hasActiveFixedTweens_6() { return &___hasActiveFixedTweens_6; }
	inline void set_hasActiveFixedTweens_6(bool value)
	{
		___hasActiveFixedTweens_6 = value;
	}

	inline static int32_t get_offset_of_totActiveTweens_7() { return static_cast<int32_t>(offsetof(TweenManager_t1979661952_StaticFields, ___totActiveTweens_7)); }
	inline int32_t get_totActiveTweens_7() const { return ___totActiveTweens_7; }
	inline int32_t* get_address_of_totActiveTweens_7() { return &___totActiveTweens_7; }
	inline void set_totActiveTweens_7(int32_t value)
	{
		___totActiveTweens_7 = value;
	}

	inline static int32_t get_offset_of_totActiveDefaultTweens_8() { return static_cast<int32_t>(offsetof(TweenManager_t1979661952_StaticFields, ___totActiveDefaultTweens_8)); }
	inline int32_t get_totActiveDefaultTweens_8() const { return ___totActiveDefaultTweens_8; }
	inline int32_t* get_address_of_totActiveDefaultTweens_8() { return &___totActiveDefaultTweens_8; }
	inline void set_totActiveDefaultTweens_8(int32_t value)
	{
		___totActiveDefaultTweens_8 = value;
	}

	inline static int32_t get_offset_of_totActiveLateTweens_9() { return static_cast<int32_t>(offsetof(TweenManager_t1979661952_StaticFields, ___totActiveLateTweens_9)); }
	inline int32_t get_totActiveLateTweens_9() const { return ___totActiveLateTweens_9; }
	inline int32_t* get_address_of_totActiveLateTweens_9() { return &___totActiveLateTweens_9; }
	inline void set_totActiveLateTweens_9(int32_t value)
	{
		___totActiveLateTweens_9 = value;
	}

	inline static int32_t get_offset_of_totActiveFixedTweens_10() { return static_cast<int32_t>(offsetof(TweenManager_t1979661952_StaticFields, ___totActiveFixedTweens_10)); }
	inline int32_t get_totActiveFixedTweens_10() const { return ___totActiveFixedTweens_10; }
	inline int32_t* get_address_of_totActiveFixedTweens_10() { return &___totActiveFixedTweens_10; }
	inline void set_totActiveFixedTweens_10(int32_t value)
	{
		___totActiveFixedTweens_10 = value;
	}

	inline static int32_t get_offset_of_totActiveTweeners_11() { return static_cast<int32_t>(offsetof(TweenManager_t1979661952_StaticFields, ___totActiveTweeners_11)); }
	inline int32_t get_totActiveTweeners_11() const { return ___totActiveTweeners_11; }
	inline int32_t* get_address_of_totActiveTweeners_11() { return &___totActiveTweeners_11; }
	inline void set_totActiveTweeners_11(int32_t value)
	{
		___totActiveTweeners_11 = value;
	}

	inline static int32_t get_offset_of_totActiveSequences_12() { return static_cast<int32_t>(offsetof(TweenManager_t1979661952_StaticFields, ___totActiveSequences_12)); }
	inline int32_t get_totActiveSequences_12() const { return ___totActiveSequences_12; }
	inline int32_t* get_address_of_totActiveSequences_12() { return &___totActiveSequences_12; }
	inline void set_totActiveSequences_12(int32_t value)
	{
		___totActiveSequences_12 = value;
	}

	inline static int32_t get_offset_of_totPooledTweeners_13() { return static_cast<int32_t>(offsetof(TweenManager_t1979661952_StaticFields, ___totPooledTweeners_13)); }
	inline int32_t get_totPooledTweeners_13() const { return ___totPooledTweeners_13; }
	inline int32_t* get_address_of_totPooledTweeners_13() { return &___totPooledTweeners_13; }
	inline void set_totPooledTweeners_13(int32_t value)
	{
		___totPooledTweeners_13 = value;
	}

	inline static int32_t get_offset_of_totPooledSequences_14() { return static_cast<int32_t>(offsetof(TweenManager_t1979661952_StaticFields, ___totPooledSequences_14)); }
	inline int32_t get_totPooledSequences_14() const { return ___totPooledSequences_14; }
	inline int32_t* get_address_of_totPooledSequences_14() { return &___totPooledSequences_14; }
	inline void set_totPooledSequences_14(int32_t value)
	{
		___totPooledSequences_14 = value;
	}

	inline static int32_t get_offset_of_totTweeners_15() { return static_cast<int32_t>(offsetof(TweenManager_t1979661952_StaticFields, ___totTweeners_15)); }
	inline int32_t get_totTweeners_15() const { return ___totTweeners_15; }
	inline int32_t* get_address_of_totTweeners_15() { return &___totTweeners_15; }
	inline void set_totTweeners_15(int32_t value)
	{
		___totTweeners_15 = value;
	}

	inline static int32_t get_offset_of_totSequences_16() { return static_cast<int32_t>(offsetof(TweenManager_t1979661952_StaticFields, ___totSequences_16)); }
	inline int32_t get_totSequences_16() const { return ___totSequences_16; }
	inline int32_t* get_address_of_totSequences_16() { return &___totSequences_16; }
	inline void set_totSequences_16(int32_t value)
	{
		___totSequences_16 = value;
	}

	inline static int32_t get_offset_of_isUpdateLoop_17() { return static_cast<int32_t>(offsetof(TweenManager_t1979661952_StaticFields, ___isUpdateLoop_17)); }
	inline bool get_isUpdateLoop_17() const { return ___isUpdateLoop_17; }
	inline bool* get_address_of_isUpdateLoop_17() { return &___isUpdateLoop_17; }
	inline void set_isUpdateLoop_17(bool value)
	{
		___isUpdateLoop_17 = value;
	}

	inline static int32_t get_offset_of__activeTweens_18() { return static_cast<int32_t>(offsetof(TweenManager_t1979661952_StaticFields, ____activeTweens_18)); }
	inline TweenU5BU5D_t672698288* get__activeTweens_18() const { return ____activeTweens_18; }
	inline TweenU5BU5D_t672698288** get_address_of__activeTweens_18() { return &____activeTweens_18; }
	inline void set__activeTweens_18(TweenU5BU5D_t672698288* value)
	{
		____activeTweens_18 = value;
		Il2CppCodeGenWriteBarrier(&____activeTweens_18, value);
	}

	inline static int32_t get_offset_of__pooledTweeners_19() { return static_cast<int32_t>(offsetof(TweenManager_t1979661952_StaticFields, ____pooledTweeners_19)); }
	inline TweenU5BU5D_t672698288* get__pooledTweeners_19() const { return ____pooledTweeners_19; }
	inline TweenU5BU5D_t672698288** get_address_of__pooledTweeners_19() { return &____pooledTweeners_19; }
	inline void set__pooledTweeners_19(TweenU5BU5D_t672698288* value)
	{
		____pooledTweeners_19 = value;
		Il2CppCodeGenWriteBarrier(&____pooledTweeners_19, value);
	}

	inline static int32_t get_offset_of__PooledSequences_20() { return static_cast<int32_t>(offsetof(TweenManager_t1979661952_StaticFields, ____PooledSequences_20)); }
	inline Stack_1_t1366206167 * get__PooledSequences_20() const { return ____PooledSequences_20; }
	inline Stack_1_t1366206167 ** get_address_of__PooledSequences_20() { return &____PooledSequences_20; }
	inline void set__PooledSequences_20(Stack_1_t1366206167 * value)
	{
		____PooledSequences_20 = value;
		Il2CppCodeGenWriteBarrier(&____PooledSequences_20, value);
	}

	inline static int32_t get_offset_of__KillList_21() { return static_cast<int32_t>(offsetof(TweenManager_t1979661952_StaticFields, ____KillList_21)); }
	inline List_1_t3942566441 * get__KillList_21() const { return ____KillList_21; }
	inline List_1_t3942566441 ** get_address_of__KillList_21() { return &____KillList_21; }
	inline void set__KillList_21(List_1_t3942566441 * value)
	{
		____KillList_21 = value;
		Il2CppCodeGenWriteBarrier(&____KillList_21, value);
	}

	inline static int32_t get_offset_of__maxActiveLookupId_22() { return static_cast<int32_t>(offsetof(TweenManager_t1979661952_StaticFields, ____maxActiveLookupId_22)); }
	inline int32_t get__maxActiveLookupId_22() const { return ____maxActiveLookupId_22; }
	inline int32_t* get_address_of__maxActiveLookupId_22() { return &____maxActiveLookupId_22; }
	inline void set__maxActiveLookupId_22(int32_t value)
	{
		____maxActiveLookupId_22 = value;
	}

	inline static int32_t get_offset_of__requiresActiveReorganization_23() { return static_cast<int32_t>(offsetof(TweenManager_t1979661952_StaticFields, ____requiresActiveReorganization_23)); }
	inline bool get__requiresActiveReorganization_23() const { return ____requiresActiveReorganization_23; }
	inline bool* get_address_of__requiresActiveReorganization_23() { return &____requiresActiveReorganization_23; }
	inline void set__requiresActiveReorganization_23(bool value)
	{
		____requiresActiveReorganization_23 = value;
	}

	inline static int32_t get_offset_of__reorganizeFromId_24() { return static_cast<int32_t>(offsetof(TweenManager_t1979661952_StaticFields, ____reorganizeFromId_24)); }
	inline int32_t get__reorganizeFromId_24() const { return ____reorganizeFromId_24; }
	inline int32_t* get_address_of__reorganizeFromId_24() { return &____reorganizeFromId_24; }
	inline void set__reorganizeFromId_24(int32_t value)
	{
		____reorganizeFromId_24 = value;
	}

	inline static int32_t get_offset_of__minPooledTweenerId_25() { return static_cast<int32_t>(offsetof(TweenManager_t1979661952_StaticFields, ____minPooledTweenerId_25)); }
	inline int32_t get__minPooledTweenerId_25() const { return ____minPooledTweenerId_25; }
	inline int32_t* get_address_of__minPooledTweenerId_25() { return &____minPooledTweenerId_25; }
	inline void set__minPooledTweenerId_25(int32_t value)
	{
		____minPooledTweenerId_25 = value;
	}

	inline static int32_t get_offset_of__maxPooledTweenerId_26() { return static_cast<int32_t>(offsetof(TweenManager_t1979661952_StaticFields, ____maxPooledTweenerId_26)); }
	inline int32_t get__maxPooledTweenerId_26() const { return ____maxPooledTweenerId_26; }
	inline int32_t* get_address_of__maxPooledTweenerId_26() { return &____maxPooledTweenerId_26; }
	inline void set__maxPooledTweenerId_26(int32_t value)
	{
		____maxPooledTweenerId_26 = value;
	}

	inline static int32_t get_offset_of__despawnAllCalledFromUpdateLoopCallback_27() { return static_cast<int32_t>(offsetof(TweenManager_t1979661952_StaticFields, ____despawnAllCalledFromUpdateLoopCallback_27)); }
	inline bool get__despawnAllCalledFromUpdateLoopCallback_27() const { return ____despawnAllCalledFromUpdateLoopCallback_27; }
	inline bool* get_address_of__despawnAllCalledFromUpdateLoopCallback_27() { return &____despawnAllCalledFromUpdateLoopCallback_27; }
	inline void set__despawnAllCalledFromUpdateLoopCallback_27(bool value)
	{
		____despawnAllCalledFromUpdateLoopCallback_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
