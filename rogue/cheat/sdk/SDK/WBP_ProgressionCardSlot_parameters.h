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

// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.SetRankedVisualDisplay
struct UWBP_ProgressionCardSlot_C_SetRankedVisualDisplay_Params
{
	TEnumAsByte<E_RankedTiers_E_RankedTiers>           RankTier;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.SetInitialState
struct UWBP_ProgressionCardSlot_C_SetInitialState_Params
{
};

// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.Construct
struct UWBP_ProgressionCardSlot_C_Construct_Params
{
};

// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.AnimateIn
struct UWBP_ProgressionCardSlot_C_AnimateIn_Params
{
	float                                              Delay;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.PreConstruct
struct UWBP_ProgressionCardSlot_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.OnMercMasteryLevelUp
struct UWBP_ProgressionCardSlot_C_OnMercMasteryLevelUp_Params
{
	class UKSActivityInstance*                         ActivityInstance;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActivityTier                               NewTier;                                                   // 0x0008(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.OnRankTierSet
struct UWBP_ProgressionCardSlot_C_OnRankTierSet_Params
{
	TEnumAsByte<E_RankedTiers_E_RankedTiers>           RankTier;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.StartAnimTimerComplete
struct UWBP_ProgressionCardSlot_C_StartAnimTimerComplete_Params
{
};

// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.ExecuteUbergraph_WBP_ProgressionCardSlot
struct UWBP_ProgressionCardSlot_C_ExecuteUbergraph_WBP_ProgressionCardSlot_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.StartAnimation__DelegateSignature
struct UWBP_ProgressionCardSlot_C_StartAnimation__DelegateSignature_Params
{
	int                                                CurrencyEarned;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
