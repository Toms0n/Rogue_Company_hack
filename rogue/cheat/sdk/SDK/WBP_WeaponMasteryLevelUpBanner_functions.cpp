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
//		Name   -> Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.SequenceEvent__ENTRYPOINTWBP_WeaponMasteryLevelUpBanner_2
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMasteryLevelUpBanner_C::SequenceEvent__ENTRYPOINTWBP_WeaponMasteryLevelUpBanner_2()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76112);

	UWBP_WeaponMasteryLevelUpBanner_C_SequenceEvent__ENTRYPOINTWBP_WeaponMasteryLevelUpBanner_2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.SequenceEvent__ENTRYPOINTWBP_WeaponMasteryLevelUpBanner_1
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMasteryLevelUpBanner_C::SequenceEvent__ENTRYPOINTWBP_WeaponMasteryLevelUpBanner_1()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76111);

	UWBP_WeaponMasteryLevelUpBanner_C_SequenceEvent__ENTRYPOINTWBP_WeaponMasteryLevelUpBanner_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.SkipAnimations
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_WeaponMasteryLevelUpBanner_C::SkipAnimations()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76110);

	UWBP_WeaponMasteryLevelUpBanner_C_SkipAnimations_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.FindWeaponAttachmentInRewardTier
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FActivityTier                               RewardTier                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UKSWeaponAttachment*                         Reward_Weapon_Attachment                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_WeaponMasteryLevelUpBanner_C::FindWeaponAttachmentInRewardTier(const struct FActivityTier& RewardTier, class UKSWeaponAttachment** Reward_Weapon_Attachment, bool* Success)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76109);

	UWBP_WeaponMasteryLevelUpBanner_C_FindWeaponAttachmentInRewardTier_Params params {};
	params.RewardTier = RewardTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reward_Weapon_Attachment != nullptr)
		*Reward_Weapon_Attachment = params.Reward_Weapon_Attachment;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.GetItemTypeTexts
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<struct FTierRewardItemData>                 RewardItems                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		TArray<struct FText>                               ItemTypeTexts                                              (Parm, OutParm, HasGetValueTypeHash)
void UWBP_WeaponMasteryLevelUpBanner_C::GetItemTypeTexts(TArray<struct FTierRewardItemData>* RewardItems, TArray<struct FText>* ItemTypeTexts)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76108);

	UWBP_WeaponMasteryLevelUpBanner_C_GetItemTypeTexts_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RewardItems != nullptr)
		*RewardItems = params.RewardItems;
	if (ItemTypeTexts != nullptr)
		*ItemTypeTexts = params.ItemTypeTexts;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.SetRewardEntries
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FWeaponMasteryRewardDisplayData>     Reward_Display_Data                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UWBP_WeaponMasteryLevelUpBanner_C::SetRewardEntries(TArray<struct FWeaponMasteryRewardDisplayData>* Reward_Display_Data)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76107);

	UWBP_WeaponMasteryLevelUpBanner_C_SetRewardEntries_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reward_Display_Data != nullptr)
		*Reward_Display_Data = params.Reward_Display_Data;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.Mode_CategoryMastered
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWeaponCategoryAsset*                      Mastered_Category                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FActivityTier                               Reward_Tier                                                (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_WeaponMasteryLevelUpBanner_C::Mode_CategoryMastered(class UKSWeaponCategoryAsset* Mastered_Category, const struct FActivityTier& Reward_Tier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76106);

	UWBP_WeaponMasteryLevelUpBanner_C_Mode_CategoryMastered_Params params {};
	params.Mastered_Category = Mastered_Category;
	params.Reward_Tier = Reward_Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.Mode_WeaponMastered
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWeaponAsset*                              MasteredWeapon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FActivityTier                               Reward_Tier                                                (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_WeaponMasteryLevelUpBanner_C::Mode_WeaponMastered(class UKSWeaponAsset* MasteredWeapon, const struct FActivityTier& Reward_Tier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76105);

	UWBP_WeaponMasteryLevelUpBanner_C_Mode_WeaponMastered_Params params {};
	params.MasteredWeapon = MasteredWeapon;
	params.Reward_Tier = Reward_Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.PlayAnimation_NewMasteryLevel
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_WeaponMasteryLevelUpBanner_C::PlayAnimation_NewMasteryLevel()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76104);

	UWBP_WeaponMasteryLevelUpBanner_C_PlayAnimation_NewMasteryLevel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.SequenceEvent_1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMasteryLevelUpBanner_C::SequenceEvent_1()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76103);

	UWBP_WeaponMasteryLevelUpBanner_C_SequenceEvent_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.TransitionMasteryAward
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMasteryLevelUpBanner_C::TransitionMasteryAward()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76102);

	UWBP_WeaponMasteryLevelUpBanner_C_TransitionMasteryAward_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_WeaponMasteryLevelUpBanner_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76101);

	UWBP_WeaponMasteryLevelUpBanner_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryLevelUpBanner_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76100);

	UWBP_WeaponMasteryLevelUpBanner_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryLevelUpBanner_C::BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76099);

	UWBP_WeaponMasteryLevelUpBanner_C_BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WeaponMasteryLevelUpBanner_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76098);

	UWBP_WeaponMasteryLevelUpBanner_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.PopulateForLevelUpEntry
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FKSWeaponMasteryLevelUpSummaryEntry         LevelUpEntry                                               (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_WeaponMasteryLevelUpBanner_C::PopulateForLevelUpEntry(const struct FKSWeaponMasteryLevelUpSummaryEntry& LevelUpEntry)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76097);

	UWBP_WeaponMasteryLevelUpBanner_C_PopulateForLevelUpEntry_Params params {};
	params.LevelUpEntry = LevelUpEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.ExecuteUbergraph_WBP_WeaponMasteryLevelUpBanner
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMasteryLevelUpBanner_C::ExecuteUbergraph_WBP_WeaponMasteryLevelUpBanner(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76096);

	UWBP_WeaponMasteryLevelUpBanner_C_ExecuteUbergraph_WBP_WeaponMasteryLevelUpBanner_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.TransitionFinished__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMasteryLevelUpBanner_C::TransitionFinished__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(76095);

	UWBP_WeaponMasteryLevelUpBanner_C_TransitionFinished__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
