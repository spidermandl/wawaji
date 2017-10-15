#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// FairyGUI.GLoader
struct GLoader_t3665669800;
// FairyGUI.RichTextField
struct RichTextField_t4204199729;
// FairyGUI.Utils.HtmlElement
struct HtmlElement_t3135755401;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.Utils.HtmlImage
struct  HtmlImage_t286818808  : public Il2CppObject
{
public:
	// FairyGUI.GLoader FairyGUI.Utils.HtmlImage::<loader>k__BackingField
	GLoader_t3665669800 * ___U3CloaderU3Ek__BackingField_0;
	// FairyGUI.RichTextField FairyGUI.Utils.HtmlImage::_owner
	RichTextField_t4204199729 * ____owner_1;
	// FairyGUI.Utils.HtmlElement FairyGUI.Utils.HtmlImage::_element
	HtmlElement_t3135755401 * ____element_2;
	// System.Boolean FairyGUI.Utils.HtmlImage::_externalTexture
	bool ____externalTexture_3;

public:
	inline static int32_t get_offset_of_U3CloaderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(HtmlImage_t286818808, ___U3CloaderU3Ek__BackingField_0)); }
	inline GLoader_t3665669800 * get_U3CloaderU3Ek__BackingField_0() const { return ___U3CloaderU3Ek__BackingField_0; }
	inline GLoader_t3665669800 ** get_address_of_U3CloaderU3Ek__BackingField_0() { return &___U3CloaderU3Ek__BackingField_0; }
	inline void set_U3CloaderU3Ek__BackingField_0(GLoader_t3665669800 * value)
	{
		___U3CloaderU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CloaderU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of__owner_1() { return static_cast<int32_t>(offsetof(HtmlImage_t286818808, ____owner_1)); }
	inline RichTextField_t4204199729 * get__owner_1() const { return ____owner_1; }
	inline RichTextField_t4204199729 ** get_address_of__owner_1() { return &____owner_1; }
	inline void set__owner_1(RichTextField_t4204199729 * value)
	{
		____owner_1 = value;
		Il2CppCodeGenWriteBarrier(&____owner_1, value);
	}

	inline static int32_t get_offset_of__element_2() { return static_cast<int32_t>(offsetof(HtmlImage_t286818808, ____element_2)); }
	inline HtmlElement_t3135755401 * get__element_2() const { return ____element_2; }
	inline HtmlElement_t3135755401 ** get_address_of__element_2() { return &____element_2; }
	inline void set__element_2(HtmlElement_t3135755401 * value)
	{
		____element_2 = value;
		Il2CppCodeGenWriteBarrier(&____element_2, value);
	}

	inline static int32_t get_offset_of__externalTexture_3() { return static_cast<int32_t>(offsetof(HtmlImage_t286818808, ____externalTexture_3)); }
	inline bool get__externalTexture_3() const { return ____externalTexture_3; }
	inline bool* get_address_of__externalTexture_3() { return &____externalTexture_3; }
	inline void set__externalTexture_3(bool value)
	{
		____externalTexture_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
