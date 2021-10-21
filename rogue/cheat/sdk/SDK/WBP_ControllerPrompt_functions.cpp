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
//		Name   -> Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetButtonPrompt
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWBP_ControllerPrompt_C::SetButtonPrompt(const struct FKey& Button)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55374);

	UWBP_ControllerPrompt_C_SetButtonPrompt_Params params {};
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetIsCancel
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_ControllerPrompt_C::SetIsCancel()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55373);

	UWBP_ControllerPrompt_C_SetIsCancel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetIsConfirm
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_ControllerPrompt_C::SetIsConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55372);

	UWBP_ControllerPrompt_C_SetIsConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetPromptFromButton
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWBP_ControllerPrompt_C::SetPromptFromButton(const struct FKey& Button)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55371);

	UWBP_ControllerPrompt_C_SetPromptFromButton_Params params {};
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.UpdateFromSetValues
//		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_ControllerPrompt_C::UpdateFromSetValues()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55370);

	UWBP_ControllerPrompt_C_UpdateFromSetValues_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetInputAction
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ActionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ControllerPrompt_C::SetInputAction(const struct FName& ActionName)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55369);

	UWBP_ControllerPrompt_C_SetInputAction_Params params {};
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ControllerPrompt_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55368);

	UWBP_ControllerPrompt_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_ControllerPrompt_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55367);

	UWBP_ControllerPrompt_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.ExecuteUbergraph_WBP_ControllerPrompt
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ControllerPrompt_C::ExecuteUbergraph_WBP_ControllerPrompt(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(55366);

	UWBP_ControllerPrompt_C_ExecuteUbergraph_WBP_ControllerPrompt_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
