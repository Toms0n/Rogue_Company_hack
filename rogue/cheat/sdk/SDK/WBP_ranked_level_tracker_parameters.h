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

// Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.SetProgressColorByTier
struct UWBP_ranked_level_tracker_C_SetProgressColorByTier_Params
{
	TEnumAsByte<E_RankedTiers_E_RankedTiers>           RankedTier;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.SetCurrentLevel
struct UWBP_ranked_level_tracker_C_SetCurrentLevel_Params
{
	int                                                Tier;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.OnLerpUpdate
struct UWBP_ranked_level_tracker_C_OnLerpUpdate_Params
{
	float                                              CurrentLerpPercantage;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.OnLevelDown
struct UWBP_ranked_level_tracker_C_OnLevelDown_Params
{
	int                                                NewLevel;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.OnLevelUp
struct UWBP_ranked_level_tracker_C_OnLevelUp_Params
{
	int                                                NewLevel;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.UpdateLevelDisplay
struct UWBP_ranked_level_tracker_C_UpdateLevelDisplay_Params
{
};

// Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.GetXPRequiredForLevel
struct UWBP_ranked_level_tracker_C_GetXPRequiredForLevel_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.GetNextLevel
struct UWBP_ranked_level_tracker_C_GetNextLevel_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.GetCurrentLevel
struct UWBP_ranked_level_tracker_C_GetCurrentLevel_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.ProcessPlayerProgression
struct UWBP_ranked_level_tracker_C_ProcessPlayerProgression_Params
{
	struct FPlayerProgression                          PlayerProgression;                                         // 0x0000(0x0170)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.PreConstruct
struct UWBP_ranked_level_tracker_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.Construct
struct UWBP_ranked_level_tracker_C_Construct_Params
{
};

// Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.ExecuteUbergraph_WBP_ranked_level_tracker
struct UWBP_ranked_level_tracker_C_ExecuteUbergraph_WBP_ranked_level_tracker_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.OnLevelDownEvent__DelegateSignature
struct UWBP_ranked_level_tracker_C_OnLevelDownEvent__DelegateSignature_Params
{
	int                                                NewLevel;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.OnLevelUpEvent__DelegateSignature
struct UWBP_ranked_level_tracker_C_OnLevelUpEvent__DelegateSignature_Params
{
	int                                                NewLevel;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
