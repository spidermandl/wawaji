#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "FairyGUI_FairyGUI_Utils_XMLTagType2892291691.h"

// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.Utils.XMLIterator
struct  XMLIterator_t949108849  : public Il2CppObject
{
public:

public:
};

struct XMLIterator_t949108849_StaticFields
{
public:
	// System.String FairyGUI.Utils.XMLIterator::tagName
	String_t* ___tagName_0;
	// FairyGUI.Utils.XMLTagType FairyGUI.Utils.XMLIterator::tagType
	int32_t ___tagType_1;
	// System.String FairyGUI.Utils.XMLIterator::lastTagName
	String_t* ___lastTagName_2;
	// System.String FairyGUI.Utils.XMLIterator::source
	String_t* ___source_3;
	// System.Int32 FairyGUI.Utils.XMLIterator::sourceLen
	int32_t ___sourceLen_4;
	// System.Int32 FairyGUI.Utils.XMLIterator::parsePos
	int32_t ___parsePos_5;
	// System.Int32 FairyGUI.Utils.XMLIterator::tagPos
	int32_t ___tagPos_6;
	// System.Int32 FairyGUI.Utils.XMLIterator::tagLength
	int32_t ___tagLength_7;
	// System.Int32 FairyGUI.Utils.XMLIterator::lastTagEnd
	int32_t ___lastTagEnd_8;
	// System.Boolean FairyGUI.Utils.XMLIterator::attrParsed
	bool ___attrParsed_9;
	// System.Boolean FairyGUI.Utils.XMLIterator::lowerCaseName
	bool ___lowerCaseName_10;
	// System.Text.StringBuilder FairyGUI.Utils.XMLIterator::buffer
	StringBuilder_t1221177846 * ___buffer_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> FairyGUI.Utils.XMLIterator::attributes
	Dictionary_2_t3943999495 * ___attributes_12;

public:
	inline static int32_t get_offset_of_tagName_0() { return static_cast<int32_t>(offsetof(XMLIterator_t949108849_StaticFields, ___tagName_0)); }
	inline String_t* get_tagName_0() const { return ___tagName_0; }
	inline String_t** get_address_of_tagName_0() { return &___tagName_0; }
	inline void set_tagName_0(String_t* value)
	{
		___tagName_0 = value;
		Il2CppCodeGenWriteBarrier(&___tagName_0, value);
	}

	inline static int32_t get_offset_of_tagType_1() { return static_cast<int32_t>(offsetof(XMLIterator_t949108849_StaticFields, ___tagType_1)); }
	inline int32_t get_tagType_1() const { return ___tagType_1; }
	inline int32_t* get_address_of_tagType_1() { return &___tagType_1; }
	inline void set_tagType_1(int32_t value)
	{
		___tagType_1 = value;
	}

	inline static int32_t get_offset_of_lastTagName_2() { return static_cast<int32_t>(offsetof(XMLIterator_t949108849_StaticFields, ___lastTagName_2)); }
	inline String_t* get_lastTagName_2() const { return ___lastTagName_2; }
	inline String_t** get_address_of_lastTagName_2() { return &___lastTagName_2; }
	inline void set_lastTagName_2(String_t* value)
	{
		___lastTagName_2 = value;
		Il2CppCodeGenWriteBarrier(&___lastTagName_2, value);
	}

	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(XMLIterator_t949108849_StaticFields, ___source_3)); }
	inline String_t* get_source_3() const { return ___source_3; }
	inline String_t** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(String_t* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier(&___source_3, value);
	}

	inline static int32_t get_offset_of_sourceLen_4() { return static_cast<int32_t>(offsetof(XMLIterator_t949108849_StaticFields, ___sourceLen_4)); }
	inline int32_t get_sourceLen_4() const { return ___sourceLen_4; }
	inline int32_t* get_address_of_sourceLen_4() { return &___sourceLen_4; }
	inline void set_sourceLen_4(int32_t value)
	{
		___sourceLen_4 = value;
	}

	inline static int32_t get_offset_of_parsePos_5() { return static_cast<int32_t>(offsetof(XMLIterator_t949108849_StaticFields, ___parsePos_5)); }
	inline int32_t get_parsePos_5() const { return ___parsePos_5; }
	inline int32_t* get_address_of_parsePos_5() { return &___parsePos_5; }
	inline void set_parsePos_5(int32_t value)
	{
		___parsePos_5 = value;
	}

	inline static int32_t get_offset_of_tagPos_6() { return static_cast<int32_t>(offsetof(XMLIterator_t949108849_StaticFields, ___tagPos_6)); }
	inline int32_t get_tagPos_6() const { return ___tagPos_6; }
	inline int32_t* get_address_of_tagPos_6() { return &___tagPos_6; }
	inline void set_tagPos_6(int32_t value)
	{
		___tagPos_6 = value;
	}

	inline static int32_t get_offset_of_tagLength_7() { return static_cast<int32_t>(offsetof(XMLIterator_t949108849_StaticFields, ___tagLength_7)); }
	inline int32_t get_tagLength_7() const { return ___tagLength_7; }
	inline int32_t* get_address_of_tagLength_7() { return &___tagLength_7; }
	inline void set_tagLength_7(int32_t value)
	{
		___tagLength_7 = value;
	}

	inline static int32_t get_offset_of_lastTagEnd_8() { return static_cast<int32_t>(offsetof(XMLIterator_t949108849_StaticFields, ___lastTagEnd_8)); }
	inline int32_t get_lastTagEnd_8() const { return ___lastTagEnd_8; }
	inline int32_t* get_address_of_lastTagEnd_8() { return &___lastTagEnd_8; }
	inline void set_lastTagEnd_8(int32_t value)
	{
		___lastTagEnd_8 = value;
	}

	inline static int32_t get_offset_of_attrParsed_9() { return static_cast<int32_t>(offsetof(XMLIterator_t949108849_StaticFields, ___attrParsed_9)); }
	inline bool get_attrParsed_9() const { return ___attrParsed_9; }
	inline bool* get_address_of_attrParsed_9() { return &___attrParsed_9; }
	inline void set_attrParsed_9(bool value)
	{
		___attrParsed_9 = value;
	}

	inline static int32_t get_offset_of_lowerCaseName_10() { return static_cast<int32_t>(offsetof(XMLIterator_t949108849_StaticFields, ___lowerCaseName_10)); }
	inline bool get_lowerCaseName_10() const { return ___lowerCaseName_10; }
	inline bool* get_address_of_lowerCaseName_10() { return &___lowerCaseName_10; }
	inline void set_lowerCaseName_10(bool value)
	{
		___lowerCaseName_10 = value;
	}

	inline static int32_t get_offset_of_buffer_11() { return static_cast<int32_t>(offsetof(XMLIterator_t949108849_StaticFields, ___buffer_11)); }
	inline StringBuilder_t1221177846 * get_buffer_11() const { return ___buffer_11; }
	inline StringBuilder_t1221177846 ** get_address_of_buffer_11() { return &___buffer_11; }
	inline void set_buffer_11(StringBuilder_t1221177846 * value)
	{
		___buffer_11 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_11, value);
	}

	inline static int32_t get_offset_of_attributes_12() { return static_cast<int32_t>(offsetof(XMLIterator_t949108849_StaticFields, ___attributes_12)); }
	inline Dictionary_2_t3943999495 * get_attributes_12() const { return ___attributes_12; }
	inline Dictionary_2_t3943999495 ** get_address_of_attributes_12() { return &___attributes_12; }
	inline void set_attributes_12(Dictionary_2_t3943999495 * value)
	{
		___attributes_12 = value;
		Il2CppCodeGenWriteBarrier(&___attributes_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
