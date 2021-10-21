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

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.GetProgressionFinalTier
struct UWBP_ProgressEarnedBar_C_GetProgressionFinalTier_Params
{
	int                                                Final_Tier_Index;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.IsProgressionIncreasing
struct UWBP_ProgressEarnedBar_C_IsProgressionIncreasing_Params
{
	bool                                               Return_Value;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.IsOnFirstTier
struct UWBP_ProgressEarnedBar_C_IsOnFirstTier_Params
{
	bool                                               FinalTier;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnLevelDownAnimCompleted
struct UWBP_ProgressEarnedBar_C_OnLevelDownAnimCompleted_Params
{
};

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.IsOnFinalTier
struct UWBP_ProgressEarnedBar_C_IsOnFinalTier_Params
{
	bool                                               FinalTier;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.Set Fill Colors
struct UWBP_ProgressEarnedBar_C_Set_Fill_Colors_Params
{
};

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnLevelUpAnimCompleted
struct UWBP_ProgressEarnedBar_C_OnLevelUpAnimCompleted_Params
{
};

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.InitializeAnimForTier
struct UWBP_ProgressEarnedBar_C_InitializeAnimForTier_Params
{
	int                                                Tier_Index;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsValid;                                                   // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.SetProgressionData
struct UWBP_ProgressEarnedBar_C_SetProgressionData_Params
{
	struct FPlayerProgression                          Progression;                                               // 0x0000(0x0170)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.ApplyMeterPercentages
struct UWBP_ProgressEarnedBar_C_ApplyMeterPercentages_Params
{
	float                                              BasePercent;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaPercent;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnDeltaAnimationStarted
struct UWBP_ProgressEarnedBar_C_OnDeltaAnimationStarted_Params
{
};

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnDeltaAnimationTicked
struct UWBP_ProgressEarnedBar_C_OnDeltaAnimationTicked_Params
{
};

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnDeltaAnimationFinished
struct UWBP_ProgressEarnedBar_C_OnDeltaAnimationFinished_Params
{
	bool                                               bLevelChange;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.Construct
struct UWBP_ProgressEarnedBar_C_Construct_Params
{
};

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.PreConstruct
struct UWBP_ProgressEarnedBar_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.ExecuteUbergraph_WBP_ProgressEarnedBar
struct UWBP_ProgressEarnedBar_C_ExecuteUbergraph_WBP_ProgressEarnedBar_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnLerpUpdate__DelegateSignature
struct UWBP_ProgressEarnedBar_C_OnLerpUpdate__DelegateSignature_Params
{
	float                                              CurrentLerpPercantage;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnLevelDownEvent__DelegateSignature
struct UWBP_ProgressEarnedBar_C_OnLevelDownEvent__DelegateSignature_Params
{
	int                                                NewLevel;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnLevelUpEvent__DelegateSignature
struct UWBP_ProgressEarnedBar_C_OnLevelUpEvent__DelegateSignature_Params
{
	int                                                NewLevel;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
