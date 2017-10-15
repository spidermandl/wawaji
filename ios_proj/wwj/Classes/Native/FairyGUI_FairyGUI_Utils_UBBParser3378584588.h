#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// FairyGUI.Utils.UBBParser
struct UBBParser_t3378584588;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,FairyGUI.Utils.UBBParser/TagHandler>
struct Dictionary_2_t36512340;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.Utils.UBBParser
struct  UBBParser_t3378584588  : public Il2CppObject
{
public:
	// System.String FairyGUI.Utils.UBBParser::_text
	String_t* ____text_1;
	// System.Int32 FairyGUI.Utils.UBBParser::_readPos
	int32_t ____readPos_2;
	// System.Collections.Generic.Dictionary`2<System.String,FairyGUI.Utils.UBBParser/TagHandler> FairyGUI.Utils.UBBParser::handlers
	Dictionary_2_t36512340 * ___handlers_3;
	// System.Int32 FairyGUI.Utils.UBBParser::defaultImgWidth
	int32_t ___defaultImgWidth_4;
	// System.Int32 FairyGUI.Utils.UBBParser::defaultImgHeight
	int32_t ___defaultImgHeight_5;

public:
	inline static int32_t get_offset_of__text_1() { return static_cast<int32_t>(offsetof(UBBParser_t3378584588, ____text_1)); }
	inline String_t* get__text_1() const { return ____text_1; }
	inline String_t** get_address_of__text_1() { return &____text_1; }
	inline void set__text_1(String_t* value)
	{
		____text_1 = value;
		Il2CppCodeGenWriteBarrier(&____text_1, value);
	}

	inline static int32_t get_offset_of__readPos_2() { return static_cast<int32_t>(offsetof(UBBParser_t3378584588, ____readPos_2)); }
	inline int32_t get__readPos_2() const { return ____readPos_2; }
	inline int32_t* get_address_of__readPos_2() { return &____readPos_2; }
	inline void set__readPos_2(int32_t value)
	{
		____readPos_2 = value;
	}

	inline static int32_t get_offset_of_handlers_3() { return static_cast<int32_t>(offsetof(UBBParser_t3378584588, ___handlers_3)); }
	inline Dictionary_2_t36512340 * get_handlers_3() const { return ___handlers_3; }
	inline Dictionary_2_t36512340 ** get_address_of_handlers_3() { return &___handlers_3; }
	inline void set_handlers_3(Dictionary_2_t36512340 * value)
	{
		___handlers_3 = value;
		Il2CppCodeGenWriteBarrier(&___handlers_3, value);
	}

	inline static int32_t get_offset_of_defaultImgWidth_4() { return static_cast<int32_t>(offsetof(UBBParser_t3378584588, ___defaultImgWidth_4)); }
	inline int32_t get_defaultImgWidth_4() const { return ___defaultImgWidth_4; }
	inline int32_t* get_address_of_defaultImgWidth_4() { return &___defaultImgWidth_4; }
	inline void set_defaultImgWidth_4(int32_t value)
	{
		___defaultImgWidth_4 = value;
	}

	inline static int32_t get_offset_of_defaultImgHeight_5() { return static_cast<int32_t>(offsetof(UBBParser_t3378584588, ___defaultImgHeight_5)); }
	inline int32_t get_defaultImgHeight_5() const { return ___defaultImgHeight_5; }
	inline int32_t* get_address_of_defaultImgHeight_5() { return &___defaultImgHeight_5; }
	inline void set_defaultImgHeight_5(int32_t value)
	{
		___defaultImgHeight_5 = value;
	}
};

struct UBBParser_t3378584588_StaticFields
{
public:
	// FairyGUI.Utils.UBBParser FairyGUI.Utils.UBBParser::inst
	UBBParser_t3378584588 * ___inst_0;

public:
	inline static int32_t get_offset_of_inst_0() { return static_cast<int32_t>(offsetof(UBBParser_t3378584588_StaticFields, ___inst_0)); }
	inline UBBParser_t3378584588 * get_inst_0() const { return ___inst_0; }
	inline UBBParser_t3378584588 ** get_address_of_inst_0() { return &___inst_0; }
	inline void set_inst_0(UBBParser_t3378584588 * value)
	{
		___inst_0 = value;
		Il2CppCodeGenWriteBarrier(&___inst_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
