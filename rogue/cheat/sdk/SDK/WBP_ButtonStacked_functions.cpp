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
//		Name   -> Function WBP_ButtonStacked.WBP_ButtonStacked_C.SetVisuallyDisabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShouldDisable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ButtonStacked_C::SetVisuallyDisabled(bool ShouldDisable)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72354);

	UWBP_ButtonStacked_C_SetVisuallyDisabled_Params params {};
	params.ShouldDisable = ShouldDisable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonStacked.WBP_ButtonStacked_C.SetInitialDisplay
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_ButtonStacked_C::SetInitialDisplay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72353);

	UWBP_ButtonStacked_C_SetInitialDisplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnHoveredLogic
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsGamepad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ButtonStacked_C::OnHoveredLogic(bool IsGamepad)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72352);

	UWBP_ButtonStacked_C_OnHoveredLogic_Params params {};
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonStacked.WBP_ButtonStacked_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_ButtonStacked_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72351);

	UWBP_ButtonStacked_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnClickSound
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_ButtonStacked_C::OnClickSound()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72350);

	UWBP_ButtonStacked_C_OnClickSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnHoverSound
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_ButtonStacked_C::OnHoverSound()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72349);

	UWBP_ButtonStacked_C_OnHoverSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonStacked.WBP_ButtonStacked_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_ButtonStacked_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72348);

	UWBP_ButtonStacked_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnGamepadConfirmed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_ButtonStacked_C::OnGamepadConfirmed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72347);

	UWBP_ButtonStacked_C_OnGamepadConfirmed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ButtonStacked_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72346);

	UWBP_ButtonStacked_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ButtonStacked_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72345);

	UWBP_ButtonStacked_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ButtonStacked_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72344);

	UWBP_ButtonStacked_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonStacked.WBP_ButtonStacked_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_ButtonStacked_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72343);

	UWBP_ButtonStacked_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonStacked.WBP_ButtonStacked_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_ButtonStacked_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72342);

	UWBP_ButtonStacked_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonStacked.WBP_ButtonStacked_C.DisableButton
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bShouldDisable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ButtonStacked_C::DisableButton(bool bShouldDisable)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72341);

	UWBP_ButtonStacked_C_DisableButton_Params params {};
	params.bShouldDisable = bShouldDisable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonStacked.WBP_ButtonStacked_C.CallButtonHover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_ButtonStacked_C::CallButtonHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72340);

	UWBP_ButtonStacked_C_CallButtonHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonStacked.WBP_ButtonStacked_C.CallButtonUnhover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_ButtonStacked_C::CallButtonUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72339);

	UWBP_ButtonStacked_C_CallButtonUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonStacked.WBP_ButtonStacked_C.SetIsActiveState
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bIsActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ButtonStacked_C::SetIsActiveState(bool bIsActive)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72338);

	UWBP_ButtonStacked_C_SetIsActiveState_Params params {};
	params.bIsActive = bIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonStacked.WBP_ButtonStacked_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ButtonStacked_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72337);

	UWBP_ButtonStacked_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ButtonStacked_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72336);

	UWBP_ButtonStacked_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ButtonStacked_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72335);

	UWBP_ButtonStacked_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonStacked.WBP_ButtonStacked_C.ExecuteUbergraph_WBP_ButtonStacked
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ButtonStacked_C::ExecuteUbergraph_WBP_ButtonStacked(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72334);

	UWBP_ButtonStacked_C_ExecuteUbergraph_WBP_ButtonStacked_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnBtnStackedReleased__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_ButtonStacked_C::OnBtnStackedReleased__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72333);

	UWBP_ButtonStacked_C_OnBtnStackedReleased__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnBtnStackedUnhovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_ButtonStacked_C::OnBtnStackedUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72332);

	UWBP_ButtonStacked_C_OnBtnStackedUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnBtnStackedHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsGamepad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ButtonStacked_C::OnBtnStackedHovered__DelegateSignature(bool IsGamepad)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72331);

	UWBP_ButtonStacked_C_OnBtnStackedHovered__DelegateSignature_Params params {};
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnBtnStackedClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_ButtonStacked_C::OnBtnStackedClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72330);

	UWBP_ButtonStacked_C_OnBtnStackedClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
