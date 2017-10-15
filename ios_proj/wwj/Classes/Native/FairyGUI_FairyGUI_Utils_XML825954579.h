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
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// FairyGUI.Utils.XMLList
struct XMLList_t2962160883;
// System.Collections.Generic.Stack`1<FairyGUI.Utils.XML>
struct Stack_1_t1913682733;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.Utils.XML
struct  XML_t825954579  : public Il2CppObject
{
public:
	// System.String FairyGUI.Utils.XML::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.String FairyGUI.Utils.XML::<text>k__BackingField
	String_t* ___U3CtextU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> FairyGUI.Utils.XML::_attributes
	Dictionary_2_t3943999495 * ____attributes_2;
	// FairyGUI.Utils.XMLList FairyGUI.Utils.XML::_children
	XMLList_t2962160883 * ____children_3;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(XML_t825954579, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CnameU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CtextU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XML_t825954579, ___U3CtextU3Ek__BackingField_1)); }
	inline String_t* get_U3CtextU3Ek__BackingField_1() const { return ___U3CtextU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CtextU3Ek__BackingField_1() { return &___U3CtextU3Ek__BackingField_1; }
	inline void set_U3CtextU3Ek__BackingField_1(String_t* value)
	{
		___U3CtextU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtextU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of__attributes_2() { return static_cast<int32_t>(offsetof(XML_t825954579, ____attributes_2)); }
	inline Dictionary_2_t3943999495 * get__attributes_2() const { return ____attributes_2; }
	inline Dictionary_2_t3943999495 ** get_address_of__attributes_2() { return &____attributes_2; }
	inline void set__attributes_2(Dictionary_2_t3943999495 * value)
	{
		____attributes_2 = value;
		Il2CppCodeGenWriteBarrier(&____attributes_2, value);
	}

	inline static int32_t get_offset_of__children_3() { return static_cast<int32_t>(offsetof(XML_t825954579, ____children_3)); }
	inline XMLList_t2962160883 * get__children_3() const { return ____children_3; }
	inline XMLList_t2962160883 ** get_address_of__children_3() { return &____children_3; }
	inline void set__children_3(XMLList_t2962160883 * value)
	{
		____children_3 = value;
		Il2CppCodeGenWriteBarrier(&____children_3, value);
	}
};

struct XML_t825954579_StaticFields
{
public:
	// System.Collections.Generic.Stack`1<FairyGUI.Utils.XML> FairyGUI.Utils.XML::sNodeStack
	Stack_1_t1913682733 * ___sNodeStack_4;

public:
	inline static int32_t get_offset_of_sNodeStack_4() { return static_cast<int32_t>(offsetof(XML_t825954579_StaticFields, ___sNodeStack_4)); }
	inline Stack_1_t1913682733 * get_sNodeStack_4() const { return ___sNodeStack_4; }
	inline Stack_1_t1913682733 ** get_address_of_sNodeStack_4() { return &___sNodeStack_4; }
	inline void set_sNodeStack_4(Stack_1_t1913682733 * value)
	{
		___sNodeStack_4 = value;
		Il2CppCodeGenWriteBarrier(&___sNodeStack_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
