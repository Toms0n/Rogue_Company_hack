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

// WidgetBlueprintGeneratedClass WBP_HomeScreen_v2.WBP_HomeScreen_v2_C
// 0x00F8 (FullSize[0x0610] - InheritedSize[0x0518])
class UWBP_HomeScreen_v2_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            FadeOut;                                                   // 0x0520(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_Challenge_Panel_C*                      ChallengePanel;                                            // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             ChallengePanelSwitcher;                                    // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Daily_Challenge_Timer_C*                ChallengeTimerDisplay;                                     // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                Content;                                                   // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerContextMenu_C*                    ContextMenu;                                               // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  CrossplayLabel;                                            // 0x0550(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              CrossplaySettingWrapper;                                   // 0x0558(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  CrossplayValue;                                            // 0x0560(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      FocusBlocker;                                              // 0x0568(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AsyncIcon_C*                            InputTypeIcon;                                             // 0x0570(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  InputTypeLabel;                                            // 0x0578(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              InputTypeSettingWrapper;                                   // 0x0580(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  InputTypeValue;                                            // 0x0588(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NewsRotatorWidget_C*                    NewsRotator;                                               // 0x0590(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                NewsSection;                                               // 0x0598(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  RegionLabel;                                               // 0x05A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  RegionValue;                                               // 0x05A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BattlePassLobbyDisplay_C*               WBP_BattlePassLobbyDisplay;                                // 0x05B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Challenge_Panel_v2_C*                   WBP_Challenge_Panel_v2;                                    // 0x05B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GameNotification_C*                     WBP_GameNotification;                                      // 0x05C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Header3_C*                              WBP_Header3;                                               // 0x05C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HomeQuickPlay_C*                        WBP_HomeQuickPlay;                                         // 0x05D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LobbyEventDisplay_C*                    WBP_LobbyEventDisplay;                                     // 0x05D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PartyModule_C*                          WBP_PartyModule;                                           // 0x05E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      XboxIcon;                                                  // 0x05E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               ShowEMOL;                                                  // 0x05F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AX18[0x7];                                     // 0x05F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     ViewManagerWidget;                                         // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               LoadoutRoutes;                                             // 0x0600(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(90157);
		return ptr;
	}



	void GetChallengePanel(class UKSWidget** Return_Value);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void CanFocus(bool* bAllowFous);
	void UpdateContextPrompts();
	void StopConflictingAnimation(const struct FName& AnimName);
	bool NavigateBack();
	void HandleQueueStatusChange(PlatformUMG_EPUMG_MatchStatus NewStatus);
	void UnbindLobbyAnimationHandling();
	void BindLobbyAnimationHandling();
	void InitializeContentWidgets();
	void StartShowAnim();
	void InitializeTickAnimations();
	void ShowQuickPlayFinished();
	void ShowQuickPlayAnim(float ElapsedTime, float ElapsedAlpha);
	void InitHideAnimation();
	void HideQuickPlayFinished();
	void HideQuickPlayAnim(float ElapsedTime, float ElapsedAlpha);
	void StartHideAnim();
	void InitializeWidget(class APUMG_HUD* HUD);
	void OnShown();
	void UninitializeWidget();
	void StartShowSequence(const struct FName& FromRoute, const struct FName& ToRoute);
	void StartHideSequence(const struct FName& FromRoute, const struct FName& ToRoute);
	void InitializeWidgetNavigation();
	void Construct();
	void OnCrossplayChanged();
	void UpdateCrossplay();
	void LoginState(PlatformUMG_EPUMG_LoginState LoginState);
	void Update_Region();
	void Handle_Party_Player_Card_Selected(class UWBP_player_card_module_C* Selected_Player_Card);
	void Handle_Context_Menu_Navigation(TArray<class UWidget*>* NavWidgets, class UWidget* Default_Widget);
	void Handle_Context_Menu_Hidden();
	void HandleContextMenuShown(class UWidget* FocusWidget);
	void FocusGroupNavigateRightFailure(int FocusGroup);
	void FocusGroupNavigateLeftFailure(int FocusGroup);
	void NewsPanelVisibilityChanged(bool IsVisible);
	void OnEOMButton();
	void HandleViewSocial();
	void FocusGroupNavigateDownFailure(int FocusGroup);
	void FocusGroupNavigateUpFailure(int FocusGroup);
	void Handle_Player_Card_Back_Button();
	void PreConstruct(bool IsDesignTime);
	void OnSetQueueInputState(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState);
	void OnpartyLeaveVisibilityChange(bool Visible);
	void On_Boosts_Context_Button();
	void On_Emote_Context_Button();
	void HandleOnPartyMemberLeft(const struct FPUMG_PartyMemberData& PartyMember);
	void ExecuteUbergraph_WBP_HomeScreen_v2(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
