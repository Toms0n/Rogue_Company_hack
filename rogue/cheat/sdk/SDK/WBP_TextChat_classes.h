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

// WidgetBlueprintGeneratedClass WBP_TextChat.WBP_TextChat_C
// 0x0051 (FullSize[0x05A9] - InheritedSize[0x0558])
class UWBP_TextChat_C : public UKSTextChatWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0558(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_TextChat_ChatWindow_C*                  ChatWindow;                                                // 0x0560(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ClickCatcher;                                              // 0x0568(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TextChat_Input_C*                       TextInput;                                                 // 0x0570(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               IsEditingActive;                                           // 0x0578(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MWZ4[0x3];                                     // 0x0579(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ChatMessageAutoHideDelay;                                  // 0x057C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPUMG_ActiveChatChannelData                 CachedCurrentChannel;                                      // 0x0580(0x0010) (Edit, BlueprintVisible, NoDestructor)
	bool                                               NeedToClearFocus;                                          // 0x0590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZX30[0x7];                                     // 0x0591(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKey>                                CancelKeys;                                                // 0x0598(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                               WaitForCancelReleaseToClearFocus;                          // 0x05A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(55783);
		return ptr;
	}



	void IsTextChatEnabled(bool* IsEnabled);
	void HandleTextChatEnabledApplied(bool Value);
	void AddCancelKey(const struct FKey& Key);
	void ConsumeCancelInputReleased();
	void IsAnyCancelKeyDown(bool* AnyKeyDown);
	void AddAllCancelKeys(TArray<struct FName>* Actions);
	void ProcessDelayedFocusClear();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void HandleSubmitTextInput(const struct FText& Text);
	bool CanChatInChannel(PlatformUMG_EPUMG_ChatChannel Channel);
	void GetDefaultChannel(PlatformUMG_EPUMG_ChatChannel* DefaultChannel);
	void HandleChannelChanged(struct FPUMG_ActiveChatChannelData* ChannelData);
	void HandleChatMessage(struct FPUMG_ChatData* Message);
	void DisableInputListeners();
	void EnableInputListeners();
	void ConsumeCancelInputPressed();
	void SetUIFocus(bool IsFocused);
	void DisplayTextChat();
	void FinishTextChat(struct FText* InputText, bool ShouldSubmitText, bool WaitForCancelRelease);
	void StartTextChat(bool BeginChatCommand);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OpenTextChat(bool BeginChatCommand);
	void OnTextCommitted(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void InitializeWidgetNavigation();
	void HandleChatMessageReceived(const struct FPUMG_ChatData& ReceivedMessage);
	void OnChannelChanged(const struct FPUMG_ActiveChatChannelData& ChatChannelData);
	void HandleChatChannelJoined(PlatformUMG_EPUMG_ChatChannel Channel);
	void HandleChatChannelLeft(PlatformUMG_EPUMG_ChatChannel Channel);
	void InitializeWidget(class APUMG_HUD* HUD);
	void OnCancelButtonPressed(const struct FKey& Key);
	void OpenTextChatToPlayer(class UPUMG_PlayerInfo* Player);
	void HandleCloseTextChat();
	void HandleTextChatEnabledChanged();
	void ShowTextChat();
	void OnRadialMenuItemUse(const struct FRadialMenuItemEventInfo& EventInfo);
	void ExecuteUbergraph_WBP_TextChat(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
