#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Base_Req_UserInfo3817878412.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Req_UserLogin
struct  Req_UserLogin_t496922837  : public Base_Req_UserInfo_t3817878412
{
public:
	// System.String Req_UserLogin::_api
	String_t* ____api_13;
	// System.String Req_UserLogin::phone
	String_t* ___phone_14;
	// System.String Req_UserLogin::psd
	String_t* ___psd_15;
	// System.String Req_UserLogin::uuid
	String_t* ___uuid_16;
	// System.String Req_UserLogin::wxid
	String_t* ___wxid_17;
	// System.Int32 Req_UserLogin::type
	int32_t ___type_18;

public:
	inline static int32_t get_offset_of__api_13() { return static_cast<int32_t>(offsetof(Req_UserLogin_t496922837, ____api_13)); }
	inline String_t* get__api_13() const { return ____api_13; }
	inline String_t** get_address_of__api_13() { return &____api_13; }
	inline void set__api_13(String_t* value)
	{
		____api_13 = value;
		Il2CppCodeGenWriteBarrier(&____api_13, value);
	}

	inline static int32_t get_offset_of_phone_14() { return static_cast<int32_t>(offsetof(Req_UserLogin_t496922837, ___phone_14)); }
	inline String_t* get_phone_14() const { return ___phone_14; }
	inline String_t** get_address_of_phone_14() { return &___phone_14; }
	inline void set_phone_14(String_t* value)
	{
		___phone_14 = value;
		Il2CppCodeGenWriteBarrier(&___phone_14, value);
	}

	inline static int32_t get_offset_of_psd_15() { return static_cast<int32_t>(offsetof(Req_UserLogin_t496922837, ___psd_15)); }
	inline String_t* get_psd_15() const { return ___psd_15; }
	inline String_t** get_address_of_psd_15() { return &___psd_15; }
	inline void set_psd_15(String_t* value)
	{
		___psd_15 = value;
		Il2CppCodeGenWriteBarrier(&___psd_15, value);
	}

	inline static int32_t get_offset_of_uuid_16() { return static_cast<int32_t>(offsetof(Req_UserLogin_t496922837, ___uuid_16)); }
	inline String_t* get_uuid_16() const { return ___uuid_16; }
	inline String_t** get_address_of_uuid_16() { return &___uuid_16; }
	inline void set_uuid_16(String_t* value)
	{
		___uuid_16 = value;
		Il2CppCodeGenWriteBarrier(&___uuid_16, value);
	}

	inline static int32_t get_offset_of_wxid_17() { return static_cast<int32_t>(offsetof(Req_UserLogin_t496922837, ___wxid_17)); }
	inline String_t* get_wxid_17() const { return ___wxid_17; }
	inline String_t** get_address_of_wxid_17() { return &___wxid_17; }
	inline void set_wxid_17(String_t* value)
	{
		___wxid_17 = value;
		Il2CppCodeGenWriteBarrier(&___wxid_17, value);
	}

	inline static int32_t get_offset_of_type_18() { return static_cast<int32_t>(offsetof(Req_UserLogin_t496922837, ___type_18)); }
	inline int32_t get_type_18() const { return ___type_18; }
	inline int32_t* get_address_of_type_18() { return &___type_18; }
	inline void set_type_18(int32_t value)
	{
		___type_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
