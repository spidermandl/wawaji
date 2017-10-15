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

// UpdatesProxy/ResVersion/Entry
struct  Entry_t2618311950  : public Il2CppObject
{
public:
	// System.String UpdatesProxy/ResVersion/Entry::id
	String_t* ___id_0;
	// System.String UpdatesProxy/ResVersion/Entry::pic
	String_t* ___pic_1;
	// System.String UpdatesProxy/ResVersion/Entry::pic_path
	String_t* ___pic_path_2;
	// System.String UpdatesProxy/ResVersion/Entry::local_path
	String_t* ___local_path_3;
	// System.Int32 UpdatesProxy/ResVersion/Entry::is_new
	int32_t ___is_new_4;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Entry_t2618311950, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier(&___id_0, value);
	}

	inline static int32_t get_offset_of_pic_1() { return static_cast<int32_t>(offsetof(Entry_t2618311950, ___pic_1)); }
	inline String_t* get_pic_1() const { return ___pic_1; }
	inline String_t** get_address_of_pic_1() { return &___pic_1; }
	inline void set_pic_1(String_t* value)
	{
		___pic_1 = value;
		Il2CppCodeGenWriteBarrier(&___pic_1, value);
	}

	inline static int32_t get_offset_of_pic_path_2() { return static_cast<int32_t>(offsetof(Entry_t2618311950, ___pic_path_2)); }
	inline String_t* get_pic_path_2() const { return ___pic_path_2; }
	inline String_t** get_address_of_pic_path_2() { return &___pic_path_2; }
	inline void set_pic_path_2(String_t* value)
	{
		___pic_path_2 = value;
		Il2CppCodeGenWriteBarrier(&___pic_path_2, value);
	}

	inline static int32_t get_offset_of_local_path_3() { return static_cast<int32_t>(offsetof(Entry_t2618311950, ___local_path_3)); }
	inline String_t* get_local_path_3() const { return ___local_path_3; }
	inline String_t** get_address_of_local_path_3() { return &___local_path_3; }
	inline void set_local_path_3(String_t* value)
	{
		___local_path_3 = value;
		Il2CppCodeGenWriteBarrier(&___local_path_3, value);
	}

	inline static int32_t get_offset_of_is_new_4() { return static_cast<int32_t>(offsetof(Entry_t2618311950, ___is_new_4)); }
	inline int32_t get_is_new_4() const { return ___is_new_4; }
	inline int32_t* get_address_of_is_new_4() { return &___is_new_4; }
	inline void set_is_new_4(int32_t value)
	{
		___is_new_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
