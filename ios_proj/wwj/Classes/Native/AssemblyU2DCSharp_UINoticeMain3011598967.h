#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_UIMain658973805.h"

// UITopup
struct UITopup_t719491996;
// FairyGUI.GList
struct GList_t2527012171;
// System.Collections.Generic.List`1<NewsProxy/NewsItem>
struct List_1_t4007198658;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UINoticeMain
struct  UINoticeMain_t3011598967  : public UIMain_t658973805
{
public:
	// UITopup UINoticeMain::_uiTopup
	UITopup_t719491996 * ____uiTopup_7;
	// System.Int32 UINoticeMain::expend_index
	int32_t ___expend_index_8;
	// FairyGUI.GList UINoticeMain::list
	GList_t2527012171 * ___list_9;
	// System.Collections.Generic.List`1<NewsProxy/NewsItem> UINoticeMain::newsList
	List_1_t4007198658 * ___newsList_10;

public:
	inline static int32_t get_offset_of__uiTopup_7() { return static_cast<int32_t>(offsetof(UINoticeMain_t3011598967, ____uiTopup_7)); }
	inline UITopup_t719491996 * get__uiTopup_7() const { return ____uiTopup_7; }
	inline UITopup_t719491996 ** get_address_of__uiTopup_7() { return &____uiTopup_7; }
	inline void set__uiTopup_7(UITopup_t719491996 * value)
	{
		____uiTopup_7 = value;
		Il2CppCodeGenWriteBarrier(&____uiTopup_7, value);
	}

	inline static int32_t get_offset_of_expend_index_8() { return static_cast<int32_t>(offsetof(UINoticeMain_t3011598967, ___expend_index_8)); }
	inline int32_t get_expend_index_8() const { return ___expend_index_8; }
	inline int32_t* get_address_of_expend_index_8() { return &___expend_index_8; }
	inline void set_expend_index_8(int32_t value)
	{
		___expend_index_8 = value;
	}

	inline static int32_t get_offset_of_list_9() { return static_cast<int32_t>(offsetof(UINoticeMain_t3011598967, ___list_9)); }
	inline GList_t2527012171 * get_list_9() const { return ___list_9; }
	inline GList_t2527012171 ** get_address_of_list_9() { return &___list_9; }
	inline void set_list_9(GList_t2527012171 * value)
	{
		___list_9 = value;
		Il2CppCodeGenWriteBarrier(&___list_9, value);
	}

	inline static int32_t get_offset_of_newsList_10() { return static_cast<int32_t>(offsetof(UINoticeMain_t3011598967, ___newsList_10)); }
	inline List_1_t4007198658 * get_newsList_10() const { return ___newsList_10; }
	inline List_1_t4007198658 ** get_address_of_newsList_10() { return &___newsList_10; }
	inline void set_newsList_10(List_1_t4007198658 * value)
	{
		___newsList_10 = value;
		Il2CppCodeGenWriteBarrier(&___newsList_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
