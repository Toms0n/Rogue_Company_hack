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

// WidgetBlueprintGeneratedClass WBP_PlayerContextMenu.WBP_PlayerContextMenu_C
// 0x0100 (FullSize[0x0668] - InheritedSize[0x0568])
class UWBP_PlayerContextMenu_C : public UKSContextMenu
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0568(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            ShowAnim;                                                  // 0x0570(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                                    AliasContainer;                                            // 0x0578(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_160;                                                 // 0x0580(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                MenuContainer;                                             // 0x0588(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      OptionsBgA;                                                // 0x0590(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      OptionsBgB;                                                // 0x0598(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                OptionsContainerA;                                         // 0x05A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                OptionsContainerB;                                         // 0x05A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    OuterMenuContainer;                                        // 0x05B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_player_card_module_C*                   PlayerCard;                                                // 0x05B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                ScreenCanvas;                                              // 0x05C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBox_1;                                             // 0x05C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Social_Platform_ID_C*                   WBP_Social_Platform_ID;                                    // 0x05D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Social_Platform_ID_C*                   WBP_Social_Platform_ID_2;                                  // 0x05D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Social_Platform_ID_C*                   WBP_Social_Platform_ID_3;                                  // 0x05E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Social_Platform_ID_C*                   WBP_Social_Platform_ID_4;                                  // 0x05E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Social_Platform_ID_C*                   WBP_Social_Platform_ID_5;                                  // 0x05F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Social_Platform_ID_C*                   WBP_Social_Platform_ID_6;                                  // 0x05F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VoiceActivityContainer_C*               WBP_VoiceActivityContainer;                                // 0x0600(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnReadyForNavigation;                                      // 0x0608(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnMenuHidden;                                              // 0x0618(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnMenuStart;                                               // 0x0628(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FKey>                                KeysToAllow;                                               // 0x0638(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	unsigned char                                      Last_Interacted_Target[0x10];                              // 0x0648(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	struct FScriptMulticastDelegate                    OnReportPlayer_1;                                          // 0x0658(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(86789);
		return ptr;
	}



	void GetOptionWidgets(TArray<class UWBP_PlayerContextMenuOption_C*>* Option_Widgets);
	void OnUpdateContextButtons();
	void HandleOptionSelected(KillstreakUINew_EPlayerContextOptions ContextOption);
	void IsShowingPlayer(class UKSPlayerInfo* playerinfo, bool* Showing);
	void IsContextMenuOpen(bool* IsOpen);
	void ShowForPlayerCard(class UWBP_player_card_module_C* PlayerCard);
	void MoveToWidgetSide(class UWidget* Widget, KillstreakUINew_EViewSide side, const struct FMargin& Padding);
	void UpdatePlayerAliases(TArray<struct FPlayerAlias> Aliases);
	void MoveToWidget(class UWidget* Widget);
	void IsCurrentAccountId(const struct FString& AccountId, bool* IsAccountId);
	void RefreshOptionsPadding();
	void HideContextMenu();
	void Move_To_Player_Card_And_Show(class UWBP_player_card_module_C* Selected_Player_Card);
	void Is_Any_Option_Visible(bool* Return_Value);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void GetAllActiveButtons(TArray<class UWidget*>* Buttons);
	void GetFirstActiveButton(class UWidget** FocusWidget);
	void ShowForPlayer(class UKSPlayerInfo* Friend_Info);
	void PreConstruct(bool IsDesignTime);
	void Handle_Input_State_Changed(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState);
	void Handle_View_State_Changed(const struct FName& CurrentRoute, const struct FName& PreviousRoute, PlatformUMG_EViewManagerLayer Layer);
	void OnInitialized();
	void BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_0_OnVoiceParticipantUpdated__DelegateSignature(const struct FString& AccountId, bool bIsTalking, bool bIsMuted);
	void BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_1_OnVoiceAudioStateChange__DelegateSignature(KillstreakUINew_EKSVoiceActivityAudioState AudioState);
	void DelayMoveMenu(class UKSWidget* Widget, const struct FMargin& Padding, KillstreakUINew_EViewSide side);
	void On_Player_Card_Update(class UWBP_player_card_module_C* Player_Card);
	void ExecuteUbergraph_WBP_PlayerContextMenu(int EntryPoint);
	void OnReportPlayer_0__DelegateSignature(class UKSPlayerInfo* playerinfo);
	void OnMenuStart__DelegateSignature(class UWidget* FocusWidget);
	void OnMenuHidden__DelegateSignature();
	void OnReadyForNavigation__DelegateSignature(TArray<class UWidget*>* NavWidgets, class UWidget* Default_Widget);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
