#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UpdatesProxy/MemoryVersion/Entry
struct Entry_t1644304703;
// ResourceManager/LoadCompleteCallback
struct LoadCompleteCallback_t3887379968;
// ResourceManager/LoadErrorCallback
struct LoadErrorCallback_t1969330919;
// ResourceManager/SaveToDiskCallback
struct SaveToDiskCallback_t1360640706;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResourceManager/LoadItem
struct  LoadItem_t3921314831  : public Il2CppObject
{
public:
	// UpdatesProxy/MemoryVersion/Entry ResourceManager/LoadItem::entry
	Entry_t1644304703 * ___entry_0;
	// ResourceManager/LoadCompleteCallback ResourceManager/LoadItem::onSuccess
	LoadCompleteCallback_t3887379968 * ___onSuccess_1;
	// ResourceManager/LoadErrorCallback ResourceManager/LoadItem::onFail
	LoadErrorCallback_t1969330919 * ___onFail_2;
	// ResourceManager/SaveToDiskCallback ResourceManager/LoadItem::onSave
	SaveToDiskCallback_t1360640706 * ___onSave_3;

public:
	inline static int32_t get_offset_of_entry_0() { return static_cast<int32_t>(offsetof(LoadItem_t3921314831, ___entry_0)); }
	inline Entry_t1644304703 * get_entry_0() const { return ___entry_0; }
	inline Entry_t1644304703 ** get_address_of_entry_0() { return &___entry_0; }
	inline void set_entry_0(Entry_t1644304703 * value)
	{
		___entry_0 = value;
		Il2CppCodeGenWriteBarrier(&___entry_0, value);
	}

	inline static int32_t get_offset_of_onSuccess_1() { return static_cast<int32_t>(offsetof(LoadItem_t3921314831, ___onSuccess_1)); }
	inline LoadCompleteCallback_t3887379968 * get_onSuccess_1() const { return ___onSuccess_1; }
	inline LoadCompleteCallback_t3887379968 ** get_address_of_onSuccess_1() { return &___onSuccess_1; }
	inline void set_onSuccess_1(LoadCompleteCallback_t3887379968 * value)
	{
		___onSuccess_1 = value;
		Il2CppCodeGenWriteBarrier(&___onSuccess_1, value);
	}

	inline static int32_t get_offset_of_onFail_2() { return static_cast<int32_t>(offsetof(LoadItem_t3921314831, ___onFail_2)); }
	inline LoadErrorCallback_t1969330919 * get_onFail_2() const { return ___onFail_2; }
	inline LoadErrorCallback_t1969330919 ** get_address_of_onFail_2() { return &___onFail_2; }
	inline void set_onFail_2(LoadErrorCallback_t1969330919 * value)
	{
		___onFail_2 = value;
		Il2CppCodeGenWriteBarrier(&___onFail_2, value);
	}

	inline static int32_t get_offset_of_onSave_3() { return static_cast<int32_t>(offsetof(LoadItem_t3921314831, ___onSave_3)); }
	inline SaveToDiskCallback_t1360640706 * get_onSave_3() const { return ___onSave_3; }
	inline SaveToDiskCallback_t1360640706 ** get_address_of_onSave_3() { return &___onSave_3; }
	inline void set_onSave_3(SaveToDiskCallback_t1360640706 * value)
	{
		___onSave_3 = value;
		Il2CppCodeGenWriteBarrier(&___onSave_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
