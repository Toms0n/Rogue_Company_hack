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

// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.GetPlayerDisplays
struct UScoreboardTeamSection_Lobby_C_GetPlayerDisplays_Params
{
	TArray<class UScoreboardPlayerStats_Lobby_C*>      PlayerEntries;                                             // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.CreatePlayerEntry
struct UScoreboardTeamSection_Lobby_C_CreatePlayerEntry_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerEntryStats                           playerStats;                                               // 0x0008(0x00C8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UScoreboardPlayerStats_Lobby_C*              PlayerEntry;                                               // 0x00D0(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.SetIsVictorious
struct UScoreboardTeamSection_Lobby_C_SetIsVictorious_Params
{
	bool                                               IsVictorious;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.SortPlayers
struct UScoreboardTeamSection_Lobby_C_SortPlayers_Params
{
	TArray<struct FPlayerEntryStats>                   PlayerEntries;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                               DescOrder;                                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.CreatePlayerEntries
struct UScoreboardTeamSection_Lobby_C_CreatePlayerEntries_Params
{
	TArray<struct FPlayerEntryStats>                   PlayerEntries;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.FindPlayerTeam
struct UScoreboardTeamSection_Lobby_C_FindPlayerTeam_Params
{
	int                                                PlayerTeamNum;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.PopulatePlayer
struct UScoreboardTeamSection_Lobby_C_PopulatePlayer_Params
{
};

// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.Construct
struct UScoreboardTeamSection_Lobby_C_Construct_Params
{
};

// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.SetColor
struct UScoreboardTeamSection_Lobby_C_SetColor_Params
{
};

// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.PreConstruct
struct UScoreboardTeamSection_Lobby_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.ExecuteUbergraph_ScoreboardTeamSection_Lobby
struct UScoreboardTeamSection_Lobby_C_ExecuteUbergraph_ScoreboardTeamSection_Lobby_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.OnPlayersChanged__DelegateSignature
struct UScoreboardTeamSection_Lobby_C_OnPlayersChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
