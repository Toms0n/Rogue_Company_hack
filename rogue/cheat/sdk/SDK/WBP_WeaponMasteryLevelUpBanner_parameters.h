#pragma once

// Name: roguecompany, Version: 425


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.SequenceEvent__ENTRYPOINTWBP_WeaponMasteryLevelUpBanner_2
struct UWBP_WeaponMasteryLevelUpBanner_C_SequenceEvent__ENTRYPOINTWBP_WeaponMasteryLevelUpBanner_2_Params
{
};

// Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.SequenceEvent__ENTRYPOINTWBP_WeaponMasteryLevelUpBanner_1
struct UWBP_WeaponMasteryLevelUpBanner_C_SequenceEvent__ENTRYPOINTWBP_WeaponMasteryLevelUpBanner_1_Params
{
};

// Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.SkipAnimations
struct UWBP_WeaponMasteryLevelUpBanner_C_SkipAnimations_Params
{
};

// Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.FindWeaponAttachmentInRewardTier
struct UWBP_WeaponMasteryLevelUpBanner_C_FindWeaponAttachmentInRewardTier_Params
{
	struct FActivityTier                               RewardTier;                                                // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UKSWeaponAttachment*                         Reward_Weapon_Attachment;                                  // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.GetItemTypeTexts
struct UWBP_WeaponMasteryLevelUpBanner_C_GetItemTypeTexts_Params
{
	TArray<struct FTierRewardItemData>                 RewardItems;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	TArray<struct FText>                               ItemTypeTexts;                                             // 0x0010(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.SetRewardEntries
struct UWBP_WeaponMasteryLevelUpBanner_C_SetRewardEntries_Params
{
	TArray<struct FWeaponMasteryRewardDisplayData>     Reward_Display_Data;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.Mode_CategoryMastered
struct UWBP_WeaponMasteryLevelUpBanner_C_Mode_CategoryMastered_Params
{
	class UKSWeaponCategoryAsset*                      Mastered_Category;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActivityTier                               Reward_Tier;                                               // 0x0008(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.Mode_WeaponMastered
struct UWBP_WeaponMasteryLevelUpBanner_C_Mode_WeaponMastered_Params
{
	class UKSWeaponAsset*                              MasteredWeapon;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActivityTier                               Reward_Tier;                                               // 0x0008(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.PlayAnimation_NewMasteryLevel
struct UWBP_WeaponMasteryLevelUpBanner_C_PlayAnimation_NewMasteryLevel_Params
{
};

// Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.SequenceEvent_1
struct UWBP_WeaponMasteryLevelUpBanner_C_SequenceEvent_1_Params
{
};

// Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.TransitionMasteryAward
struct UWBP_WeaponMasteryLevelUpBanner_C_TransitionMasteryAward_Params
{
};

// Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.PreConstruct
struct UWBP_WeaponMasteryLevelUpBanner_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.InitializeWidget
struct UWBP_WeaponMasteryLevelUpBanner_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWBP_WeaponMasteryLevelUpBanner_C_BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.InitializeWidgetNavigation
struct UWBP_WeaponMasteryLevelUpBanner_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.PopulateForLevelUpEntry
struct UWBP_WeaponMasteryLevelUpBanner_C_PopulateForLevelUpEntry_Params
{
	struct FKSWeaponMasteryLevelUpSummaryEntry         LevelUpEntry;                                              // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.ExecuteUbergraph_WBP_WeaponMasteryLevelUpBanner
struct UWBP_WeaponMasteryLevelUpBanner_C_ExecuteUbergraph_WBP_WeaponMasteryLevelUpBanner_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryLevelUpBanner.WBP_WeaponMasteryLevelUpBanner_C.TransitionFinished__DelegateSignature
struct UWBP_WeaponMasteryLevelUpBanner_C_TransitionFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
