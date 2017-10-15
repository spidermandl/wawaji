#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t280592844;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ReadOnlyDictionary`2<System.Object,System.Object>
struct  ReadOnlyDictionary_2_t2569166851  : public Il2CppObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> ReadOnlyDictionary`2::_dictionary
	Il2CppObject* ____dictionary_0;

public:
	inline static int32_t get_offset_of__dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t2569166851, ____dictionary_0)); }
	inline Il2CppObject* get__dictionary_0() const { return ____dictionary_0; }
	inline Il2CppObject** get_address_of__dictionary_0() { return &____dictionary_0; }
	inline void set__dictionary_0(Il2CppObject* value)
	{
		____dictionary_0 = value;
		Il2CppCodeGenWriteBarrier(&____dictionary_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
