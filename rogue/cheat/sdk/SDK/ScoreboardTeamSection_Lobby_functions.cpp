// Name: roguecompany, Version: 425

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.GetPlayerDisplays
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<class UScoreboardPlayerStats_Lobby_C*>      PlayerEntries                                              (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UScoreboardTeamSection_Lobby_C::GetPlayerDisplays(TArray<class UScoreboardPlayerStats_Lobby_C*>* PlayerEntries)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71221);

	UScoreboardTeamSection_Lobby_C_GetPlayerDisplays_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerEntries != nullptr)
		*PlayerEntries = params.PlayerEntries;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.CreatePlayerEntry
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FPlayerEntryStats                           playerStats                                                (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UScoreboardPlayerStats_Lobby_C*              PlayerEntry                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UScoreboardTeamSection_Lobby_C::CreatePlayerEntry(int Index, const struct FPlayerEntryStats& playerStats, class UScoreboardPlayerStats_Lobby_C** PlayerEntry)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71220);

	UScoreboardTeamSection_Lobby_C_CreatePlayerEntry_Params params {};
	params.Index = Index;
	params.playerStats = playerStats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerEntry != nullptr)
		*PlayerEntry = params.PlayerEntry;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.SetIsVictorious
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsVictorious                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UScoreboardTeamSection_Lobby_C::SetIsVictorious(bool IsVictorious)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71219);

	UScoreboardTeamSection_Lobby_C_SetIsVictorious_Params params {};
	params.IsVictorious = IsVictorious;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.SortPlayers
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FPlayerEntryStats>                   PlayerEntries                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		bool                                               DescOrder                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UScoreboardTeamSection_Lobby_C::SortPlayers(TArray<struct FPlayerEntryStats>* PlayerEntries, bool DescOrder)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71218);

	UScoreboardTeamSection_Lobby_C_SortPlayers_Params params {};
	params.DescOrder = DescOrder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerEntries != nullptr)
		*PlayerEntries = params.PlayerEntries;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.CreatePlayerEntries
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FPlayerEntryStats>                   PlayerEntries                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UScoreboardTeamSection_Lobby_C::CreatePlayerEntries(TArray<struct FPlayerEntryStats>* PlayerEntries)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71217);

	UScoreboardTeamSection_Lobby_C_CreatePlayerEntries_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerEntries != nullptr)
		*PlayerEntries = params.PlayerEntries;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.FindPlayerTeam
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                PlayerTeamNum                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UScoreboardTeamSection_Lobby_C::FindPlayerTeam(int* PlayerTeamNum)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71216);

	UScoreboardTeamSection_Lobby_C_FindPlayerTeam_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerTeamNum != nullptr)
		*PlayerTeamNum = params.PlayerTeamNum;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.PopulatePlayer
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UScoreboardTeamSection_Lobby_C::PopulatePlayer()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71215);

	UScoreboardTeamSection_Lobby_C_PopulatePlayer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UScoreboardTeamSection_Lobby_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71214);

	UScoreboardTeamSection_Lobby_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.SetColor
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UScoreboardTeamSection_Lobby_C::SetColor()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71213);

	UScoreboardTeamSection_Lobby_C_SetColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UScoreboardTeamSection_Lobby_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71212);

	UScoreboardTeamSection_Lobby_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.ExecuteUbergraph_ScoreboardTeamSection_Lobby
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UScoreboardTeamSection_Lobby_C::ExecuteUbergraph_ScoreboardTeamSection_Lobby(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71211);

	UScoreboardTeamSection_Lobby_C_ExecuteUbergraph_ScoreboardTeamSection_Lobby_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.OnPlayersChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UScoreboardTeamSection_Lobby_C::OnPlayersChanged__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71210);

	UScoreboardTeamSection_Lobby_C_OnPlayersChanged__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
