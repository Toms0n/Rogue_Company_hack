// Name: roguecompany, Version: 425

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x01829050
//		Name   -> Function MainEnvironmentTracker.MainEnvironmentTracker_C.BlueprintEnvironmentChanged
//		Flags  -> (Native, Event, Public)
// Parameters:
//		struct FName                                       bpp__OldEnvironment__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMainEnvironmentTracker_C::BlueprintEnvironmentChanged(const struct FName& bpp__OldEnvironment__pf)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(25086);

	UMainEnvironmentTracker_C_BlueprintEnvironmentChanged_Params params {};
	params.bpp__OldEnvironment__pf = bpp__OldEnvironment__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
