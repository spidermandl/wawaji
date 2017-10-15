#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_GObject2662234644.h"
#include "FairyGUI_FairyGUI_GroupLayoutType1447535539.h"

// FairyGUI.EventCallback0
struct EventCallback0_t422277839;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.GGroup
struct  GGroup_t2369700754  : public GObject_t2662234644
{
public:
	// FairyGUI.GroupLayoutType FairyGUI.GGroup::_layout
	int32_t ____layout_74;
	// System.Int32 FairyGUI.GGroup::_lineGap
	int32_t ____lineGap_75;
	// System.Int32 FairyGUI.GGroup::_columnGap
	int32_t ____columnGap_76;
	// System.Boolean FairyGUI.GGroup::_percentReady
	bool ____percentReady_77;
	// System.Boolean FairyGUI.GGroup::_boundsChanged
	bool ____boundsChanged_78;
	// FairyGUI.EventCallback0 FairyGUI.GGroup::_refreshDelegate
	EventCallback0_t422277839 * ____refreshDelegate_79;
	// System.Int32 FairyGUI.GGroup::_updating
	int32_t ____updating_80;

public:
	inline static int32_t get_offset_of__layout_74() { return static_cast<int32_t>(offsetof(GGroup_t2369700754, ____layout_74)); }
	inline int32_t get__layout_74() const { return ____layout_74; }
	inline int32_t* get_address_of__layout_74() { return &____layout_74; }
	inline void set__layout_74(int32_t value)
	{
		____layout_74 = value;
	}

	inline static int32_t get_offset_of__lineGap_75() { return static_cast<int32_t>(offsetof(GGroup_t2369700754, ____lineGap_75)); }
	inline int32_t get__lineGap_75() const { return ____lineGap_75; }
	inline int32_t* get_address_of__lineGap_75() { return &____lineGap_75; }
	inline void set__lineGap_75(int32_t value)
	{
		____lineGap_75 = value;
	}

	inline static int32_t get_offset_of__columnGap_76() { return static_cast<int32_t>(offsetof(GGroup_t2369700754, ____columnGap_76)); }
	inline int32_t get__columnGap_76() const { return ____columnGap_76; }
	inline int32_t* get_address_of__columnGap_76() { return &____columnGap_76; }
	inline void set__columnGap_76(int32_t value)
	{
		____columnGap_76 = value;
	}

	inline static int32_t get_offset_of__percentReady_77() { return static_cast<int32_t>(offsetof(GGroup_t2369700754, ____percentReady_77)); }
	inline bool get__percentReady_77() const { return ____percentReady_77; }
	inline bool* get_address_of__percentReady_77() { return &____percentReady_77; }
	inline void set__percentReady_77(bool value)
	{
		____percentReady_77 = value;
	}

	inline static int32_t get_offset_of__boundsChanged_78() { return static_cast<int32_t>(offsetof(GGroup_t2369700754, ____boundsChanged_78)); }
	inline bool get__boundsChanged_78() const { return ____boundsChanged_78; }
	inline bool* get_address_of__boundsChanged_78() { return &____boundsChanged_78; }
	inline void set__boundsChanged_78(bool value)
	{
		____boundsChanged_78 = value;
	}

	inline static int32_t get_offset_of__refreshDelegate_79() { return static_cast<int32_t>(offsetof(GGroup_t2369700754, ____refreshDelegate_79)); }
	inline EventCallback0_t422277839 * get__refreshDelegate_79() const { return ____refreshDelegate_79; }
	inline EventCallback0_t422277839 ** get_address_of__refreshDelegate_79() { return &____refreshDelegate_79; }
	inline void set__refreshDelegate_79(EventCallback0_t422277839 * value)
	{
		____refreshDelegate_79 = value;
		Il2CppCodeGenWriteBarrier(&____refreshDelegate_79, value);
	}

	inline static int32_t get_offset_of__updating_80() { return static_cast<int32_t>(offsetof(GGroup_t2369700754, ____updating_80)); }
	inline int32_t get__updating_80() const { return ____updating_80; }
	inline int32_t* get_address_of__updating_80() { return &____updating_80; }
	inline void set__updating_80(int32_t value)
	{
		____updating_80 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
