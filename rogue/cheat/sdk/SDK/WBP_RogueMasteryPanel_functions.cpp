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
//		Name   -> Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.OnInputModeChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryPanel_C::OnInputModeChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79426);

	UWBP_RogueMasteryPanel_C_OnInputModeChanged_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.EvaluateFocusDisplay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueMasteryPanel_C::EvaluateFocusDisplay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79425);

	UWBP_RogueMasteryPanel_C_EvaluateFocusDisplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.DisplayGamepadFocus
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShouldDisplayFocus                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RogueMasteryPanel_C::DisplayGamepadFocus(bool ShouldDisplayFocus)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79424);

	UWBP_RogueMasteryPanel_C_DisplayGamepadFocus_Params params {};
	params.ShouldDisplayFocus = ShouldDisplayFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.NavigateNextMasteryLevel
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPUMG_Widget*                                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryPanel_C::NavigateNextMasteryLevel(int FocusGroup, class UPUMG_Widget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79423);

	UWBP_RogueMasteryPanel_C_NavigateNextMasteryLevel_Params params {};
	params.FocusGroup = FocusGroup;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.NavigatePreviousMasteryLevel
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPUMG_Widget*                                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryPanel_C::NavigatePreviousMasteryLevel(int FocusGroup, class UPUMG_Widget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79422);

	UWBP_RogueMasteryPanel_C_NavigatePreviousMasteryLevel_Params params {};
	params.FocusGroup = FocusGroup;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.SetupInput
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWidget*                                   NavigationParent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryPanel_C::SetupInput(class UKSWidget* NavigationParent, int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79421);

	UWBP_RogueMasteryPanel_C_SetupInput_Params params {};
	params.NavigationParent = NavigationParent;
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.SetJob
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSJobItem*                                  JobItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryPanel_C::SetJob(class UKSJobItem* JobItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79420);

	UWBP_RogueMasteryPanel_C_SetJob_Params params {};
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.Display Reward
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FMasteryRewardData                          RewardItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		class UWBP_ListButton_Cosmetic_C*                  SelectedWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryPanel_C::Display_Reward(const struct FMasteryRewardData& RewardItem, class UWBP_ListButton_Cosmetic_C* SelectedWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79419);

	UWBP_RogueMasteryPanel_C_Display_Reward_Params params {};
	params.RewardItem = RewardItem;
	params.SelectedWidget = SelectedWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.SetRewardDisplayLevel
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Level                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryPanel_C::SetRewardDisplayLevel(int Level)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79418);

	UWBP_RogueMasteryPanel_C_SetRewardDisplayLevel_Params params {};
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.DisplayPrestigeLevels
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueMasteryPanel_C::DisplayPrestigeLevels()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79417);

	UWBP_RogueMasteryPanel_C_DisplayPrestigeLevels_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.DisplayMasteryLevel
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FActivityTier                               ActivityTier                                               (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_RogueMasteryPanel_C::DisplayMasteryLevel(const struct FActivityTier& ActivityTier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79416);

	UWBP_RogueMasteryPanel_C_DisplayMasteryLevel_Params params {};
	params.ActivityTier = ActivityTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_RogueMasteryPanel_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79415);

	UWBP_RogueMasteryPanel_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryPanel_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79414);

	UWBP_RogueMasteryPanel_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.OnHide
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_RogueMasteryPanel_C::OnHide()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79413);

	UWBP_RogueMasteryPanel_C_OnHide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.OnViewPreviousMasteryLevelFailed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RogueMasteryPanel_C::OnViewPreviousMasteryLevelFailed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79412);

	UWBP_RogueMasteryPanel_C_OnViewPreviousMasteryLevelFailed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.ExecuteUbergraph_WBP_RogueMasteryPanel
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryPanel_C::ExecuteUbergraph_WBP_RogueMasteryPanel(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79411);

	UWBP_RogueMasteryPanel_C_ExecuteUbergraph_WBP_RogueMasteryPanel_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanel.WBP_RogueMasteryPanel_C.OnNavLeftFailed__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_RogueMasteryPanel_C::OnNavLeftFailed__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79410);

	UWBP_RogueMasteryPanel_C_OnNavLeftFailed__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
