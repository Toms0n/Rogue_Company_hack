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
//		Name   -> Function Checkbox.Checkbox_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCheckbox_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70741);

	UCheckbox_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Checkbox.Checkbox_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UCheckbox_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70740);

	UCheckbox_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Checkbox.Checkbox_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UCheckbox_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70739);

	UCheckbox_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Checkbox.Checkbox_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UCheckbox_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70738);

	UCheckbox_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Checkbox.Checkbox_C.SetCheckedState
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Checked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCheckbox_C::SetCheckedState(bool Checked)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70737);

	UCheckbox_C_SetCheckedState_Params params {};
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Checkbox.Checkbox_C.GamepadConfirm
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UCheckbox_C::GamepadConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70736);

	UCheckbox_C_GamepadConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Checkbox.Checkbox_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UCheckbox_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70735);

	UCheckbox_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Checkbox.Checkbox_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UCheckbox_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70734);

	UCheckbox_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Checkbox.Checkbox_C.ExecuteUbergraph_Checkbox
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCheckbox_C::ExecuteUbergraph_Checkbox(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70733);

	UCheckbox_C_ExecuteUbergraph_Checkbox_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function Checkbox.Checkbox_C.OnCheckChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Checked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCheckbox_C::OnCheckChanged__DelegateSignature(bool Checked)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70732);

	UCheckbox_C_OnCheckChanged__DelegateSignature_Params params {};
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
