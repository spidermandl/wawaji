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
// UnityEngine.WWWForm
struct WWWForm_t3950226929;
// Request/Response
struct Response_t998287943;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Request
struct  Request_t2032498015  : public Il2CppObject
{
public:
	// System.String Request::_api
	String_t* ____api_1;
	// UnityEngine.WWWForm Request::_form
	WWWForm_t3950226929 * ____form_2;
	// Request/Response Request::_response
	Response_t998287943 * ____response_3;
	// System.Int32 Request::userId
	int32_t ___userId_4;
	// System.String Request::token
	String_t* ___token_5;
	// System.Int32 Request::mId
	int32_t ___mId_6;

public:
	inline static int32_t get_offset_of__api_1() { return static_cast<int32_t>(offsetof(Request_t2032498015, ____api_1)); }
	inline String_t* get__api_1() const { return ____api_1; }
	inline String_t** get_address_of__api_1() { return &____api_1; }
	inline void set__api_1(String_t* value)
	{
		____api_1 = value;
		Il2CppCodeGenWriteBarrier(&____api_1, value);
	}

	inline static int32_t get_offset_of__form_2() { return static_cast<int32_t>(offsetof(Request_t2032498015, ____form_2)); }
	inline WWWForm_t3950226929 * get__form_2() const { return ____form_2; }
	inline WWWForm_t3950226929 ** get_address_of__form_2() { return &____form_2; }
	inline void set__form_2(WWWForm_t3950226929 * value)
	{
		____form_2 = value;
		Il2CppCodeGenWriteBarrier(&____form_2, value);
	}

	inline static int32_t get_offset_of__response_3() { return static_cast<int32_t>(offsetof(Request_t2032498015, ____response_3)); }
	inline Response_t998287943 * get__response_3() const { return ____response_3; }
	inline Response_t998287943 ** get_address_of__response_3() { return &____response_3; }
	inline void set__response_3(Response_t998287943 * value)
	{
		____response_3 = value;
		Il2CppCodeGenWriteBarrier(&____response_3, value);
	}

	inline static int32_t get_offset_of_userId_4() { return static_cast<int32_t>(offsetof(Request_t2032498015, ___userId_4)); }
	inline int32_t get_userId_4() const { return ___userId_4; }
	inline int32_t* get_address_of_userId_4() { return &___userId_4; }
	inline void set_userId_4(int32_t value)
	{
		___userId_4 = value;
	}

	inline static int32_t get_offset_of_token_5() { return static_cast<int32_t>(offsetof(Request_t2032498015, ___token_5)); }
	inline String_t* get_token_5() const { return ___token_5; }
	inline String_t** get_address_of_token_5() { return &___token_5; }
	inline void set_token_5(String_t* value)
	{
		___token_5 = value;
		Il2CppCodeGenWriteBarrier(&___token_5, value);
	}

	inline static int32_t get_offset_of_mId_6() { return static_cast<int32_t>(offsetof(Request_t2032498015, ___mId_6)); }
	inline int32_t get_mId_6() const { return ___mId_6; }
	inline int32_t* get_address_of_mId_6() { return &___mId_6; }
	inline void set_mId_6(int32_t value)
	{
		___mId_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
