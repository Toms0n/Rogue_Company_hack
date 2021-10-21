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
//		Name   -> Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdateCancelButton
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_QueueTimer_v2_C::UpdateCancelButton()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58115);

	UWBP_QueueTimer_v2_C_UpdateCancelButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.SetNeutralLabel
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_QueueTimer_v2_C::SetNeutralLabel(const struct FText& InText)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58114);

	UWBP_QueueTimer_v2_C_SetNeutralLabel_Params params {};
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.GetColorFromPalette
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                LinearColor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QueueTimer_v2_C::GetColorFromPalette(const struct FName& RowName, struct FLinearColor* LinearColor)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58113);

	UWBP_QueueTimer_v2_C_GetColorFromPalette_Params params {};
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LinearColor != nullptr)
		*LinearColor = params.LinearColor;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdatePenaltyTime
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_QueueTimer_v2_C::UpdatePenaltyTime()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58112);

	UWBP_QueueTimer_v2_C_UpdatePenaltyTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdateStatusLabel
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_QueueTimer_v2_C::UpdateStatusLabel()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58111);

	UWBP_QueueTimer_v2_C_UpdateStatusLabel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.HandleInputStateChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QueueTimer_v2_C::HandleInputStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58110);

	UWBP_QueueTimer_v2_C_HandleInputStateChanged_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.SetGamepadCallout
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_QueueTimer_v2_C::SetGamepadCallout()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58109);

	UWBP_QueueTimer_v2_C_SetGamepadCallout_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdateQueueTime
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_QueueTimer_v2_C::UpdateQueueTime()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58108);

	UWBP_QueueTimer_v2_C_UpdateQueueTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QueueTimer_v2_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58107);

	UWBP_QueueTimer_v2_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_QueueTimer_v2_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58106);

	UWBP_QueueTimer_v2_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.CancelQueue
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_QueueTimer_v2_C::CancelQueue()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58105);

	UWBP_QueueTimer_v2_C_CancelQueue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_QueueTimer_v2_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58104);

	UWBP_QueueTimer_v2_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.InitializeWidgetButtonListeners
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_QueueTimer_v2_C::InitializeWidgetButtonListeners()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58103);

	UWBP_QueueTimer_v2_C_InitializeWidgetButtonListeners_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_QueueTimer_v2_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58102);

	UWBP_QueueTimer_v2_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_QueueTimer_v2_C::BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58101);

	UWBP_QueueTimer_v2_C_BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_QueueTimer_v2_C::BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58100);

	UWBP_QueueTimer_v2_C_BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_QueueTimer_v2_C::BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58099);

	UWBP_QueueTimer_v2_C_BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.OnUpdateQueueTime
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              TimeSecs                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QueueTimer_v2_C::OnUpdateQueueTime(float TimeSecs)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58098);

	UWBP_QueueTimer_v2_C_OnUpdateQueueTime_Params params {};
	params.TimeSecs = TimeSecs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.OnUpdateQueueTimerState
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		KillstreakUINew_EQueueTimerState                   State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QueueTimer_v2_C::OnUpdateQueueTimerState(KillstreakUINew_EQueueTimerState State)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58097);

	UWBP_QueueTimer_v2_C_OnUpdateQueueTimerState_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.OnControlQueuePermissionUpdate
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               CanControl                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_QueueTimer_v2_C::OnControlQueuePermissionUpdate(bool CanControl)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58096);

	UWBP_QueueTimer_v2_C_OnControlQueuePermissionUpdate_Params params {};
	params.CanControl = CanControl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.ExecuteUbergraph_WBP_QueueTimer_v2
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QueueTimer_v2_C::ExecuteUbergraph_WBP_QueueTimer_v2(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58095);

	UWBP_QueueTimer_v2_C_ExecuteUbergraph_WBP_QueueTimer_v2_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
