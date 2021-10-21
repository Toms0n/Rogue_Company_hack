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
//		Name   -> Function WBP_WeaponMasteryTrack.WBP_WeaponMasteryTrack_C.Display Weapons Master
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMasteryTrack_C::Display_Weapons_Master()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75871);

	UWBP_WeaponMasteryTrack_C_Display_Weapons_Master_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrack.WBP_WeaponMasteryTrack_C.Display Weapon Asset
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWeaponAsset*                              WeaponAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryTrack_C::Display_Weapon_Asset(class UKSWeaponAsset* WeaponAsset)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75870);

	UWBP_WeaponMasteryTrack_C_Display_Weapon_Asset_Params params {};
	params.WeaponAsset = WeaponAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrack.WBP_WeaponMasteryTrack_C.Display Weapon Category
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWeaponCategoryAsset*                      WeaponCategory                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryTrack_C::Display_Weapon_Category(class UKSWeaponCategoryAsset* WeaponCategory)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75869);

	UWBP_WeaponMasteryTrack_C_Display_Weapon_Category_Params params {};
	params.WeaponCategory = WeaponCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrack.WBP_WeaponMasteryTrack_C.Highlight Reward Tier
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FActivityTier                               SelectedTier                                               (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_WeaponMasteryTrack_C::Highlight_Reward_Tier(const struct FActivityTier& SelectedTier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75868);

	UWBP_WeaponMasteryTrack_C_Highlight_Reward_Tier_Params params {};
	params.SelectedTier = SelectedTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrack.WBP_WeaponMasteryTrack_C.PopulateRewardTiers
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FActivityTier>                       SectionTiers                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		float                                              SectionProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryTrack_C::PopulateRewardTiers(TArray<struct FActivityTier>* SectionTiers, float SectionProgress)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75867);

	UWBP_WeaponMasteryTrack_C_PopulateRewardTiers_Params params {};
	params.SectionProgress = SectionProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SectionTiers != nullptr)
		*SectionTiers = params.SectionTiers;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrack.WBP_WeaponMasteryTrack_C.DisplayActivityProgress
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              CurrentLevelProgress                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                CurrentXp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                RequiredXPForLevel                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryTrack_C::DisplayActivityProgress(int Level, float CurrentLevelProgress, int CurrentXp, int RequiredXPForLevel)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75866);

	UWBP_WeaponMasteryTrack_C_DisplayActivityProgress_Params params {};
	params.Level = Level;
	params.CurrentLevelProgress = CurrentLevelProgress;
	params.CurrentXp = CurrentXp;
	params.RequiredXPForLevel = RequiredXPForLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrack.WBP_WeaponMasteryTrack_C.OnInputStateChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryTrack_C::OnInputStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75865);

	UWBP_WeaponMasteryTrack_C_OnInputStateChanged_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrack.WBP_WeaponMasteryTrack_C.OnMasteryLevelSelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FActivityTier                               ActivityTier                                               (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_WeaponMasteryTrack_C::OnMasteryLevelSelected(const struct FActivityTier& ActivityTier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75864);

	UWBP_WeaponMasteryTrack_C_OnMasteryLevelSelected_Params params {};
	params.ActivityTier = ActivityTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrack.WBP_WeaponMasteryTrack_C.DisplayProgress
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Mastery_Level                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                CurrentXp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                RequiredXPForLevel                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryTrack_C::DisplayProgress(int Mastery_Level, int CurrentXp, int RequiredXPForLevel)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75863);

	UWBP_WeaponMasteryTrack_C_DisplayProgress_Params params {};
	params.Mastery_Level = Mastery_Level;
	params.CurrentXp = CurrentXp;
	params.RequiredXPForLevel = RequiredXPForLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrack.WBP_WeaponMasteryTrack_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_WeaponMasteryTrack_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75862);

	UWBP_WeaponMasteryTrack_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrack.WBP_WeaponMasteryTrack_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryTrack_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75861);

	UWBP_WeaponMasteryTrack_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrack.WBP_WeaponMasteryTrack_C.ExecuteUbergraph_WBP_WeaponMasteryTrack
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryTrack_C::ExecuteUbergraph_WBP_WeaponMasteryTrack(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75860);

	UWBP_WeaponMasteryTrack_C_ExecuteUbergraph_WBP_WeaponMasteryTrack_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrack.WBP_WeaponMasteryTrack_C.OnPrestiegeSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMasteryTrack_C::OnPrestiegeSelected__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75859);

	UWBP_WeaponMasteryTrack_C_OnPrestiegeSelected__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryTrack.WBP_WeaponMasteryTrack_C.OnMasteryLevelSelectedEvent__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FActivityTier                               ActivityTier                                               (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_WeaponMasteryTrack_C::OnMasteryLevelSelectedEvent__DelegateSignature(const struct FActivityTier& ActivityTier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75858);

	UWBP_WeaponMasteryTrack_C_OnMasteryLevelSelectedEvent__DelegateSignature_Params params {};
	params.ActivityTier = ActivityTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
