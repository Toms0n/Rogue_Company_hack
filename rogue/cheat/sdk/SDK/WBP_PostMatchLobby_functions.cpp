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
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Start Milestones Completed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PostMatchLobby_C::Start_Milestones_Completed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90044);

	UWBP_PostMatchLobby_C_Start_Milestones_Completed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Initialize Milestones Completed
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayerRewardsSummary                       Rewards_Summary                                            (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_PostMatchLobby_C::Initialize_Milestones_Completed(const struct FPlayerRewardsSummary& Rewards_Summary)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90043);

	UWBP_PostMatchLobby_C_Initialize_Milestones_Completed_Params params {};
	params.Rewards_Summary = Rewards_Summary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Get Relevant Current Mastery Xp Count
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FRewardProgress                             Reward_Progress                                            (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UKSActivityInstance*                         ActivityInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PostMatchLobby_C::Get_Relevant_Current_Mastery_Xp_Count(const struct FRewardProgress& Reward_Progress, class UKSActivityInstance* ActivityInstance, int* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90042);

	UWBP_PostMatchLobby_C_Get_Relevant_Current_Mastery_Xp_Count_Params params {};
	params.Reward_Progress = Reward_Progress;
	params.ActivityInstance = ActivityInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Start Weapon Mastery Queue
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PostMatchLobby_C::Start_Weapon_Mastery_Queue()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90041);

	UWBP_PostMatchLobby_C_Start_Weapon_Mastery_Queue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Initialize Weapon Mastery Queue
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayerRewardsSummary                       Rewards_Summary                                            (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_PostMatchLobby_C::Initialize_Weapon_Mastery_Queue(const struct FPlayerRewardsSummary& Rewards_Summary)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90040);

	UWBP_PostMatchLobby_C_Initialize_Weapon_Mastery_Queue_Params params {};
	params.Rewards_Summary = Rewards_Summary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.UpdateSonyMatchFeedbackPrompt
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PostMatchLobby_C::UpdateSonyMatchFeedbackPrompt()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90039);

	UWBP_PostMatchLobby_C_UpdateSonyMatchFeedbackPrompt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.ProvideSonyMatchFeedback
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PostMatchLobby_C::ProvideSonyMatchFeedback()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90038);

	UWBP_PostMatchLobby_C_ProvideSonyMatchFeedback_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetCurrentFocus
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                CurrentFocus                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PostMatchLobby_C::GetCurrentFocus(int* CurrentFocus)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90037);

	UWBP_PostMatchLobby_C_GetCurrentFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentFocus != nullptr)
		*CurrentFocus = params.CurrentFocus;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetRankedPopupFocusGroup
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                FocusGroup                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PostMatchLobby_C::GetRankedPopupFocusGroup(int* FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90036);

	UWBP_PostMatchLobby_C_GetRankedPopupFocusGroup_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FocusGroup != nullptr)
		*FocusGroup = params.FocusGroup;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.PlayProgressionAnimation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PostMatchLobby_C::PlayProgressionAnimation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90035);

	UWBP_PostMatchLobby_C_PlayProgressionAnimation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.ShowAwardsEarned
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PostMatchLobby_C::ShowAwardsEarned()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90034);

	UWBP_PostMatchLobby_C_ShowAwardsEarned_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetPreviousMatchPlayerIds
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<int64_t>                                    PlayerIds                                                  (Parm, OutParm, HasGetValueTypeHash)
void UWBP_PostMatchLobby_C::GetPreviousMatchPlayerIds(TArray<int64_t>* PlayerIds)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90033);

	UWBP_PostMatchLobby_C_GetPreviousMatchPlayerIds_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerIds != nullptr)
		*PlayerIds = params.PlayerIds;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.TryUpdatePlayAgainPrompt
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PostMatchLobby_C::TryUpdatePlayAgainPrompt()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90032);

	UWBP_PostMatchLobby_C_TryUpdatePlayAgainPrompt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetCurrentPrompts
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PostMatchLobby_C::SetCurrentPrompts()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90031);

	UWBP_PostMatchLobby_C_SetCurrentPrompts_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.TryMakeTabArray
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PostMatchLobby_C::TryMakeTabArray()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90030);

	UWBP_PostMatchLobby_C_TryMakeTabArray_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetupReportMenuNav
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PostMatchLobby_C::SetupReportMenuNav()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90029);

	UWBP_PostMatchLobby_C_SetupReportMenuNav_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetReportMenuFocusGroup
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                FocusGroup                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PostMatchLobby_C::GetReportMenuFocusGroup(int* FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90028);

	UWBP_PostMatchLobby_C_GetReportMenuFocusGroup_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FocusGroup != nullptr)
		*FocusGroup = params.FocusGroup;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.ShowContextMenuForPlayer
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int64_t                                            PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PostMatchLobby_C::ShowContextMenuForPlayer(class UWidget* Widget, int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90027);

	UWBP_PostMatchLobby_C_ShowContextMenuForPlayer_Params params {};
	params.Widget = Widget;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetContextMenuFocusGroup
//		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                GroupIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PostMatchLobby_C::GetContextMenuFocusGroup(int* GroupIndex)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90026);

	UWBP_PostMatchLobby_C_GetContextMenuFocusGroup_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GroupIndex != nullptr)
		*GroupIndex = params.GroupIndex;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandleScoreboardChange
//		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PostMatchLobby_C::HandleScoreboardChange()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90025);

	UWBP_PostMatchLobby_C_HandleScoreboardChange_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetScoreboardFocusGroup
//		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                GroupIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PostMatchLobby_C::GetScoreboardFocusGroup(int* GroupIndex)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90024);

	UWBP_PostMatchLobby_C_GetScoreboardFocusGroup_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GroupIndex != nullptr)
		*GroupIndex = params.GroupIndex;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetupContextMenuNav
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UWidget*>                             NavWidgets                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
//		class UWidget*                                     DefaultFocus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PostMatchLobby_C::SetupContextMenuNav(TArray<class UWidget*>* NavWidgets, class UWidget* DefaultFocus)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90023);

	UWBP_PostMatchLobby_C_SetupContextMenuNav_Params params {};
	params.DefaultFocus = DefaultFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NavWidgets != nullptr)
		*NavWidgets = params.NavWidgets;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetupFocusGroups
//		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PostMatchLobby_C::SetupFocusGroups()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90022);

	UWBP_PostMatchLobby_C_SetupFocusGroups_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.OnKeyUp
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_PostMatchLobby_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90021);

	UWBP_PostMatchLobby_C_OnKeyUp_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetGamepadPrompt
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PostMatchLobby_C::SetGamepadPrompt()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90020);

	UWBP_PostMatchLobby_C_SetGamepadPrompt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetNavButtons
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<class UWBP_PostMatchNavButton_C*>           NavButtons                                                 (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_PostMatchLobby_C::GetNavButtons(TArray<class UWBP_PostMatchNavButton_C*>* NavButtons)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90019);

	UWBP_PostMatchLobby_C_GetNavButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NavButtons != nullptr)
		*NavButtons = params.NavButtons;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.FormatPlayedTime
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              timePlayed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Result                                                     (Parm, OutParm)
void UWBP_PostMatchLobby_C::FormatPlayedTime(float timePlayed, struct FText* Result)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90018);

	UWBP_PostMatchLobby_C_FormatPlayedTime_Params params {};
	params.timePlayed = timePlayed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.PopulateTimePlayed
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PostMatchLobby_C::PopulateTimePlayed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90017);

	UWBP_PostMatchLobby_C_PopulateTimePlayed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_PostMatchLobby_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90016);

	UWBP_PostMatchLobby_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetVictoryDefeat
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FScoreboardStats                            ScoreboardStats                                            (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_PostMatchLobby_C::SetVictoryDefeat(const struct FScoreboardStats& ScoreboardStats)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90015);

	UWBP_PostMatchLobby_C_SetVictoryDefeat_Params params {};
	params.ScoreboardStats = ScoreboardStats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.DetermineMatchResult
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FScoreboardStats                            ScoreboardStats                                            (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               DidWin                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PostMatchLobby_C::DetermineMatchResult(const struct FScoreboardStats& ScoreboardStats, bool* DidWin)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90014);

	UWBP_PostMatchLobby_C_DetermineMatchResult_Params params {};
	params.ScoreboardStats = ScoreboardStats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DidWin != nullptr)
		*DidWin = params.DidWin;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.PopulateScoreboard
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FScoreboardStats                            ScoreboardStats                                            (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_PostMatchLobby_C::PopulateScoreboard(const struct FScoreboardStats& ScoreboardStats)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90013);

	UWBP_PostMatchLobby_C_PopulateScoreboard_Params params {};
	params.ScoreboardStats = ScoreboardStats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandleTabClicked
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_PostMatchNavButton_C*                   Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PostMatchLobby_C::HandleTabClicked(class UWBP_PostMatchNavButton_C* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90012);

	UWBP_PostMatchLobby_C_HandleTabClicked_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.CycleTab
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Reverse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PostMatchLobby_C::CycleTab(bool Reverse)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90011);

	UWBP_PostMatchLobby_C_CycleTab_Params params {};
	params.Reverse = Reverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_PostMatchLobby_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90010);

	UWBP_PostMatchLobby_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PostMatchLobby_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90009);

	UWBP_PostMatchLobby_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_PostMatchLobby_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90008);

	UWBP_PostMatchLobby_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_PostMatchLobby_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90007);

	UWBP_PostMatchLobby_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.PopulatePostMatch
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayerRewardsSummary                       PlayerSummary                                              (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FScoreboardStats                            ScoreboardStats                                            (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_PostMatchLobby_C::PopulatePostMatch(const struct FPlayerRewardsSummary& PlayerSummary, const struct FScoreboardStats& ScoreboardStats)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90006);

	UWBP_PostMatchLobby_C_PopulatePostMatch_Params params {};
	params.PlayerSummary = PlayerSummary;
	params.ScoreboardStats = ScoreboardStats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandleOnShowAnimationFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PostMatchLobby_C::HandleOnShowAnimationFinished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90005);

	UWBP_PostMatchLobby_C_HandleOnShowAnimationFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandleOnPlayerDataChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PostMatchLobby_C::HandleOnPlayerDataChanged()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90004);

	UWBP_PostMatchLobby_C_HandleOnPlayerDataChanged_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandleInputStateChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PostMatchLobby_C::HandleInputStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90003);

	UWBP_PostMatchLobby_C_HandleInputStateChanged_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.StartShowSequence
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FName                                       FromRoute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       ToRoute                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PostMatchLobby_C::StartShowSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90002);

	UWBP_PostMatchLobby_C_StartShowSequence_Params params {};
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.StartHideSequence
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FName                                       FromRoute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       ToRoute                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PostMatchLobby_C::StartHideSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90001);

	UWBP_PostMatchLobby_C_StartHideSequence_Params params {};
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.OnHide
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_PostMatchLobby_C::OnHide()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(90000);

	UWBP_PostMatchLobby_C_OnHide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.OnBackButtonClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PostMatchLobby_C::OnBackButtonClicked()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89999);

	UWBP_PostMatchLobby_C_OnBackButtonClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PostMatchLobby_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89998);

	UWBP_PostMatchLobby_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Handle Play Again
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PostMatchLobby_C::Handle_Play_Again()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89997);

	UWBP_PostMatchLobby_C_Handle_Play_Again_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.JoinQueue
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PostMatchLobby_C::JoinQueue()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89996);

	UWBP_PostMatchLobby_C_JoinQueue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Handle Party Data Updated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PostMatchLobby_C::Handle_Party_Data_Updated()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89995);

	UWBP_PostMatchLobby_C_Handle_Party_Data_Updated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Handle Queue Status Change
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		PlatformUMG_EPUMG_MatchStatus                      MatchStatus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PostMatchLobby_C::Handle_Queue_Status_Change(PlatformUMG_EPUMG_MatchStatus MatchStatus)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89994);

	UWBP_PostMatchLobby_C_Handle_Queue_Status_Change_Params params {};
	params.MatchStatus = MatchStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ScoreboardOverview_K2Node_ComponentBoundEvent_3_OnTeamsChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_PostMatchLobby_C::BndEvt__ScoreboardOverview_K2Node_ComponentBoundEvent_3_OnTeamsChanged__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89993);

	UWBP_PostMatchLobby_C_BndEvt__ScoreboardOverview_K2Node_ComponentBoundEvent_3_OnTeamsChanged__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandlePlayerClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int64_t                                            PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PostMatchLobby_C::HandlePlayerClicked(class UWidget* Widget, int64_t PlayerId)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89992);

	UWBP_PostMatchLobby_C_HandlePlayerClicked_Params params {};
	params.Widget = Widget;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ReportMenu_K2Node_ComponentBoundEvent_5_OnPlayerReported__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int64_t                                            PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PostMatchLobby_C::BndEvt__ReportMenu_K2Node_ComponentBoundEvent_5_OnPlayerReported__DelegateSignature(int64_t PlayerId, bool Success)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89991);

	UWBP_PostMatchLobby_C_BndEvt__ReportMenu_K2Node_ComponentBoundEvent_5_OnPlayerReported__DelegateSignature_Params params {};
	params.PlayerId = PlayerId;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__Blocker_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_PostMatchLobby_C::BndEvt__Blocker_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89990);

	UWBP_PostMatchLobby_C_BndEvt__Blocker_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_7_OnReportPlayer__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UKSPlayerInfo*                               CurrentPlayerInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PostMatchLobby_C::BndEvt__ContextMenu_K2Node_ComponentBoundEvent_7_OnReportPlayer__DelegateSignature(class UKSPlayerInfo* CurrentPlayerInfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89989);

	UWBP_PostMatchLobby_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_7_OnReportPlayer__DelegateSignature_Params params {};
	params.CurrentPlayerInfo = CurrentPlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_8_OnReadyForNavigation__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		TArray<class UWidget*>                             NavWidgets                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
//		class UWidget*                                     Default_Widget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PostMatchLobby_C::BndEvt__ContextMenu_K2Node_ComponentBoundEvent_8_OnReadyForNavigation__DelegateSignature(TArray<class UWidget*>* NavWidgets, class UWidget* Default_Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89988);

	UWBP_PostMatchLobby_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_8_OnReadyForNavigation__DelegateSignature_Params params {};
	params.Default_Widget = Default_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NavWidgets != nullptr)
		*NavWidgets = params.NavWidgets;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_9_OnMenuHidden__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_PostMatchLobby_C::BndEvt__ContextMenu_K2Node_ComponentBoundEvent_9_OnMenuHidden__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89987);

	UWBP_PostMatchLobby_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_9_OnMenuHidden__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_10_OnMenuStart__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     FocusWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PostMatchLobby_C::BndEvt__ContextMenu_K2Node_ComponentBoundEvent_10_OnMenuStart__DelegateSignature(class UWidget* FocusWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89986);

	UWBP_PostMatchLobby_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_10_OnMenuStart__DelegateSignature_Params params {};
	params.FocusWidget = FocusWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Handle View Route Changed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       CurrentRoute                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       PreviousRoute                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		PlatformUMG_EViewManagerLayer                      Layer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PostMatchLobby_C::Handle_View_Route_Changed(const struct FName& CurrentRoute, const struct FName& PreviousRoute, PlatformUMG_EViewManagerLayer Layer)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89985);

	UWBP_PostMatchLobby_C_Handle_View_Route_Changed_Params params {};
	params.CurrentRoute = CurrentRoute;
	params.PreviousRoute = PreviousRoute;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.ExecuteUbergraph_WBP_PostMatchLobby
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PostMatchLobby_C::ExecuteUbergraph_WBP_PostMatchLobby(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89984);

	UWBP_PostMatchLobby_C_ExecuteUbergraph_WBP_PostMatchLobby_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
