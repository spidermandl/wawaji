#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// PathologicalGames.SpawnPool
struct SpawnPool_t2419717525;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t2644239190;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PathologicalGames.PrefabPool
struct  PrefabPool_t85422674  : public Il2CppObject
{
public:
	// UnityEngine.Transform PathologicalGames.PrefabPool::prefab
	Transform_t3275118058 * ___prefab_0;
	// UnityEngine.GameObject PathologicalGames.PrefabPool::prefabGO
	GameObject_t1756533147 * ___prefabGO_1;
	// System.Int32 PathologicalGames.PrefabPool::preloadAmount
	int32_t ___preloadAmount_2;
	// System.Boolean PathologicalGames.PrefabPool::preloadTime
	bool ___preloadTime_3;
	// System.Int32 PathologicalGames.PrefabPool::preloadFrames
	int32_t ___preloadFrames_4;
	// System.Single PathologicalGames.PrefabPool::preloadDelay
	float ___preloadDelay_5;
	// System.Boolean PathologicalGames.PrefabPool::limitInstances
	bool ___limitInstances_6;
	// System.Int32 PathologicalGames.PrefabPool::limitAmount
	int32_t ___limitAmount_7;
	// System.Boolean PathologicalGames.PrefabPool::limitFIFO
	bool ___limitFIFO_8;
	// System.Boolean PathologicalGames.PrefabPool::cullDespawned
	bool ___cullDespawned_9;
	// System.Int32 PathologicalGames.PrefabPool::cullAbove
	int32_t ___cullAbove_10;
	// System.Int32 PathologicalGames.PrefabPool::cullDelay
	int32_t ___cullDelay_11;
	// System.Int32 PathologicalGames.PrefabPool::cullMaxPerPass
	int32_t ___cullMaxPerPass_12;
	// System.Boolean PathologicalGames.PrefabPool::_logMessages
	bool ____logMessages_13;
	// System.Boolean PathologicalGames.PrefabPool::forceLoggingSilent
	bool ___forceLoggingSilent_14;
	// PathologicalGames.SpawnPool PathologicalGames.PrefabPool::spawnPool
	SpawnPool_t2419717525 * ___spawnPool_15;
	// System.Boolean PathologicalGames.PrefabPool::cullingActive
	bool ___cullingActive_16;
	// System.Collections.Generic.List`1<UnityEngine.Transform> PathologicalGames.PrefabPool::_spawned
	List_1_t2644239190 * ____spawned_17;
	// System.Collections.Generic.List`1<UnityEngine.Transform> PathologicalGames.PrefabPool::_despawned
	List_1_t2644239190 * ____despawned_18;
	// System.Boolean PathologicalGames.PrefabPool::_preloaded
	bool ____preloaded_19;

public:
	inline static int32_t get_offset_of_prefab_0() { return static_cast<int32_t>(offsetof(PrefabPool_t85422674, ___prefab_0)); }
	inline Transform_t3275118058 * get_prefab_0() const { return ___prefab_0; }
	inline Transform_t3275118058 ** get_address_of_prefab_0() { return &___prefab_0; }
	inline void set_prefab_0(Transform_t3275118058 * value)
	{
		___prefab_0 = value;
		Il2CppCodeGenWriteBarrier(&___prefab_0, value);
	}

	inline static int32_t get_offset_of_prefabGO_1() { return static_cast<int32_t>(offsetof(PrefabPool_t85422674, ___prefabGO_1)); }
	inline GameObject_t1756533147 * get_prefabGO_1() const { return ___prefabGO_1; }
	inline GameObject_t1756533147 ** get_address_of_prefabGO_1() { return &___prefabGO_1; }
	inline void set_prefabGO_1(GameObject_t1756533147 * value)
	{
		___prefabGO_1 = value;
		Il2CppCodeGenWriteBarrier(&___prefabGO_1, value);
	}

	inline static int32_t get_offset_of_preloadAmount_2() { return static_cast<int32_t>(offsetof(PrefabPool_t85422674, ___preloadAmount_2)); }
	inline int32_t get_preloadAmount_2() const { return ___preloadAmount_2; }
	inline int32_t* get_address_of_preloadAmount_2() { return &___preloadAmount_2; }
	inline void set_preloadAmount_2(int32_t value)
	{
		___preloadAmount_2 = value;
	}

	inline static int32_t get_offset_of_preloadTime_3() { return static_cast<int32_t>(offsetof(PrefabPool_t85422674, ___preloadTime_3)); }
	inline bool get_preloadTime_3() const { return ___preloadTime_3; }
	inline bool* get_address_of_preloadTime_3() { return &___preloadTime_3; }
	inline void set_preloadTime_3(bool value)
	{
		___preloadTime_3 = value;
	}

	inline static int32_t get_offset_of_preloadFrames_4() { return static_cast<int32_t>(offsetof(PrefabPool_t85422674, ___preloadFrames_4)); }
	inline int32_t get_preloadFrames_4() const { return ___preloadFrames_4; }
	inline int32_t* get_address_of_preloadFrames_4() { return &___preloadFrames_4; }
	inline void set_preloadFrames_4(int32_t value)
	{
		___preloadFrames_4 = value;
	}

	inline static int32_t get_offset_of_preloadDelay_5() { return static_cast<int32_t>(offsetof(PrefabPool_t85422674, ___preloadDelay_5)); }
	inline float get_preloadDelay_5() const { return ___preloadDelay_5; }
	inline float* get_address_of_preloadDelay_5() { return &___preloadDelay_5; }
	inline void set_preloadDelay_5(float value)
	{
		___preloadDelay_5 = value;
	}

	inline static int32_t get_offset_of_limitInstances_6() { return static_cast<int32_t>(offsetof(PrefabPool_t85422674, ___limitInstances_6)); }
	inline bool get_limitInstances_6() const { return ___limitInstances_6; }
	inline bool* get_address_of_limitInstances_6() { return &___limitInstances_6; }
	inline void set_limitInstances_6(bool value)
	{
		___limitInstances_6 = value;
	}

	inline static int32_t get_offset_of_limitAmount_7() { return static_cast<int32_t>(offsetof(PrefabPool_t85422674, ___limitAmount_7)); }
	inline int32_t get_limitAmount_7() const { return ___limitAmount_7; }
	inline int32_t* get_address_of_limitAmount_7() { return &___limitAmount_7; }
	inline void set_limitAmount_7(int32_t value)
	{
		___limitAmount_7 = value;
	}

	inline static int32_t get_offset_of_limitFIFO_8() { return static_cast<int32_t>(offsetof(PrefabPool_t85422674, ___limitFIFO_8)); }
	inline bool get_limitFIFO_8() const { return ___limitFIFO_8; }
	inline bool* get_address_of_limitFIFO_8() { return &___limitFIFO_8; }
	inline void set_limitFIFO_8(bool value)
	{
		___limitFIFO_8 = value;
	}

	inline static int32_t get_offset_of_cullDespawned_9() { return static_cast<int32_t>(offsetof(PrefabPool_t85422674, ___cullDespawned_9)); }
	inline bool get_cullDespawned_9() const { return ___cullDespawned_9; }
	inline bool* get_address_of_cullDespawned_9() { return &___cullDespawned_9; }
	inline void set_cullDespawned_9(bool value)
	{
		___cullDespawned_9 = value;
	}

	inline static int32_t get_offset_of_cullAbove_10() { return static_cast<int32_t>(offsetof(PrefabPool_t85422674, ___cullAbove_10)); }
	inline int32_t get_cullAbove_10() const { return ___cullAbove_10; }
	inline int32_t* get_address_of_cullAbove_10() { return &___cullAbove_10; }
	inline void set_cullAbove_10(int32_t value)
	{
		___cullAbove_10 = value;
	}

	inline static int32_t get_offset_of_cullDelay_11() { return static_cast<int32_t>(offsetof(PrefabPool_t85422674, ___cullDelay_11)); }
	inline int32_t get_cullDelay_11() const { return ___cullDelay_11; }
	inline int32_t* get_address_of_cullDelay_11() { return &___cullDelay_11; }
	inline void set_cullDelay_11(int32_t value)
	{
		___cullDelay_11 = value;
	}

	inline static int32_t get_offset_of_cullMaxPerPass_12() { return static_cast<int32_t>(offsetof(PrefabPool_t85422674, ___cullMaxPerPass_12)); }
	inline int32_t get_cullMaxPerPass_12() const { return ___cullMaxPerPass_12; }
	inline int32_t* get_address_of_cullMaxPerPass_12() { return &___cullMaxPerPass_12; }
	inline void set_cullMaxPerPass_12(int32_t value)
	{
		___cullMaxPerPass_12 = value;
	}

	inline static int32_t get_offset_of__logMessages_13() { return static_cast<int32_t>(offsetof(PrefabPool_t85422674, ____logMessages_13)); }
	inline bool get__logMessages_13() const { return ____logMessages_13; }
	inline bool* get_address_of__logMessages_13() { return &____logMessages_13; }
	inline void set__logMessages_13(bool value)
	{
		____logMessages_13 = value;
	}

	inline static int32_t get_offset_of_forceLoggingSilent_14() { return static_cast<int32_t>(offsetof(PrefabPool_t85422674, ___forceLoggingSilent_14)); }
	inline bool get_forceLoggingSilent_14() const { return ___forceLoggingSilent_14; }
	inline bool* get_address_of_forceLoggingSilent_14() { return &___forceLoggingSilent_14; }
	inline void set_forceLoggingSilent_14(bool value)
	{
		___forceLoggingSilent_14 = value;
	}

	inline static int32_t get_offset_of_spawnPool_15() { return static_cast<int32_t>(offsetof(PrefabPool_t85422674, ___spawnPool_15)); }
	inline SpawnPool_t2419717525 * get_spawnPool_15() const { return ___spawnPool_15; }
	inline SpawnPool_t2419717525 ** get_address_of_spawnPool_15() { return &___spawnPool_15; }
	inline void set_spawnPool_15(SpawnPool_t2419717525 * value)
	{
		___spawnPool_15 = value;
		Il2CppCodeGenWriteBarrier(&___spawnPool_15, value);
	}

	inline static int32_t get_offset_of_cullingActive_16() { return static_cast<int32_t>(offsetof(PrefabPool_t85422674, ___cullingActive_16)); }
	inline bool get_cullingActive_16() const { return ___cullingActive_16; }
	inline bool* get_address_of_cullingActive_16() { return &___cullingActive_16; }
	inline void set_cullingActive_16(bool value)
	{
		___cullingActive_16 = value;
	}

	inline static int32_t get_offset_of__spawned_17() { return static_cast<int32_t>(offsetof(PrefabPool_t85422674, ____spawned_17)); }
	inline List_1_t2644239190 * get__spawned_17() const { return ____spawned_17; }
	inline List_1_t2644239190 ** get_address_of__spawned_17() { return &____spawned_17; }
	inline void set__spawned_17(List_1_t2644239190 * value)
	{
		____spawned_17 = value;
		Il2CppCodeGenWriteBarrier(&____spawned_17, value);
	}

	inline static int32_t get_offset_of__despawned_18() { return static_cast<int32_t>(offsetof(PrefabPool_t85422674, ____despawned_18)); }
	inline List_1_t2644239190 * get__despawned_18() const { return ____despawned_18; }
	inline List_1_t2644239190 ** get_address_of__despawned_18() { return &____despawned_18; }
	inline void set__despawned_18(List_1_t2644239190 * value)
	{
		____despawned_18 = value;
		Il2CppCodeGenWriteBarrier(&____despawned_18, value);
	}

	inline static int32_t get_offset_of__preloaded_19() { return static_cast<int32_t>(offsetof(PrefabPool_t85422674, ____preloaded_19)); }
	inline bool get__preloaded_19() const { return ____preloaded_19; }
	inline bool* get_address_of__preloaded_19() { return &____preloaded_19; }
	inline void set__preloaded_19(bool value)
	{
		____preloaded_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
