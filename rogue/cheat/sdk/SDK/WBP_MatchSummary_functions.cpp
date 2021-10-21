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
//		Name   -> Function WBP_MatchSummary.WBP_MatchSummary_C.PopulatePlayerStats
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayerEntryStats                           PlayerEntryStats                                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_MatchSummary_C::PopulatePlayerStats(const struct FPlayerEntryStats& PlayerEntryStats)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71320);

	UWBP_MatchSummary_C_PopulatePlayerStats_Params params {};
	params.PlayerEntryStats = PlayerEntryStats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_MatchSummary.WBP_MatchSummary_C.PopulateMatchSummary
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayerRewardsSummary                       PlayerRewards                                              (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FScoreboardStats                            ScoreboardStats                                            (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_MatchSummary_C::PopulateMatchSummary(const struct FPlayerRewardsSummary& PlayerRewards, const struct FScoreboardStats& ScoreboardStats)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71319);

	UWBP_MatchSummary_C_PopulateMatchSummary_Params params {};
	params.PlayerRewards = PlayerRewards;
	params.ScoreboardStats = ScoreboardStats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_MatchSummary.WBP_MatchSummary_C.PopulateBestStats
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FPlayerMatchStatInfo>                BestStats                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UWBP_MatchSummary_C::PopulateBestStats(TArray<struct FPlayerMatchStatInfo>* BestStats)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71318);

	UWBP_MatchSummary_C_PopulateBestStats_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BestStats != nullptr)
		*BestStats = params.BestStats;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_MatchSummary.WBP_MatchSummary_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MatchSummary_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71317);

	UWBP_MatchSummary_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_MatchSummary.WBP_MatchSummary_C.ExecuteUbergraph_WBP_MatchSummary
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MatchSummary_C::ExecuteUbergraph_WBP_MatchSummary(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71316);

	UWBP_MatchSummary_C_ExecuteUbergraph_WBP_MatchSummary_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
