#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UpdatesProxy/MemoryVersion/Entry
struct  Entry_t1644304703  : public Il2CppObject
{
public:
	// System.String UpdatesProxy/MemoryVersion/Entry::pic
	String_t* ___pic_0;
	// System.String UpdatesProxy/MemoryVersion/Entry::pic_path
	String_t* ___pic_path_1;
	// System.String UpdatesProxy/MemoryVersion/Entry::local_path
	String_t* ___local_path_2;
	// System.Int32 UpdatesProxy/MemoryVersion/Entry::is_new
	int32_t ___is_new_3;
	// System.Int32 UpdatesProxy/MemoryVersion/Entry::type
	int32_t ___type_4;

public:
	inline static int32_t get_offset_of_pic_0() { return static_cast<int32_t>(offsetof(Entry_t1644304703, ___pic_0)); }
	inline String_t* get_pic_0() const { return ___pic_0; }
	inline String_t** get_address_of_pic_0() { return &___pic_0; }
	inline void set_pic_0(String_t* value)
	{
		___pic_0 = value;
		Il2CppCodeGenWriteBarrier(&___pic_0, value);
	}

	inline static int32_t get_offset_of_pic_path_1() { return static_cast<int32_t>(offsetof(Entry_t1644304703, ___pic_path_1)); }
	inline String_t* get_pic_path_1() const { return ___pic_path_1; }
	inline String_t** get_address_of_pic_path_1() { return &___pic_path_1; }
	inline void set_pic_path_1(String_t* value)
	{
		___pic_path_1 = value;
		Il2CppCodeGenWriteBarrier(&___pic_path_1, value);
	}

	inline static int32_t get_offset_of_local_path_2() { return static_cast<int32_t>(offsetof(Entry_t1644304703, ___local_path_2)); }
	inline String_t* get_local_path_2() const { return ___local_path_2; }
	inline String_t** get_address_of_local_path_2() { return &___local_path_2; }
	inline void set_local_path_2(String_t* value)
	{
		___local_path_2 = value;
		Il2CppCodeGenWriteBarrier(&___local_path_2, value);
	}

	inline static int32_t get_offset_of_is_new_3() { return static_cast<int32_t>(offsetof(Entry_t1644304703, ___is_new_3)); }
	inline int32_t get_is_new_3() const { return ___is_new_3; }
	inline int32_t* get_address_of_is_new_3() { return &___is_new_3; }
	inline void set_is_new_3(int32_t value)
	{
		___is_new_3 = value;
	}

	inline static int32_t get_offset_of_type_4() { return static_cast<int32_t>(offsetof(Entry_t1644304703, ___type_4)); }
	inline int32_t get_type_4() const { return ___type_4; }
	inline int32_t* get_address_of_type_4() { return &___type_4; }
	inline void set_type_4(int32_t value)
	{
		___type_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
