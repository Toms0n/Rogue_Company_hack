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
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.UpdateTopQueueButton
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_QuickPlay_C::UpdateTopQueueButton()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73166);

	UWBP_QuickPlay_C_UpdateTopQueueButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.OpenRankedOverview
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_QuickPlay_C::OpenRankedOverview()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73165);

	UWBP_QuickPlay_C_OpenRankedOverview_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.PopulateRankedScreenData
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                QueueId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlay_C::PopulateRankedScreenData(int QueueId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73164);

	UWBP_QuickPlay_C_PopulateRankedScreenData_Params params {};
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.SetMapList
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FMapDetail>                          MapList                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UWBP_QuickPlay_C::SetMapList(TArray<struct FMapDetail>* MapList)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73163);

	UWBP_QuickPlay_C_SetMapList_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MapList != nullptr)
		*MapList = params.MapList;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_QuickPlay_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73162);

	UWBP_QuickPlay_C_OnKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.OnKeyUp
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_QuickPlay_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73161);

	UWBP_QuickPlay_C_OnKeyUp_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.UpdateWarning
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FClientQueueInfo                            ClientQueueInfo                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_QuickPlay_C::UpdateWarning(const struct FClientQueueInfo& ClientQueueInfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73160);

	UWBP_QuickPlay_C_UpdateWarning_Params params {};
	params.ClientQueueInfo = ClientQueueInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.SetMapRotation
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FUIMapInfo>                          MapRotations                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UWBP_QuickPlay_C::SetMapRotation(TArray<struct FUIMapInfo>* MapRotations)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73159);

	UWBP_QuickPlay_C_SetMapRotation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MapRotations != nullptr)
		*MapRotations = params.MapRotations;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.SetTouchActiveState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FClientQueueInfo                            QueueInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_QuickPlay_C::SetTouchActiveState(const struct FClientQueueInfo& QueueInfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73158);

	UWBP_QuickPlay_C_SetTouchActiveState_Params params {};
	params.QueueInfo = QueueInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.SetQueueButtonNavigation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_QuickPlay_C::SetQueueButtonNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73157);

	UWBP_QuickPlay_C_SetQueueButtonNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.GoToQueueScreen
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_QuickPlay_C::GoToQueueScreen()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73156);

	UWBP_QuickPlay_C_GoToQueueScreen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.ResetDetails
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_QuickPlay_C::ResetDetails()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73155);

	UWBP_QuickPlay_C_ResetDetails_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.UpdateDetails
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FClientQueueInfo                            QueueButton                                                (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_QuickPlay_C::UpdateDetails(const struct FClientQueueInfo& QueueButton)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73154);

	UWBP_QuickPlay_C_UpdateDetails_Params params {};
	params.QueueButton = QueueButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.ReconcileGameModeButtonEnabling
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_QuickPlay_C::ReconcileGameModeButtonEnabling()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73153);

	UWBP_QuickPlay_C_ReconcileGameModeButtonEnabling_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_QuickPlay_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73152);

	UWBP_QuickPlay_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.HandleInputModeChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlay_C::HandleInputModeChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputMode)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73151);

	UWBP_QuickPlay_C_HandleInputModeChanged_Params params {};
	params.InputMode = InputMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.SetDefaultFocusForQueues
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_QuickPlay_C::SetDefaultFocusForQueues()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73150);

	UWBP_QuickPlay_C_SetDefaultFocusForQueues_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.ResetQueueSelection
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_QuickPlay_C::ResetQueueSelection()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73149);

	UWBP_QuickPlay_C_ResetQueueSelection_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.SetupQueueButtons
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_QuickPlay_C::SetupQueueButtons()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73148);

	UWBP_QuickPlay_C_SetupQueueButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.StartHideAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_QuickPlay_C::StartHideAnim()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73147);

	UWBP_QuickPlay_C_StartHideAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.InitializeTickAnimations
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_QuickPlay_C::InitializeTickAnimations()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73146);

	UWBP_QuickPlay_C_InitializeTickAnimations_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.InitHideAnimation
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_QuickPlay_C::InitHideAnimation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73145);

	UWBP_QuickPlay_C_InitHideAnimation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.ShowQueueTitleFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_QuickPlay_C::ShowQueueTitleFinished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73144);

	UWBP_QuickPlay_C_ShowQueueTitleFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.ShowQueueTitleAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ElapsedAlpha                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlay_C::ShowQueueTitleAnim(float ElapsedTime, float ElapsedAlpha)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73143);

	UWBP_QuickPlay_C_ShowQueueTitleAnim_Params params {};
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.HideQueueTitleFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_QuickPlay_C::HideQueueTitleFinished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73142);

	UWBP_QuickPlay_C_HideQueueTitleFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.HideQueueTitleAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ElapsedAlpha                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlay_C::HideQueueTitleAnim(float ElapsedTime, float ElapsedAlpha)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73141);

	UWBP_QuickPlay_C_HideQueueTitleAnim_Params params {};
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.ShowQueueSelectionFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_QuickPlay_C::ShowQueueSelectionFinished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73140);

	UWBP_QuickPlay_C_ShowQueueSelectionFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.ShowQueueSelectionAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ElapsedAlpha                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlay_C::ShowQueueSelectionAnim(float ElapsedTime, float ElapsedAlpha)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73139);

	UWBP_QuickPlay_C_ShowQueueSelectionAnim_Params params {};
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.HideQueueSelectionFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_QuickPlay_C::HideQueueSelectionFinished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73138);

	UWBP_QuickPlay_C_HideQueueSelectionFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.HideQueueSelectionAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ElapsedAlpha                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlay_C::HideQueueSelectionAnim(float ElapsedTime, float ElapsedAlpha)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73137);

	UWBP_QuickPlay_C_HideQueueSelectionAnim_Params params {};
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlay_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73136);

	UWBP_QuickPlay_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.HandleGameModeSelected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                QueueId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlay_C::HandleGameModeSelected(int QueueId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73135);

	UWBP_QuickPlay_C_HandleGameModeSelected_Params params {};
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.HandleGameModeHovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlay_C::HandleGameModeHovered(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73134);

	UWBP_QuickPlay_C_HandleGameModeHovered_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.HandleGameModeUnhovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlay_C::HandleGameModeUnhovered(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73133);

	UWBP_QuickPlay_C_HandleGameModeUnhovered_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_QuickPlay_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73132);

	UWBP_QuickPlay_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.GoToLastScreen
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_QuickPlay_C::GoToLastScreen()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73131);

	UWBP_QuickPlay_C_GoToLastScreen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.StartShowSequence
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FName                                       FromRoute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       ToRoute                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlay_C::StartShowSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73130);

	UWBP_QuickPlay_C_StartShowSequence_Params params {};
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.StartHideSequence
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FName                                       FromRoute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       ToRoute                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlay_C::StartHideSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73129);

	UWBP_QuickPlay_C_StartHideSequence_Params params {};
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.OnControlQueuePermissionChanged
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               CanControl                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_QuickPlay_C::OnControlQueuePermissionChanged(bool CanControl)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73128);

	UWBP_QuickPlay_C_OnControlQueuePermissionChanged_Params params {};
	params.CanControl = CanControl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.OnQueuePermissionChanged
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               CanQueue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_QuickPlay_C::OnQueuePermissionChanged(bool CanQueue)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73127);

	UWBP_QuickPlay_C_OnQueuePermissionChanged_Params params {};
	params.CanQueue = CanQueue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_BackButtonClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_QuickPlay_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_BackButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73126);

	UWBP_QuickPlay_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_BackButtonClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_QuickPlay_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73125);

	UWBP_QuickPlay_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.OnHide
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_QuickPlay_C::OnHide()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73124);

	UWBP_QuickPlay_C_OnHide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.StartShowAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_QuickPlay_C::StartShowAnim()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73123);

	UWBP_QuickPlay_C_StartShowAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.OnBackButtonClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_QuickPlay_C::OnBackButtonClicked()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73122);

	UWBP_QuickPlay_C_OnBackButtonClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.HandleRegionSelectRequested
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_QuickPlay_C::HandleRegionSelectRequested()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73121);

	UWBP_QuickPlay_C_HandleRegionSelectRequested_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.OnRegionSelected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_QuickPlay_C::OnRegionSelected()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73120);

	UWBP_QuickPlay_C_OnRegionSelected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.OnRegionSelectEntriesCreated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_QuickPlay_C::OnRegionSelectEntriesCreated()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73119);

	UWBP_QuickPlay_C_OnRegionSelectEntriesCreated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.SwitchFocusGroupToScreen
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     ScreenToSwitch                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlay_C::SwitchFocusGroupToScreen(class UWidget* ScreenToSwitch)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73118);

	UWBP_QuickPlay_C_SwitchFocusGroupToScreen_Params params {};
	params.ScreenToSwitch = ScreenToSwitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.HandleOnQueueSectionPopulated
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UWBP_QuickPlay_QueueButton_C*>        QueueButtons                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_QuickPlay_C::HandleOnQueueSectionPopulated(TArray<class UWBP_QuickPlay_QueueButton_C*> QueueButtons)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73117);

	UWBP_QuickPlay_C_HandleOnQueueSectionPopulated_Params params {};
	params.QueueButtons = QueueButtons;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.BndEvt__MobileSelectQueueBtn_K2Node_ComponentBoundEvent_1_OnGraphicBtnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_QuickPlay_C::BndEvt__MobileSelectQueueBtn_K2Node_ComponentBoundEvent_1_OnGraphicBtnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73116);

	UWBP_QuickPlay_C_BndEvt__MobileSelectQueueBtn_K2Node_ComponentBoundEvent_1_OnGraphicBtnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_QuickPlay_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73115);

	UWBP_QuickPlay_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_QuickPlay_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73114);

	UWBP_QuickPlay_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.HandleQueueErrorStateChange
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_QuickPlay_C::HandleQueueErrorStateChange()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73113);

	UWBP_QuickPlay_C_HandleQueueErrorStateChange_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.CreateCustomMatch
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_QuickPlay_C::CreateCustomMatch()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73112);

	UWBP_QuickPlay_C_CreateCustomMatch_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.HandleOnCustomSectionPopulated
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UKSWidget*>                           Buttons                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_QuickPlay_C::HandleOnCustomSectionPopulated(TArray<class UKSWidget*> Buttons)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73111);

	UWBP_QuickPlay_C_HandleOnCustomSectionPopulated_Params params {};
	params.Buttons = Buttons;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.HandleMapScrollChange
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_QuickPlay_C::HandleMapScrollChange()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73110);

	UWBP_QuickPlay_C_HandleMapScrollChange_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73109);

	UWBP_QuickPlay_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.BndEvt__RankedInfoButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlay_C::BndEvt__RankedInfoButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73108);

	UWBP_QuickPlay_C_BndEvt__RankedInfoButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_QuickPlay.WBP_QuickPlay_C.ExecuteUbergraph_WBP_QuickPlay
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_QuickPlay_C::ExecuteUbergraph_WBP_QuickPlay(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73107);

	UWBP_QuickPlay_C_ExecuteUbergraph_WBP_QuickPlay_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
