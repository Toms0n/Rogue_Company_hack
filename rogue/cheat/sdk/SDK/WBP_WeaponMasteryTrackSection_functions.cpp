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
//		Name   -> Function WBP_WeaponMasteryTrackSection.WBP_WeaponMasteryTrackSection_C.GetTrackEntries
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<class UWBP_WeaponMasteryTrackLevel_C*>      Return_Value                                               (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_WeaponMasteryTrackSection_C::GetTrackEntries(TArray<class UWBP_WeaponMasteryTrackLevel_C*>* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(233213);

	UWBP_WeaponMasteryTrackSection_C_GetTrackEntries_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackSection.WBP_WeaponMasteryTrackSection_C.DisplayWeaponsMaster
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_WeaponMasteryTrackSection_C::DisplayWeaponsMaster()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(233212);

	UWBP_WeaponMasteryTrackSection_C_DisplayWeaponsMaster_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackSection.WBP_WeaponMasteryTrackSection_C.DisplayWeaponCategory
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWeaponCategoryAsset*                      WeaponCategory                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryTrackSection_C::DisplayWeaponCategory(class UKSWeaponCategoryAsset* WeaponCategory)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(233211);

	UWBP_WeaponMasteryTrackSection_C_DisplayWeaponCategory_Params params {};
	params.WeaponCategory = WeaponCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackSection.WBP_WeaponMasteryTrackSection_C.DisplayWeaponAsset
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWeaponAsset*                              WeaponAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryTrackSection_C::DisplayWeaponAsset(class UKSWeaponAsset* WeaponAsset)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(233210);

	UWBP_WeaponMasteryTrackSection_C_DisplayWeaponAsset_Params params {};
	params.WeaponAsset = WeaponAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackSection.WBP_WeaponMasteryTrackSection_C.Highlight Reward Tier
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FActivityTier                               Selected_Tier                                              (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_WeaponMasteryTrackSection_C::Highlight_Reward_Tier(const struct FActivityTier& Selected_Tier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(233209);

	UWBP_WeaponMasteryTrackSection_C_Highlight_Reward_Tier_Params params {};
	params.Selected_Tier = Selected_Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackSection.WBP_WeaponMasteryTrackSection_C.UpdateCurrentTier
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CurrentTier                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryTrackSection_C::UpdateCurrentTier(int CurrentTier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(233208);

	UWBP_WeaponMasteryTrackSection_C_UpdateCurrentTier_Params params {};
	params.CurrentTier = CurrentTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackSection.WBP_WeaponMasteryTrackSection_C.DisplayGamepadFocus
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShouldDisplayFocus                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_WeaponMasteryTrackSection_C::DisplayGamepadFocus(bool ShouldDisplayFocus)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(233207);

	UWBP_WeaponMasteryTrackSection_C_DisplayGamepadFocus_Params params {};
	params.ShouldDisplayFocus = ShouldDisplayFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackSection.WBP_WeaponMasteryTrackSection_C.SetSectionData
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FActivityTier>                       SectionTiers                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		float                                              SectionProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryTrackSection_C::SetSectionData(TArray<struct FActivityTier>* SectionTiers, float SectionProgress)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(233206);

	UWBP_WeaponMasteryTrackSection_C_SetSectionData_Params params {};
	params.SectionProgress = SectionProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SectionTiers != nullptr)
		*SectionTiers = params.SectionTiers;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackSection.WBP_WeaponMasteryTrackSection_C.OnMasteryLevelSelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FActivityTier                               Activity_Tier                                              (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_WeaponMasteryTrackSection_C::OnMasteryLevelSelected(const struct FActivityTier& Activity_Tier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(233205);

	UWBP_WeaponMasteryTrackSection_C_OnMasteryLevelSelected_Params params {};
	params.Activity_Tier = Activity_Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackSection.WBP_WeaponMasteryTrackSection_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_WeaponMasteryTrackSection_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(233204);

	UWBP_WeaponMasteryTrackSection_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackSection.WBP_WeaponMasteryTrackSection_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_WeaponMasteryTrackSection_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(233203);

	UWBP_WeaponMasteryTrackSection_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackSection.WBP_WeaponMasteryTrackSection_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryTrackSection_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75816);

	UWBP_WeaponMasteryTrackSection_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackSection.WBP_WeaponMasteryTrackSection_C.ExecuteUbergraph_WBP_WeaponMasteryTrackSection
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryTrackSection_C::ExecuteUbergraph_WBP_WeaponMasteryTrackSection(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75815);

	UWBP_WeaponMasteryTrackSection_C_ExecuteUbergraph_WBP_WeaponMasteryTrackSection_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrackSection.WBP_WeaponMasteryTrackSection_C.OnTrackEntrySelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FActivityTier                               ActivityTier                                               (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_WeaponMasteryTrackSection_C::OnTrackEntrySelected__DelegateSignature(const struct FActivityTier& ActivityTier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75814);

	UWBP_WeaponMasteryTrackSection_C_OnTrackEntrySelected__DelegateSignature_Params params {};
	params.ActivityTier = ActivityTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
