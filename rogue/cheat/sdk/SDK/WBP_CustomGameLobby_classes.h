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
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_CustomGameLobby.WBP_CustomGameLobby_C
// 0x0280 (FullSize[0x0798] - InheritedSize[0x0518])
class UWBP_CustomGameLobby_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_CustomGameActionLog_C*                  ActionLog;                                                 // 0x0520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Blocker;                                                   // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerContextMenu_C*                    ContextMenu;                                               // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Subtitle_C*                             GameName;                                                  // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image;                                                     // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_2;                                                   // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_112;                                                 // 0x0550(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_379;                                                 // 0x0558(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_498;                                                 // 0x0560(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StandardButtonLarge_C*                  JoiningButton;                                             // 0x0568(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ThrobberHorizontal_C*                   Loading;                                                   // 0x0570(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    LoadingState;                                              // 0x0578(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                LoadingWrapper;                                            // 0x0580(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              LobbyState;                                                // 0x0588(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             LobbySwitcher;                                             // 0x0590(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StandardButtonLarge_C*                  SpectateButton;                                            // 0x0598(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                Spectator;                                                 // 0x05A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                SpectatorContainer;                                        // 0x05A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StandardButtonLarge_C*                  StartButton;                                               // 0x05B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             StartGameSwitcher;                                         // 0x05B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                TeamA;                                                     // 0x05C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                TeamB;                                                     // 0x05C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Header1_C*                              Title;                                                     // 0x05D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VoiceActivityContainer_C*               VoiceActivity;                                             // 0x05D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      WarningIcon;                                               // 0x05E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  WarningMessage;                                            // 0x05E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              WarningWrapper;                                            // 0x05F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GameModeInfoPanel_Lobby_C*              WBP_GameModeInfoPanel_Lobby;                               // 0x05F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<int, struct FFBP_CustomMatchTeam>             TeamDataMap;                                               // 0x0600(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FTimerHandle                                DataChangeTimer;                                           // 0x0650(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FText                                       FmtAdded;                                                  // 0x0658(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       FmtRemoved;                                                // 0x0670(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       FmtPromoted;                                               // 0x0688(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       FmtDemoted;                                                // 0x06A0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       FmtInvited;                                                // 0x06B8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       FmtMovedTeam;                                              // 0x06D0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TMap<class UKSPlayerInfo*, struct FFBP_CustomPendingLogEntry> PendingLogs;                                               // 0x06E8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       FmtLobbyCreated;                                           // 0x0738(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<class UPUMG_PlayerInfo*>                    TEMP_Invites;                                              // 0x0750(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FText                                       FmtGameName;                                               // 0x0760(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FName                                       RouteName;                                                 // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                               ShowCustomGameLobbySFX;                                    // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                FocusGroup_TeamsAndButtons;                                // 0x0788(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FocusGroup_ContextMenu;                                    // 0x078C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               MembersPopulated;                                          // 0x0790(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GI2U[0x3];                                     // 0x0791(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxSpectators;                                             // 0x0794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(89076);
		return ptr;
	}



	void ToggleContextBar(bool bShouldShow);
	void UpdateSpectateState();
	void SetupSpectateButtonNavigation(int FocusGroup);
	void SetupStartButtonNavigation(int FocusGroup);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void TogglePlayerCardFor(class UKSPlayerInfo* playerinfo, class UWBP_CustomLobbyPlayer_C* PlayerWidget);
	void HandleVoiceMemberUpdate(const struct FString& AccountId, bool bIsTalking, bool bIsMuted);
	void HandleVoiceMemberRemoved(const struct FString& AccountId);
	void HandleVoiceMemberAdded(const struct FString& AccountId);
	void GetMemberWidgetForVoice(const struct FString& VoiceId, class UWBP_CustomLobbyPlayer_C** Widget);
	void SetupExistingPlayers();
	void SetupQueueFactoryEvents();
	void OnQueueStateUpdated(PlatformUMG_EPUMG_MatchStatus MatchStatus);
	void GetTeamButtons(TArray<class UKSWidget*>* TeamButtons);
	void MassInvite_Close();
	KillstreakUINew_EKSInviteSelectResult MassInvite_Select(class UKSPlayerInfo* playerinfo);
	bool MassInvite_IsSelected(class UKSPlayerInfo* playerinfo);
	bool MassInvite_ShouldShowPlayer(class UKSPlayerInfo* playerinfo);
	void OnReceiveHostName();
	void UpdateQueueState();
	void FinalizeLog(const struct FText& Text, class UPUMG_PlayerInfo* playerinfo);
	void LogPermissionChange(class UPUMG_PlayerInfo* playerinfo, PlatformUMG_EPUMG_CustomMatchPermission NewPermissions, PlatformUMG_EPUMG_CustomMatchPermission OldPermissions);
	void HandleReceivePlayerName();
	struct FText GetTeamName(const struct FPUMG_CustomMatchMember& PUMG_CustomMatchMember);
	void AddLog(const struct FText& Text, class UPUMG_PlayerInfo* playerinfo);
	void RemoveMember(struct FPUMG_CustomMatchMember* FormerMember, bool* Removed);
	void AddMember(const struct FPUMG_CustomMatchMember& MatchMember, bool* Added);
	bool NavigateBack();
	void TEST_InviteNextAvailablePlayer();
	void SetupTeamNavigation(int FocusGroup);
	void UpdateWidgetsWithData(struct FFBP_CustomMatchTeam* Team);
	void OnMemberUpdate(const struct FPUMG_CustomMatchMember& MatchMember, const struct FPUMG_CustomMatchMember& PreviousData);
	void OnMemberRemoved(const struct FPUMG_CustomMatchMember& FormerMember);
	void OnMemberAdded(const struct FPUMG_CustomMatchMember& MatchMember);
	void OnQueueUpdate();
	void GetQueueDataFactory(class UKSQueueDataFactory** DataFactory);
	void PopulateTeamRenderers(class UPanelWidget* TeamPanel, int TeamId, TEnumAsByte<ELaterality_ELaterality> ControlsSide, int NumPlayers);
	void SetupRenderers();
	void SetupDisplayElements();
	void UpdateQueueInfo(const struct FClientQueueInfo& QueueInfo);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnInitialized();
	void HandleDataChange();
	void InvalidateData();
	void InitializeWidgetNavigation();
	void HandlePlayerClicked(class UKSPlayerInfo* playerinfo, class UKSWidget* Widget);
	void HandleEmptyClicked(class UKSWidget* Widget);
	void HandlePlayerKick(class UKSPlayerInfo* playerinfo, class UKSWidget* Widget);
	void HandlePlayerSwap(class UKSPlayerInfo* playerinfo, class UKSWidget* Widget);
	void OnClickBack();
	void OnShown();
	void BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget);
	void OnQueueLeft();
	void BndEvt__Blocker_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_2_OnVoiceParticipantAdded__DelegateSignature(const struct FString& AccountId);
	void BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_3_OnVoiceParticipantRemoved__DelegateSignature(const struct FString& AccountId);
	void BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_4_OnVoiceParticipantUpdated__DelegateSignature(const struct FString& AccountId, bool bIsTalking, bool bIsMuted);
	void BndEvt__SpectateButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(class UWidget* Widget);
	void BndEvt__ContextMenu_K2Node_ComponentBoundEvent_9_OnMenuStart__DelegateSignature(class UWidget* FocusWidget);
	void BndEvt__ContextMenu_K2Node_ComponentBoundEvent_10_OnReadyForNavigation__DelegateSignature(TArray<class UWidget*>* NavWidgets, class UWidget* Default_Widget);
	void BndEvt__ContextMenu_K2Node_ComponentBoundEvent_11_OnMenuHidden__DelegateSignature();
	void ExecuteUbergraph_WBP_CustomGameLobby(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
