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

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.ToggleContextBar
struct UWBP_CustomGameLobby_C_ToggleContextBar_Params
{
	bool                                               bShouldShow;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.UpdateSpectateState
struct UWBP_CustomGameLobby_C_UpdateSpectateState_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupSpectateButtonNavigation
struct UWBP_CustomGameLobby_C_SetupSpectateButtonNavigation_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupStartButtonNavigation
struct UWBP_CustomGameLobby_C_SetupStartButtonNavigation_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnKeyUp
struct UWBP_CustomGameLobby_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.TogglePlayerCardFor
struct UWBP_CustomGameLobby_C_TogglePlayerCardFor_Params
{
	class UKSPlayerInfo*                               playerinfo;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_CustomLobbyPlayer_C*                    PlayerWidget;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleVoiceMemberUpdate
struct UWBP_CustomGameLobby_C_HandleVoiceMemberUpdate_Params
{
	struct FString                                     AccountId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               bIsTalking;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsMuted;                                                  // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleVoiceMemberRemoved
struct UWBP_CustomGameLobby_C_HandleVoiceMemberRemoved_Params
{
	struct FString                                     AccountId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleVoiceMemberAdded
struct UWBP_CustomGameLobby_C_HandleVoiceMemberAdded_Params
{
	struct FString                                     AccountId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetMemberWidgetForVoice
struct UWBP_CustomGameLobby_C_GetMemberWidgetForVoice_Params
{
	struct FString                                     VoiceId;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWBP_CustomLobbyPlayer_C*                    Widget;                                                    // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupExistingPlayers
struct UWBP_CustomGameLobby_C_SetupExistingPlayers_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupQueueFactoryEvents
struct UWBP_CustomGameLobby_C_SetupQueueFactoryEvents_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnQueueStateUpdated
struct UWBP_CustomGameLobby_C_OnQueueStateUpdated_Params
{
	PlatformUMG_EPUMG_MatchStatus                      MatchStatus;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetTeamButtons
struct UWBP_CustomGameLobby_C_GetTeamButtons_Params
{
	TArray<class UKSWidget*>                           TeamButtons;                                               // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_Close
struct UWBP_CustomGameLobby_C_MassInvite_Close_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_Select
struct UWBP_CustomGameLobby_C_MassInvite_Select_Params
{
	class UKSPlayerInfo*                               playerinfo;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	KillstreakUINew_EKSInviteSelectResult              ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_IsSelected
struct UWBP_CustomGameLobby_C_MassInvite_IsSelected_Params
{
	class UKSPlayerInfo*                               playerinfo;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_ShouldShowPlayer
struct UWBP_CustomGameLobby_C_MassInvite_ShouldShowPlayer_Params
{
	class UKSPlayerInfo*                               playerinfo;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnReceiveHostName
struct UWBP_CustomGameLobby_C_OnReceiveHostName_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.UpdateQueueState
struct UWBP_CustomGameLobby_C_UpdateQueueState_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.FinalizeLog
struct UWBP_CustomGameLobby_C_FinalizeLog_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UPUMG_PlayerInfo*                            playerinfo;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.LogPermissionChange
struct UWBP_CustomGameLobby_C_LogPermissionChange_Params
{
	class UPUMG_PlayerInfo*                            playerinfo;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	PlatformUMG_EPUMG_CustomMatchPermission            NewPermissions;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	PlatformUMG_EPUMG_CustomMatchPermission            OldPermissions;                                            // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleReceivePlayerName
struct UWBP_CustomGameLobby_C_HandleReceivePlayerName_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetTeamName
struct UWBP_CustomGameLobby_C_GetTeamName_Params
{
	struct FPUMG_CustomMatchMember                     PUMG_CustomMatchMember;                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FText                                       ReturnValue;                                               // 0x0010(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.AddLog
struct UWBP_CustomGameLobby_C_AddLog_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UPUMG_PlayerInfo*                            playerinfo;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.RemoveMember
struct UWBP_CustomGameLobby_C_RemoveMember_Params
{
	struct FPUMG_CustomMatchMember                     FormerMember;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	bool                                               Removed;                                                   // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.AddMember
struct UWBP_CustomGameLobby_C_AddMember_Params
{
	struct FPUMG_CustomMatchMember                     MatchMember;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	bool                                               Added;                                                     // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.NavigateBack
struct UWBP_CustomGameLobby_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.TEST_InviteNextAvailablePlayer
struct UWBP_CustomGameLobby_C_TEST_InviteNextAvailablePlayer_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupTeamNavigation
struct UWBP_CustomGameLobby_C_SetupTeamNavigation_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.UpdateWidgetsWithData
struct UWBP_CustomGameLobby_C_UpdateWidgetsWithData_Params
{
	struct FFBP_CustomMatchTeam                        Team;                                                      // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnMemberUpdate
struct UWBP_CustomGameLobby_C_OnMemberUpdate_Params
{
	struct FPUMG_CustomMatchMember                     MatchMember;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FPUMG_CustomMatchMember                     PreviousData;                                              // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnMemberRemoved
struct UWBP_CustomGameLobby_C_OnMemberRemoved_Params
{
	struct FPUMG_CustomMatchMember                     FormerMember;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnMemberAdded
struct UWBP_CustomGameLobby_C_OnMemberAdded_Params
{
	struct FPUMG_CustomMatchMember                     MatchMember;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnQueueUpdate
struct UWBP_CustomGameLobby_C_OnQueueUpdate_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetQueueDataFactory
struct UWBP_CustomGameLobby_C_GetQueueDataFactory_Params
{
	class UKSQueueDataFactory*                         DataFactory;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.PopulateTeamRenderers
struct UWBP_CustomGameLobby_C_PopulateTeamRenderers_Params
{
	class UPanelWidget*                                TeamPanel;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TeamId;                                                    // 0x0008(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ELaterality_ELaterality>               ControlsSide;                                              // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumPlayers;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupRenderers
struct UWBP_CustomGameLobby_C_SetupRenderers_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupDisplayElements
struct UWBP_CustomGameLobby_C_SetupDisplayElements_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.UpdateQueueInfo
struct UWBP_CustomGameLobby_C_UpdateQueueInfo_Params
{
	struct FClientQueueInfo                            QueueInfo;                                                 // 0x0000(0x00C8)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.PreConstruct
struct UWBP_CustomGameLobby_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.Construct
struct UWBP_CustomGameLobby_C_Construct_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnInitialized
struct UWBP_CustomGameLobby_C_OnInitialized_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleDataChange
struct UWBP_CustomGameLobby_C_HandleDataChange_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.InvalidateData
struct UWBP_CustomGameLobby_C_InvalidateData_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.InitializeWidgetNavigation
struct UWBP_CustomGameLobby_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandlePlayerClicked
struct UWBP_CustomGameLobby_C_HandlePlayerClicked_Params
{
	class UKSPlayerInfo*                               playerinfo;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSWidget*                                   Widget;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleEmptyClicked
struct UWBP_CustomGameLobby_C_HandleEmptyClicked_Params
{
	class UKSWidget*                                   Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandlePlayerKick
struct UWBP_CustomGameLobby_C_HandlePlayerKick_Params
{
	class UKSPlayerInfo*                               playerinfo;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSWidget*                                   Widget;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandlePlayerSwap
struct UWBP_CustomGameLobby_C_HandlePlayerSwap_Params
{
	class UKSPlayerInfo*                               playerinfo;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSWidget*                                   Widget;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnClickBack
struct UWBP_CustomGameLobby_C_OnClickBack_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnShown
struct UWBP_CustomGameLobby_C_OnShown_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWBP_CustomGameLobby_C_BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnQueueLeft
struct UWBP_CustomGameLobby_C_OnQueueLeft_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__Blocker_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UWBP_CustomGameLobby_C_BndEvt__Blocker_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_2_OnVoiceParticipantAdded__DelegateSignature
struct UWBP_CustomGameLobby_C_BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_2_OnVoiceParticipantAdded__DelegateSignature_Params
{
	struct FString                                     AccountId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_3_OnVoiceParticipantRemoved__DelegateSignature
struct UWBP_CustomGameLobby_C_BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_3_OnVoiceParticipantRemoved__DelegateSignature_Params
{
	struct FString                                     AccountId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_4_OnVoiceParticipantUpdated__DelegateSignature
struct UWBP_CustomGameLobby_C_BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_4_OnVoiceParticipantUpdated__DelegateSignature_Params
{
	struct FString                                     AccountId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               bIsTalking;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsMuted;                                                  // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__SpectateButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
struct UWBP_CustomGameLobby_C_BndEvt__SpectateButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_9_OnMenuStart__DelegateSignature
struct UWBP_CustomGameLobby_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_9_OnMenuStart__DelegateSignature_Params
{
	class UWidget*                                     FocusWidget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_10_OnReadyForNavigation__DelegateSignature
struct UWBP_CustomGameLobby_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_10_OnReadyForNavigation__DelegateSignature_Params
{
	TArray<class UWidget*>                             NavWidgets;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	class UWidget*                                     Default_Widget;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_11_OnMenuHidden__DelegateSignature
struct UWBP_CustomGameLobby_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_11_OnMenuHidden__DelegateSignature_Params
{
};

// Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.ExecuteUbergraph_WBP_CustomGameLobby
struct UWBP_CustomGameLobby_C_ExecuteUbergraph_WBP_CustomGameLobby_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
