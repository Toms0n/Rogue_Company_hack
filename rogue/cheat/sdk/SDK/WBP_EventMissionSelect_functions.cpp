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
//		Name   -> Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.OnKeyUp
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_EventMissionSelect_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90478);

	UWBP_EventMissionSelect_C_OnKeyUp_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.OnClickedUnlockExlusiveMissions
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_EventMissionSelect_C::OnClickedUnlockExlusiveMissions()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90477);

	UWBP_EventMissionSelect_C_OnClickedUnlockExlusiveMissions_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.UpdateExlusiveMissionUnlockButton
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_EventMissionSelect_C::UpdateExlusiveMissionUnlockButton()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90476);

	UWBP_EventMissionSelect_C_UpdateExlusiveMissionUnlockButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.UpdateCreditsCount
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_EventMissionSelect_C::UpdateCreditsCount()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90475);

	UWBP_EventMissionSelect_C_UpdateCreditsCount_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_EventMissionSelect_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90474);

	UWBP_EventMissionSelect_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.UpdateActivateButtonAndPrompt
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_EventMissionSelect_C::UpdateActivateButtonAndPrompt()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90473);

	UWBP_EventMissionSelect_C_UpdateActivateButtonAndPrompt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.TryActivateFocusedMission
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               DidActivate                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_EventMissionSelect_C::TryActivateFocusedMission(bool* DidActivate)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90472);

	UWBP_EventMissionSelect_C_TryActivateFocusedMission_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DidActivate != nullptr)
		*DidActivate = params.DidActivate;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.PopulateMissions
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_EventMissionSelect_C::PopulateMissions()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90471);

	UWBP_EventMissionSelect_C_PopulateMissions_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.RefreshScene
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_EventMissionSelect_C::RefreshScene()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90470);

	UWBP_EventMissionSelect_C_RefreshScene_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.OnInputStateChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EventMissionSelect_C::OnInputStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90469);

	UWBP_EventMissionSelect_C_OnInputStateChanged_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.GetNavigationWidgets
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UWBP_EventMissionItem_C*>             Widgets                                                    (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_EventMissionSelect_C::GetNavigationWidgets(TArray<class UWBP_EventMissionItem_C*>* Widgets)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90468);

	UWBP_EventMissionSelect_C_GetNavigationWidgets_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Widgets != nullptr)
		*Widgets = params.Widgets;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_EventMissionSelect_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90467);

	UWBP_EventMissionSelect_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EventMissionSelect_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90466);

	UWBP_EventMissionSelect_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.OnBackPrompt
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_EventMissionSelect_C::OnBackPrompt()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90465);

	UWBP_EventMissionSelect_C_OnBackPrompt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_EventMissionSelect_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90464);

	UWBP_EventMissionSelect_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_EventMissionSelect_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90463);

	UWBP_EventMissionSelect_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.OnActivateButtonClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EventMissionSelect_C::OnActivateButtonClicked(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90462);

	UWBP_EventMissionSelect_C_OnActivateButtonClicked_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.OnMissionFocused
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSActivityInstance*                         ActivityInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWBP_EventMissionItem_C*                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EventMissionSelect_C::OnMissionFocused(class UKSActivityInstance* ActivityInstance, class UWBP_EventMissionItem_C* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90461);

	UWBP_EventMissionSelect_C_OnMissionFocused_Params params {};
	params.ActivityInstance = ActivityInstance;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.OnUnlockExclusiveMissionsClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EventMissionSelect_C::OnUnlockExclusiveMissionsClicked(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90460);

	UWBP_EventMissionSelect_C_OnUnlockExclusiveMissionsClicked_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EventMissionSelect.WBP_EventMissionSelect_C.ExecuteUbergraph_WBP_EventMissionSelect
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EventMissionSelect_C::ExecuteUbergraph_WBP_EventMissionSelect(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90459);

	UWBP_EventMissionSelect_C_ExecuteUbergraph_WBP_EventMissionSelect_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
