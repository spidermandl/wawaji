#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_DisplayObject1069768653.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Collections.Generic.List`1<UnityEngine.Rect>
struct List_1_t3050876758;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.SelectionShape
struct  SelectionShape_t1383229973  : public DisplayObject_t1069768653
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Rect> FairyGUI.SelectionShape::_rects
	List_1_t3050876758 * ____rects_52;
	// UnityEngine.Color FairyGUI.SelectionShape::_color
	Color_t2020392075  ____color_53;

public:
	inline static int32_t get_offset_of__rects_52() { return static_cast<int32_t>(offsetof(SelectionShape_t1383229973, ____rects_52)); }
	inline List_1_t3050876758 * get__rects_52() const { return ____rects_52; }
	inline List_1_t3050876758 ** get_address_of__rects_52() { return &____rects_52; }
	inline void set__rects_52(List_1_t3050876758 * value)
	{
		____rects_52 = value;
		Il2CppCodeGenWriteBarrier(&____rects_52, value);
	}

	inline static int32_t get_offset_of__color_53() { return static_cast<int32_t>(offsetof(SelectionShape_t1383229973, ____color_53)); }
	inline Color_t2020392075  get__color_53() const { return ____color_53; }
	inline Color_t2020392075 * get_address_of__color_53() { return &____color_53; }
	inline void set__color_53(Color_t2020392075  value)
	{
		____color_53 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
