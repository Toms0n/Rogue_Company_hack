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

// Function ScoreboardOverview.ScoreboardOverview_C.GetAllPlayerDisplays
struct UScoreboardOverview_C_GetAllPlayerDisplays_Params
{
	TArray<class UScoreboardPlayerStats_Lobby_C*>      Widgets;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function ScoreboardOverview.ScoreboardOverview_C.CreateTeamDisplay
struct UScoreboardOverview_C_CreateTeamDisplay_Params
{
	struct FTeamStats                                  TeamStats;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FScoreboardStats                            ScoreboardStats;                                           // 0x0020(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UScoreboardTeamSection_Lobby_C*              ScoreboardTeam;                                            // 0x0070(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScoreboardOverview.ScoreboardOverview_C.PopulateScoreboard
struct UScoreboardOverview_C_PopulateScoreboard_Params
{
	struct FScoreboardStats                            ScoreboardStatStruct;                                      // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ScoreboardOverview.ScoreboardOverview_C.InitializeWidget
struct UScoreboardOverview_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScoreboardOverview.ScoreboardOverview_C.SetMatchResult
struct UScoreboardOverview_C_SetMatchResult_Params
{
	bool                                               DidWin;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScoreboardOverview.ScoreboardOverview_C.SetTeamColor
struct UScoreboardOverview_C_SetTeamColor_Params
{
};

// Function ScoreboardOverview.ScoreboardOverview_C.PreConstruct
struct UScoreboardOverview_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScoreboardOverview.ScoreboardOverview_C.HandleTeamPlayersChanged
struct UScoreboardOverview_C_HandleTeamPlayersChanged_Params
{
};

// Function ScoreboardOverview.ScoreboardOverview_C.ExecuteUbergraph_ScoreboardOverview
struct UScoreboardOverview_C_ExecuteUbergraph_ScoreboardOverview_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScoreboardOverview.ScoreboardOverview_C.OnTeamsChanged__DelegateSignature
struct UScoreboardOverview_C_OnTeamsChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
