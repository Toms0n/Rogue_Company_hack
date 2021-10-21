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

// Function WBP_WeaponMasteryTrack.WBP_WeaponMasteryTrack_C.Display Weapons Master
struct UWBP_WeaponMasteryTrack_C_Display_Weapons_Master_Params
{
};

// Function WBP_WeaponMasteryTrack.WBP_WeaponMasteryTrack_C.Display Weapon Asset
struct UWBP_WeaponMasteryTrack_C_Display_Weapon_Asset_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryTrack.WBP_WeaponMasteryTrack_C.Display Weapon Category
struct UWBP_WeaponMasteryTrack_C_Display_Weapon_Category_Params
{
	class UKSWeaponCategoryAsset*                      WeaponCategory;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryTrack.WBP_WeaponMasteryTrack_C.Highlight Reward Tier
struct UWBP_WeaponMasteryTrack_C_Highlight_Reward_Tier_Params
{
	struct FActivityTier                               SelectedTier;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_WeaponMasteryTrack.WBP_WeaponMasteryTrack_C.PopulateRewardTiers
struct UWBP_WeaponMasteryTrack_C_PopulateRewardTiers_Params
{
	TArray<struct FActivityTier>                       SectionTiers;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	float                                              SectionProgress;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryTrack.WBP_WeaponMasteryTrack_C.DisplayActivityProgress
struct UWBP_WeaponMasteryTrack_C_DisplayActivityProgress_Params
{
	int                                                Level;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentLevelProgress;                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentXp;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RequiredXPForLevel;                                        // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryTrack.WBP_WeaponMasteryTrack_C.OnInputStateChanged
struct UWBP_WeaponMasteryTrack_C_OnInputStateChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryTrack.WBP_WeaponMasteryTrack_C.OnMasteryLevelSelected
struct UWBP_WeaponMasteryTrack_C_OnMasteryLevelSelected_Params
{
	struct FActivityTier                               ActivityTier;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_WeaponMasteryTrack.WBP_WeaponMasteryTrack_C.DisplayProgress
struct UWBP_WeaponMasteryTrack_C_DisplayProgress_Params
{
	int                                                Mastery_Level;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentXp;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RequiredXPForLevel;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryTrack.WBP_WeaponMasteryTrack_C.Construct
struct UWBP_WeaponMasteryTrack_C_Construct_Params
{
};

// Function WBP_WeaponMasteryTrack.WBP_WeaponMasteryTrack_C.InitializeWidget
struct UWBP_WeaponMasteryTrack_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryTrack.WBP_WeaponMasteryTrack_C.ExecuteUbergraph_WBP_WeaponMasteryTrack
struct UWBP_WeaponMasteryTrack_C_ExecuteUbergraph_WBP_WeaponMasteryTrack_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryTrack.WBP_WeaponMasteryTrack_C.OnPrestiegeSelected__DelegateSignature
struct UWBP_WeaponMasteryTrack_C_OnPrestiegeSelected__DelegateSignature_Params
{
};

// Function WBP_WeaponMasteryTrack.WBP_WeaponMasteryTrack_C.OnMasteryLevelSelectedEvent__DelegateSignature
struct UWBP_WeaponMasteryTrack_C_OnMasteryLevelSelectedEvent__DelegateSignature_Params
{
	struct FActivityTier                               ActivityTier;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
