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

// Req_GetUpdatePics/Response/Entry
struct  Entry_t2933429096  : public Il2CppObject
{
public:
	// System.String Req_GetUpdatePics/Response/Entry::id
	String_t* ___id_0;
	// System.String Req_GetUpdatePics/Response/Entry::pic
	String_t* ___pic_1;
	// System.String Req_GetUpdatePics/Response/Entry::pic_path
	String_t* ___pic_path_2;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Entry_t2933429096, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier(&___id_0, value);
	}

	inline static int32_t get_offset_of_pic_1() { return static_cast<int32_t>(offsetof(Entry_t2933429096, ___pic_1)); }
	inline String_t* get_pic_1() const { return ___pic_1; }
	inline String_t** get_address_of_pic_1() { return &___pic_1; }
	inline void set_pic_1(String_t* value)
	{
		___pic_1 = value;
		Il2CppCodeGenWriteBarrier(&___pic_1, value);
	}

	inline static int32_t get_offset_of_pic_path_2() { return static_cast<int32_t>(offsetof(Entry_t2933429096, ___pic_path_2)); }
	inline String_t* get_pic_path_2() const { return ___pic_path_2; }
	inline String_t** get_address_of_pic_path_2() { return &___pic_path_2; }
	inline void set_pic_path_2(String_t* value)
	{
		___pic_path_2 = value;
		Il2CppCodeGenWriteBarrier(&___pic_path_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
