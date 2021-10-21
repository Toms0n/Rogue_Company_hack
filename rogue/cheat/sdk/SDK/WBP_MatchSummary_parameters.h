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

// Function WBP_MatchSummary.WBP_MatchSummary_C.PopulatePlayerStats
struct UWBP_MatchSummary_C_PopulatePlayerStats_Params
{
	struct FPlayerEntryStats                           PlayerEntryStats;                                          // 0x0000(0x00C8)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MatchSummary.WBP_MatchSummary_C.PopulateMatchSummary
struct UWBP_MatchSummary_C_PopulateMatchSummary_Params
{
	struct FPlayerRewardsSummary                       PlayerRewards;                                             // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FScoreboardStats                            ScoreboardStats;                                           // 0x0060(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MatchSummary.WBP_MatchSummary_C.PopulateBestStats
struct UWBP_MatchSummary_C_PopulateBestStats_Params
{
	TArray<struct FPlayerMatchStatInfo>                BestStats;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function WBP_MatchSummary.WBP_MatchSummary_C.InitializeWidget
struct UWBP_MatchSummary_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MatchSummary.WBP_MatchSummary_C.ExecuteUbergraph_WBP_MatchSummary
struct UWBP_MatchSummary_C_ExecuteUbergraph_WBP_MatchSummary_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
