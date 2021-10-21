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

// Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.SequenceEvent__ENTRYPOINTWBP_WeaponMilestoneEntry_Progression_2
struct UWBP_WeaponMilestoneEntry_Progression_C_SequenceEvent__ENTRYPOINTWBP_WeaponMilestoneEntry_Progression_2_Params
{
};

// Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.SequenceEvent__ENTRYPOINTWBP_WeaponMilestoneEntry_Progression_1
struct UWBP_WeaponMilestoneEntry_Progression_C_SequenceEvent__ENTRYPOINTWBP_WeaponMilestoneEntry_Progression_1_Params
{
};

// Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.SetRewardQuantityTextFromTier
struct UWBP_WeaponMilestoneEntry_Progression_C_SetRewardQuantityTextFromTier_Params
{
	struct FActivityTier                               ActivityTier;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.GetNextDeltaStartCount
struct UWBP_WeaponMilestoneEntry_Progression_C_GetNextDeltaStartCount_Params
{
	int                                                Count;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.IsCountInLastAnimTier
struct UWBP_WeaponMilestoneEntry_Progression_C_IsCountInLastAnimTier_Params
{
	int                                                InCount;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.DisplayFullTier
struct UWBP_WeaponMilestoneEntry_Progression_C_DisplayFullTier_Params
{
	int                                                CountInTier;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.DisplayAnimatedProgressCount
struct UWBP_WeaponMilestoneEntry_Progression_C_DisplayAnimatedProgressCount_Params
{
	float                                              Count;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.StartAnimSequence
struct UWBP_WeaponMilestoneEntry_Progression_C_StartAnimSequence_Params
{
};

// Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.Initialize Animation
struct UWBP_WeaponMilestoneEntry_Progression_C_Initialize_Animation_Params
{
	struct FKSMilestoneCompletedSummaryEntry           ProgressSummary;                                           // 0x0000(0x00A0)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.FindWeaponXpReward
struct UWBP_WeaponMilestoneEntry_Progression_C_FindWeaponXpReward_Params
{
	struct FActivityTier                               ActivityTier;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FTierRewardItemData                         WeaponXpRewardItem;                                        // 0x0040(0x0010)  (Parm, OutParm, NoDestructor)
	bool                                               Success;                                                   // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.SetVisualState
struct UWBP_WeaponMilestoneEntry_Progression_C_SetVisualState_Params
{
	TEnumAsByte<EChallengeEntry_Card_State_EChallengeEntry_Card_State> Card_State;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.SetBaseMilestoneDisplay
struct UWBP_WeaponMilestoneEntry_Progression_C_SetBaseMilestoneDisplay_Params
{
	class UKSActivityInstance*                         ActivityInstance;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.InitializeTickAnimations
struct UWBP_WeaponMilestoneEntry_Progression_C_InitializeTickAnimations_Params
{
};

// Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.ProgressLerp_Update
struct UWBP_WeaponMilestoneEntry_Progression_C_ProgressLerp_Update_Params
{
	float                                              ElapsedTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ElapsedAlpha;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.ProgressLerp_Finished
struct UWBP_WeaponMilestoneEntry_Progression_C_ProgressLerp_Finished_Params
{
};

// Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.DisplayNextMilestone
struct UWBP_WeaponMilestoneEntry_Progression_C_DisplayNextMilestone_Params
{
};

// Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.SequenceEvent_TierRefreshSwap
struct UWBP_WeaponMilestoneEntry_Progression_C_SequenceEvent_TierRefreshSwap_Params
{
};

// Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.PreConstruct
struct UWBP_WeaponMilestoneEntry_Progression_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.DisplayMilestoneActivity
struct UWBP_WeaponMilestoneEntry_Progression_C_DisplayMilestoneActivity_Params
{
	class UKSActivityInstance*                         MilestoneInstance;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.DisplayEmpty
struct UWBP_WeaponMilestoneEntry_Progression_C_DisplayEmpty_Params
{
};

// Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.InitializeWidget
struct UWBP_WeaponMilestoneEntry_Progression_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.OnAnimMilestoneCompleteFinished
struct UWBP_WeaponMilestoneEntry_Progression_C_OnAnimMilestoneCompleteFinished_Params
{
};

// Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.OnAnimTierRefreshFinished
struct UWBP_WeaponMilestoneEntry_Progression_C_OnAnimTierRefreshFinished_Params
{
};

// Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.OnAnimSlideUpFinished
struct UWBP_WeaponMilestoneEntry_Progression_C_OnAnimSlideUpFinished_Params
{
};

// Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.ResumeLevelUpAnim
struct UWBP_WeaponMilestoneEntry_Progression_C_ResumeLevelUpAnim_Params
{
};

// Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.UnblockSequence
struct UWBP_WeaponMilestoneEntry_Progression_C_UnblockSequence_Params
{
};

// Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.ExecuteUbergraph_WBP_WeaponMilestoneEntry_Progression
struct UWBP_WeaponMilestoneEntry_Progression_C_ExecuteUbergraph_WBP_WeaponMilestoneEntry_Progression_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.OnAnimSequenceFinished__DelegateSignature
struct UWBP_WeaponMilestoneEntry_Progression_C_OnAnimSequenceFinished__DelegateSignature_Params
{
};

// Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.OnMilestoneCompleted__DelegateSignature
struct UWBP_WeaponMilestoneEntry_Progression_C_OnMilestoneCompleted__DelegateSignature_Params
{
	int                                                RewardCount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
