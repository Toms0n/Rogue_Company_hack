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

// Function WBP_WeaponMilestoneEntry.WBP_WeaponMilestoneEntry_C.FindWeaponXpReward
struct UWBP_WeaponMilestoneEntry_C_FindWeaponXpReward_Params
{
	struct FActivityTier                               ActivityTier;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FTierRewardItemData                         WeaponXpRewardItem;                                        // 0x0040(0x0010)  (Parm, OutParm, NoDestructor)
	bool                                               Success;                                                   // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_WeaponMilestoneEntry.WBP_WeaponMilestoneEntry_C.SetVisualState
struct UWBP_WeaponMilestoneEntry_C_SetVisualState_Params
{
	TEnumAsByte<EChallengeEntry_Card_State_EChallengeEntry_Card_State> Card_State;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMilestoneEntry.WBP_WeaponMilestoneEntry_C.SetDisplayedChallenge
struct UWBP_WeaponMilestoneEntry_C_SetDisplayedChallenge_Params
{
	class UKSActivityInstance*                         ActivityInstance;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMilestoneEntry.WBP_WeaponMilestoneEntry_C.PreConstruct
struct UWBP_WeaponMilestoneEntry_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_WeaponMilestoneEntry.WBP_WeaponMilestoneEntry_C.DisplayMilestoneActivity
struct UWBP_WeaponMilestoneEntry_C_DisplayMilestoneActivity_Params
{
	class UKSActivityInstance*                         MilestoneInstance;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMilestoneEntry.WBP_WeaponMilestoneEntry_C.DisplayEmpty
struct UWBP_WeaponMilestoneEntry_C_DisplayEmpty_Params
{
};

// Function WBP_WeaponMilestoneEntry.WBP_WeaponMilestoneEntry_C.ExecuteUbergraph_WBP_WeaponMilestoneEntry
struct UWBP_WeaponMilestoneEntry_C_ExecuteUbergraph_WBP_WeaponMilestoneEntry_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMilestoneEntry.WBP_WeaponMilestoneEntry_C.OnMilestoneSelected__DelegateSignature
struct UWBP_WeaponMilestoneEntry_C_OnMilestoneSelected__DelegateSignature_Params
{
	class UKSActivityInstance*                         MilestoneInstance;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
