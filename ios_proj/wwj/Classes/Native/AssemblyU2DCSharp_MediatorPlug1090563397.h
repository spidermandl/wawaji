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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MediatorPlug
struct  MediatorPlug_t1090563397  : public MonoBehaviour_t1158329972
{
public:
	// System.String MediatorPlug::mediatorName
	String_t* ___mediatorName_2;
	// System.String MediatorPlug::mediatorClassRef
	String_t* ___mediatorClassRef_3;

public:
	inline static int32_t get_offset_of_mediatorName_2() { return static_cast<int32_t>(offsetof(MediatorPlug_t1090563397, ___mediatorName_2)); }
	inline String_t* get_mediatorName_2() const { return ___mediatorName_2; }
	inline String_t** get_address_of_mediatorName_2() { return &___mediatorName_2; }
	inline void set_mediatorName_2(String_t* value)
	{
		___mediatorName_2 = value;
		Il2CppCodeGenWriteBarrier(&___mediatorName_2, value);
	}

	inline static int32_t get_offset_of_mediatorClassRef_3() { return static_cast<int32_t>(offsetof(MediatorPlug_t1090563397, ___mediatorClassRef_3)); }
	inline String_t* get_mediatorClassRef_3() const { return ___mediatorClassRef_3; }
	inline String_t** get_address_of_mediatorClassRef_3() { return &___mediatorClassRef_3; }
	inline void set_mediatorClassRef_3(String_t* value)
	{
		___mediatorClassRef_3 = value;
		Il2CppCodeGenWriteBarrier(&___mediatorClassRef_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
