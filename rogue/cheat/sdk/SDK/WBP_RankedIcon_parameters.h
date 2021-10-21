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

// Function WBP_RankedIcon.WBP_RankedIcon_C.SetRankedTierTextByTier
struct UWBP_RankedIcon_C_SetRankedTierTextByTier_Params
{
	struct FText                                       RankedText;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_RankedIcon.WBP_RankedIcon_C.SetRankedLevel
struct UWBP_RankedIcon_C_SetRankedLevel_Params
{
	int                                                Level;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RankedIcon.WBP_RankedIcon_C.PreConstruct
struct UWBP_RankedIcon_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RankedIcon.WBP_RankedIcon_C.Construct
struct UWBP_RankedIcon_C_Construct_Params
{
};

// Function WBP_RankedIcon.WBP_RankedIcon_C.ExecuteUbergraph_WBP_RankedIcon
struct UWBP_RankedIcon_C_ExecuteUbergraph_WBP_RankedIcon_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RankedIcon.WBP_RankedIcon_C.OnRankTierSet__DelegateSignature
struct UWBP_RankedIcon_C_OnRankTierSet__DelegateSignature_Params
{
	TEnumAsByte<E_RankedTiers_E_RankedTiers>           RankTier;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
