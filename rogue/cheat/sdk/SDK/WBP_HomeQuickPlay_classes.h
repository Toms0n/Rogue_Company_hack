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

// WidgetBlueprintGeneratedClass WBP_HomeQuickPlay.WBP_HomeQuickPlay_C
// 0x0378 (FullSize[0x08A8] - InheritedSize[0x0530])
class UWBP_HomeQuickPlay_C : public UKSQuickPlayWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0530(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            SupplementaryBtnClick;                                     // 0x0538(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            SupplementaryBtnHover_Disabled;                            // 0x0540(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            PlayBtnClick;                                              // 0x0548(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            PlayButtonMode;                                            // 0x0550(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            SupplementaryBtnHover;                                     // 0x0558(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            PlayBtnHover;                                              // 0x0560(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      AffirmativeIcon;                                           // 0x0568(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    BusyWrapper;                                               // 0x0570(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    GamemodeDisplayWrapper;                                    // 0x0578(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  GameModeNameTextForJoin;                                   // 0x0580(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  GameModeNameTextForStatus;                                 // 0x0588(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      PlayBtn_Fill;                                              // 0x0590(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      PlayBtn_HoverFill;                                         // 0x0598(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      PlayBtn_HoverStroke;                                       // 0x05A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      PlayBtn_Stroke;                                            // 0x05A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      PlayBtnEdge_EdgeDeco;                                      // 0x05B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      PlayBtnGamepadCallout;                                     // 0x05B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStandardButtonNoArt_C*                      PlayBtnHitTarget;                                          // 0x05C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      PlayBtnStatus_Fill;                                        // 0x05C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      PlayBtnStatus_HoverFill;                                   // 0x05D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      PlayBtnStatus_HoverStroke;                                 // 0x05D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      PlayBtnStatus_Stroke;                                      // 0x05E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    PlayButton_JoinMode;                                       // 0x05E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    PlayButton_StatusMode;                                     // 0x05F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      PlayIcon;                                                  // 0x05F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             StatusIconSwitcherLeft_2;                                  // 0x0600(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  StatusMsgText;                                             // 0x0608(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                                   StatusMsgWrapper;                                          // 0x0610(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      SupplementaryBtn_EdgeDeco;                                 // 0x0618(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      SupplementaryBtn_Fill;                                     // 0x0620(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      SupplementaryBtn_HoverFill;                                // 0x0628(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      SupplementaryBtn_HoverStroke;                              // 0x0630(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      SupplementaryBtn_Stroke;                                   // 0x0638(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    SupplementaryBtnChangeMode;                                // 0x0640(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      SupplementaryBtnGamepadCallout;                            // 0x0648(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStandardButtonNoArt_C*                      SupplementaryBtnHitTarget;                                 // 0x0650(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  SupplementaryBtnLabel;                                     // 0x0658(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    SupplementaryBtnOverlay;                                   // 0x0660(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    SupplementaryBtnStandardWrapper;                           // 0x0668(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      WarningIcon;                                               // 0x0670(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               PlayShortcutEnabled;                                       // 0x0678(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_01BI[0x3];                                     // 0x0679(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CurrentPenaltyTimeLeft;                                    // 0x067C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       StatusMsg_Unknown;                                         // 0x0680(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       StatusMsg_NoQueuesAvailable;                               // 0x0698(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       StatusMsg_NoSelection;                                     // 0x06B0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       StatusMsg_QueueUnavailable;                                // 0x06C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       StatusMsg_PartyLimit;                                      // 0x06E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       StatusMsg_ReadyToJoin;                                     // 0x06F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       StatusMsg_WaitingForLeader;                                // 0x0710(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       StatusMsg_QueuedStatus;                                    // 0x0728(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       StatusMsg_EnteringMatch;                                   // 0x0740(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       StatusMsg_PartyLevel;                                      // 0x0758(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       StatusMsg_PlayerLevel;                                     // 0x0770(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       StatusMsg_DeserterStatus;                                  // 0x0788(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Msg_ChooseGamemode;                                        // 0x07A0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Msg_CancelSearch;                                          // 0x07B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bPlayBtnEnabled;                                           // 0x07D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bSupplementaryBtnEnabled;                                  // 0x07D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_875T[0x6];                                     // 0x07D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    TriggerStatusModeDisplayUpdate;                            // 0x07D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               bForceFirstTimeUpdate;                                     // 0x07E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S08F[0x3];                                     // 0x07E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurrentQueueTimeElapsed;                                   // 0x07EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Msg_ReadyToRejoin;                                         // 0x07F0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Msg_LeaveMatch;                                            // 0x0808(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Msg_LeaveCustomMatch;                                      // 0x0820(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FTimerHandle                                PendingQueueUpdateTimer;                                   // 0x0838(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              PendingQueueUpdateTimeoutTime;                             // 0x0840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               MsgLeaveCustomLobby;                                       // 0x0844(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_W7SC[0x3];                                     // 0x0845(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               ClickPlayBtnHomeQuickPlaySFX;                              // 0x0848(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UAkAudioEvent*                               ClickCancelBtnHomeQuickPlaySFX;                            // 0x0850(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FText                                       StatusMsg_PartyLimitMin;                                   // 0x0858(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       StatusMsg_RankedRangeTooFar;                               // 0x0870(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               LeaveQueueShortcutEnabled;                                 // 0x0888(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YTG6[0x7];                                     // 0x0889(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       StatusMsg_PartyPlatformDisallowed;                         // 0x0890(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(81986);
		return ptr;
	}



	void GetDeserterStatusMessage(struct FText* OutDisplayText);
	void Apply_Pending_Display();
	void ForceVisualState();
	void UpdateQueueTimer();
	void UpdateStatusModeDisplay();
	void UpdateDeserterCountdown();
	void HandleQuickPlayStateUpdate();
	void TogglePlayBtnEnabled(bool InIsEnabled);
	void ToggleSupplementaryBtnEnabled(bool InIsEnabled);
	void ApplyKeyShortcutsEnabled();
	void GetNavigationWidgets(TArray<class UPUMG_Widget*>* Return_Value);
	void HandleInputModeChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputMode);
	void SetCurrentGameModeTextDisplay();
	void SetupGamepadCallout();
	void ForceClickPlayButton();
	void BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void ForceClickSupplementaryButton();
	void BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature(class UWidget* Widget);
	void BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature(class UWidget* Widget);
	void BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature(class UWidget* Widget);
	void BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature(class UWidget* Widget);
	void ForceUnhoverSupplementaryBtn();
	void ForceHoverSupplementaryBtn();
	void OnUpdateQuickPlayState(KillstreakUINew_EQuickPlayQueueState QueueState);
	void OnUpdatePenaltyTimeLeft(int TimeLeft);
	void OnSelectedQueueUpdate(const struct FClientQueueInfo& CurrentSelectedQueue);
	void OnQueueStateUpdate(PlatformUMG_EPUMG_MatchStatus CurrentMatchStatus);
	void OnTransitionAnimationFinished();
	void HandleTriggerStatusModeEvent();
	void OnUpdateQueueTimeElapsed(float TimeElapsed);
	void Pending_Queue_Update_Timeout();
	void OnInitialized();
	void HandleCustomQueueUpdate();
	void InitializeWidgetNavigation();
	void ExecuteUbergraph_WBP_HomeQuickPlay(int EntryPoint);
	void TriggerStatusModeDisplayUpdate__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
