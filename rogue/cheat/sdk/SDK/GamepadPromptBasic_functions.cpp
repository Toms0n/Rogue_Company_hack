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
//		Name   -> Function GamepadPromptBasic.GamepadPromptBasic_C.SetPrompt
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FButtonPromptData                           Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UGamepadPromptBasic_C::SetPrompt(const struct FButtonPromptData& Data)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61263);

	UGamepadPromptBasic_C_SetPrompt_Params params {};
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function GamepadPromptBasic.GamepadPromptBasic_C.Populate
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
void UGamepadPromptBasic_C::Populate()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61262);

	UGamepadPromptBasic_C_Populate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function GamepadPromptBasic.GamepadPromptBasic_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UGamepadPromptBasic_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61261);

	UGamepadPromptBasic_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function GamepadPromptBasic.GamepadPromptBasic_C.ExecuteUbergraph_GamepadPromptBasic
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGamepadPromptBasic_C::ExecuteUbergraph_GamepadPromptBasic(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61260);

	UGamepadPromptBasic_C_ExecuteUbergraph_GamepadPromptBasic_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
