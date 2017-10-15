#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_BaseFont877349798.h"

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,FairyGUI.BitmapFont/BMGlyph>
struct Dictionary_2_t1480958333;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.BitmapFont
struct  BitmapFont_t4118391604  : public BaseFont_t877349798
{
public:
	// System.Int32 FairyGUI.BitmapFont::size
	int32_t ___size_11;
	// System.Boolean FairyGUI.BitmapFont::resizable
	bool ___resizable_12;
	// System.String FairyGUI.BitmapFont::url
	String_t* ___url_13;
	// System.Collections.Generic.Dictionary`2<System.Int32,FairyGUI.BitmapFont/BMGlyph> FairyGUI.BitmapFont::_dict
	Dictionary_2_t1480958333 * ____dict_14;
	// System.Single FairyGUI.BitmapFont::scale
	float ___scale_15;

public:
	inline static int32_t get_offset_of_size_11() { return static_cast<int32_t>(offsetof(BitmapFont_t4118391604, ___size_11)); }
	inline int32_t get_size_11() const { return ___size_11; }
	inline int32_t* get_address_of_size_11() { return &___size_11; }
	inline void set_size_11(int32_t value)
	{
		___size_11 = value;
	}

	inline static int32_t get_offset_of_resizable_12() { return static_cast<int32_t>(offsetof(BitmapFont_t4118391604, ___resizable_12)); }
	inline bool get_resizable_12() const { return ___resizable_12; }
	inline bool* get_address_of_resizable_12() { return &___resizable_12; }
	inline void set_resizable_12(bool value)
	{
		___resizable_12 = value;
	}

	inline static int32_t get_offset_of_url_13() { return static_cast<int32_t>(offsetof(BitmapFont_t4118391604, ___url_13)); }
	inline String_t* get_url_13() const { return ___url_13; }
	inline String_t** get_address_of_url_13() { return &___url_13; }
	inline void set_url_13(String_t* value)
	{
		___url_13 = value;
		Il2CppCodeGenWriteBarrier(&___url_13, value);
	}

	inline static int32_t get_offset_of__dict_14() { return static_cast<int32_t>(offsetof(BitmapFont_t4118391604, ____dict_14)); }
	inline Dictionary_2_t1480958333 * get__dict_14() const { return ____dict_14; }
	inline Dictionary_2_t1480958333 ** get_address_of__dict_14() { return &____dict_14; }
	inline void set__dict_14(Dictionary_2_t1480958333 * value)
	{
		____dict_14 = value;
		Il2CppCodeGenWriteBarrier(&____dict_14, value);
	}

	inline static int32_t get_offset_of_scale_15() { return static_cast<int32_t>(offsetof(BitmapFont_t4118391604, ___scale_15)); }
	inline float get_scale_15() const { return ___scale_15; }
	inline float* get_address_of_scale_15() { return &___scale_15; }
	inline void set_scale_15(float value)
	{
		___scale_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
