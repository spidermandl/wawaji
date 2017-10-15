#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "FairyGUI_FairyGUI_GComponent4106136290.h"
#include "FairyGUI_FairyGUI_ProgressTitleType720796751.h"

// FairyGUI.GTextField
struct GTextField_t2527516740;
// FairyGUI.GMovieClip
struct GMovieClip_t1579917203;
// FairyGUI.GObject
struct GObject_t2662234644;
// DG.Tweening.Tweener
struct Tweener_t760404022;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FairyGUI.GProgressBar
struct  GProgressBar_t3328437985  : public GComponent_t4106136290
{
public:
	// System.Double FairyGUI.GProgressBar::_max
	double ____max_92;
	// System.Double FairyGUI.GProgressBar::_value
	double ____value_93;
	// FairyGUI.ProgressTitleType FairyGUI.GProgressBar::_titleType
	int32_t ____titleType_94;
	// System.Boolean FairyGUI.GProgressBar::_reverse
	bool ____reverse_95;
	// FairyGUI.GTextField FairyGUI.GProgressBar::_titleObject
	GTextField_t2527516740 * ____titleObject_96;
	// FairyGUI.GMovieClip FairyGUI.GProgressBar::_aniObject
	GMovieClip_t1579917203 * ____aniObject_97;
	// FairyGUI.GObject FairyGUI.GProgressBar::_barObjectH
	GObject_t2662234644 * ____barObjectH_98;
	// FairyGUI.GObject FairyGUI.GProgressBar::_barObjectV
	GObject_t2662234644 * ____barObjectV_99;
	// System.Single FairyGUI.GProgressBar::_barMaxWidth
	float ____barMaxWidth_100;
	// System.Single FairyGUI.GProgressBar::_barMaxHeight
	float ____barMaxHeight_101;
	// System.Single FairyGUI.GProgressBar::_barMaxWidthDelta
	float ____barMaxWidthDelta_102;
	// System.Single FairyGUI.GProgressBar::_barMaxHeightDelta
	float ____barMaxHeightDelta_103;
	// System.Single FairyGUI.GProgressBar::_barStartX
	float ____barStartX_104;
	// System.Single FairyGUI.GProgressBar::_barStartY
	float ____barStartY_105;
	// DG.Tweening.Tweener FairyGUI.GProgressBar::_tweener
	Tweener_t760404022 * ____tweener_106;

public:
	inline static int32_t get_offset_of__max_92() { return static_cast<int32_t>(offsetof(GProgressBar_t3328437985, ____max_92)); }
	inline double get__max_92() const { return ____max_92; }
	inline double* get_address_of__max_92() { return &____max_92; }
	inline void set__max_92(double value)
	{
		____max_92 = value;
	}

	inline static int32_t get_offset_of__value_93() { return static_cast<int32_t>(offsetof(GProgressBar_t3328437985, ____value_93)); }
	inline double get__value_93() const { return ____value_93; }
	inline double* get_address_of__value_93() { return &____value_93; }
	inline void set__value_93(double value)
	{
		____value_93 = value;
	}

	inline static int32_t get_offset_of__titleType_94() { return static_cast<int32_t>(offsetof(GProgressBar_t3328437985, ____titleType_94)); }
	inline int32_t get__titleType_94() const { return ____titleType_94; }
	inline int32_t* get_address_of__titleType_94() { return &____titleType_94; }
	inline void set__titleType_94(int32_t value)
	{
		____titleType_94 = value;
	}

	inline static int32_t get_offset_of__reverse_95() { return static_cast<int32_t>(offsetof(GProgressBar_t3328437985, ____reverse_95)); }
	inline bool get__reverse_95() const { return ____reverse_95; }
	inline bool* get_address_of__reverse_95() { return &____reverse_95; }
	inline void set__reverse_95(bool value)
	{
		____reverse_95 = value;
	}

	inline static int32_t get_offset_of__titleObject_96() { return static_cast<int32_t>(offsetof(GProgressBar_t3328437985, ____titleObject_96)); }
	inline GTextField_t2527516740 * get__titleObject_96() const { return ____titleObject_96; }
	inline GTextField_t2527516740 ** get_address_of__titleObject_96() { return &____titleObject_96; }
	inline void set__titleObject_96(GTextField_t2527516740 * value)
	{
		____titleObject_96 = value;
		Il2CppCodeGenWriteBarrier(&____titleObject_96, value);
	}

	inline static int32_t get_offset_of__aniObject_97() { return static_cast<int32_t>(offsetof(GProgressBar_t3328437985, ____aniObject_97)); }
	inline GMovieClip_t1579917203 * get__aniObject_97() const { return ____aniObject_97; }
	inline GMovieClip_t1579917203 ** get_address_of__aniObject_97() { return &____aniObject_97; }
	inline void set__aniObject_97(GMovieClip_t1579917203 * value)
	{
		____aniObject_97 = value;
		Il2CppCodeGenWriteBarrier(&____aniObject_97, value);
	}

	inline static int32_t get_offset_of__barObjectH_98() { return static_cast<int32_t>(offsetof(GProgressBar_t3328437985, ____barObjectH_98)); }
	inline GObject_t2662234644 * get__barObjectH_98() const { return ____barObjectH_98; }
	inline GObject_t2662234644 ** get_address_of__barObjectH_98() { return &____barObjectH_98; }
	inline void set__barObjectH_98(GObject_t2662234644 * value)
	{
		____barObjectH_98 = value;
		Il2CppCodeGenWriteBarrier(&____barObjectH_98, value);
	}

	inline static int32_t get_offset_of__barObjectV_99() { return static_cast<int32_t>(offsetof(GProgressBar_t3328437985, ____barObjectV_99)); }
	inline GObject_t2662234644 * get__barObjectV_99() const { return ____barObjectV_99; }
	inline GObject_t2662234644 ** get_address_of__barObjectV_99() { return &____barObjectV_99; }
	inline void set__barObjectV_99(GObject_t2662234644 * value)
	{
		____barObjectV_99 = value;
		Il2CppCodeGenWriteBarrier(&____barObjectV_99, value);
	}

	inline static int32_t get_offset_of__barMaxWidth_100() { return static_cast<int32_t>(offsetof(GProgressBar_t3328437985, ____barMaxWidth_100)); }
	inline float get__barMaxWidth_100() const { return ____barMaxWidth_100; }
	inline float* get_address_of__barMaxWidth_100() { return &____barMaxWidth_100; }
	inline void set__barMaxWidth_100(float value)
	{
		____barMaxWidth_100 = value;
	}

	inline static int32_t get_offset_of__barMaxHeight_101() { return static_cast<int32_t>(offsetof(GProgressBar_t3328437985, ____barMaxHeight_101)); }
	inline float get__barMaxHeight_101() const { return ____barMaxHeight_101; }
	inline float* get_address_of__barMaxHeight_101() { return &____barMaxHeight_101; }
	inline void set__barMaxHeight_101(float value)
	{
		____barMaxHeight_101 = value;
	}

	inline static int32_t get_offset_of__barMaxWidthDelta_102() { return static_cast<int32_t>(offsetof(GProgressBar_t3328437985, ____barMaxWidthDelta_102)); }
	inline float get__barMaxWidthDelta_102() const { return ____barMaxWidthDelta_102; }
	inline float* get_address_of__barMaxWidthDelta_102() { return &____barMaxWidthDelta_102; }
	inline void set__barMaxWidthDelta_102(float value)
	{
		____barMaxWidthDelta_102 = value;
	}

	inline static int32_t get_offset_of__barMaxHeightDelta_103() { return static_cast<int32_t>(offsetof(GProgressBar_t3328437985, ____barMaxHeightDelta_103)); }
	inline float get__barMaxHeightDelta_103() const { return ____barMaxHeightDelta_103; }
	inline float* get_address_of__barMaxHeightDelta_103() { return &____barMaxHeightDelta_103; }
	inline void set__barMaxHeightDelta_103(float value)
	{
		____barMaxHeightDelta_103 = value;
	}

	inline static int32_t get_offset_of__barStartX_104() { return static_cast<int32_t>(offsetof(GProgressBar_t3328437985, ____barStartX_104)); }
	inline float get__barStartX_104() const { return ____barStartX_104; }
	inline float* get_address_of__barStartX_104() { return &____barStartX_104; }
	inline void set__barStartX_104(float value)
	{
		____barStartX_104 = value;
	}

	inline static int32_t get_offset_of__barStartY_105() { return static_cast<int32_t>(offsetof(GProgressBar_t3328437985, ____barStartY_105)); }
	inline float get__barStartY_105() const { return ____barStartY_105; }
	inline float* get_address_of__barStartY_105() { return &____barStartY_105; }
	inline void set__barStartY_105(float value)
	{
		____barStartY_105 = value;
	}

	inline static int32_t get_offset_of__tweener_106() { return static_cast<int32_t>(offsetof(GProgressBar_t3328437985, ____tweener_106)); }
	inline Tweener_t760404022 * get__tweener_106() const { return ____tweener_106; }
	inline Tweener_t760404022 ** get_address_of__tweener_106() { return &____tweener_106; }
	inline void set__tweener_106(Tweener_t760404022 * value)
	{
		____tweener_106 = value;
		Il2CppCodeGenWriteBarrier(&____tweener_106, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
