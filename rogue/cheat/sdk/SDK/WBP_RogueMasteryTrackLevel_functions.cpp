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
//		Name   -> Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.DisplayGamepadFocus
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShouldDisplayFocus                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RogueMasteryTrackLevel_C::DisplayGamepadFocus(bool ShouldDisplayFocus)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79185);

	UWBP_RogueMasteryTrackLevel_C_DisplayGamepadFocus_Params params {};
	params.ShouldDisplayFocus = ShouldDisplayFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.HideEdgeNavCallouts
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                TierNumber                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryTrackLevel_C::HideEdgeNavCallouts(int TierNumber)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79184);

	UWBP_RogueMasteryTrackLevel_C_HideEdgeNavCallouts_Params params {};
	params.TierNumber = TierNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.SetSelected
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RogueMasteryTrackLevel_C::SetSelected(bool Selected)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79183);

	UWBP_RogueMasteryTrackLevel_C_SetSelected_Params params {};
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.UpdateGamepadPromptState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueMasteryTrackLevel_C::UpdateGamepadPromptState()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79182);

	UWBP_RogueMasteryTrackLevel_C_UpdateGamepadPromptState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.OnInputStateChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryTrackLevel_C::OnInputStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79181);

	UWBP_RogueMasteryTrackLevel_C_OnInputStateChanged_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.Set Tier Data
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FActivityTier                               ActivityTier                                               (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                CurrentTier                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryTrackLevel_C::Set_Tier_Data(const struct FActivityTier& ActivityTier, int CurrentTier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79180);

	UWBP_RogueMasteryTrackLevel_C_Set_Tier_Data_Params params {};
	params.ActivityTier = ActivityTier;
	params.CurrentTier = CurrentTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_RogueMasteryTrackLevel_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79179);

	UWBP_RogueMasteryTrackLevel_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.BndEvt__Button_339_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RogueMasteryTrackLevel_C::BndEvt__Button_339_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79178);

	UWBP_RogueMasteryTrackLevel_C_BndEvt__Button_339_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.BndEvt__Button_339_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RogueMasteryTrackLevel_C::BndEvt__Button_339_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79177);

	UWBP_RogueMasteryTrackLevel_C_BndEvt__Button_339_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.BndEvt__Button_339_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RogueMasteryTrackLevel_C::BndEvt__Button_339_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79176);

	UWBP_RogueMasteryTrackLevel_C_BndEvt__Button_339_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_RogueMasteryTrackLevel_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79175);

	UWBP_RogueMasteryTrackLevel_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_RogueMasteryTrackLevel_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79174);

	UWBP_RogueMasteryTrackLevel_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryTrackLevel_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79173);

	UWBP_RogueMasteryTrackLevel_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.ExecuteUbergraph_WBP_RogueMasteryTrackLevel
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryTrackLevel_C::ExecuteUbergraph_WBP_RogueMasteryTrackLevel(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79172);

	UWBP_RogueMasteryTrackLevel_C_ExecuteUbergraph_WBP_RogueMasteryTrackLevel_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.OnTrackLevelSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FActivityTier                               Activity                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_RogueMasteryTrackLevel_C::OnTrackLevelSelected__DelegateSignature(const struct FActivityTier& Activity)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79171);

	UWBP_RogueMasteryTrackLevel_C_OnTrackLevelSelected__DelegateSignature_Params params {};
	params.Activity = Activity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
