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
//		Name   -> Function ScoreboardOverview.ScoreboardOverview_C.GetAllPlayerDisplays
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<class UScoreboardPlayerStats_Lobby_C*>      Widgets                                                    (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UScoreboardOverview_C::GetAllPlayerDisplays(TArray<class UScoreboardPlayerStats_Lobby_C*>* Widgets)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(223219);

	UScoreboardOverview_C_GetAllPlayerDisplays_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Widgets != nullptr)
		*Widgets = params.Widgets;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ScoreboardOverview.ScoreboardOverview_C.CreateTeamDisplay
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTeamStats                                  TeamStats                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FScoreboardStats                            ScoreboardStats                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		class UScoreboardTeamSection_Lobby_C*              ScoreboardTeam                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UScoreboardOverview_C::CreateTeamDisplay(const struct FTeamStats& TeamStats, const struct FScoreboardStats& ScoreboardStats, class UScoreboardTeamSection_Lobby_C** ScoreboardTeam)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(223218);

	UScoreboardOverview_C_CreateTeamDisplay_Params params {};
	params.TeamStats = TeamStats;
	params.ScoreboardStats = ScoreboardStats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScoreboardTeam != nullptr)
		*ScoreboardTeam = params.ScoreboardTeam;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ScoreboardOverview.ScoreboardOverview_C.PopulateScoreboard
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FScoreboardStats                            ScoreboardStatStruct                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UScoreboardOverview_C::PopulateScoreboard(const struct FScoreboardStats& ScoreboardStatStruct)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(223217);

	UScoreboardOverview_C_PopulateScoreboard_Params params {};
	params.ScoreboardStatStruct = ScoreboardStatStruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ScoreboardOverview.ScoreboardOverview_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UScoreboardOverview_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(223216);

	UScoreboardOverview_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ScoreboardOverview.ScoreboardOverview_C.SetMatchResult
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               DidWin                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UScoreboardOverview_C::SetMatchResult(bool DidWin)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(223215);

	UScoreboardOverview_C_SetMatchResult_Params params {};
	params.DidWin = DidWin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ScoreboardOverview.ScoreboardOverview_C.SetTeamColor
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UScoreboardOverview_C::SetTeamColor()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(223214);

	UScoreboardOverview_C_SetTeamColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ScoreboardOverview.ScoreboardOverview_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UScoreboardOverview_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(223213);

	UScoreboardOverview_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ScoreboardOverview.ScoreboardOverview_C.HandleTeamPlayersChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UScoreboardOverview_C::HandleTeamPlayersChanged()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(223212);

	UScoreboardOverview_C_HandleTeamPlayersChanged_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ScoreboardOverview.ScoreboardOverview_C.ExecuteUbergraph_ScoreboardOverview
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UScoreboardOverview_C::ExecuteUbergraph_ScoreboardOverview(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(77050);

	UScoreboardOverview_C_ExecuteUbergraph_ScoreboardOverview_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function ScoreboardOverview.ScoreboardOverview_C.OnTeamsChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UScoreboardOverview_C::OnTeamsChanged__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(77049);

	UScoreboardOverview_C_OnTeamsChanged__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
