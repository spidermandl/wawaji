#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_GObject2662234644.h"

// FairyGUI.Image
struct Image_t2472209013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.GImage
struct  GImage_t3472138872  : public GObject_t2662234644
{
public:
	// FairyGUI.Image FairyGUI.GImage::_content
	Image_t2472209013 * ____content_74;

public:
	inline static int32_t get_offset_of__content_74() { return static_cast<int32_t>(offsetof(GImage_t3472138872, ____content_74)); }
	inline Image_t2472209013 * get__content_74() const { return ____content_74; }
	inline Image_t2472209013 ** get_address_of__content_74() { return &____content_74; }
	inline void set__content_74(Image_t2472209013 * value)
	{
		____content_74 = value;
		Il2CppCodeGenWriteBarrier(&____content_74, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
