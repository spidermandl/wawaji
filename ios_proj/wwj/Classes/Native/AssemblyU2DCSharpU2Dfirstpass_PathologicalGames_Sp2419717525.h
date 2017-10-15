#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// System.Collections.Generic.List`1<PathologicalGames.PrefabPool>
struct List_1_t3749511102;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t3417634846;
// UnityEngine.Transform
struct Transform_t3275118058;
// PathologicalGames.PrefabsDict
struct PrefabsDict_t1121107021;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t2644239190;
// PathologicalGames.SpawnPool/InstantiateDelegate
struct InstantiateDelegate_t3700441677;
// PathologicalGames.SpawnPool/DestroyDelegate
struct DestroyDelegate_t3092628401;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PathologicalGames.SpawnPool
struct  SpawnPool_t2419717525  : public MonoBehaviour_t1158329972
{
public:
	// System.String PathologicalGames.SpawnPool::poolName
	String_t* ___poolName_2;
	// System.Boolean PathologicalGames.SpawnPool::matchPoolScale
	bool ___matchPoolScale_3;
	// System.Boolean PathologicalGames.SpawnPool::matchPoolLayer
	bool ___matchPoolLayer_4;
	// System.Boolean PathologicalGames.SpawnPool::dontReparent
	bool ___dontReparent_5;
	// System.Boolean PathologicalGames.SpawnPool::_dontDestroyOnLoad
	bool ____dontDestroyOnLoad_6;
	// System.Boolean PathologicalGames.SpawnPool::logMessages
	bool ___logMessages_7;
	// System.Collections.Generic.List`1<PathologicalGames.PrefabPool> PathologicalGames.SpawnPool::_perPrefabPoolOptions
	List_1_t3749511102 * ____perPrefabPoolOptions_8;
	// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean> PathologicalGames.SpawnPool::prefabsFoldOutStates
	Dictionary_2_t3417634846 * ___prefabsFoldOutStates_9;
	// System.Single PathologicalGames.SpawnPool::maxParticleDespawnTime
	float ___maxParticleDespawnTime_10;
	// UnityEngine.Transform PathologicalGames.SpawnPool::<group>k__BackingField
	Transform_t3275118058 * ___U3CgroupU3Ek__BackingField_11;
	// PathologicalGames.PrefabsDict PathologicalGames.SpawnPool::prefabs
	PrefabsDict_t1121107021 * ___prefabs_12;
	// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean> PathologicalGames.SpawnPool::_editorListItemStates
	Dictionary_2_t3417634846 * ____editorListItemStates_13;
	// System.Collections.Generic.List`1<PathologicalGames.PrefabPool> PathologicalGames.SpawnPool::_prefabPools
	List_1_t3749511102 * ____prefabPools_14;
	// System.Collections.Generic.List`1<UnityEngine.Transform> PathologicalGames.SpawnPool::_spawned
	List_1_t2644239190 * ____spawned_15;
	// PathologicalGames.SpawnPool/InstantiateDelegate PathologicalGames.SpawnPool::instantiateDelegates
	InstantiateDelegate_t3700441677 * ___instantiateDelegates_16;
	// PathologicalGames.SpawnPool/DestroyDelegate PathologicalGames.SpawnPool::destroyDelegates
	DestroyDelegate_t3092628401 * ___destroyDelegates_17;

public:
	inline static int32_t get_offset_of_poolName_2() { return static_cast<int32_t>(offsetof(SpawnPool_t2419717525, ___poolName_2)); }
	inline String_t* get_poolName_2() const { return ___poolName_2; }
	inline String_t** get_address_of_poolName_2() { return &___poolName_2; }
	inline void set_poolName_2(String_t* value)
	{
		___poolName_2 = value;
		Il2CppCodeGenWriteBarrier(&___poolName_2, value);
	}

	inline static int32_t get_offset_of_matchPoolScale_3() { return static_cast<int32_t>(offsetof(SpawnPool_t2419717525, ___matchPoolScale_3)); }
	inline bool get_matchPoolScale_3() const { return ___matchPoolScale_3; }
	inline bool* get_address_of_matchPoolScale_3() { return &___matchPoolScale_3; }
	inline void set_matchPoolScale_3(bool value)
	{
		___matchPoolScale_3 = value;
	}

	inline static int32_t get_offset_of_matchPoolLayer_4() { return static_cast<int32_t>(offsetof(SpawnPool_t2419717525, ___matchPoolLayer_4)); }
	inline bool get_matchPoolLayer_4() const { return ___matchPoolLayer_4; }
	inline bool* get_address_of_matchPoolLayer_4() { return &___matchPoolLayer_4; }
	inline void set_matchPoolLayer_4(bool value)
	{
		___matchPoolLayer_4 = value;
	}

	inline static int32_t get_offset_of_dontReparent_5() { return static_cast<int32_t>(offsetof(SpawnPool_t2419717525, ___dontReparent_5)); }
	inline bool get_dontReparent_5() const { return ___dontReparent_5; }
	inline bool* get_address_of_dontReparent_5() { return &___dontReparent_5; }
	inline void set_dontReparent_5(bool value)
	{
		___dontReparent_5 = value;
	}

	inline static int32_t get_offset_of__dontDestroyOnLoad_6() { return static_cast<int32_t>(offsetof(SpawnPool_t2419717525, ____dontDestroyOnLoad_6)); }
	inline bool get__dontDestroyOnLoad_6() const { return ____dontDestroyOnLoad_6; }
	inline bool* get_address_of__dontDestroyOnLoad_6() { return &____dontDestroyOnLoad_6; }
	inline void set__dontDestroyOnLoad_6(bool value)
	{
		____dontDestroyOnLoad_6 = value;
	}

	inline static int32_t get_offset_of_logMessages_7() { return static_cast<int32_t>(offsetof(SpawnPool_t2419717525, ___logMessages_7)); }
	inline bool get_logMessages_7() const { return ___logMessages_7; }
	inline bool* get_address_of_logMessages_7() { return &___logMessages_7; }
	inline void set_logMessages_7(bool value)
	{
		___logMessages_7 = value;
	}

	inline static int32_t get_offset_of__perPrefabPoolOptions_8() { return static_cast<int32_t>(offsetof(SpawnPool_t2419717525, ____perPrefabPoolOptions_8)); }
	inline List_1_t3749511102 * get__perPrefabPoolOptions_8() const { return ____perPrefabPoolOptions_8; }
	inline List_1_t3749511102 ** get_address_of__perPrefabPoolOptions_8() { return &____perPrefabPoolOptions_8; }
	inline void set__perPrefabPoolOptions_8(List_1_t3749511102 * value)
	{
		____perPrefabPoolOptions_8 = value;
		Il2CppCodeGenWriteBarrier(&____perPrefabPoolOptions_8, value);
	}

	inline static int32_t get_offset_of_prefabsFoldOutStates_9() { return static_cast<int32_t>(offsetof(SpawnPool_t2419717525, ___prefabsFoldOutStates_9)); }
	inline Dictionary_2_t3417634846 * get_prefabsFoldOutStates_9() const { return ___prefabsFoldOutStates_9; }
	inline Dictionary_2_t3417634846 ** get_address_of_prefabsFoldOutStates_9() { return &___prefabsFoldOutStates_9; }
	inline void set_prefabsFoldOutStates_9(Dictionary_2_t3417634846 * value)
	{
		___prefabsFoldOutStates_9 = value;
		Il2CppCodeGenWriteBarrier(&___prefabsFoldOutStates_9, value);
	}

	inline static int32_t get_offset_of_maxParticleDespawnTime_10() { return static_cast<int32_t>(offsetof(SpawnPool_t2419717525, ___maxParticleDespawnTime_10)); }
	inline float get_maxParticleDespawnTime_10() const { return ___maxParticleDespawnTime_10; }
	inline float* get_address_of_maxParticleDespawnTime_10() { return &___maxParticleDespawnTime_10; }
	inline void set_maxParticleDespawnTime_10(float value)
	{
		___maxParticleDespawnTime_10 = value;
	}

	inline static int32_t get_offset_of_U3CgroupU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(SpawnPool_t2419717525, ___U3CgroupU3Ek__BackingField_11)); }
	inline Transform_t3275118058 * get_U3CgroupU3Ek__BackingField_11() const { return ___U3CgroupU3Ek__BackingField_11; }
	inline Transform_t3275118058 ** get_address_of_U3CgroupU3Ek__BackingField_11() { return &___U3CgroupU3Ek__BackingField_11; }
	inline void set_U3CgroupU3Ek__BackingField_11(Transform_t3275118058 * value)
	{
		___U3CgroupU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CgroupU3Ek__BackingField_11, value);
	}

	inline static int32_t get_offset_of_prefabs_12() { return static_cast<int32_t>(offsetof(SpawnPool_t2419717525, ___prefabs_12)); }
	inline PrefabsDict_t1121107021 * get_prefabs_12() const { return ___prefabs_12; }
	inline PrefabsDict_t1121107021 ** get_address_of_prefabs_12() { return &___prefabs_12; }
	inline void set_prefabs_12(PrefabsDict_t1121107021 * value)
	{
		___prefabs_12 = value;
		Il2CppCodeGenWriteBarrier(&___prefabs_12, value);
	}

	inline static int32_t get_offset_of__editorListItemStates_13() { return static_cast<int32_t>(offsetof(SpawnPool_t2419717525, ____editorListItemStates_13)); }
	inline Dictionary_2_t3417634846 * get__editorListItemStates_13() const { return ____editorListItemStates_13; }
	inline Dictionary_2_t3417634846 ** get_address_of__editorListItemStates_13() { return &____editorListItemStates_13; }
	inline void set__editorListItemStates_13(Dictionary_2_t3417634846 * value)
	{
		____editorListItemStates_13 = value;
		Il2CppCodeGenWriteBarrier(&____editorListItemStates_13, value);
	}

	inline static int32_t get_offset_of__prefabPools_14() { return static_cast<int32_t>(offsetof(SpawnPool_t2419717525, ____prefabPools_14)); }
	inline List_1_t3749511102 * get__prefabPools_14() const { return ____prefabPools_14; }
	inline List_1_t3749511102 ** get_address_of__prefabPools_14() { return &____prefabPools_14; }
	inline void set__prefabPools_14(List_1_t3749511102 * value)
	{
		____prefabPools_14 = value;
		Il2CppCodeGenWriteBarrier(&____prefabPools_14, value);
	}

	inline static int32_t get_offset_of__spawned_15() { return static_cast<int32_t>(offsetof(SpawnPool_t2419717525, ____spawned_15)); }
	inline List_1_t2644239190 * get__spawned_15() const { return ____spawned_15; }
	inline List_1_t2644239190 ** get_address_of__spawned_15() { return &____spawned_15; }
	inline void set__spawned_15(List_1_t2644239190 * value)
	{
		____spawned_15 = value;
		Il2CppCodeGenWriteBarrier(&____spawned_15, value);
	}

	inline static int32_t get_offset_of_instantiateDelegates_16() { return static_cast<int32_t>(offsetof(SpawnPool_t2419717525, ___instantiateDelegates_16)); }
	inline InstantiateDelegate_t3700441677 * get_instantiateDelegates_16() const { return ___instantiateDelegates_16; }
	inline InstantiateDelegate_t3700441677 ** get_address_of_instantiateDelegates_16() { return &___instantiateDelegates_16; }
	inline void set_instantiateDelegates_16(InstantiateDelegate_t3700441677 * value)
	{
		___instantiateDelegates_16 = value;
		Il2CppCodeGenWriteBarrier(&___instantiateDelegates_16, value);
	}

	inline static int32_t get_offset_of_destroyDelegates_17() { return static_cast<int32_t>(offsetof(SpawnPool_t2419717525, ___destroyDelegates_17)); }
	inline DestroyDelegate_t3092628401 * get_destroyDelegates_17() const { return ___destroyDelegates_17; }
	inline DestroyDelegate_t3092628401 ** get_address_of_destroyDelegates_17() { return &___destroyDelegates_17; }
	inline void set_destroyDelegates_17(DestroyDelegate_t3092628401 * value)
	{
		___destroyDelegates_17 = value;
		Il2CppCodeGenWriteBarrier(&___destroyDelegates_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
