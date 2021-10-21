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

// WidgetBlueprintGeneratedClass WBP_PostMatchLobby.WBP_PostMatchLobby_C
// 0x0199 (FullSize[0x06B1] - InheritedSize[0x0518])
class UWBP_PostMatchLobby_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            ShowRankedChangeScreen;                                    // 0x0520(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            ShowScreen_Defeat;                                         // 0x0528(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            ShowScreen_Victory;                                        // 0x0530(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            ShowScreen;                                                // 0x0538(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                     Blocker;                                                   // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    ContentWrapper;                                            // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerContextMenu_C*                    ContextMenu;                                               // 0x0550(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    GamepadBumperLeft;                                         // 0x0558(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    GamepadBumperRight;                                        // 0x0560(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  InstanceIdDisplay;                                         // 0x0568(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AppliedEvents_C*                        MatchEventBonuses;                                         // 0x0570(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PostMatchNavButton_C*                   NavButton_MatchSummary;                                    // 0x0578(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PostMatchNavButton_C*                   NavButton_Progression;                                     // 0x0580(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PostMatchNavButton_C*                   NavButton_Scoreboard;                                      // 0x0588(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              NavigationContainer;                                       // 0x0590(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                Overlay_Progression;                                       // 0x0598(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Overlay_Scoreboard;                                        // 0x05A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Progression_C*                          Progression;                                               // 0x05A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UReportMenu_C*                               ReportMenu;                                                // 0x05B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreboardOverview_C*                       ScoreboardOverview;                                        // 0x05B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      TabLeftButtonImage;                                        // 0x05C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      TabRightButtonImage;                                       // 0x05C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TeamStatus;                                                // 0x05D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TimePlayedMessage;                                         // 0x05D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      VictoryDefeatGlow;                                         // 0x05E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      VictoryDefeatGlow_Anim;                                    // 0x05E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      VictoryDefeatLine;                                         // 0x05F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      VictoryDefeatScanlines;                                    // 0x05F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ActiveBoosterShelf_C*                   WBP_ActiveBoosterShelf;                                    // 0x0600(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Header1_C*                              WBP_Header1;                                               // 0x0608(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MatchSummary_C*                         WBP_MatchSummary;                                          // 0x0610(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RankChange_C*                           WBP_RankChange;                                            // 0x0618(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                              WeaponsFeatureCalloutText;                                 // 0x0620(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWidget*>                             TabScreens;                                                // 0x0628(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	int                                                CurrentTabIndex;                                           // 0x0638(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayTimeHide;                                             // 0x063C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FScoreboardStats                            ScoreboardStats;                                           // 0x0640(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               PopulatedScoreboard;                                       // 0x0690(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BED4[0x3];                                     // 0x0691(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PlayerId;                                                  // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FirstPostMatch;                                            // 0x0698(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Q7EJ[0x3];                                     // 0x0699(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       RouteName;                                                 // 0x069C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WYCI[0x4];                                     // 0x06A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               ShowResultsScreenSFX;                                      // 0x06A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               IsReturnView;                                              // 0x06B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(89983);
		return ptr;
	}



	void Start_Milestones_Completed();
	void Initialize_Milestones_Completed(const struct FPlayerRewardsSummary& Rewards_Summary);
	void Get_Relevant_Current_Mastery_Xp_Count(const struct FRewardProgress& Reward_Progress, class UKSActivityInstance* ActivityInstance, int* Return_Value);
	void Start_Weapon_Mastery_Queue();
	void Initialize_Weapon_Mastery_Queue(const struct FPlayerRewardsSummary& Rewards_Summary);
	void UpdateSonyMatchFeedbackPrompt();
	void ProvideSonyMatchFeedback();
	void GetCurrentFocus(int* CurrentFocus);
	void GetRankedPopupFocusGroup(int* FocusGroup);
	void PlayProgressionAnimation();
	void ShowAwardsEarned();
	void GetPreviousMatchPlayerIds(TArray<int64_t>* PlayerIds);
	void TryUpdatePlayAgainPrompt();
	void SetCurrentPrompts();
	void TryMakeTabArray();
	void SetupReportMenuNav();
	void GetReportMenuFocusGroup(int* FocusGroup);
	void ShowContextMenuForPlayer(class UWidget* Widget, int64_t PlayerId);
	void GetContextMenuFocusGroup(int* GroupIndex);
	void HandleScoreboardChange();
	void GetScoreboardFocusGroup(int* GroupIndex);
	void SetupContextMenuNav(TArray<class UWidget*>* NavWidgets, class UWidget* DefaultFocus);
	void SetupFocusGroups();
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void SetGamepadPrompt();
	void GetNavButtons(TArray<class UWBP_PostMatchNavButton_C*>* NavButtons);
	void FormatPlayedTime(float timePlayed, struct FText* Result);
	void PopulateTimePlayed();
	bool NavigateBack();
	void SetVictoryDefeat(const struct FScoreboardStats& ScoreboardStats);
	void DetermineMatchResult(const struct FScoreboardStats& ScoreboardStats, bool* DidWin);
	void PopulateScoreboard(const struct FScoreboardStats& ScoreboardStats);
	void HandleTabClicked(class UWBP_PostMatchNavButton_C* Widget);
	void CycleTab(bool Reverse);
	void Construct();
	void InitializeWidget(class APUMG_HUD* HUD);
	void InitializeWidgetNavigation();
	void OnShown();
	void PopulatePostMatch(const struct FPlayerRewardsSummary& PlayerSummary, const struct FScoreboardStats& ScoreboardStats);
	void HandleOnShowAnimationFinished();
	void HandleOnPlayerDataChanged();
	void HandleInputStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState);
	void StartShowSequence(const struct FName& FromRoute, const struct FName& ToRoute);
	void StartHideSequence(const struct FName& FromRoute, const struct FName& ToRoute);
	void OnHide();
	void OnBackButtonClicked();
	void PreConstruct(bool IsDesignTime);
	void Handle_Play_Again();
	void JoinQueue();
	void Handle_Party_Data_Updated();
	void Handle_Queue_Status_Change(PlatformUMG_EPUMG_MatchStatus MatchStatus);
	void BndEvt__ScoreboardOverview_K2Node_ComponentBoundEvent_3_OnTeamsChanged__DelegateSignature();
	void HandlePlayerClicked(class UWidget* Widget, int64_t PlayerId);
	void BndEvt__ReportMenu_K2Node_ComponentBoundEvent_5_OnPlayerReported__DelegateSignature(int64_t PlayerId, bool Success);
	void BndEvt__Blocker_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ContextMenu_K2Node_ComponentBoundEvent_7_OnReportPlayer__DelegateSignature(class UKSPlayerInfo* CurrentPlayerInfo);
	void BndEvt__ContextMenu_K2Node_ComponentBoundEvent_8_OnReadyForNavigation__DelegateSignature(TArray<class UWidget*>* NavWidgets, class UWidget* Default_Widget);
	void BndEvt__ContextMenu_K2Node_ComponentBoundEvent_9_OnMenuHidden__DelegateSignature();
	void BndEvt__ContextMenu_K2Node_ComponentBoundEvent_10_OnMenuStart__DelegateSignature(class UWidget* FocusWidget);
	void Handle_View_Route_Changed(const struct FName& CurrentRoute, const struct FName& PreviousRoute, PlatformUMG_EViewManagerLayer Layer);
	void ExecuteUbergraph_WBP_PostMatchLobby(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
