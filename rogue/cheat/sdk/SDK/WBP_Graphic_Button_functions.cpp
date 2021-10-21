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
//		Name   -> Function WBP_Graphic_Button.WBP_Graphic_Button_C.OnHoveredLogic
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsGamepad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Graphic_Button_C::OnHoveredLogic(bool IsGamepad)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71539);

	UWBP_Graphic_Button_C_OnHoveredLogic_Params params {};
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Graphic_Button.WBP_Graphic_Button_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_Graphic_Button_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71538);

	UWBP_Graphic_Button_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Graphic_Button.WBP_Graphic_Button_C.SetImage
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_Graphic_Button_C::SetImage()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71537);

	UWBP_Graphic_Button_C_SetImage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Graphic_Button.WBP_Graphic_Button_C.SetImageTint
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Graphic_Button_C::SetImageTint()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71536);

	UWBP_Graphic_Button_C_SetImageTint_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Graphic_Button.WBP_Graphic_Button_C.OnClickSound
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Graphic_Button_C::OnClickSound()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71535);

	UWBP_Graphic_Button_C_OnClickSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Graphic_Button.WBP_Graphic_Button_C.OnHoverSound
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Graphic_Button_C::OnHoverSound()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71534);

	UWBP_Graphic_Button_C_OnHoverSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Graphic_Button.WBP_Graphic_Button_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Graphic_Button_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71533);

	UWBP_Graphic_Button_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Graphic_Button.WBP_Graphic_Button_C.OnGamepadConfirmed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Graphic_Button_C::OnGamepadConfirmed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71532);

	UWBP_Graphic_Button_C_OnGamepadConfirmed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Graphic_Button.WBP_Graphic_Button_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_Graphic_Button_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71531);

	UWBP_Graphic_Button_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Graphic_Button.WBP_Graphic_Button_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_Graphic_Button_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71530);

	UWBP_Graphic_Button_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Graphic_Button.WBP_Graphic_Button_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_Graphic_Button_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71529);

	UWBP_Graphic_Button_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Graphic_Button.WBP_Graphic_Button_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_Graphic_Button_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71528);

	UWBP_Graphic_Button_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Graphic_Button.WBP_Graphic_Button_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_Graphic_Button_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71527);

	UWBP_Graphic_Button_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Graphic_Button.WBP_Graphic_Button_C.DisableButton
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bShouldDisable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Graphic_Button_C::DisableButton(bool bShouldDisable)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71526);

	UWBP_Graphic_Button_C_DisableButton_Params params {};
	params.bShouldDisable = bShouldDisable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Graphic_Button.WBP_Graphic_Button_C.CallButtonHover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Graphic_Button_C::CallButtonHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71525);

	UWBP_Graphic_Button_C_CallButtonHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Graphic_Button.WBP_Graphic_Button_C.CallButtonUnhover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Graphic_Button_C::CallButtonUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71524);

	UWBP_Graphic_Button_C_CallButtonUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Graphic_Button.WBP_Graphic_Button_C.SetIsActiveState
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bIsActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Graphic_Button_C::SetIsActiveState(bool bIsActive)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71523);

	UWBP_Graphic_Button_C_SetIsActiveState_Params params {};
	params.bIsActive = bIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Graphic_Button.WBP_Graphic_Button_C.ExecuteUbergraph_WBP_Graphic_Button
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Graphic_Button_C::ExecuteUbergraph_WBP_Graphic_Button(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71522);

	UWBP_Graphic_Button_C_ExecuteUbergraph_WBP_Graphic_Button_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Graphic_Button.WBP_Graphic_Button_C.OnGraphicBtnUnhovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_Graphic_Button_C::OnGraphicBtnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71521);

	UWBP_Graphic_Button_C_OnGraphicBtnUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Graphic_Button.WBP_Graphic_Button_C.OnGraphicBtnHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsGamepad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Graphic_Button_C::OnGraphicBtnHovered__DelegateSignature(bool IsGamepad)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71520);

	UWBP_Graphic_Button_C_OnGraphicBtnHovered__DelegateSignature_Params params {};
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Graphic_Button.WBP_Graphic_Button_C.OnGraphicBtnClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_Graphic_Button_C::OnGraphicBtnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71519);

	UWBP_Graphic_Button_C_OnGraphicBtnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
