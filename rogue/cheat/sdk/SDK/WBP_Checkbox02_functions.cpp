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
//		Name   -> Function WBP_Checkbox02.WBP_Checkbox02_C.IsChecked
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               IsChecked                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Checkbox02_C::IsChecked(bool* IsChecked)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60001);

	UWBP_Checkbox02_C_IsChecked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsChecked != nullptr)
		*IsChecked = params.IsChecked;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Checkbox02.WBP_Checkbox02_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_Checkbox02_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60000);

	UWBP_Checkbox02_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Checkbox02.WBP_Checkbox02_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_Checkbox02_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59999);

	UWBP_Checkbox02_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Checkbox02.WBP_Checkbox02_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_Checkbox02_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59998);

	UWBP_Checkbox02_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Checkbox02.WBP_Checkbox02_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_Checkbox02_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59997);

	UWBP_Checkbox02_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Checkbox02.WBP_Checkbox02_C.SetCheckedState
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Checked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Checkbox02_C::SetCheckedState(bool Checked)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59996);

	UWBP_Checkbox02_C_SetCheckedState_Params params {};
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Checkbox02.WBP_Checkbox02_C.GamepadConfirm
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Checkbox02_C::GamepadConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59995);

	UWBP_Checkbox02_C_GamepadConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Checkbox02.WBP_Checkbox02_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_Checkbox02_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59994);

	UWBP_Checkbox02_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Checkbox02.WBP_Checkbox02_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_Checkbox02_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59993);

	UWBP_Checkbox02_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Checkbox02.WBP_Checkbox02_C.ExecuteUbergraph_WBP_Checkbox02
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Checkbox02_C::ExecuteUbergraph_WBP_Checkbox02(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59992);

	UWBP_Checkbox02_C_ExecuteUbergraph_WBP_Checkbox02_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Checkbox02.WBP_Checkbox02_C.OnCheckChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Checked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Checkbox02_C::OnCheckChanged__DelegateSignature(bool Checked)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59991);

	UWBP_Checkbox02_C_OnCheckChanged__DelegateSignature_Params params {};
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
