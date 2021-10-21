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
//		Name   -> Function DebugMenuItem.DebugMenuItem_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UDebugMenuItem_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(65889);

	UDebugMenuItem_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DebugMenuItem.DebugMenuItem_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UDebugMenuItem_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(65888);

	UDebugMenuItem_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DebugMenuItem.DebugMenuItem_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UDebugMenuItem_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(65887);

	UDebugMenuItem_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DebugMenuItem.DebugMenuItem_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UDebugMenuItem_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(65886);

	UDebugMenuItem_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DebugMenuItem.DebugMenuItem_C.ExecuteUbergraph_DebugMenuItem
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugMenuItem_C::ExecuteUbergraph_DebugMenuItem(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(65885);

	UDebugMenuItem_C_ExecuteUbergraph_DebugMenuItem_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function DebugMenuItem.DebugMenuItem_C.ItemSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDebugMenuCommandInfo                       Command                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UDebugMenuItem_C::ItemSelected__DelegateSignature(const struct FDebugMenuCommandInfo& Command)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(65884);

	UDebugMenuItem_C_ItemSelected__DelegateSignature_Params params {};
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
