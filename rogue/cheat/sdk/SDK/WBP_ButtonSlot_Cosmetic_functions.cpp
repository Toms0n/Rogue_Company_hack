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
//		Name   -> Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.ShowMythicRarityFrame
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShowMythicRarityFrame                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ButtonSlot_Cosmetic_C::ShowMythicRarityFrame(bool ShowMythicRarityFrame)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59870);

	UWBP_ButtonSlot_Cosmetic_C_ShowMythicRarityFrame_Params params {};
	params.ShowMythicRarityFrame = ShowMythicRarityFrame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.SetIsLocked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsLocked                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ButtonSlot_Cosmetic_C::SetIsLocked(bool IsLocked)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59869);

	UWBP_ButtonSlot_Cosmetic_C_SetIsLocked_Params params {};
	params.IsLocked = IsLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.ReverseHoverNoZoom
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_ButtonSlot_Cosmetic_C::ReverseHoverNoZoom()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59868);

	UWBP_ButtonSlot_Cosmetic_C_ReverseHoverNoZoom_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.PlayHoverNoZoom
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_ButtonSlot_Cosmetic_C::PlayHoverNoZoom()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59867);

	UWBP_ButtonSlot_Cosmetic_C_PlayHoverNoZoom_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.RestoreDefaultColor
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWBP_ButtonSlot_Cosmetic_C::RestoreDefaultColor()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59866);

	UWBP_ButtonSlot_Cosmetic_C_RestoreDefaultColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OverrideColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                New_Base_Color                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                New_Highlight_Color                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ButtonSlot_Cosmetic_C::OverrideColor(const struct FLinearColor& New_Base_Color, const struct FLinearColor& New_Highlight_Color)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59865);

	UWBP_ButtonSlot_Cosmetic_C_OverrideColor_Params params {};
	params.New_Base_Color = New_Base_Color;
	params.New_Highlight_Color = New_Highlight_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.Set Tint
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                BaseColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                HighlightColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ButtonSlot_Cosmetic_C::Set_Tint(const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59864);

	UWBP_ButtonSlot_Cosmetic_C_Set_Tint_Params params {};
	params.BaseColor = BaseColor;
	params.HighlightColor = HighlightColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnHoveredLogic
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsGamepad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ButtonSlot_Cosmetic_C::OnHoveredLogic(bool IsGamepad)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59863);

	UWBP_ButtonSlot_Cosmetic_C_OnHoveredLogic_Params params {};
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_ButtonSlot_Cosmetic_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59862);

	UWBP_ButtonSlot_Cosmetic_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnHoverSound
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_ButtonSlot_Cosmetic_C::OnHoverSound()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59861);

	UWBP_ButtonSlot_Cosmetic_C_OnHoverSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_ButtonSlot_Cosmetic_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59860);

	UWBP_ButtonSlot_Cosmetic_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnGamepadConfirmed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_ButtonSlot_Cosmetic_C::OnGamepadConfirmed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59859);

	UWBP_ButtonSlot_Cosmetic_C_OnGamepadConfirmed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ButtonSlot_Cosmetic_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59858);

	UWBP_ButtonSlot_Cosmetic_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ButtonSlot_Cosmetic_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59857);

	UWBP_ButtonSlot_Cosmetic_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ButtonSlot_Cosmetic_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59856);

	UWBP_ButtonSlot_Cosmetic_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_ButtonSlot_Cosmetic_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59855);

	UWBP_ButtonSlot_Cosmetic_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_ButtonSlot_Cosmetic_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59854);

	UWBP_ButtonSlot_Cosmetic_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.DisableButton
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bShouldDisable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ButtonSlot_Cosmetic_C::DisableButton(bool bShouldDisable)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59853);

	UWBP_ButtonSlot_Cosmetic_C_DisableButton_Params params {};
	params.bShouldDisable = bShouldDisable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.CallButtonHover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_ButtonSlot_Cosmetic_C::CallButtonHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59852);

	UWBP_ButtonSlot_Cosmetic_C_CallButtonHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.CallButtonUnhover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_ButtonSlot_Cosmetic_C::CallButtonUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59851);

	UWBP_ButtonSlot_Cosmetic_C_CallButtonUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.SetIsActiveState
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bIsActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ButtonSlot_Cosmetic_C::SetIsActiveState(bool bIsActive)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59850);

	UWBP_ButtonSlot_Cosmetic_C_SetIsActiveState_Params params {};
	params.bIsActive = bIsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ButtonSlot_Cosmetic_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59849);

	UWBP_ButtonSlot_Cosmetic_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ButtonSlot_Cosmetic_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59848);

	UWBP_ButtonSlot_Cosmetic_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ButtonSlot_Cosmetic_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59847);

	UWBP_ButtonSlot_Cosmetic_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnClickSound
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_ButtonSlot_Cosmetic_C::OnClickSound()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59846);

	UWBP_ButtonSlot_Cosmetic_C_OnClickSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.Event Display Selected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ButtonSlot_Cosmetic_C::Event_Display_Selected(bool IsSelected)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59845);

	UWBP_ButtonSlot_Cosmetic_C_Event_Display_Selected_Params params {};
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.Event Display Equipped
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsEquipped                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ButtonSlot_Cosmetic_C::Event_Display_Equipped(bool IsEquipped)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59844);

	UWBP_ButtonSlot_Cosmetic_C_Event_Display_Equipped_Params params {};
	params.IsEquipped = IsEquipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.ExecuteUbergraph_WBP_ButtonSlot_Cosmetic
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ButtonSlot_Cosmetic_C::ExecuteUbergraph_WBP_ButtonSlot_Cosmetic(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59843);

	UWBP_ButtonSlot_Cosmetic_C_ExecuteUbergraph_WBP_ButtonSlot_Cosmetic_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnBtnUnhovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_ButtonSlot_Cosmetic_C::OnBtnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59842);

	UWBP_ButtonSlot_Cosmetic_C_OnBtnUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnBtnHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsGamepad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ButtonSlot_Cosmetic_C::OnBtnHovered__DelegateSignature(bool IsGamepad)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59841);

	UWBP_ButtonSlot_Cosmetic_C_OnBtnHovered__DelegateSignature_Params params {};
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnBtnClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_ButtonSlot_Cosmetic_C::OnBtnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59840);

	UWBP_ButtonSlot_Cosmetic_C_OnBtnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
