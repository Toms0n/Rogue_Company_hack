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
//		Name   -> Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.StartNextWaitingMilestoneEntry
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_WeaponMasteryMilestoneProgress_C::StartNextWaitingMilestoneEntry()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89928);

	UWBP_WeaponMasteryMilestoneProgress_C_StartNextWaitingMilestoneEntry_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.GetMilestoneEntryByActivity
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UKSActivityInstance*                         Activity_Instance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWBP_WeaponMilestoneEntry_Progression_C*     Milestone_Entry                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryMilestoneProgress_C::GetMilestoneEntryByActivity(class UKSActivityInstance* Activity_Instance, class UWBP_WeaponMilestoneEntry_Progression_C** Milestone_Entry)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89927);

	UWBP_WeaponMasteryMilestoneProgress_C_GetMilestoneEntryByActivity_Params params {};
	params.Activity_Instance = Activity_Instance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Milestone_Entry != nullptr)
		*Milestone_Entry = params.Milestone_Entry;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.GetMilestoneEntryByTier
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Milestone_Number                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWBP_WeaponMilestoneEntry_Progression_C*     Return_Value                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryMilestoneProgress_C::GetMilestoneEntryByTier(int Milestone_Number, class UWBP_WeaponMilestoneEntry_Progression_C** Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89926);

	UWBP_WeaponMasteryMilestoneProgress_C_GetMilestoneEntryByTier_Params params {};
	params.Milestone_Number = Milestone_Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.GetMilestoneEntries
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<class UWBP_WeaponMilestoneEntry_Progression_C*> Return_Value                                               (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_WeaponMasteryMilestoneProgress_C::GetMilestoneEntries(TArray<class UWBP_WeaponMilestoneEntry_Progression_C*>* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89925);

	UWBP_WeaponMasteryMilestoneProgress_C_GetMilestoneEntries_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WeaponMasteryMilestoneProgress_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89924);

	UWBP_WeaponMasteryMilestoneProgress_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryMilestoneProgress_C::BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89923);

	UWBP_WeaponMasteryMilestoneProgress_C_BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryMilestoneProgress_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89922);

	UWBP_WeaponMasteryMilestoneProgress_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.ConfigureViewModel
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UKSWeaponAsset*                              WeaponAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSWeaponAttachment*                         WeaponWrap                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryMilestoneProgress_C::ConfigureViewModel(class UKSWeaponAsset* WeaponAsset, class UKSWeaponAttachment* WeaponWrap)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89921);

	UWBP_WeaponMasteryMilestoneProgress_C_ConfigureViewModel_Params params {};
	params.WeaponAsset = WeaponAsset;
	params.WeaponWrap = WeaponWrap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.DisplayWeaponAsset
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UKSWeaponAsset*                              WeaponAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryMilestoneProgress_C::DisplayWeaponAsset(class UKSWeaponAsset* WeaponAsset)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89920);

	UWBP_WeaponMasteryMilestoneProgress_C_DisplayWeaponAsset_Params params {};
	params.WeaponAsset = WeaponAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WeaponMasteryMilestoneProgress_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89919);

	UWBP_WeaponMasteryMilestoneProgress_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.PopulateMilestoneData
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		TArray<struct FKSMilestoneCompletedSummaryEntry>   MilestonesForWeapon                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UWBP_WeaponMasteryMilestoneProgress_C::PopulateMilestoneData(TArray<struct FKSMilestoneCompletedSummaryEntry> MilestonesForWeapon)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89918);

	UWBP_WeaponMasteryMilestoneProgress_C_PopulateMilestoneData_Params params {};
	params.MilestonesForWeapon = MilestonesForWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.HandleMilestoneCompletedDuringAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                RewardCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryMilestoneProgress_C::HandleMilestoneCompletedDuringAnim(int RewardCount)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89917);

	UWBP_WeaponMasteryMilestoneProgress_C_HandleMilestoneCompletedDuringAnim_Params params {};
	params.RewardCount = RewardCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.Handle Model Set
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMasteryMilestoneProgress_C::Handle_Model_Set()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89916);

	UWBP_WeaponMasteryMilestoneProgress_C_Handle_Model_Set_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.StartAnimSequence
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMasteryMilestoneProgress_C::StartAnimSequence()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89915);

	UWBP_WeaponMasteryMilestoneProgress_C_StartAnimSequence_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.Handle Meter Level Up Complete
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMasteryMilestoneProgress_C::Handle_Meter_Level_Up_Complete()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89914);

	UWBP_WeaponMasteryMilestoneProgress_C_Handle_Meter_Level_Up_Complete_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.ExecuteUbergraph_WBP_WeaponMasteryMilestoneProgress
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryMilestoneProgress_C::ExecuteUbergraph_WBP_WeaponMasteryMilestoneProgress(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89913);

	UWBP_WeaponMasteryMilestoneProgress_C_ExecuteUbergraph_WBP_WeaponMasteryMilestoneProgress_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
