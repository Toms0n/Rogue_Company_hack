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
//		Name   -> Function WBP_PanelInteractive.WBP_PanelInteractive_C.OnHoveredLogic
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsGamepad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PanelInteractive_C::OnHoveredLogic(bool IsGamepad)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61303);

	UWBP_PanelInteractive_C_OnHoveredLogic_Params params {};
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PanelInteractive.WBP_PanelInteractive_C.SetContentPadding
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FMargin                                     ContentPadding                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PanelInteractive_C::SetContentPadding(const struct FMargin& ContentPadding)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61302);

	UWBP_PanelInteractive_C_SetContentPadding_Params params {};
	params.ContentPadding = ContentPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PanelInteractive.WBP_PanelInteractive_C.SetPanelColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                PanelColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PanelInteractive_C::SetPanelColor(const struct FLinearColor& PanelColor)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61301);

	UWBP_PanelInteractive_C_SetPanelColor_Params params {};
	params.PanelColor = PanelColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PanelInteractive.WBP_PanelInteractive_C.OnClickSound
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PanelInteractive_C::OnClickSound()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61300);

	UWBP_PanelInteractive_C_OnClickSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PanelInteractive.WBP_PanelInteractive_C.OnHoverSound
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PanelInteractive_C::OnHoverSound()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61299);

	UWBP_PanelInteractive_C_OnHoverSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PanelInteractive.WBP_PanelInteractive_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PanelInteractive_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61298);

	UWBP_PanelInteractive_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PanelInteractive.WBP_PanelInteractive_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_PanelInteractive_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61297);

	UWBP_PanelInteractive_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PanelInteractive.WBP_PanelInteractive_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_PanelInteractive_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61296);

	UWBP_PanelInteractive_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PanelInteractive.WBP_PanelInteractive_C.OnGamepadConfirmed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PanelInteractive_C::OnGamepadConfirmed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61295);

	UWBP_PanelInteractive_C_OnGamepadConfirmed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PanelInteractive.WBP_PanelInteractive_C.CustomEvent
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PanelInteractive_C::CustomEvent()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61294);

	UWBP_PanelInteractive_C_CustomEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PanelInteractive.WBP_PanelInteractive_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_PanelInteractive_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61293);

	UWBP_PanelInteractive_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PanelInteractive.WBP_PanelInteractive_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_PanelInteractive_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61292);

	UWBP_PanelInteractive_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PanelInteractive.WBP_PanelInteractive_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_PanelInteractive_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61291);

	UWBP_PanelInteractive_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PanelInteractive.WBP_PanelInteractive_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_PanelInteractive_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61290);

	UWBP_PanelInteractive_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PanelInteractive.WBP_PanelInteractive_C.DisableButton
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bShouldDisable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PanelInteractive_C::DisableButton(bool bShouldDisable)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61289);

	UWBP_PanelInteractive_C_DisableButton_Params params {};
	params.bShouldDisable = bShouldDisable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PanelInteractive.WBP_PanelInteractive_C.CallButtonHover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PanelInteractive_C::CallButtonHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61288);

	UWBP_PanelInteractive_C_CallButtonHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PanelInteractive.WBP_PanelInteractive_C.CallButtonUnhover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PanelInteractive_C::CallButtonUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61287);

	UWBP_PanelInteractive_C_CallButtonUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PanelInteractive.WBP_PanelInteractive_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_PanelInteractive_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61286);

	UWBP_PanelInteractive_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PanelInteractive.WBP_PanelInteractive_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_PanelInteractive_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61285);

	UWBP_PanelInteractive_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PanelInteractive.WBP_PanelInteractive_C.ExecuteUbergraph_WBP_PanelInteractive
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PanelInteractive_C::ExecuteUbergraph_WBP_PanelInteractive(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61284);

	UWBP_PanelInteractive_C_ExecuteUbergraph_WBP_PanelInteractive_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PanelInteractive.WBP_PanelInteractive_C.OnBtnUnhovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_PanelInteractive_C::OnBtnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61283);

	UWBP_PanelInteractive_C_OnBtnUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PanelInteractive.WBP_PanelInteractive_C.OnBtnHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsGamepad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PanelInteractive_C::OnBtnHovered__DelegateSignature(bool IsGamepad)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61282);

	UWBP_PanelInteractive_C_OnBtnHovered__DelegateSignature_Params params {};
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PanelInteractive.WBP_PanelInteractive_C.OnBtnClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_PanelInteractive_C::OnBtnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61281);

	UWBP_PanelInteractive_C_OnBtnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
