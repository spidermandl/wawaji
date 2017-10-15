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

// PrizeSetProxy/PrizeItem
struct  PrizeItem_t1113795488  : public Il2CppObject
{
public:
	// System.Int32 PrizeSetProxy/PrizeItem::id
	int32_t ___id_0;
	// System.String PrizeSetProxy/PrizeItem::name
	String_t* ___name_1;
	// System.Int32 PrizeSetProxy/PrizeItem::price
	int32_t ___price_2;
	// System.Int32 PrizeSetProxy/PrizeItem::coin
	int32_t ___coin_3;
	// System.String PrizeSetProxy/PrizeItem::pic
	String_t* ___pic_4;
	// System.String PrizeSetProxy/PrizeItem::desc
	String_t* ___desc_5;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PrizeItem_t1113795488, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(PrizeItem_t1113795488, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_price_2() { return static_cast<int32_t>(offsetof(PrizeItem_t1113795488, ___price_2)); }
	inline int32_t get_price_2() const { return ___price_2; }
	inline int32_t* get_address_of_price_2() { return &___price_2; }
	inline void set_price_2(int32_t value)
	{
		___price_2 = value;
	}

	inline static int32_t get_offset_of_coin_3() { return static_cast<int32_t>(offsetof(PrizeItem_t1113795488, ___coin_3)); }
	inline int32_t get_coin_3() const { return ___coin_3; }
	inline int32_t* get_address_of_coin_3() { return &___coin_3; }
	inline void set_coin_3(int32_t value)
	{
		___coin_3 = value;
	}

	inline static int32_t get_offset_of_pic_4() { return static_cast<int32_t>(offsetof(PrizeItem_t1113795488, ___pic_4)); }
	inline String_t* get_pic_4() const { return ___pic_4; }
	inline String_t** get_address_of_pic_4() { return &___pic_4; }
	inline void set_pic_4(String_t* value)
	{
		___pic_4 = value;
		Il2CppCodeGenWriteBarrier(&___pic_4, value);
	}

	inline static int32_t get_offset_of_desc_5() { return static_cast<int32_t>(offsetof(PrizeItem_t1113795488, ___desc_5)); }
	inline String_t* get_desc_5() const { return ___desc_5; }
	inline String_t** get_address_of_desc_5() { return &___desc_5; }
	inline void set_desc_5(String_t* value)
	{
		___desc_5 = value;
		Il2CppCodeGenWriteBarrier(&___desc_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
