#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_PureMVC_Patterns_Obs1254524638.h"

// System.Collections.Generic.IList`1<System.Func`1<PureMVC.Interfaces.ICommand>>
struct IList_1_t3464857529;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PureMVC.Patterns.Command.MacroCommand
struct  MacroCommand_t2099911127  : public Notifier_t1254524638
{
public:
	// System.Collections.Generic.IList`1<System.Func`1<PureMVC.Interfaces.ICommand>> PureMVC.Patterns.Command.MacroCommand::subcommands
	Il2CppObject* ___subcommands_2;

public:
	inline static int32_t get_offset_of_subcommands_2() { return static_cast<int32_t>(offsetof(MacroCommand_t2099911127, ___subcommands_2)); }
	inline Il2CppObject* get_subcommands_2() const { return ___subcommands_2; }
	inline Il2CppObject** get_address_of_subcommands_2() { return &___subcommands_2; }
	inline void set_subcommands_2(Il2CppObject* value)
	{
		___subcommands_2 = value;
		Il2CppCodeGenWriteBarrier(&___subcommands_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
