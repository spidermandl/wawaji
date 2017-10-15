#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "DOTween_DG_Tweening_Tweener760404022.h"
#include "DOTween_DG_Tweening_Plugins_Options_UintOptions2267095136.h"

// DG.Tweening.Core.DOGetter`1<System.UInt32>
struct DOGetter_1_t3931788163;
// DG.Tweening.Core.DOSetter`1<System.UInt32>
struct DOSetter_1_t3807911007;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions>
struct ABSTweenPlugin_3_t556292748;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.TweenerCore`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions>
struct  TweenerCore_3_t1648829745  : public Tweener_t760404022
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	uint32_t ___startValue_53;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	uint32_t ___endValue_54;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	uint32_t ___changeValue_55;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	UintOptions_t2267095136  ___plugOptions_56;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t3931788163 * ___getter_57;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t3807911007 * ___setter_58;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t556292748 * ___tweenPlugin_59;

public:
	inline static int32_t get_offset_of_startValue_53() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1648829745, ___startValue_53)); }
	inline uint32_t get_startValue_53() const { return ___startValue_53; }
	inline uint32_t* get_address_of_startValue_53() { return &___startValue_53; }
	inline void set_startValue_53(uint32_t value)
	{
		___startValue_53 = value;
	}

	inline static int32_t get_offset_of_endValue_54() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1648829745, ___endValue_54)); }
	inline uint32_t get_endValue_54() const { return ___endValue_54; }
	inline uint32_t* get_address_of_endValue_54() { return &___endValue_54; }
	inline void set_endValue_54(uint32_t value)
	{
		___endValue_54 = value;
	}

	inline static int32_t get_offset_of_changeValue_55() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1648829745, ___changeValue_55)); }
	inline uint32_t get_changeValue_55() const { return ___changeValue_55; }
	inline uint32_t* get_address_of_changeValue_55() { return &___changeValue_55; }
	inline void set_changeValue_55(uint32_t value)
	{
		___changeValue_55 = value;
	}

	inline static int32_t get_offset_of_plugOptions_56() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1648829745, ___plugOptions_56)); }
	inline UintOptions_t2267095136  get_plugOptions_56() const { return ___plugOptions_56; }
	inline UintOptions_t2267095136 * get_address_of_plugOptions_56() { return &___plugOptions_56; }
	inline void set_plugOptions_56(UintOptions_t2267095136  value)
	{
		___plugOptions_56 = value;
	}

	inline static int32_t get_offset_of_getter_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1648829745, ___getter_57)); }
	inline DOGetter_1_t3931788163 * get_getter_57() const { return ___getter_57; }
	inline DOGetter_1_t3931788163 ** get_address_of_getter_57() { return &___getter_57; }
	inline void set_getter_57(DOGetter_1_t3931788163 * value)
	{
		___getter_57 = value;
		Il2CppCodeGenWriteBarrier(&___getter_57, value);
	}

	inline static int32_t get_offset_of_setter_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1648829745, ___setter_58)); }
	inline DOSetter_1_t3807911007 * get_setter_58() const { return ___setter_58; }
	inline DOSetter_1_t3807911007 ** get_address_of_setter_58() { return &___setter_58; }
	inline void set_setter_58(DOSetter_1_t3807911007 * value)
	{
		___setter_58 = value;
		Il2CppCodeGenWriteBarrier(&___setter_58, value);
	}

	inline static int32_t get_offset_of_tweenPlugin_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1648829745, ___tweenPlugin_59)); }
	inline ABSTweenPlugin_3_t556292748 * get_tweenPlugin_59() const { return ___tweenPlugin_59; }
	inline ABSTweenPlugin_3_t556292748 ** get_address_of_tweenPlugin_59() { return &___tweenPlugin_59; }
	inline void set_tweenPlugin_59(ABSTweenPlugin_3_t556292748 * value)
	{
		___tweenPlugin_59 = value;
		Il2CppCodeGenWriteBarrier(&___tweenPlugin_59, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
