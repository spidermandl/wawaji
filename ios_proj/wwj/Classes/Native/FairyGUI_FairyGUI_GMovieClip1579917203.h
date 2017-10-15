#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_GObject2662234644.h"

// FairyGUI.EventListener
struct EventListener_t2764096410;
// FairyGUI.MovieClip
struct MovieClip_t2653703760;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.GMovieClip
struct  GMovieClip_t1579917203  : public GObject_t2662234644
{
public:
	// FairyGUI.EventListener FairyGUI.GMovieClip::<onPlayEnd>k__BackingField
	EventListener_t2764096410 * ___U3ConPlayEndU3Ek__BackingField_74;
	// FairyGUI.MovieClip FairyGUI.GMovieClip::_content
	MovieClip_t2653703760 * ____content_75;

public:
	inline static int32_t get_offset_of_U3ConPlayEndU3Ek__BackingField_74() { return static_cast<int32_t>(offsetof(GMovieClip_t1579917203, ___U3ConPlayEndU3Ek__BackingField_74)); }
	inline EventListener_t2764096410 * get_U3ConPlayEndU3Ek__BackingField_74() const { return ___U3ConPlayEndU3Ek__BackingField_74; }
	inline EventListener_t2764096410 ** get_address_of_U3ConPlayEndU3Ek__BackingField_74() { return &___U3ConPlayEndU3Ek__BackingField_74; }
	inline void set_U3ConPlayEndU3Ek__BackingField_74(EventListener_t2764096410 * value)
	{
		___U3ConPlayEndU3Ek__BackingField_74 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConPlayEndU3Ek__BackingField_74, value);
	}

	inline static int32_t get_offset_of__content_75() { return static_cast<int32_t>(offsetof(GMovieClip_t1579917203, ____content_75)); }
	inline MovieClip_t2653703760 * get__content_75() const { return ____content_75; }
	inline MovieClip_t2653703760 ** get_address_of__content_75() { return &____content_75; }
	inline void set__content_75(MovieClip_t2653703760 * value)
	{
		____content_75 = value;
		Il2CppCodeGenWriteBarrier(&____content_75, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
