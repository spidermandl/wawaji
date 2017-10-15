#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_GObject2662234644.h"

// FairyGUI.TextField
struct TextField_t1207703749;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.GTextField
struct  GTextField_t2527516740  : public GObject_t2662234644
{
public:
	// FairyGUI.TextField FairyGUI.GTextField::_textField
	TextField_t1207703749 * ____textField_74;
	// System.String FairyGUI.GTextField::_text
	String_t* ____text_75;
	// System.Boolean FairyGUI.GTextField::_ubbEnabled
	bool ____ubbEnabled_76;
	// System.Boolean FairyGUI.GTextField::_updatingSize
	bool ____updatingSize_77;

public:
	inline static int32_t get_offset_of__textField_74() { return static_cast<int32_t>(offsetof(GTextField_t2527516740, ____textField_74)); }
	inline TextField_t1207703749 * get__textField_74() const { return ____textField_74; }
	inline TextField_t1207703749 ** get_address_of__textField_74() { return &____textField_74; }
	inline void set__textField_74(TextField_t1207703749 * value)
	{
		____textField_74 = value;
		Il2CppCodeGenWriteBarrier(&____textField_74, value);
	}

	inline static int32_t get_offset_of__text_75() { return static_cast<int32_t>(offsetof(GTextField_t2527516740, ____text_75)); }
	inline String_t* get__text_75() const { return ____text_75; }
	inline String_t** get_address_of__text_75() { return &____text_75; }
	inline void set__text_75(String_t* value)
	{
		____text_75 = value;
		Il2CppCodeGenWriteBarrier(&____text_75, value);
	}

	inline static int32_t get_offset_of__ubbEnabled_76() { return static_cast<int32_t>(offsetof(GTextField_t2527516740, ____ubbEnabled_76)); }
	inline bool get__ubbEnabled_76() const { return ____ubbEnabled_76; }
	inline bool* get_address_of__ubbEnabled_76() { return &____ubbEnabled_76; }
	inline void set__ubbEnabled_76(bool value)
	{
		____ubbEnabled_76 = value;
	}

	inline static int32_t get_offset_of__updatingSize_77() { return static_cast<int32_t>(offsetof(GTextField_t2527516740, ____updatingSize_77)); }
	inline bool get__updatingSize_77() const { return ____updatingSize_77; }
	inline bool* get_address_of__updatingSize_77() { return &____updatingSize_77; }
	inline void set__updatingSize_77(bool value)
	{
		____updatingSize_77 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
