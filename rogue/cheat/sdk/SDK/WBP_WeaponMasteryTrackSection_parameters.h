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

// Function WBP_WeaponMasteryTrackSection.WBP_WeaponMasteryTrackSection_C.GetTrackEntries
struct UWBP_WeaponMasteryTrackSection_C_GetTrackEntries_Params
{
	TArray<class UWBP_WeaponMasteryTrackLevel_C*>      Return_Value;                                              // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryTrackSection.WBP_WeaponMasteryTrackSection_C.DisplayWeaponsMaster
struct UWBP_WeaponMasteryTrackSection_C_DisplayWeaponsMaster_Params
{
};

// Function WBP_WeaponMasteryTrackSection.WBP_WeaponMasteryTrackSection_C.DisplayWeaponCategory
struct UWBP_WeaponMasteryTrackSection_C_DisplayWeaponCategory_Params
{
	class UKSWeaponCategoryAsset*                      WeaponCategory;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryTrackSection.WBP_WeaponMasteryTrackSection_C.DisplayWeaponAsset
struct UWBP_WeaponMasteryTrackSection_C_DisplayWeaponAsset_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryTrackSection.WBP_WeaponMasteryTrackSection_C.Highlight Reward Tier
struct UWBP_WeaponMasteryTrackSection_C_Highlight_Reward_Tier_Params
{
	struct FActivityTier                               Selected_Tier;                                             // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_WeaponMasteryTrackSection.WBP_WeaponMasteryTrackSection_C.UpdateCurrentTier
struct UWBP_WeaponMasteryTrackSection_C_UpdateCurrentTier_Params
{
	int                                                CurrentTier;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryTrackSection.WBP_WeaponMasteryTrackSection_C.DisplayGamepadFocus
struct UWBP_WeaponMasteryTrackSection_C_DisplayGamepadFocus_Params
{
	bool                                               ShouldDisplayFocus;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_WeaponMasteryTrackSection.WBP_WeaponMasteryTrackSection_C.SetSectionData
struct UWBP_WeaponMasteryTrackSection_C_SetSectionData_Params
{
	TArray<struct FActivityTier>                       SectionTiers;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	float                                              SectionProgress;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryTrackSection.WBP_WeaponMasteryTrackSection_C.OnMasteryLevelSelected
struct UWBP_WeaponMasteryTrackSection_C_OnMasteryLevelSelected_Params
{
	struct FActivityTier                               Activity_Tier;                                             // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_WeaponMasteryTrackSection.WBP_WeaponMasteryTrackSection_C.PreConstruct
struct UWBP_WeaponMasteryTrackSection_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_WeaponMasteryTrackSection.WBP_WeaponMasteryTrackSection_C.Construct
struct UWBP_WeaponMasteryTrackSection_C_Construct_Params
{
};

// Function WBP_WeaponMasteryTrackSection.WBP_WeaponMasteryTrackSection_C.InitializeWidget
struct UWBP_WeaponMasteryTrackSection_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryTrackSection.WBP_WeaponMasteryTrackSection_C.ExecuteUbergraph_WBP_WeaponMasteryTrackSection
struct UWBP_WeaponMasteryTrackSection_C_ExecuteUbergraph_WBP_WeaponMasteryTrackSection_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryTrackSection.WBP_WeaponMasteryTrackSection_C.OnTrackEntrySelected__DelegateSignature
struct UWBP_WeaponMasteryTrackSection_C_OnTrackEntrySelected__DelegateSignature_Params
{
	struct FActivityTier                               ActivityTier;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
