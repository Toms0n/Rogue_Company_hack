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
//		Name   -> Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.DisplayGamepadFocus
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShouldDisplayFocus                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RogueMasteryPanelTrack_C::DisplayGamepadFocus(bool ShouldDisplayFocus)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79288);

	UWBP_RogueMasteryPanelTrack_C_DisplayGamepadFocus_Params params {};
	params.ShouldDisplayFocus = ShouldDisplayFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.UpdateSelectedTier
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_RogueMasteryPanelTrack_C::UpdateSelectedTier()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79287);

	UWBP_RogueMasteryPanelTrack_C_UpdateSelectedTier_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.ViewPreviousMasteryLevel
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueMasteryPanelTrack_C::ViewPreviousMasteryLevel()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79286);

	UWBP_RogueMasteryPanelTrack_C_ViewPreviousMasteryLevel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.ViewNextMasteryLevel
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueMasteryPanelTrack_C::ViewNextMasteryLevel()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79285);

	UWBP_RogueMasteryPanelTrack_C_ViewNextMasteryLevel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.SetActiveSection
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                SectionIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryPanelTrack_C::SetActiveSection(int SectionIndex)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79284);

	UWBP_RogueMasteryPanelTrack_C_SetActiveSection_Params params {};
	params.SectionIndex = SectionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.UpdateSectionViewed
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueMasteryPanelTrack_C::UpdateSectionViewed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79283);

	UWBP_RogueMasteryPanelTrack_C_UpdateSectionViewed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.OnInputStateChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryPanelTrack_C::OnInputStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79282);

	UWBP_RogueMasteryPanelTrack_C_OnInputStateChanged_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.OnMasteryLevelSelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FActivityTier                               ActivityTier                                               (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_RogueMasteryPanelTrack_C::OnMasteryLevelSelected(const struct FActivityTier& ActivityTier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79281);

	UWBP_RogueMasteryPanelTrack_C_OnMasteryLevelSelected_Params params {};
	params.ActivityTier = ActivityTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.SetupPersonalProgress
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSJobItem*                                  JobItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSActivityInstance*                         ActivityInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryPanelTrack_C::SetupPersonalProgress(class UKSJobItem* JobItem, class UKSActivityInstance* ActivityInstance)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79280);

	UWBP_RogueMasteryPanelTrack_C_SetupPersonalProgress_Params params {};
	params.JobItem = JobItem;
	params.ActivityInstance = ActivityInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.SetupTrackSections
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FMasterySectionData>                 SectionData                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		int                                                CurrentTier                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryPanelTrack_C::SetupTrackSections(TArray<struct FMasterySectionData>* SectionData, int CurrentTier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79279);

	UWBP_RogueMasteryPanelTrack_C_SetupTrackSections_Params params {};
	params.CurrentTier = CurrentTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SectionData != nullptr)
		*SectionData = params.SectionData;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.SetTrackData
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSJobItem*                                  JobItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FMasterySectionData>                 SectionData                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UWBP_RogueMasteryPanelTrack_C::SetTrackData(class UKSJobItem* JobItem, TArray<struct FMasterySectionData>* SectionData)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79278);

	UWBP_RogueMasteryPanelTrack_C_SetTrackData_Params params {};
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SectionData != nullptr)
		*SectionData = params.SectionData;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_RogueMasteryPanelTrack_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79277);

	UWBP_RogueMasteryPanelTrack_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.BndEvt__ScrollRightButton_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RogueMasteryPanelTrack_C::BndEvt__ScrollRightButton_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79276);

	UWBP_RogueMasteryPanelTrack_C_BndEvt__ScrollRightButton_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.BndEvt__ScrollLeftButton_K2Node_ComponentBoundEvent_1_OnBtnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RogueMasteryPanelTrack_C::BndEvt__ScrollLeftButton_K2Node_ComponentBoundEvent_1_OnBtnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79275);

	UWBP_RogueMasteryPanelTrack_C_BndEvt__ScrollLeftButton_K2Node_ComponentBoundEvent_1_OnBtnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryPanelTrack_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79274);

	UWBP_RogueMasteryPanelTrack_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.ExecuteUbergraph_WBP_RogueMasteryPanelTrack
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueMasteryPanelTrack_C::ExecuteUbergraph_WBP_RogueMasteryPanelTrack(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79273);

	UWBP_RogueMasteryPanelTrack_C_ExecuteUbergraph_WBP_RogueMasteryPanelTrack_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.OnViewPreviousMasteryLevelFailed__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_RogueMasteryPanelTrack_C::OnViewPreviousMasteryLevelFailed__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79272);

	UWBP_RogueMasteryPanelTrack_C_OnViewPreviousMasteryLevelFailed__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.OnPrestiegeSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_RogueMasteryPanelTrack_C::OnPrestiegeSelected__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79271);

	UWBP_RogueMasteryPanelTrack_C_OnPrestiegeSelected__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueMasteryPanelTrack.WBP_RogueMasteryPanelTrack_C.OnMasteryLevelSelectedEvent__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FActivityTier                               ActivityTier                                               (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_RogueMasteryPanelTrack_C::OnMasteryLevelSelectedEvent__DelegateSignature(const struct FActivityTier& ActivityTier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79270);

	UWBP_RogueMasteryPanelTrack_C_OnMasteryLevelSelectedEvent__DelegateSignature_Params params {};
	params.ActivityTier = ActivityTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
