#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// System.Collections.Generic.List`1<FairyGUI.Utils.XML>
struct List_1_t195075711;
// System.String
struct String_t;
// FairyGUI.Utils.XML
struct XML_t825954579;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.Utils.XMLList/Enumerator
struct  Enumerator_t619468503 
{
public:
	// System.Collections.Generic.List`1<FairyGUI.Utils.XML> FairyGUI.Utils.XMLList/Enumerator::_source
	List_1_t195075711 * ____source_0;
	// System.String FairyGUI.Utils.XMLList/Enumerator::_selector
	String_t* ____selector_1;
	// System.Int32 FairyGUI.Utils.XMLList/Enumerator::_index
	int32_t ____index_2;
	// System.Int32 FairyGUI.Utils.XMLList/Enumerator::_total
	int32_t ____total_3;
	// FairyGUI.Utils.XML FairyGUI.Utils.XMLList/Enumerator::_current
	XML_t825954579 * ____current_4;

public:
	inline static int32_t get_offset_of__source_0() { return static_cast<int32_t>(offsetof(Enumerator_t619468503, ____source_0)); }
	inline List_1_t195075711 * get__source_0() const { return ____source_0; }
	inline List_1_t195075711 ** get_address_of__source_0() { return &____source_0; }
	inline void set__source_0(List_1_t195075711 * value)
	{
		____source_0 = value;
		Il2CppCodeGenWriteBarrier(&____source_0, value);
	}

	inline static int32_t get_offset_of__selector_1() { return static_cast<int32_t>(offsetof(Enumerator_t619468503, ____selector_1)); }
	inline String_t* get__selector_1() const { return ____selector_1; }
	inline String_t** get_address_of__selector_1() { return &____selector_1; }
	inline void set__selector_1(String_t* value)
	{
		____selector_1 = value;
		Il2CppCodeGenWriteBarrier(&____selector_1, value);
	}

	inline static int32_t get_offset_of__index_2() { return static_cast<int32_t>(offsetof(Enumerator_t619468503, ____index_2)); }
	inline int32_t get__index_2() const { return ____index_2; }
	inline int32_t* get_address_of__index_2() { return &____index_2; }
	inline void set__index_2(int32_t value)
	{
		____index_2 = value;
	}

	inline static int32_t get_offset_of__total_3() { return static_cast<int32_t>(offsetof(Enumerator_t619468503, ____total_3)); }
	inline int32_t get__total_3() const { return ____total_3; }
	inline int32_t* get_address_of__total_3() { return &____total_3; }
	inline void set__total_3(int32_t value)
	{
		____total_3 = value;
	}

	inline static int32_t get_offset_of__current_4() { return static_cast<int32_t>(offsetof(Enumerator_t619468503, ____current_4)); }
	inline XML_t825954579 * get__current_4() const { return ____current_4; }
	inline XML_t825954579 ** get_address_of__current_4() { return &____current_4; }
	inline void set__current_4(XML_t825954579 * value)
	{
		____current_4 = value;
		Il2CppCodeGenWriteBarrier(&____current_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of FairyGUI.Utils.XMLList/Enumerator
struct Enumerator_t619468503_marshaled_pinvoke
{
	List_1_t195075711 * ____source_0;
	char* ____selector_1;
	int32_t ____index_2;
	int32_t ____total_3;
	XML_t825954579 * ____current_4;
};
// Native definition for COM marshalling of FairyGUI.Utils.XMLList/Enumerator
struct Enumerator_t619468503_marshaled_com
{
	List_1_t195075711 * ____source_0;
	Il2CppChar* ____selector_1;
	int32_t ____index_2;
	int32_t ____total_3;
	XML_t825954579 * ____current_4;
};
