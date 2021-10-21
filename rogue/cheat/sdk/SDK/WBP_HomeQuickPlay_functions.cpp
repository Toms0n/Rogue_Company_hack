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
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.GetDeserterStatusMessage
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       OutDisplayText                                             (Parm, OutParm)
void UWBP_HomeQuickPlay_C::GetDeserterStatusMessage(struct FText* OutDisplayText)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82023);

	UWBP_HomeQuickPlay_C_GetDeserterStatusMessage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutDisplayText != nullptr)
		*OutDisplayText = params.OutDisplayText;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.Apply Pending Display
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_HomeQuickPlay_C::Apply_Pending_Display()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82022);

	UWBP_HomeQuickPlay_C_Apply_Pending_Display_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceVisualState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_HomeQuickPlay_C::ForceVisualState()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82021);

	UWBP_HomeQuickPlay_C_ForceVisualState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.UpdateQueueTimer
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_HomeQuickPlay_C::UpdateQueueTimer()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82020);

	UWBP_HomeQuickPlay_C_UpdateQueueTimer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.UpdateStatusModeDisplay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_HomeQuickPlay_C::UpdateStatusModeDisplay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82019);

	UWBP_HomeQuickPlay_C_UpdateStatusModeDisplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.UpdateDeserterCountdown
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_HomeQuickPlay_C::UpdateDeserterCountdown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82018);

	UWBP_HomeQuickPlay_C_UpdateDeserterCountdown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.HandleQuickPlayStateUpdate
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_HomeQuickPlay_C::HandleQuickPlayStateUpdate()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82017);

	UWBP_HomeQuickPlay_C_HandleQuickPlayStateUpdate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.TogglePlayBtnEnabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InIsEnabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_HomeQuickPlay_C::TogglePlayBtnEnabled(bool InIsEnabled)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82016);

	UWBP_HomeQuickPlay_C_TogglePlayBtnEnabled_Params params {};
	params.InIsEnabled = InIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ToggleSupplementaryBtnEnabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InIsEnabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_HomeQuickPlay_C::ToggleSupplementaryBtnEnabled(bool InIsEnabled)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82015);

	UWBP_HomeQuickPlay_C_ToggleSupplementaryBtnEnabled_Params params {};
	params.InIsEnabled = InIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ApplyKeyShortcutsEnabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_HomeQuickPlay_C::ApplyKeyShortcutsEnabled()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82014);

	UWBP_HomeQuickPlay_C_ApplyKeyShortcutsEnabled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.GetNavigationWidgets
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UPUMG_Widget*>                        Return_Value                                               (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_HomeQuickPlay_C::GetNavigationWidgets(TArray<class UPUMG_Widget*>* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82013);

	UWBP_HomeQuickPlay_C_GetNavigationWidgets_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.HandleInputModeChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HomeQuickPlay_C::HandleInputModeChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputMode)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82012);

	UWBP_HomeQuickPlay_C_HandleInputModeChanged_Params params {};
	params.InputMode = InputMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.SetCurrentGameModeTextDisplay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_HomeQuickPlay_C::SetCurrentGameModeTextDisplay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82011);

	UWBP_HomeQuickPlay_C_SetCurrentGameModeTextDisplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.SetupGamepadCallout
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_HomeQuickPlay_C::SetupGamepadCallout()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82010);

	UWBP_HomeQuickPlay_C_SetupGamepadCallout_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceClickPlayButton
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HomeQuickPlay_C::ForceClickPlayButton()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82009);

	UWBP_HomeQuickPlay_C_ForceClickPlayButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_HomeQuickPlay_C::BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82008);

	UWBP_HomeQuickPlay_C_BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_HomeQuickPlay_C::BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82007);

	UWBP_HomeQuickPlay_C_BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceClickSupplementaryButton
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HomeQuickPlay_C::ForceClickSupplementaryButton()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82006);

	UWBP_HomeQuickPlay_C_ForceClickSupplementaryButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HomeQuickPlay_C::BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82005);

	UWBP_HomeQuickPlay_C_BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HomeQuickPlay_C::BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82004);

	UWBP_HomeQuickPlay_C_BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HomeQuickPlay_C::BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82003);

	UWBP_HomeQuickPlay_C_BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HomeQuickPlay_C::BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82002);

	UWBP_HomeQuickPlay_C_BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceUnhoverSupplementaryBtn
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HomeQuickPlay_C::ForceUnhoverSupplementaryBtn()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82001);

	UWBP_HomeQuickPlay_C_ForceUnhoverSupplementaryBtn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceHoverSupplementaryBtn
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HomeQuickPlay_C::ForceHoverSupplementaryBtn()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82000);

	UWBP_HomeQuickPlay_C_ForceHoverSupplementaryBtn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnUpdateQuickPlayState
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		KillstreakUINew_EQuickPlayQueueState               QueueState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HomeQuickPlay_C::OnUpdateQuickPlayState(KillstreakUINew_EQuickPlayQueueState QueueState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81999);

	UWBP_HomeQuickPlay_C_OnUpdateQuickPlayState_Params params {};
	params.QueueState = QueueState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnUpdatePenaltyTimeLeft
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		int                                                TimeLeft                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HomeQuickPlay_C::OnUpdatePenaltyTimeLeft(int TimeLeft)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81998);

	UWBP_HomeQuickPlay_C_OnUpdatePenaltyTimeLeft_Params params {};
	params.TimeLeft = TimeLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnSelectedQueueUpdate
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		struct FClientQueueInfo                            CurrentSelectedQueue                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_HomeQuickPlay_C::OnSelectedQueueUpdate(const struct FClientQueueInfo& CurrentSelectedQueue)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81997);

	UWBP_HomeQuickPlay_C_OnSelectedQueueUpdate_Params params {};
	params.CurrentSelectedQueue = CurrentSelectedQueue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnQueueStateUpdate
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		PlatformUMG_EPUMG_MatchStatus                      CurrentMatchStatus                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HomeQuickPlay_C::OnQueueStateUpdate(PlatformUMG_EPUMG_MatchStatus CurrentMatchStatus)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81996);

	UWBP_HomeQuickPlay_C_OnQueueStateUpdate_Params params {};
	params.CurrentMatchStatus = CurrentMatchStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnTransitionAnimationFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HomeQuickPlay_C::OnTransitionAnimationFinished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81995);

	UWBP_HomeQuickPlay_C_OnTransitionAnimationFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.HandleTriggerStatusModeEvent
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HomeQuickPlay_C::HandleTriggerStatusModeEvent()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81994);

	UWBP_HomeQuickPlay_C_HandleTriggerStatusModeEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnUpdateQueueTimeElapsed
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		float                                              TimeElapsed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HomeQuickPlay_C::OnUpdateQueueTimeElapsed(float TimeElapsed)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81993);

	UWBP_HomeQuickPlay_C_OnUpdateQueueTimeElapsed_Params params {};
	params.TimeElapsed = TimeElapsed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.Pending Queue Update Timeout
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HomeQuickPlay_C::Pending_Queue_Update_Timeout()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81992);

	UWBP_HomeQuickPlay_C_Pending_Queue_Update_Timeout_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_HomeQuickPlay_C::OnInitialized()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81991);

	UWBP_HomeQuickPlay_C_OnInitialized_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.HandleCustomQueueUpdate
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HomeQuickPlay_C::HandleCustomQueueUpdate()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81990);

	UWBP_HomeQuickPlay_C_HandleCustomQueueUpdate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_HomeQuickPlay_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81989);

	UWBP_HomeQuickPlay_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ExecuteUbergraph_WBP_HomeQuickPlay
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HomeQuickPlay_C::ExecuteUbergraph_WBP_HomeQuickPlay(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81988);

	UWBP_HomeQuickPlay_C_ExecuteUbergraph_WBP_HomeQuickPlay_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.TriggerStatusModeDisplayUpdate__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_HomeQuickPlay_C::TriggerStatusModeDisplayUpdate__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81987);

	UWBP_HomeQuickPlay_C_TriggerStatusModeDisplayUpdate__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
