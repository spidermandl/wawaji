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

// Req_GetNewsLists/Response/Info
struct  Info_t246977206  : public Il2CppObject
{
public:
	// System.String Req_GetNewsLists/Response/Info::id
	String_t* ___id_0;
	// System.String Req_GetNewsLists/Response/Info::type_title
	String_t* ___type_title_1;
	// System.String Req_GetNewsLists/Response/Info::title
	String_t* ___title_2;
	// System.String Req_GetNewsLists/Response/Info::cont
	String_t* ___cont_3;
	// System.String Req_GetNewsLists/Response/Info::date_time
	String_t* ___date_time_4;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Info_t246977206, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier(&___id_0, value);
	}

	inline static int32_t get_offset_of_type_title_1() { return static_cast<int32_t>(offsetof(Info_t246977206, ___type_title_1)); }
	inline String_t* get_type_title_1() const { return ___type_title_1; }
	inline String_t** get_address_of_type_title_1() { return &___type_title_1; }
	inline void set_type_title_1(String_t* value)
	{
		___type_title_1 = value;
		Il2CppCodeGenWriteBarrier(&___type_title_1, value);
	}

	inline static int32_t get_offset_of_title_2() { return static_cast<int32_t>(offsetof(Info_t246977206, ___title_2)); }
	inline String_t* get_title_2() const { return ___title_2; }
	inline String_t** get_address_of_title_2() { return &___title_2; }
	inline void set_title_2(String_t* value)
	{
		___title_2 = value;
		Il2CppCodeGenWriteBarrier(&___title_2, value);
	}

	inline static int32_t get_offset_of_cont_3() { return static_cast<int32_t>(offsetof(Info_t246977206, ___cont_3)); }
	inline String_t* get_cont_3() const { return ___cont_3; }
	inline String_t** get_address_of_cont_3() { return &___cont_3; }
	inline void set_cont_3(String_t* value)
	{
		___cont_3 = value;
		Il2CppCodeGenWriteBarrier(&___cont_3, value);
	}

	inline static int32_t get_offset_of_date_time_4() { return static_cast<int32_t>(offsetof(Info_t246977206, ___date_time_4)); }
	inline String_t* get_date_time_4() const { return ___date_time_4; }
	inline String_t** get_address_of_date_time_4() { return &___date_time_4; }
	inline void set_date_time_4(String_t* value)
	{
		___date_time_4 = value;
		Il2CppCodeGenWriteBarrier(&___date_time_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
