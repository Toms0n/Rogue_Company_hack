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

// Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.GetModelViewerActorName
struct UWBP_WeaponMasteryRewards_C_GetModelViewerActorName_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.GetCurrentPreviewWeapon
struct UWBP_WeaponMasteryRewards_C_GetCurrentPreviewWeapon_Params
{
	class UKSWeaponAsset*                              Return_Value;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.GetItemTypeTexts
struct UWBP_WeaponMasteryRewards_C_GetItemTypeTexts_Params
{
	TArray<struct FTierRewardItemData>                 RewardItems;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	TArray<struct FText>                               ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.GetCurrentMasteryLevel
struct UWBP_WeaponMasteryRewards_C_GetCurrentMasteryLevel_Params
{
	int                                                MasteryLevel;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.GetMaxRegularLevel
struct UWBP_WeaponMasteryRewards_C_GetMaxRegularLevel_Params
{
	int                                                Tier;                                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.Display Reward Preview
struct UWBP_WeaponMasteryRewards_C_Display_Reward_Preview_Params
{
	struct FMasteryRewardData                          RewardItem;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UWBP_ListButton_Cosmetic_C*                  SelectedWidget;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.Update Reward List
struct UWBP_WeaponMasteryRewards_C_Update_Reward_List_Params
{
	struct FActivityTier                               RewardTier;                                                // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.SetContextBar
struct UWBP_WeaponMasteryRewards_C_SetContextBar_Params
{
};

// Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.NavigateBack
struct UWBP_WeaponMasteryRewards_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.OnBack
struct UWBP_WeaponMasteryRewards_C_OnBack_Params
{
};

// Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.Construct
struct UWBP_WeaponMasteryRewards_C_Construct_Params
{
};

// Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.InitializeWidget
struct UWBP_WeaponMasteryRewards_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.InitializeWidgetNavigation
struct UWBP_WeaponMasteryRewards_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.FocusGroupNavigateLeftFailure
struct UWBP_WeaponMasteryRewards_C_FocusGroupNavigateLeftFailure_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.FocusGroupNavigateRightFailure
struct UWBP_WeaponMasteryRewards_C_FocusGroupNavigateRightFailure_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.ConfigureLobbyCamera
struct UWBP_WeaponMasteryRewards_C_ConfigureLobbyCamera_Params
{
};

// Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.DisplayWeaponAsset
struct UWBP_WeaponMasteryRewards_C_DisplayWeaponAsset_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.DisplayWeaponCategory
struct UWBP_WeaponMasteryRewards_C_DisplayWeaponCategory_Params
{
	class UKSWeaponCategoryAsset*                      WeaponCategory;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.DisplayWeaponsMaster
struct UWBP_WeaponMasteryRewards_C_DisplayWeaponsMaster_Params
{
};

// Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.DisplayActivityProgress
struct UWBP_WeaponMasteryRewards_C_DisplayActivityProgress_Params
{
	int                                                Level;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LevelProgressCount;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LevelProgressTotal;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.OnCurrentProgressActivityInstanceUpdated
struct UWBP_WeaponMasteryRewards_C_OnCurrentProgressActivityInstanceUpdated_Params
{
};

// Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.PopulateRewardTiers
struct UWBP_WeaponMasteryRewards_C_PopulateRewardTiers_Params
{
};

// Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.DisplayRewardTier
struct UWBP_WeaponMasteryRewards_C_DisplayRewardTier_Params
{
	struct FActivityTier                               SelectedTier;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.DisplayReactiveStateDescription
struct UWBP_WeaponMasteryRewards_C_DisplayReactiveStateDescription_Params
{
	struct FText                                       DescText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_WeaponMasteryRewards.WBP_WeaponMasteryRewards_C.ExecuteUbergraph_WBP_WeaponMasteryRewards
struct UWBP_WeaponMasteryRewards_C_ExecuteUbergraph_WBP_WeaponMasteryRewards_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
