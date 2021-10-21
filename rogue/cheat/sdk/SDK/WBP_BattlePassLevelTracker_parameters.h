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

// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.SequenceEvent__ENTRYPOINTWBP_BattlePassLevelTracker_2
struct UWBP_BattlePassLevelTracker_C_SequenceEvent__ENTRYPOINTWBP_BattlePassLevelTracker_2_Params
{
};

// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.SequenceEvent__ENTRYPOINTWBP_BattlePassLevelTracker_1
struct UWBP_BattlePassLevelTracker_C_SequenceEvent__ENTRYPOINTWBP_BattlePassLevelTracker_1_Params
{
};

// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.Update XP Bar
struct UWBP_BattlePassLevelTracker_C_Update_XP_Bar_Params
{
};

// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.Update Cosmetic Item Display
struct UWBP_BattlePassLevelTracker_C_Update_Cosmetic_Item_Display_Params
{
};

// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.Update Battle Pass Emblem
struct UWBP_BattlePassLevelTracker_C_Update_Battle_Pass_Emblem_Params
{
};

// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.Get Has Premium Battle Pass
struct UWBP_BattlePassLevelTracker_C_Get_Has_Premium_Battle_Pass_Params
{
	bool                                               Return_Value;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.Get Reward Item At Tier
struct UWBP_BattlePassLevelTracker_C_Get_Reward_Item_At_Tier_Params
{
	int                                                TierIndex;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RewardIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTierRewardItemData                         RewardStoreItemData;                                       // 0x0008(0x0010)  (Parm, OutParm, NoDestructor)
};

// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.DisplayFinishedState
struct UWBP_BattlePassLevelTracker_C_DisplayFinishedState_Params
{
};

// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.SetConstantTextElements
struct UWBP_BattlePassLevelTracker_C_SetConstantTextElements_Params
{
};

// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.TriggerLevelUpEvent
struct UWBP_BattlePassLevelTracker_C_TriggerLevelUpEvent_Params
{
};

// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.GetXpProgressPercentageInLevel
struct UWBP_BattlePassLevelTracker_C_GetXpProgressPercentageInLevel_Params
{
	float                                              PercentProgress;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                XpNumber;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.SetNewLerpTimeframe
struct UWBP_BattlePassLevelTracker_C_SetNewLerpTimeframe_Params
{
};

// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.GetXPRequiredForLevel
struct UWBP_BattlePassLevelTracker_C_GetXPRequiredForLevel_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.GetNextLevel
struct UWBP_BattlePassLevelTracker_C_GetNextLevel_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.GetCurrentLevel
struct UWBP_BattlePassLevelTracker_C_GetCurrentLevel_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.DisplayXPAnimationState
struct UWBP_BattlePassLevelTracker_C_DisplayXPAnimationState_Params
{
};

// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.OnLevelUpAnimCompleted
struct UWBP_BattlePassLevelTracker_C_OnLevelUpAnimCompleted_Params
{
};

// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.SetPalette
struct UWBP_BattlePassLevelTracker_C_SetPalette_Params
{
};

// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.ProcessPlayerProgression
struct UWBP_BattlePassLevelTracker_C_ProcessPlayerProgression_Params
{
	struct FPlayerProgression                          PlayerProgression;                                         // 0x0000(0x0170)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.InitializeWidget
struct UWBP_BattlePassLevelTracker_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.Tick
struct UWBP_BattlePassLevelTracker_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0058(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.PlayProgressionAnim
struct UWBP_BattlePassLevelTracker_C_PlayProgressionAnim_Params
{
	float                                              Delay;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.PreConstruct
struct UWBP_BattlePassLevelTracker_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.Construct
struct UWBP_BattlePassLevelTracker_C_Construct_Params
{
};

// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.OnAnimUpdateEmblem
struct UWBP_BattlePassLevelTracker_C_OnAnimUpdateEmblem_Params
{
};

// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.OnAnimUpdateCosmeticDisplay
struct UWBP_BattlePassLevelTracker_C_OnAnimUpdateCosmeticDisplay_Params
{
};

// Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.ExecuteUbergraph_WBP_BattlePassLevelTracker
struct UWBP_BattlePassLevelTracker_C_ExecuteUbergraph_WBP_BattlePassLevelTracker_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
