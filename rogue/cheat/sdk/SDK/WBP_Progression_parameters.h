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

// Function WBP_Progression.WBP_Progression_C.OnPlayerLevelUp
struct UWBP_Progression_C_OnPlayerLevelUp_Params
{
	struct FActivityTier                               NewTier;                                                   // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UKSActivityInstance*                         ActivityInstance;                                          // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Progression.WBP_Progression_C.HandleBattlePassActivitiesReady
struct UWBP_Progression_C_HandleBattlePassActivitiesReady_Params
{
};

// Function WBP_Progression.WBP_Progression_C.HandleEventChallengeProgression
struct UWBP_Progression_C_HandleEventChallengeProgression_Params
{
	struct FPlayerProgression                          PlayerProgression;                                         // 0x0000(0x0170)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Progression.WBP_Progression_C.HandleBattlePassXpProgression
struct UWBP_Progression_C_HandleBattlePassXpProgression_Params
{
	struct FPlayerProgression                          Progression;                                               // 0x0000(0x0170)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Progression.WBP_Progression_C.HandleProgressionData
struct UWBP_Progression_C_HandleProgressionData_Params
{
	TArray<struct FPlayerProgression>                  PlayerProgression;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function WBP_Progression.WBP_Progression_C.HandleMiniBattlePassProgressionRecieved
struct UWBP_Progression_C_HandleMiniBattlePassProgressionRecieved_Params
{
	struct FPlayerProgression                          PlayerProgression;                                         // 0x0000(0x0170)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Progression.WBP_Progression_C.OnMercLevelUp
struct UWBP_Progression_C_OnMercLevelUp_Params
{
	class UKSActivityInstance*                         ActivityInstance;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActivityTier                               NewTier;                                                   // 0x0008(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Progression.WBP_Progression_C.ResetVisualState
struct UWBP_Progression_C_ResetVisualState_Params
{
};

// Function WBP_Progression.WBP_Progression_C.HandleRogueMasteryProgression
struct UWBP_Progression_C_HandleRogueMasteryProgression_Params
{
	struct FPlayerProgression                          PlayerProgression;                                         // 0x0000(0x0170)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Progression.WBP_Progression_C.HandleReputationProgression
struct UWBP_Progression_C_HandleReputationProgression_Params
{
	struct FPlayerProgression                          PlayerProgression;                                         // 0x0000(0x0170)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Progression.WBP_Progression_C.HandlePlayerXpProgression
struct UWBP_Progression_C_HandlePlayerXpProgression_Params
{
	struct FPlayerProgression                          Progression;                                               // 0x0000(0x0170)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Progression.WBP_Progression_C.Construct
struct UWBP_Progression_C_Construct_Params
{
};

// Function WBP_Progression.WBP_Progression_C.StartAnimation
struct UWBP_Progression_C_StartAnimation_Params
{
};

// Function WBP_Progression.WBP_Progression_C.PreConstruct
struct UWBP_Progression_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Progression.WBP_Progression_C.InitializeWidget
struct UWBP_Progression_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Progression.WBP_Progression_C.IncrementDelay
struct UWBP_Progression_C_IncrementDelay_Params
{
};

// Function WBP_Progression.WBP_Progression_C.ExecuteUbergraph_WBP_Progression
struct UWBP_Progression_C_ExecuteUbergraph_WBP_Progression_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
