#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_Image2472209013.h"

// FairyGUI.MovieClip/Frame[]
struct FrameU5BU5D_t979088179;
// FairyGUI.PlayState
struct PlayState_t2614107197;
// FairyGUI.EventListener
struct EventListener_t2764096410;
// FairyGUI.EventCallback0
struct EventCallback0_t422277839;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.MovieClip
struct  MovieClip_t2653703760  : public Image_t2472209013
{
public:
	// System.Single FairyGUI.MovieClip::interval
	float ___interval_67;
	// System.Boolean FairyGUI.MovieClip::swing
	bool ___swing_68;
	// System.Single FairyGUI.MovieClip::repeatDelay
	float ___repeatDelay_69;
	// System.Int32 FairyGUI.MovieClip::<frameCount>k__BackingField
	int32_t ___U3CframeCountU3Ek__BackingField_70;
	// FairyGUI.MovieClip/Frame[] FairyGUI.MovieClip::<frames>k__BackingField
	FrameU5BU5D_t979088179* ___U3CframesU3Ek__BackingField_71;
	// FairyGUI.PlayState FairyGUI.MovieClip::<playState>k__BackingField
	PlayState_t2614107197 * ___U3CplayStateU3Ek__BackingField_72;
	// FairyGUI.EventListener FairyGUI.MovieClip::<onPlayEnd>k__BackingField
	EventListener_t2764096410 * ___U3ConPlayEndU3Ek__BackingField_73;
	// System.Int32 FairyGUI.MovieClip::_currentFrame
	int32_t ____currentFrame_74;
	// System.Boolean FairyGUI.MovieClip::_playing
	bool ____playing_75;
	// System.Int32 FairyGUI.MovieClip::_start
	int32_t ____start_76;
	// System.Int32 FairyGUI.MovieClip::_end
	int32_t ____end_77;
	// System.Int32 FairyGUI.MovieClip::_times
	int32_t ____times_78;
	// System.Int32 FairyGUI.MovieClip::_endAt
	int32_t ____endAt_79;
	// System.Int32 FairyGUI.MovieClip::_status
	int32_t ____status_80;
	// System.Boolean FairyGUI.MovieClip::_forceDraw
	bool ____forceDraw_81;
	// FairyGUI.EventCallback0 FairyGUI.MovieClip::_playEndDelegate
	EventCallback0_t422277839 * ____playEndDelegate_82;

public:
	inline static int32_t get_offset_of_interval_67() { return static_cast<int32_t>(offsetof(MovieClip_t2653703760, ___interval_67)); }
	inline float get_interval_67() const { return ___interval_67; }
	inline float* get_address_of_interval_67() { return &___interval_67; }
	inline void set_interval_67(float value)
	{
		___interval_67 = value;
	}

	inline static int32_t get_offset_of_swing_68() { return static_cast<int32_t>(offsetof(MovieClip_t2653703760, ___swing_68)); }
	inline bool get_swing_68() const { return ___swing_68; }
	inline bool* get_address_of_swing_68() { return &___swing_68; }
	inline void set_swing_68(bool value)
	{
		___swing_68 = value;
	}

	inline static int32_t get_offset_of_repeatDelay_69() { return static_cast<int32_t>(offsetof(MovieClip_t2653703760, ___repeatDelay_69)); }
	inline float get_repeatDelay_69() const { return ___repeatDelay_69; }
	inline float* get_address_of_repeatDelay_69() { return &___repeatDelay_69; }
	inline void set_repeatDelay_69(float value)
	{
		___repeatDelay_69 = value;
	}

	inline static int32_t get_offset_of_U3CframeCountU3Ek__BackingField_70() { return static_cast<int32_t>(offsetof(MovieClip_t2653703760, ___U3CframeCountU3Ek__BackingField_70)); }
	inline int32_t get_U3CframeCountU3Ek__BackingField_70() const { return ___U3CframeCountU3Ek__BackingField_70; }
	inline int32_t* get_address_of_U3CframeCountU3Ek__BackingField_70() { return &___U3CframeCountU3Ek__BackingField_70; }
	inline void set_U3CframeCountU3Ek__BackingField_70(int32_t value)
	{
		___U3CframeCountU3Ek__BackingField_70 = value;
	}

	inline static int32_t get_offset_of_U3CframesU3Ek__BackingField_71() { return static_cast<int32_t>(offsetof(MovieClip_t2653703760, ___U3CframesU3Ek__BackingField_71)); }
	inline FrameU5BU5D_t979088179* get_U3CframesU3Ek__BackingField_71() const { return ___U3CframesU3Ek__BackingField_71; }
	inline FrameU5BU5D_t979088179** get_address_of_U3CframesU3Ek__BackingField_71() { return &___U3CframesU3Ek__BackingField_71; }
	inline void set_U3CframesU3Ek__BackingField_71(FrameU5BU5D_t979088179* value)
	{
		___U3CframesU3Ek__BackingField_71 = value;
		Il2CppCodeGenWriteBarrier(&___U3CframesU3Ek__BackingField_71, value);
	}

	inline static int32_t get_offset_of_U3CplayStateU3Ek__BackingField_72() { return static_cast<int32_t>(offsetof(MovieClip_t2653703760, ___U3CplayStateU3Ek__BackingField_72)); }
	inline PlayState_t2614107197 * get_U3CplayStateU3Ek__BackingField_72() const { return ___U3CplayStateU3Ek__BackingField_72; }
	inline PlayState_t2614107197 ** get_address_of_U3CplayStateU3Ek__BackingField_72() { return &___U3CplayStateU3Ek__BackingField_72; }
	inline void set_U3CplayStateU3Ek__BackingField_72(PlayState_t2614107197 * value)
	{
		___U3CplayStateU3Ek__BackingField_72 = value;
		Il2CppCodeGenWriteBarrier(&___U3CplayStateU3Ek__BackingField_72, value);
	}

	inline static int32_t get_offset_of_U3ConPlayEndU3Ek__BackingField_73() { return static_cast<int32_t>(offsetof(MovieClip_t2653703760, ___U3ConPlayEndU3Ek__BackingField_73)); }
	inline EventListener_t2764096410 * get_U3ConPlayEndU3Ek__BackingField_73() const { return ___U3ConPlayEndU3Ek__BackingField_73; }
	inline EventListener_t2764096410 ** get_address_of_U3ConPlayEndU3Ek__BackingField_73() { return &___U3ConPlayEndU3Ek__BackingField_73; }
	inline void set_U3ConPlayEndU3Ek__BackingField_73(EventListener_t2764096410 * value)
	{
		___U3ConPlayEndU3Ek__BackingField_73 = value;
		Il2CppCodeGenWriteBarrier(&___U3ConPlayEndU3Ek__BackingField_73, value);
	}

	inline static int32_t get_offset_of__currentFrame_74() { return static_cast<int32_t>(offsetof(MovieClip_t2653703760, ____currentFrame_74)); }
	inline int32_t get__currentFrame_74() const { return ____currentFrame_74; }
	inline int32_t* get_address_of__currentFrame_74() { return &____currentFrame_74; }
	inline void set__currentFrame_74(int32_t value)
	{
		____currentFrame_74 = value;
	}

	inline static int32_t get_offset_of__playing_75() { return static_cast<int32_t>(offsetof(MovieClip_t2653703760, ____playing_75)); }
	inline bool get__playing_75() const { return ____playing_75; }
	inline bool* get_address_of__playing_75() { return &____playing_75; }
	inline void set__playing_75(bool value)
	{
		____playing_75 = value;
	}

	inline static int32_t get_offset_of__start_76() { return static_cast<int32_t>(offsetof(MovieClip_t2653703760, ____start_76)); }
	inline int32_t get__start_76() const { return ____start_76; }
	inline int32_t* get_address_of__start_76() { return &____start_76; }
	inline void set__start_76(int32_t value)
	{
		____start_76 = value;
	}

	inline static int32_t get_offset_of__end_77() { return static_cast<int32_t>(offsetof(MovieClip_t2653703760, ____end_77)); }
	inline int32_t get__end_77() const { return ____end_77; }
	inline int32_t* get_address_of__end_77() { return &____end_77; }
	inline void set__end_77(int32_t value)
	{
		____end_77 = value;
	}

	inline static int32_t get_offset_of__times_78() { return static_cast<int32_t>(offsetof(MovieClip_t2653703760, ____times_78)); }
	inline int32_t get__times_78() const { return ____times_78; }
	inline int32_t* get_address_of__times_78() { return &____times_78; }
	inline void set__times_78(int32_t value)
	{
		____times_78 = value;
	}

	inline static int32_t get_offset_of__endAt_79() { return static_cast<int32_t>(offsetof(MovieClip_t2653703760, ____endAt_79)); }
	inline int32_t get__endAt_79() const { return ____endAt_79; }
	inline int32_t* get_address_of__endAt_79() { return &____endAt_79; }
	inline void set__endAt_79(int32_t value)
	{
		____endAt_79 = value;
	}

	inline static int32_t get_offset_of__status_80() { return static_cast<int32_t>(offsetof(MovieClip_t2653703760, ____status_80)); }
	inline int32_t get__status_80() const { return ____status_80; }
	inline int32_t* get_address_of__status_80() { return &____status_80; }
	inline void set__status_80(int32_t value)
	{
		____status_80 = value;
	}

	inline static int32_t get_offset_of__forceDraw_81() { return static_cast<int32_t>(offsetof(MovieClip_t2653703760, ____forceDraw_81)); }
	inline bool get__forceDraw_81() const { return ____forceDraw_81; }
	inline bool* get_address_of__forceDraw_81() { return &____forceDraw_81; }
	inline void set__forceDraw_81(bool value)
	{
		____forceDraw_81 = value;
	}

	inline static int32_t get_offset_of__playEndDelegate_82() { return static_cast<int32_t>(offsetof(MovieClip_t2653703760, ____playEndDelegate_82)); }
	inline EventCallback0_t422277839 * get__playEndDelegate_82() const { return ____playEndDelegate_82; }
	inline EventCallback0_t422277839 ** get_address_of__playEndDelegate_82() { return &____playEndDelegate_82; }
	inline void set__playEndDelegate_82(EventCallback0_t422277839 * value)
	{
		____playEndDelegate_82 = value;
		Il2CppCodeGenWriteBarrier(&____playEndDelegate_82, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
