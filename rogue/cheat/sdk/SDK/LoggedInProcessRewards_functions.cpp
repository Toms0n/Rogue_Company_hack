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
//		Offset -> 0x024D5B40
//		Name   -> Function LoggedInProcessRewards.LoggedInProcessRewards_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void ULoggedInProcessRewards_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73865);

	ULoggedInProcessRewards_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function LoggedInProcessRewards.LoggedInProcessRewards_C.ExecuteUbergraph_LoggedInProcessRewards
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULoggedInProcessRewards_C::ExecuteUbergraph_LoggedInProcessRewards(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73864);

	ULoggedInProcessRewards_C_ExecuteUbergraph_LoggedInProcessRewards_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
