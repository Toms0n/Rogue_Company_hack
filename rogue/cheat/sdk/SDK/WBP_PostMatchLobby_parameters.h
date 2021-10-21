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

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Start Milestones Completed
struct UWBP_PostMatchLobby_C_Start_Milestones_Completed_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Initialize Milestones Completed
struct UWBP_PostMatchLobby_C_Initialize_Milestones_Completed_Params
{
	struct FPlayerRewardsSummary                       Rewards_Summary;                                           // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Get Relevant Current Mastery Xp Count
struct UWBP_PostMatchLobby_C_Get_Relevant_Current_Mastery_Xp_Count_Params
{
	struct FRewardProgress                             Reward_Progress;                                           // 0x0000(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UKSActivityInstance*                         ActivityInstance;                                          // 0x0090(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Return_Value;                                              // 0x0098(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Start Weapon Mastery Queue
struct UWBP_PostMatchLobby_C_Start_Weapon_Mastery_Queue_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Initialize Weapon Mastery Queue
struct UWBP_PostMatchLobby_C_Initialize_Weapon_Mastery_Queue_Params
{
	struct FPlayerRewardsSummary                       Rewards_Summary;                                           // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.UpdateSonyMatchFeedbackPrompt
struct UWBP_PostMatchLobby_C_UpdateSonyMatchFeedbackPrompt_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.ProvideSonyMatchFeedback
struct UWBP_PostMatchLobby_C_ProvideSonyMatchFeedback_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetCurrentFocus
struct UWBP_PostMatchLobby_C_GetCurrentFocus_Params
{
	int                                                CurrentFocus;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetRankedPopupFocusGroup
struct UWBP_PostMatchLobby_C_GetRankedPopupFocusGroup_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.PlayProgressionAnimation
struct UWBP_PostMatchLobby_C_PlayProgressionAnimation_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.ShowAwardsEarned
struct UWBP_PostMatchLobby_C_ShowAwardsEarned_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetPreviousMatchPlayerIds
struct UWBP_PostMatchLobby_C_GetPreviousMatchPlayerIds_Params
{
	TArray<int64_t>                                    PlayerIds;                                                 // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.TryUpdatePlayAgainPrompt
struct UWBP_PostMatchLobby_C_TryUpdatePlayAgainPrompt_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetCurrentPrompts
struct UWBP_PostMatchLobby_C_SetCurrentPrompts_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.TryMakeTabArray
struct UWBP_PostMatchLobby_C_TryMakeTabArray_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetupReportMenuNav
struct UWBP_PostMatchLobby_C_SetupReportMenuNav_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetReportMenuFocusGroup
struct UWBP_PostMatchLobby_C_GetReportMenuFocusGroup_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.ShowContextMenuForPlayer
struct UWBP_PostMatchLobby_C_ShowContextMenuForPlayer_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64_t                                            PlayerId;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetContextMenuFocusGroup
struct UWBP_PostMatchLobby_C_GetContextMenuFocusGroup_Params
{
	int                                                GroupIndex;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandleScoreboardChange
struct UWBP_PostMatchLobby_C_HandleScoreboardChange_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetScoreboardFocusGroup
struct UWBP_PostMatchLobby_C_GetScoreboardFocusGroup_Params
{
	int                                                GroupIndex;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetupContextMenuNav
struct UWBP_PostMatchLobby_C_SetupContextMenuNav_Params
{
	TArray<class UWidget*>                             NavWidgets;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	class UWidget*                                     DefaultFocus;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetupFocusGroups
struct UWBP_PostMatchLobby_C_SetupFocusGroups_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.OnKeyUp
struct UWBP_PostMatchLobby_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetGamepadPrompt
struct UWBP_PostMatchLobby_C_SetGamepadPrompt_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetNavButtons
struct UWBP_PostMatchLobby_C_GetNavButtons_Params
{
	TArray<class UWBP_PostMatchNavButton_C*>           NavButtons;                                                // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.FormatPlayedTime
struct UWBP_PostMatchLobby_C_FormatPlayedTime_Params
{
	float                                              timePlayed;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Result;                                                    // 0x0008(0x0018)  (Parm, OutParm)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.PopulateTimePlayed
struct UWBP_PostMatchLobby_C_PopulateTimePlayed_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.NavigateBack
struct UWBP_PostMatchLobby_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetVictoryDefeat
struct UWBP_PostMatchLobby_C_SetVictoryDefeat_Params
{
	struct FScoreboardStats                            ScoreboardStats;                                           // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.DetermineMatchResult
struct UWBP_PostMatchLobby_C_DetermineMatchResult_Params
{
	struct FScoreboardStats                            ScoreboardStats;                                           // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               DidWin;                                                    // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.PopulateScoreboard
struct UWBP_PostMatchLobby_C_PopulateScoreboard_Params
{
	struct FScoreboardStats                            ScoreboardStats;                                           // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandleTabClicked
struct UWBP_PostMatchLobby_C_HandleTabClicked_Params
{
	class UWBP_PostMatchNavButton_C*                   Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.CycleTab
struct UWBP_PostMatchLobby_C_CycleTab_Params
{
	bool                                               Reverse;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Construct
struct UWBP_PostMatchLobby_C_Construct_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.InitializeWidget
struct UWBP_PostMatchLobby_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.InitializeWidgetNavigation
struct UWBP_PostMatchLobby_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.OnShown
struct UWBP_PostMatchLobby_C_OnShown_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.PopulatePostMatch
struct UWBP_PostMatchLobby_C_PopulatePostMatch_Params
{
	struct FPlayerRewardsSummary                       PlayerSummary;                                             // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FScoreboardStats                            ScoreboardStats;                                           // 0x0060(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandleOnShowAnimationFinished
struct UWBP_PostMatchLobby_C_HandleOnShowAnimationFinished_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandleOnPlayerDataChanged
struct UWBP_PostMatchLobby_C_HandleOnPlayerDataChanged_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandleInputStateChanged
struct UWBP_PostMatchLobby_C_HandleInputStateChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.StartShowSequence
struct UWBP_PostMatchLobby_C_StartShowSequence_Params
{
	struct FName                                       FromRoute;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ToRoute;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.StartHideSequence
struct UWBP_PostMatchLobby_C_StartHideSequence_Params
{
	struct FName                                       FromRoute;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ToRoute;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.OnHide
struct UWBP_PostMatchLobby_C_OnHide_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.OnBackButtonClicked
struct UWBP_PostMatchLobby_C_OnBackButtonClicked_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.PreConstruct
struct UWBP_PostMatchLobby_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Handle Play Again
struct UWBP_PostMatchLobby_C_Handle_Play_Again_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.JoinQueue
struct UWBP_PostMatchLobby_C_JoinQueue_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Handle Party Data Updated
struct UWBP_PostMatchLobby_C_Handle_Party_Data_Updated_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Handle Queue Status Change
struct UWBP_PostMatchLobby_C_Handle_Queue_Status_Change_Params
{
	PlatformUMG_EPUMG_MatchStatus                      MatchStatus;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ScoreboardOverview_K2Node_ComponentBoundEvent_3_OnTeamsChanged__DelegateSignature
struct UWBP_PostMatchLobby_C_BndEvt__ScoreboardOverview_K2Node_ComponentBoundEvent_3_OnTeamsChanged__DelegateSignature_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandlePlayerClicked
struct UWBP_PostMatchLobby_C_HandlePlayerClicked_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64_t                                            PlayerId;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ReportMenu_K2Node_ComponentBoundEvent_5_OnPlayerReported__DelegateSignature
struct UWBP_PostMatchLobby_C_BndEvt__ReportMenu_K2Node_ComponentBoundEvent_5_OnPlayerReported__DelegateSignature_Params
{
	int64_t                                            PlayerId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__Blocker_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UWBP_PostMatchLobby_C_BndEvt__Blocker_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_7_OnReportPlayer__DelegateSignature
struct UWBP_PostMatchLobby_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_7_OnReportPlayer__DelegateSignature_Params
{
	class UKSPlayerInfo*                               CurrentPlayerInfo;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_8_OnReadyForNavigation__DelegateSignature
struct UWBP_PostMatchLobby_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_8_OnReadyForNavigation__DelegateSignature_Params
{
	TArray<class UWidget*>                             NavWidgets;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	class UWidget*                                     Default_Widget;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_9_OnMenuHidden__DelegateSignature
struct UWBP_PostMatchLobby_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_9_OnMenuHidden__DelegateSignature_Params
{
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_10_OnMenuStart__DelegateSignature
struct UWBP_PostMatchLobby_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_10_OnMenuStart__DelegateSignature_Params
{
	class UWidget*                                     FocusWidget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Handle View Route Changed
struct UWBP_PostMatchLobby_C_Handle_View_Route_Changed_Params
{
	struct FName                                       CurrentRoute;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       PreviousRoute;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	PlatformUMG_EViewManagerLayer                      Layer;                                                     // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.ExecuteUbergraph_WBP_PostMatchLobby
struct UWBP_PostMatchLobby_C_ExecuteUbergraph_WBP_PostMatchLobby_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
