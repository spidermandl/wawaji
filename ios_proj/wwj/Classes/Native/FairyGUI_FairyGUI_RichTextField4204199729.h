#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_Container2415729585.h"

// FairyGUI.Utils.IHtmlPageContext
struct IHtmlPageContext_t2514781766;
// FairyGUI.Utils.HtmlParseOptions
struct HtmlParseOptions_t2926988462;
// System.Collections.Generic.Dictionary`2<System.UInt32,FairyGUI.Emoji>
struct Dictionary_2_t537258706;
// FairyGUI.TextField
struct TextField_t1207703749;
// System.Collections.Generic.List`1<FairyGUI.Utils.IHtmlObject>
struct List_1_t2399088451;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.RichTextField
struct  RichTextField_t4204199729  : public Container_t2415729585
{
public:
	// FairyGUI.Utils.IHtmlPageContext FairyGUI.RichTextField::<htmlPageContext>k__BackingField
	Il2CppObject * ___U3ChtmlPageContextU3Ek__BackingField_69;
	// FairyGUI.Utils.HtmlParseOptions FairyGUI.RichTextField::<htmlParseOptions>k__BackingField
	HtmlParseOptions_t2926988462 * ___U3ChtmlParseOptionsU3Ek__BackingField_70;
	// System.Collections.Generic.Dictionary`2<System.UInt32,FairyGUI.Emoji> FairyGUI.RichTextField::<emojies>k__BackingField
	Dictionary_2_t537258706 * ___U3CemojiesU3Ek__BackingField_71;
	// FairyGUI.TextField FairyGUI.RichTextField::<textField>k__BackingField
	TextField_t1207703749 * ___U3CtextFieldU3Ek__BackingField_72;
	// System.Collections.Generic.List`1<FairyGUI.Utils.IHtmlObject> FairyGUI.RichTextField::_toCollect
	List_1_t2399088451 * ____toCollect_73;

public:
	inline static int32_t get_offset_of_U3ChtmlPageContextU3Ek__BackingField_69() { return static_cast<int32_t>(offsetof(RichTextField_t4204199729, ___U3ChtmlPageContextU3Ek__BackingField_69)); }
	inline Il2CppObject * get_U3ChtmlPageContextU3Ek__BackingField_69() const { return ___U3ChtmlPageContextU3Ek__BackingField_69; }
	inline Il2CppObject ** get_address_of_U3ChtmlPageContextU3Ek__BackingField_69() { return &___U3ChtmlPageContextU3Ek__BackingField_69; }
	inline void set_U3ChtmlPageContextU3Ek__BackingField_69(Il2CppObject * value)
	{
		___U3ChtmlPageContextU3Ek__BackingField_69 = value;
		Il2CppCodeGenWriteBarrier(&___U3ChtmlPageContextU3Ek__BackingField_69, value);
	}

	inline static int32_t get_offset_of_U3ChtmlParseOptionsU3Ek__BackingField_70() { return static_cast<int32_t>(offsetof(RichTextField_t4204199729, ___U3ChtmlParseOptionsU3Ek__BackingField_70)); }
	inline HtmlParseOptions_t2926988462 * get_U3ChtmlParseOptionsU3Ek__BackingField_70() const { return ___U3ChtmlParseOptionsU3Ek__BackingField_70; }
	inline HtmlParseOptions_t2926988462 ** get_address_of_U3ChtmlParseOptionsU3Ek__BackingField_70() { return &___U3ChtmlParseOptionsU3Ek__BackingField_70; }
	inline void set_U3ChtmlParseOptionsU3Ek__BackingField_70(HtmlParseOptions_t2926988462 * value)
	{
		___U3ChtmlParseOptionsU3Ek__BackingField_70 = value;
		Il2CppCodeGenWriteBarrier(&___U3ChtmlParseOptionsU3Ek__BackingField_70, value);
	}

	inline static int32_t get_offset_of_U3CemojiesU3Ek__BackingField_71() { return static_cast<int32_t>(offsetof(RichTextField_t4204199729, ___U3CemojiesU3Ek__BackingField_71)); }
	inline Dictionary_2_t537258706 * get_U3CemojiesU3Ek__BackingField_71() const { return ___U3CemojiesU3Ek__BackingField_71; }
	inline Dictionary_2_t537258706 ** get_address_of_U3CemojiesU3Ek__BackingField_71() { return &___U3CemojiesU3Ek__BackingField_71; }
	inline void set_U3CemojiesU3Ek__BackingField_71(Dictionary_2_t537258706 * value)
	{
		___U3CemojiesU3Ek__BackingField_71 = value;
		Il2CppCodeGenWriteBarrier(&___U3CemojiesU3Ek__BackingField_71, value);
	}

	inline static int32_t get_offset_of_U3CtextFieldU3Ek__BackingField_72() { return static_cast<int32_t>(offsetof(RichTextField_t4204199729, ___U3CtextFieldU3Ek__BackingField_72)); }
	inline TextField_t1207703749 * get_U3CtextFieldU3Ek__BackingField_72() const { return ___U3CtextFieldU3Ek__BackingField_72; }
	inline TextField_t1207703749 ** get_address_of_U3CtextFieldU3Ek__BackingField_72() { return &___U3CtextFieldU3Ek__BackingField_72; }
	inline void set_U3CtextFieldU3Ek__BackingField_72(TextField_t1207703749 * value)
	{
		___U3CtextFieldU3Ek__BackingField_72 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtextFieldU3Ek__BackingField_72, value);
	}

	inline static int32_t get_offset_of__toCollect_73() { return static_cast<int32_t>(offsetof(RichTextField_t4204199729, ____toCollect_73)); }
	inline List_1_t2399088451 * get__toCollect_73() const { return ____toCollect_73; }
	inline List_1_t2399088451 ** get_address_of__toCollect_73() { return &____toCollect_73; }
	inline void set__toCollect_73(List_1_t2399088451 * value)
	{
		____toCollect_73 = value;
		Il2CppCodeGenWriteBarrier(&____toCollect_73, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
