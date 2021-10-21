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

// Class PlatformUMG.PUMG_AcquisitionManager
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UPUMG_AcquisitionManager : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnAcquisitionSuccess;                                      // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAcquisitionFailed;                                       // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UPUMG_StoreItemHelper*                       StoreItemHelper;                                           // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(189);
		return ptr;
	}



};

// Class PlatformUMG.PUMG_AsyncImage
// 0x0048 (FullSize[0x0260] - InheritedSize[0x0218])
class UPUMG_AsyncImage : public UImage
{
public:
	class UWidget*                                     WaitingWidget;                                             // 0x0218(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAsyncImageLoadStarted;                                   // 0x0220(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAsyncImageLoadComplete;                                  // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAsyncImageLoadCanceled;                                  // 0x0240(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAsyncImageBrushChanged;                                  // 0x0250(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(194);
		return ptr;
	}



	void ShowWaitingWidget();
	void HideWaitingWidget();
};

// Class PlatformUMG.PUMG_BlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPUMG_BlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(195);
		return ptr;
	}



	bool STATIC_IsWithEditor();
	float STATIC_GetUMG_DPI_Scaling();
	struct FName STATIC_GetKeyName(const struct FKey& Key);
	struct FKey STATIC_GetGamepadConfirmButton();
	struct FKey STATIC_GetGamepadCancelButton();
	bool STATIC_GetGamepadButtonForAction(const struct FName& Action, struct FKey* Button);
	bool STATIC_GetButtonForActionMappingUsingWidget(class UWidget* InWidget, const struct FName& Action, struct FKey* Button);
	bool STATIC_GetButtonForActionMapping(const struct FName& Action, struct FKey* Button, bool IsGamepadKey);
	bool STATIC_GetAllButtonsForActionMappingUsingWidget(class UWidget* InWidget, const struct FName& Action, TArray<struct FKey>* Buttons);
	bool STATIC_GetAllButtonsForActionMapping(const struct FName& Action, TArray<struct FKey>* Buttons, bool IsGamepadKey);
};

// Class PlatformUMG.PUMG_CanvasPanel
// 0x0000 (FullSize[0x0138] - InheritedSize[0x0138])
class UPUMG_CanvasPanel : public UCanvasPanel
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(198);
		return ptr;
	}



	void PlaceWidgetUnder(class UUserWidget* BottomWidget, class UUserWidget* TopWidget);
};

// Class PlatformUMG.PUMG_DataFactory
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UPUMG_DataFactory : public UObject
{
public:
	class APUMG_HUD*                                   MyHud;                                                     // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2E2H[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(199);
		return ptr;
	}



	bool IsLoggedIn();
};

// Class PlatformUMG.PUMG_ChatDataFactory
// 0x00E0 (FullSize[0x0118] - InheritedSize[0x0038])
class UPUMG_ChatDataFactory : public UPUMG_DataFactory
{
public:
	struct FScriptMulticastDelegate                    OnChatMessageReceived;                                     // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChatMessageRead;                                         // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChatChannelJoined;                                       // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChatChannelLeft;                                         // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<int>                                        ChatMessageIds;                                            // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<int>                                        PendingChatMessageIds;                                     // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<int, struct FPUMG_ChatData>                   ChatMessagesById;                                          // 0x0098(0x0050) (Protected, NativeAccessSpecifierProtected)
	int                                                LastCreatedMessageId;                                      // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3MWV[0x4];                                     // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int64_t>                                    m_FilteredPlayerIds;                                       // 0x00F0(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FPUMG_ChatCommand>                   ChatCommands;                                              // 0x0100(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HWRS[0x8];                                     // 0x0110(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(200);
		return ptr;
	}



	void SetMaxMessageCount(int MaxMessageCount);
	void SendChatToPlayer(const struct FString& Message, int64_t TargetPlayerId);
	void SendChatToChannel(const struct FString& Message, PlatformUMG_EPUMG_ChatChannel Channel);
	bool RemovePlayerFilter(int64_t PlayerId);
	bool RemoveChatCommand(const struct FString& Command);
	bool RemoveAllChatCommands(class UObject* Target);
	void QueueCheckPendingMessages();
	void MarkMessageAsRead(int MessageId);
	void ListChatCommands();
	bool IsValidMessage(const struct FPUMG_ChatData& Message);
	bool IsPlayerFilteredFromChat(int64_t PlayerId);
	void HandleCommunicationSettingChanged();
	struct FPUMG_ChatData GetMessage(int MessageId);
	int GetMaxMessageCount();
	PlatformCommon_EPCOM_PrivilegeStatus GetChatPrivilegeStatus();
	void GetActiveChatChannels(bool IncludePersonalChannel, TArray<struct FPUMG_ActiveChatChannelData>* ActiveChatChatChannels);
	int FindChatCommandIndex(const struct FString& Command);
	bool ExecuteChatCommandLine(const struct FString& CommandLine);
	void CheckPendingMessages();
	void BeginProcessingChatMessage(struct FPUMG_ChatData* Message);
	void AddSystemMessage(const struct FText& Message);
	bool AddPlayerFilter(int64_t PlayerId);
	void AddGameMessage(const struct FText& Message, PlatformUMG_EPUMG_ChatChannel Channel);
	bool AddChatCommand(const struct FString& Command, const struct FText& Desc, class UObject* Target, const struct FString& Function, const struct FString& Alias1, const struct FString& Alias2, const struct FString& Alias3, const struct FString& Alias4);
};

// Class PlatformUMG.PUMG_CollectionDataFactory
// 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
class UPUMG_CollectionDataFactory : public UPUMG_DataFactory
{
public:
	struct FScriptMulticastDelegate                    OnCollectionAvatarsUpdated;                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCollectionAvatarAcquisition;                             // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FPUMG_AvatarData>                    CollectionAvatars;                                         // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(201);
		return ptr;
	}



};

// Class PlatformUMG.PUMG_FriendDataFactory
// 0x00F0 (FullSize[0x0128] - InheritedSize[0x0038])
class UPUMG_FriendDataFactory : public UPUMG_DataFactory
{
public:
	struct FScriptMulticastDelegate                    OnFriendDataUpdated;                                       // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFriendAddSuccess;                                        // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFriendAddError;                                          // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    FriendInviteReceived;                                      // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFriendAdded;                                             // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFriendRejected;                                          // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int                                                OnlineFriends;                                             // 0x0098(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                TotalFriends;                                              // 0x009C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FPUMG_FriendData>                    CachedFriends;                                             // 0x00A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FPUMG_FriendData>                    CachedPendingFriends;                                      // 0x00B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FPUMG_FriendData>                    CachedFriendRequests;                                      // 0x00C0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YQSG[0x30];                                    // 0x00D0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FriendsListUpdatePollInterval;                             // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LJ1S[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                FriendsListUpdatePollingTimerHandle;                       // 0x0108(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               IsFriendsListUpdatePollingEnabled;                         // 0x0110(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FALW[0x17];                                    // 0x0111(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(202);
		return ptr;
	}



	void UIX_OnRemoveFriend(int64_t PlayerId);
	void UIX_OnRejectFriendRequest(int64_t PlayerId);
	void UIX_OnCancelFriendRequest(int64_t PlayerId);
	void UIX_OnAddFriend(class UPUMG_PlayerInfo* playerinfo);
	void UIX_OnAcceptFriendRequest(int64_t PlayerId);
	void SetEnableFriendsListUpdatePolling(bool InBool);
	void RequestUpdateFriendsList();
	bool IsCrossplaySocialEnabled();
	void HandleFriendsListUpdatePolling();
	void HandleCrossplaySettingChanged();
	TArray<struct FPUMG_FriendData> GetPendingFriends();
	TArray<struct FPUMG_FriendData> GetFriends();
	TArray<struct FPUMG_FriendData> GetFriendRequests();
	struct FText GetFriendName(int64_t PlayerId);
	void GetFriendAvatarTexture(const struct FPUMG_FriendData& Friend);
	bool GetEnableFriendsListUpdatePolling();
	void FriendRemoveResponse();
	bool CheckAlreadyFriends(const struct FString& FriendName);
};

// Class PlatformUMG.GamepadPromptInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGamepadPromptInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(203);
		return ptr;
	}



	bool UnregisterOnClear();
	void SetPrompt(const struct FText& PromptText);
	void ClearPrompt();
};

// Class PlatformUMG.PUMG_GamepadDataFactory
// 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
class UPUMG_GamepadDataFactory : public UPUMG_DataFactory
{
public:
	unsigned char                                      UnknownData_5VIR[0x50];                                    // 0x0038(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(204);
		return ptr;
	}



	bool UnregisterPromptForButton(const struct FKey& Button);
	void SetPromptForGamepadButton(const struct FKey& Button, const struct FText& PromptText);
	void RemovePromptForGamepadButton(const struct FKey& Button);
	bool RegisterPromptWidgetForButton(class UWidget* Widget, const struct FKey& Button);
	void ClearAllGamepadPrompts();
};

// Class PlatformUMG.PUMG_GameViewportClient
// 0x0010 (FullSize[0x0348] - InheritedSize[0x0338])
class UPUMG_GameViewportClient : public UGameViewportClient
{
public:
	unsigned char                                      UnknownData_SW1J[0x10];                                    // 0x0338(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(205);
		return ptr;
	}



};

// Class PlatformUMG.PUMG_LobbyHUD
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPUMG_LobbyHUD : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(206);
		return ptr;
	}



};

// Class PlatformUMG.PUMG_HUD
// 0x0290 (FullSize[0x05A0] - InheritedSize[0x0310])
class APUMG_HUD : public AHUD
{
public:
	struct FScriptMulticastDelegate                    OnInputStateChanged;                                       // 0x0310(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMap<int64_t, struct FScriptMulticastDelegate>     PlayerDataUpdated;                                         // 0x0320(0x0050) (Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UPUMG_InputManager*                          InputManager;                                              // 0x0370(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPUMG_ViewManager*                           ViewManager;                                               // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      InputManagerClass;                                         // 0x0380(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPUMG_UISoundTheme*                          SoundTheme;                                                // 0x0388(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_538P[0x210];                                   // 0x0390(0x0210) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(208);
		return ptr;
	}



	void TestHirezLogin(const struct FString& User, const struct FString& password);
	void TestAutoLogin(int ControllerId);
	void ShowSystemTrayNotification(const struct FString& popupType);
	void SetUseNewUIFeatures(bool UseNewFeatures);
	void SetUIFocus();
	void SetNavigationEnabled(bool Enabled);
	void OnQuit();
	bool OnNavigateBack();
	void OnConfirmQuit();
	class UPUMG_PlayerInfo* NewPlayerInfo();
	bool IsLobbyHUD();
	bool IsCrossplayEnabled();
	void InputStateChangePassthrough(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState);
	void gmmf(bool bAutolaunch);
	class UPUMG_ViewManager* GetViewManager();
	void GetPortalTokenDetails();
	class UPUMG_PopupManager* GetPopupManager();
	class APlayerController* GetPlayerControllerOwner();
	class UPUMG_PlayerInfo* GetOrCreatePlayerInfo(int64_t PlayerId);
	class UPUMG_InputManager* GetInputManager();
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> GetCurrentInputState();
	void DisplayGenericPopup(const struct FString& sTitle, const struct FString& sDesc);
	void DisplayGenericError(const struct FString& sDesc);
};

// Class PlatformUMG.PUMG_InputManager
// 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
class UPUMG_InputManager : public UObject
{
public:
	TMap<class UPUMG_Widget*, struct FPUMG_InputFocusDetails> InputFocusData;                                            // 0x0028(0x0050) (ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ALHB[0x28];                                    // 0x0078(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInputComponent*                             InputComponent;                                            // 0x00A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9IX9[0x30];                                    // 0x00A8(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(209);
		return ptr;
	}



	void HandleModeChange(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> Mode);
	bool GetFocusedWidget(class UPUMG_Widget* ParentWidget, class UWidget** FocusWidget);
	void ClearNavInputThrottled();
	void ClearNavInputDebouncedThrottled();
};

// Class PlatformUMG.PUMG_JsonDataFactory
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UPUMG_JsonDataFactory : public UPUMG_DataFactory
{
public:
	unsigned char                                      UnknownData_A7XW[0x10];                                    // 0x0038(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(210);
		return ptr;
	}



	void HandleJsonReady(class UPGame_LandingPanelJSONHandler* pHandler);
	void HandleImagesReady(class UPGame_LandingPanelJSONHandler* pHandler);
};

// Class PlatformUMG.PUMG_Loadout
// 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
class UPUMG_Loadout : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnRenamed;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNumberChanged;                                           // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTypeChanged;                                             // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnServerUpdate;                                            // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLocalUpdate;                                             // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RKKI[0x38];                                    // 0x0078(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(211);
		return ptr;
	}



};

// Class PlatformUMG.PUMG_LoadoutDataFactory
// 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
class UPUMG_LoadoutDataFactory : public UObject
{
public:
	unsigned char                                      UnknownData_MUD5[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnLoadoutsInitialized;                                     // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLoadoutsUpdatedFromServer;                               // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLoadoutFactoryReadyNoLoadouts;                           // 0x0050(0x0010) (ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLoadoutChanged;                                          // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLoadoutAdded;                                            // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLoadoutDeleted;                                          // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K1FX[0x8];                                     // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPUMG_Loadout*>                       Loadouts;                                                  // 0x0098(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(212);
		return ptr;
	}



};

// Class PlatformUMG.PUMG_LoginDataFactory
// 0x00E0 (FullSize[0x0118] - InheritedSize[0x0038])
class UPUMG_LoginDataFactory : public UPUMG_DataFactory
{
public:
	struct FScriptMulticastDelegate                    OnLoginUserChanged;                                        // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLoginStateChanged;                                       // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLoginError;                                              // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZJD7[0x8];                                     // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnControllerDisconnected;                                  // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               bAllowLoginDuringPartialInstall;                           // 0x0080(0x0001) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8KC6[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDataTable*                                  ErrorMsgsDT;                                               // 0x0088(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAttemptedDeferredInviteAutoLogin;                         // 0x0090(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2QAS[0x77];                                    // 0x0091(0x0077) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnLoginWaitQueueMessage;                                   // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(213);
		return ptr;
	}



	bool UpdateControllers();
	void UIX_TriggerAutoLogin();
	void UIX_OnTwoFactorSubmit(const struct FString& AuthCode);
	void UIX_OnTwoFactorDecline();
	void UIX_OnSubmitLogin(const struct FString& UserName, const struct FString& password);
	void UIX_OnSubmitConsoleLogin(int ControllerId);
	void UIX_OnSubmitAutoLogin(int ControllerId);
	void UIX_OnPlayerCreate(const struct FString& PlayerName);
	void UIX_OnLinkExistingAccount(const struct FString& UserName, const struct FString& password);
	void UIX_OnLinkDecline();
	void UIX_OnLinkCreateAccount(const struct FString& UserName, const struct FString& password, const struct FString& Email, bool bAcceptAgeReqs);
	void UIX_OnEulaDecline();
	void UIX_OnEulaAccept();
	void UIX_OnChangeUserAccount();
	void UIX_OnCancelLogin();
	void UIX_OnAccountCreate(const struct FString& UserName, const struct FString& password, const struct FString& Email, bool bAcceptAgeReqs);
	void TriggerAutoLogin();
	bool ShouldDisplayUsername();
	bool ShouldDisplayDisconnectError();
	void SetUserErrorDataTable(class UDataTable* ErrorMsgTable);
	void RecordLoginState(PlatformUMG_EPUMG_LoginState NewState);
	void LoginEvent_ShowAgreements(bool bNeedsEULA, bool bNeedsTOS, bool bNeedsPP);
	void LoginEvent_Queued(uint32_t QueuePosition, uint32_t QueueSize, uint32_t queueEstimatedWait);
	void LoginEvent_LoginRequested();
	void LoginEvent_LoggedIn();
	void LoginEvent_FailedClient(const struct FText& ErrorMsg);
	void LoginEvent_Failed(uint32_t ErrorMsgId);
	bool STATIC_LoadEULAFile(struct FString* SaveText);
	void HandleControllerPairingChange(int ControllerIndex, int NewUserId, int OldUserId);
	void HandleControllerConnectionChange(bool IsConnection, int UserId, int ControllerIndex);
	struct FString STATIC_GetVersion();
	bool GetLastDisconnectReason(struct FText* ErrorMsg);
	bool GetCurrentPlayerName(struct FText* NameText);
	PlatformUMG_EPUMG_LoginState GetCurrentLoginState();
};

// Class PlatformUMG.PUMG_MobileLayoutSequencePlayer
// 0x0000 (FullSize[0x07A8] - InheritedSize[0x07A8])
class UPUMG_MobileLayoutSequencePlayer : public UUMGSequencePlayer
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(215);
		return ptr;
	}



};

// Class PlatformUMG.PUMG_PartyDataFactory
// 0x0170 (FullSize[0x01A8] - InheritedSize[0x0038])
class UPUMG_PartyDataFactory : public UPUMG_DataFactory
{
public:
	struct FScriptMulticastDelegate                    OnPartyDataUpdated;                                        // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyLocalPlayerLeft;                                    // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyLocalPlayerPromoted;                                // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyMemberPromoted;                                     // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyMemberDataUpdated;                                  // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPendingPartyMemberDataAdded;                             // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPendingPartyMemberAccepted;                              // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyMemberRemoved;                                      // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyMemberLeft;                                         // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyDisbanded;                                          // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyInvitationError;                                    // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyInvitationSent;                                     // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyInvitationReceived;                                 // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyMessageReceived;                                    // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyInvitationAccepted;                                 // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyInvitationRejected;                                 // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyInvitationExpired;                                  // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyInfoUpdated;                                        // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FPUMG_PartyMemberData>               PartyMembers;                                              // 0x0158(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPUMG_PlayerInfo*                            PartyInviter;                                              // 0x0168(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     LastInviteSentErrorMessage;                                // 0x0170(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LDS4[0x28];                                    // 0x0180(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(216);
		return ptr;
	}



	void UIX_PromoteMemberToLeader(int64_t PlayerId);
	void UIX_LeaveParty();
	void UIX_KickMemberFromParty(int64_t PlayerId);
	bool UIX_InviteMemberToParty(int64_t PlayerId);
	void UIX_GiveInvitePermission(int64_t PlayerId);
	void UIX_DisbandParty();
	void UIX_DenyPartyInvitation();
	void UIX_AcceptPartyInvitation();
	void SetPartyInfo(const struct FString& Key, const struct FString& Value);
	void SendPartyMessage(const struct FString& Data);
	void PartyPromoteResponse();
	void PartyLeaveResponse();
	void PartyKickResponse();
	bool IsPlayerInParty(int64_t PlayerId);
	bool IsPartyMaxed();
	bool IsLeader();
	bool IsInParty();
	bool HasInvitePrivileges(int64_t PlayerId);
	int GetQueueId();
	struct FText GetPartyMemeberName(int64_t PlayerId);
	TArray<struct FPUMG_PartyMemberData> GetPartyMembers();
	int GetPartyMemberCount();
	struct FPUMG_PartyMemberData GetPartyMemberByID(int64_t PlayerId);
	class UPUMG_PlayerInfo* GetPartyInviter();
	PlatformUMG_EPUMG_PartyInviteRightsMode GetPartyInviteMode();
	struct FString GetPartyInfo(const struct FString& Key);
	int GetMaxPartyMembers();
	bool CheckPartyMemberIsLeader(int64_t PlayerId);
};

// Class PlatformUMG.PUMG_PlayerDataFactory
// 0x0078 (FullSize[0x00B0] - InheritedSize[0x0038])
class UPUMG_PlayerDataFactory : public UPUMG_DataFactory
{
public:
	struct FScriptMulticastDelegate                    OnPlayerDataChanged;                                       // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerRankChanged;                                       // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCrossplayChanged;                                        // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int64_t                                            PlayerId;                                                  // 0x0068(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     PlayerName;                                                // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                Level;                                                     // 0x0080(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                AvatarId;                                                  // 0x0084(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                LastMMR;                                                   // 0x0088(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CurrentMMR;                                                // 0x008C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                BestMMR;                                                   // 0x0090(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CurrentWinRank;                                            // 0x0094(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                PreviousWinRank;                                           // 0x0098(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CurrentWinPeak;                                            // 0x009C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                PreviousWinPeak;                                           // 0x00A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CurrentWinStreak;                                          // 0x00A4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                PreviousWinStreak;                                         // 0x00A8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8W7T[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(217);
		return ptr;
	}



	void OnSelectAvatar(int ItemId);
	void GetAvatarIcon();
};

// Class PlatformUMG.PUMG_PlayerInfo
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UPUMG_PlayerInfo : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnFilteredNameSetDel;                                      // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HJH0[0x48];                                    // 0x0038(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(218);
		return ptr;
	}



	void SetIgnored(bool Ignored);
	bool IsIgnored();
	int64_t GetPlayerId();
	struct FText GetName();
	struct FString GetMctsName();
	int GetAvatarItemId();
};

// Class PlatformUMG.PUMG_PlayerInventoryHelper
// 0x00F0 (FullSize[0x0118] - InheritedSize[0x0028])
class UPUMG_PlayerInventoryHelper : public UObject
{
public:
	unsigned char                                      UnknownData_O10O[0xF0];                                    // 0x0028(0x00F0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(219);
		return ptr;
	}



};

// Class PlatformUMG.PUMG_PlayerWhoDataFactory
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UPUMG_PlayerWhoDataFactory : public UPUMG_DataFactory
{
public:
	struct FScriptMulticastDelegate                    OnSearchByNameResultsUpdated;                              // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UPUMG_PlayerInfo*>                    CachedSearchByNameResults;                                 // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IW44[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(220);
		return ptr;
	}



	void UIX_SearchByNameForPlayer(const struct FString& PlayerName, bool bIncludeOfflinePlayers);
	TArray<class UPUMG_PlayerInfo*> GetSearchByNameResults();
};

// Class PlatformUMG.PUMG_Widget
// 0x0280 (FullSize[0x04B8] - InheritedSize[0x0238])
class UPUMG_Widget : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnGamepadHovered;                                          // 0x0238(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMouseEntered;                                            // 0x0248(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNavigateBack;                                            // 0x0258(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTextureLoadComplete;                                     // 0x0268(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNavigateUpFailed;                                        // 0x0278(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNavigateDownFailed;                                      // 0x0288(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNavigateLeftFailed;                                      // 0x0298(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNavigateRightFailed;                                     // 0x02A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFocusGroupNavigateUpFailed;                              // 0x02B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFocusGroupNavigateDownFailed;                            // 0x02C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFocusGroupNavigateLeftFailed;                            // 0x02D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFocusGroupNavigateRightFailed;                           // 0x02E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnHideSequenceFinished;                                    // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnShowSequenceFinished;                                    // 0x0308(0x0010) (ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class APUMG_HUD>                    MyHud;                                                     // 0x0318(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               CloseOnLogout;                                             // 0x0320(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsComponent;                                               // 0x0321(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               StartsHidden;                                              // 0x0322(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               UsesBlocker;                                               // 0x0323(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               BlockerClickToClose;                                       // 0x0324(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               EnableGameStateSetNotify;                                  // 0x0325(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BTRL[0x2];                                     // 0x0326(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      LoadedTexture[0x28];                                       // 0x0326(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      UnknownData_ZIY6[0x150];                                   // 0x0350(0x0150) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPUMG_MobileLayoutSequencePlayer*            MobileLayoutSequencePlayer;                                // 0x04A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            MobileLayoutAnim;                                          // 0x04A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bMobileLayoutActive;                                       // 0x04B0(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DE7T[0x7];                                     // 0x04B1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(222);
		return ptr;
	}



	void UpdateRegistrationToInputManager(class UWidget* Widget, int FocusGroup, class UWidget* Up, class UWidget* Down, class UWidget* Left, class UWidget* Right);
	void UnregisterWidgetFromInputManager(class UWidget* Widget);
	void UnregisterFocusGroup(int FocusGroup);
	void UninitializeWidget();
	void ToggleMobileLayout(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState);
	bool SwapViewRoute(const struct FName& RouteName, const struct FName& SwapTargetRoute, bool ForceTransition);
	void StartShowSequence(const struct FName& FromRoute, const struct FName& ToRoute);
	void StartHideSequence(const struct FName& FromRoute, const struct FName& ToRoute);
	void ShowWidget();
	void SetPendingRouteData(const struct FName& RouteName, class UObject* Data);
	void SetFocusToWidgetOfGroup(int FocusGroup, class UPUMG_Widget* Widget);
	class UWidget* SetFocusToThis();
	void SetFocusToGroup(int FocusGroup, bool KeepLastFocus);
	void SetDefaultFocusForGroup(class UWidget* Widget, int FocusGroup);
	bool RemoveViewRoute(const struct FName& RouteName, bool ForceTransition);
	bool RemoveTopViewRoute(bool ForceTransition);
	void RegisterWidgetToInputManager(class UWidget* Widget, int FocusGroup, class UWidget* Up, class UWidget* Down, class UWidget* Left, class UWidget* Right);
	void OnShown();
	void OnHide();
	void OnGamepadUnhover();
	void OnGamepadHover();
	void OnExitMobileLayout();
	void OnEnterMobileLayout();
	void NavigateUpFailure();
	void NavigateRightFailure();
	void NavigateLeftFailure();
	void NavigateDownFailure();
	bool NavigateConfirmPressed();
	void NavigateConfirmCancelled();
	bool NavigateConfirm();
	bool NavigateBackPressed();
	void NavigateBackCancelled();
	bool NavigateBack();
	bool IsTopViewRoute();
	bool IsFocusEnabled();
	void InitializeWidgetNavigation();
	void InitializeWidgetButtonListeners();
	void InitializeWidget(class APUMG_HUD* HUD);
	void InheritFocusGroupFromWidget(int TargetFocusGroupNum, class UPUMG_Widget* SourceWidget, int SourceFocusGroupNum);
	void HideWidget();
	class UPUMG_ViewManager* GetViewManager();
	bool GetUsesBlocker();
	bool GetPendingRouteData(const struct FName& RouteName, class UObject** Data);
	struct FGeometry GetGeometryFromLastTick();
	bool GetCurrentFocusGroup(int* OutFocusGroup);
	class UWidget* GetCurrentFocusForGroup(int FocusGroup);
	void GameStateSet(class AGameStateBase* GameState);
	void GamepadUnhover();
	void GamepadHover();
	struct FEventReply GamepadButtonUp(const struct FKey& Button);
	struct FEventReply GamepadButtonDown(const struct FKey& Button);
	void FocusGroupNavigateUpFailure(int FocusGroup);
	void FocusGroupNavigateRightFailure(int FocusGroup);
	void FocusGroupNavigateLeftFailure(int FocusGroup);
	void FocusGroupNavigateDownFailure(int FocusGroup);
	bool ExplicitNavigateUp();
	bool ExplicitNavigateRight();
	bool ExplicitNavigateLeft();
	bool ExplicitNavigateDown();
	void DisplayGenericPopup(const struct FString& sTitle, const struct FString& sDesc);
	void DisplayGenericError(const struct FString& sDesc);
	void ClearNavigationInputThrottle();
	bool CanCloseOnLogout();
	void CallOnShowSequenceFinished();
	void CallOnHideSequenceFinished();
	void BindToInputManager(int DefaultFocusGroup);
	void AsyncLoadTexture2D();
	bool AddViewRoute(const struct FName& RouteName, bool ClearRouteStack, bool ForceTransition, class UObject* Data);
};

// Class PlatformUMG.PUMG_PopupManager
// 0x0120 (FullSize[0x05D8] - InheritedSize[0x04B8])
class UPUMG_PopupManager : public UPUMG_Widget
{
public:
	unsigned char                                      UnknownData_CZW3[0x10];                                    // 0x04B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPUMG_PopupConfig>                   PopupQueue;                                                // 0x04C8(0x0010) (BlueprintVisible, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                m_nPopupId;                                                // 0x04D8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_F4E0[0xE4];                                    // 0x04DC(0x00E4) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       CommittedText;                                             // 0x05C0(0x0018) (BlueprintVisible, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(223);
		return ptr;
	}



	void ShowPopup(const struct FPUMG_PopupConfig& popupData);
	void RemovePopup(int PopupId);
	void OnPopupResponse(int nPopupId, int nResponseIndex);
	void OnPopupCanceled();
	void NextPopup();
	void HidePopup();
	void CloseUnimportantPopups();
	void CloseAllPopups();
	int AddPopup(const struct FPUMG_PopupConfig& popupData);
};

// Class PlatformUMG.PUMG_QueueDataFactory
// 0x01D8 (FullSize[0x0210] - InheritedSize[0x0038])
class UPUMG_QueueDataFactory : public UPUMG_DataFactory
{
public:
	struct FScriptMulticastDelegate                    OnQueueJoined;                                             // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnQueueLeft;                                               // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnQueueStatusChange;                                       // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnQueueDataUpdated;                                        // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMatchStatusUpdatedError;                                 // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCustomMatchJoined;                                       // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCustomQueueMemberAdded;                                  // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCustomQueueMemberRemoved;                                // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCustomQueueMemberUpdated;                                // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCustomQueueChanged;                                      // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCustomInviteErrorRecieved;                               // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int                                                PendingCustomMatchMapId;                                   // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OZSC[0x4];                                     // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPUMG_ActivityQueuePair>             ActivityQueuePairs;                                        // 0x00F0(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ActivityToJoin;                                            // 0x0100(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bActivityToJoinIsMultiplayer;                              // 0x0110(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DS1L[0x7];                                     // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        QueueIds;                                                  // 0x0118(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZDAW[0x50];                                    // 0x0128(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              QueueUpdatePollInterval;                                   // 0x0178(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6AKM[0x4];                                     // 0x017C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                QueueUpdateTimerHandle;                                    // 0x0180(0x0008) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FPUMG_CustomMatchMember>             CustomMatchMembers;                                        // 0x0188(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_F12N[0x70];                                    // 0x0198(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CustomMatchSpectateTeamId;                                 // 0x0208(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6KZN[0x4];                                     // 0x020C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(224);
		return ptr;
	}



	void StartCustomMatch(bool bDoChecks);
	void SetPlayerTeamCustomMatch(int64_t PlayerId, int TeamId);
	void SetPendingMapForCustomQueue(int MapId);
	void SetMapForCustomMatch(int MapId);
	bool LeaveQueue(bool bLeaveMatch);
	void KickFromCustomMatch(int64_t PlayerId);
	bool JoinQueue(int QueueId);
	bool IsQueueActive(int QueueId);
	bool STATIC_IsInQueue();
	bool STATIC_IsInGame();
	bool STATIC_IsInCustomMatch();
	bool IsCustomInvitePending(int64_t PlayerId);
	void InviteToCustomMatch(int64_t PlayerId);
	void IncrementPlayerTeamCustomMatch(int64_t PlayerId);
	bool STATIC_HasCurrentMatchId();
	void HandleInviteCooldowns();
	void HandleConfirmKickCustomPlayer();
	float GetTimeInQueueSeconds();
	int GetTeamMemberCount(int TeamId);
	TArray<int> GetQueueIds();
	int GetPlayerTeamId(int64_t PlayerId);
	int GetPendingCustomMatchMapId();
	int GetNextTeamId(int RelativeToTeamId);
	bool GetIsJoiningBackfillGame();
	PlatformUMG_EPUMG_CustomMatchPermission GetCustomMatchPermissions(int64_t PlayerId);
	TArray<struct FPUMG_CustomMatchMember> GetCustomMatchMembers();
	int GetCustomMatchMapId();
	class UPUMG_PlayerInfo* GetCustomMatchInviterPlayerInfo();
	PlatformUMG_EPUMG_MatchStatus GetCurrentQueueMatchState();
	bool STATIC_GetCurrentQueueId(int* QueueId);
	bool GetBaseQueueInfoById(int QueueId, struct FPUMG_ClientQueueInfo* InClientQueueInfo);
	void DeclineMatchInvite();
	void CreateCustomMatch(int QueueId, int TeamSize, int TaskForceCount);
	PlatformUMG_EPUMG_CustomMatchError CheckCustomMatch(bool bAllowGMOverride);
	bool CanQueue();
	bool CanLocalPlayerPromoteCustomLobbyPlayer(int64_t PlayerId);
	bool CanLocalPlayerKickCustomLobbyPlayer(int64_t PlayerId);
	bool CanLocalPlayerControlCustomLobbyPlayer(int64_t PlayerId);
	bool AttemptRejoinMatch(bool Forced);
	void AcceptMatchInvite();
};

// Class PlatformUMG.PUMG_SettingsDataFactory
// 0x00A0 (FullSize[0x00D8] - InheritedSize[0x0038])
class UPUMG_SettingsDataFactory : public UPUMG_DataFactory
{
public:
	struct FScriptMulticastDelegate                    OnPopulateUserSettings;                                    // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPopulateUserBindings;                                    // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPopulateUserGPBindings;                                  // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPostLogin;                                               // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPostLogoff;                                              // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSettingValueChanged;                                     // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4EA8[0x40];                                    // 0x0098(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(225);
		return ptr;
	}



	bool OnSettingChanged(const struct FName& SettingId, int SettingValue);
	void InitSettingsForPlayer();
};

// Class PlatformUMG.PUMG_Coupon
// 0x0000 (FullSize[0x01B8] - InheritedSize[0x01B8])
class UPUMG_Coupon : public UPlatformInventoryItem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(226);
		return ptr;
	}



};

// Class PlatformUMG.PUMG_StorePurchaseRequest
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UPUMG_StorePurchaseRequest : public UObject
{
public:
	int                                                LootTableItemId;                                           // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VendorId;                                                  // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PriceInUI;                                                 // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6J0Y[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPlatformInventoryItem*                      CurrencyType;                                              // 0x0038(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                  // 0x0040(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LocationId;                                                // 0x0044(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CouponId;                                                  // 0x0048(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GiftPlayerId;                                              // 0x004C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GiftMsgIndex;                                              // 0x0050(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AnonymousGift;                                             // 0x0054(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SkipCurrencyAmountValidation;                              // 0x0055(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2O10[0x2];                                     // 0x0056(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class UPUMG_StoreItemHelper>        pItemHelper;                                               // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(227);
		return ptr;
	}



	bool SubmitPurchaseRequest();
};

// Class PlatformUMG.PUMG_PortalOffer
// 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
class UPUMG_PortalOffer : public UObject
{
public:
	struct FString                                     SKU;                                                       // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PreSaleCost;                                               // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_81HE[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayPreSaleCost;                                        // 0x0040(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                              cost;                                                      // 0x0058(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JQCX[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       DisplayCost;                                               // 0x0060(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       CurrencyCode;                                              // 0x0078(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Name;                                                      // 0x0090(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Desc;                                                      // 0x00A8(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       ShortDesc;                                                 // 0x00C0(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       TaxMessage;                                                // 0x00D8(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(228);
		return ptr;
	}



	int GetDiscountPercentage();
};

// Class PlatformUMG.PUMG_StoreItemPrice
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UPUMG_StoreItemPrice : public UObject
{
public:
	int                                                PreSalePrice;                                              // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Price;                                                     // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CurrencyType[0x28];                                        // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	TWeakObjectPtr<class UPUMG_StoreItemHelper>        pItemHelper;                                               // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(229);
		return ptr;
	}



	int GetPriceWithCoupon(class UPUMG_StoreItem* Coupon);
	int GetDiscountPercentage();
	bool CanAfford(int Quantity, class UPUMG_StoreItem* Coupon);
};

// Class PlatformUMG.PUMG_StoreItem
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UPUMG_StoreItem : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnPriceSetDirty;                                           // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5KYI[0x10];                                    // 0x0038(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class UPUMG_StoreItemHelper>        pItemHelper;                                               // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      InventoryItem[0x28];                                       // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	class UPUMG_PortalOffer*                           PortalOffer;                                               // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(230);
		return ptr;
	}



	void UIX_ShowPurchaseConfirmation(class UPUMG_StoreItemPrice* pPrice);
	bool ShouldDisplayToUser();
	void PurchaseFromPortal();
	bool IsRented(int64_t PlayerId);
	bool IsRecipeFulfilled(int64_t PlayerId);
	bool IsOwned(int64_t PlayerId);
	bool IsOnSale();
	bool IsActive();
	bool HasPortalOffer();
	int GetVendorId();
	int GetUIHint();
	int GetType();
	int GetSubType();
	int GetSortOrder();
	struct FSoftObjectPath GetSoftItemIconAsPath();
	void GetSoftItemIcon();
	int GetRecipeEntryType();
	int GetQuantityOwned(int64_t PlayerId);
	class UPUMG_StorePurchaseRequest* GetPurchaseRequest();
	TArray<class UPUMG_StoreItemPrice*> GetPrices();
	class UPUMG_StoreItemPrice* GetPrice();
	class UPUMG_PortalOffer* GetPortalOffer();
	struct FText GetName();
	int GetLootQuantity();
	int GetLootId();
	int GetItemId();
	void GetInventoryItem();
	struct FText GetFormattedNameDisplay(int ExternalQuantity);
	struct FText GetFormattedDescDisplay();
	struct FText GetDescription();
	TArray<class UPUMG_StoreItem*> GetCouponsForPrice(class UPUMG_StoreItemPrice* Price);
	int GetBundleId();
	int GetBestDiscount();
	class UPUMG_StoreItem* GetBestCouponForPrice(class UPUMG_StoreItemPrice* Price);
	void ConfirmGotoPortalOffer();
	bool CanAfford(class UPUMG_StoreItemPrice* Price, int Quantity);
};

// Class PlatformUMG.PUMG_XpTable
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UPUMG_XpTable : public UObject
{
public:
	unsigned char                                      UnknownData_FELE[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(231);
		return ptr;
	}



	int64_t GetXpAtLevel(int XpLevel);
	int64_t GetXpAtIndex(int Index);
	int GetMinXpLevel();
	int GetLevelCount();
	int GetLevelAtXp(int64_t XpPoints);
	int64_t GetId();
};

// Class PlatformUMG.PUMG_StoreItemHelper
// 0x0268 (FullSize[0x0290] - InheritedSize[0x0028])
class UPUMG_StoreItemHelper : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnPurchaseItem;                                            // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPurchasePortalItem;                                      // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNotEnoughCurrency;                                       // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnReceiveVendor;                                           // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnReceiveXpTables;                                         // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnReceivePricePoints;                                      // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPortalOffersReceived;                                    // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPendingPurchaseReceived;                                 // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPurchaseSubmitted;                                       // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OUF0[0x28];                                    // 0x00B8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, class UPUMG_StoreItem*>       SkuToStoreItem;                                            // 0x00E0(0x0050) (Transient, Protected, NativeAccessSpecifierProtected)
	TMap<int, class UPUMG_StoreItem*>                  StoreItems;                                                // 0x0130(0x0050) (Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_V9EU[0x60];                                    // 0x0180(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<int64_t, class UPUMG_XpTable*>                XpTables;                                                  // 0x01E0(0x0050) (Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FFTR[0x50];                                    // 0x0230(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               XpTablesLoaded;                                            // 0x0280(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               PricePointsLoaded;                                         // 0x0281(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               PortalOffersLoaded;                                        // 0x0282(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MSPE[0x5];                                     // 0x0283(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameInstance*                               GameInstance;                                              // 0x0288(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(232);
		return ptr;
	}



	void UIX_RedeemCode(const struct FString& Code);
	bool UIX_CompletePurchaseItem(class UPUMG_StorePurchaseRequest* PurchaseRequest);
	int RequestVendorData(TArray<int> VendorIds);
	bool HasPendingPurchase();
	class UPUMG_XpTable* GetXpTable(int64_t XpTableId);
	TArray<class UPUMG_StoreItem*> GetStoreItemsForVendor(int nVendorId, bool bIncludeInactiveItems, bool bSearchSubContainers);
	TArray<class UPUMG_StoreItem*> GetStoreItemsAndQuantitiesForVendor(int nVendorId, bool bIncludeInactiveItems, bool bSearchSubContainers, TMap<int, int>* QuantityMap, int ExternalQuantity);
	class UPUMG_StoreItem* GetStoreItemForVendorByItemId(int nVendorId, int nItemId, bool bSearchSubVendors);
	class UPUMG_StoreItem* GetStoreItemForVendor(int nVendorId, int nLootItemId);
	class UPUMG_StoreItem* GetStoreItem(int LootId);
	TArray<class UPUMG_StorePurchaseRequest*> GetPendingPurchaseData();
	void ExitInGameStoreUI();
	void EnterInGameStoreUI();
	bool DoesPortalHaveOffers();
	bool AreXpTablesLoaded();
	bool ArePricePointsLoaded();
	bool ArePortalOffersLoaded();
};

// Class PlatformUMG.PUMG_UISoundTheme
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UPUMG_UISoundTheme : public UObject
{
public:
	TMap<struct FName, struct FPUMG_SoundThemeEventMapping> SoundEventBindings;                                        // 0x0028(0x0050) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(233);
		return ptr;
	}



};

// Class PlatformUMG.PUMG_GenericRouteDataObject
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UPUMG_GenericRouteDataObject : public UObject
{
public:
	struct FString                                     StringValue;                                               // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IntValue;                                                  // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NameValue;                                                 // 0x003C(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_965N[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(234);
		return ptr;
	}



};

// Class PlatformUMG.PUMG_ViewRedirecter
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPUMG_ViewRedirecter : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(235);
		return ptr;
	}



	bool ShouldRedirect(class APUMG_HUD* HUD, const struct FName& Route, class UObject** SceneData);
};

// Class PlatformUMG.PUMG_ViewLayer
// 0x00F0 (FullSize[0x0118] - InheritedSize[0x0028])
class UPUMG_ViewLayer : public UObject
{
public:
	class UCanvasPanel*                                DisplayTarget;                                             // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPUMG_ViewManager*                           MyManager;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	PlatformUMG_EViewManagerTransitionState            CurrentTransitionState;                                    // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AIF6[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               CurrentRouteStack;                                         // 0x0040(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FName>                               CurrentTransitionRouteStack;                               // 0x0050(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<struct FName, class UPUMG_Widget*>            RouteWidgetMap;                                            // 0x0060(0x0050) (ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FName                                       DefaultRoute;                                              // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XGSZ[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FName, class UObject*>                 PendingRouteData;                                          // 0x00C0(0x0050) (Transient, Protected, NativeAccessSpecifierProtected)
	class UDataTable*                                  Routes;                                                    // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(236);
		return ptr;
	}



	bool IsRouteValid(const struct FName& RouteName);
	void GoToRoute_InternalShowStep();
	void GoToRoute_HandleShowFinished(class UPUMG_Widget* Widget);
	void GoToRoute_HandleHideFinished(class UPUMG_Widget* Widget);
};

// Class PlatformUMG.PUMG_ViewManager
// 0x00C0 (FullSize[0x00E8] - InheritedSize[0x0028])
class UPUMG_ViewManager : public UObject
{
public:
	TArray<class UPUMG_ViewLayer*>                     ViewLayers;                                                // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FName, class UPUMG_Widget*>            StickyWidgetMap;                                           // 0x0038(0x0050) (ExportObject, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnViewStateChanged;                                        // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnViewStateChangeStarted;                                  // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class APUMG_HUD*                                   HudRef;                                                    // 0x00A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCanvasPanel*>                        CanvasPanels;                                              // 0x00B0(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FStickyWidgetData>                   StickyWidgets;                                             // 0x00C0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                                  Routes;                                                    // 0x00D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FViewRouteRedirectData>              AlwaysCheckRouteData;                                      // 0x00D8(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(237);
		return ptr;
	}



	bool SwapRoute(const struct FName& RouteName, const struct FName& SwapTargetRoute, bool ForceTransition);
	void SetPendingRouteData(const struct FName& RouteName, class UObject* Data);
	bool ReplaceRoute(const struct FName& RouteName, bool ForceTransition, class UObject* Data);
	bool RemoveRoute(const struct FName& RouteName, bool ForceTransition);
	bool PushRoute(const struct FName& RouteName, bool ForceTransition, class UObject* Data);
	bool PopRoute(bool ForceTransition);
	bool IsLayerIdle(PlatformUMG_EViewManagerLayer LayerType);
	bool IsEveryLayerIdle();
	bool IsBlockingAcquisitions();
	void InitializeRoutes(class UDataTable* RouteTable);
	void Initialize();
	bool HasCompletedRedirectFlow(PlatformUMG_EViewRouteRedirectionPhase RedirectPhase);
	int GetViewRouteCount();
	class UPUMG_Widget* GetTopViewRouteWidget();
	struct FName GetTopViewRoute();
	PlatformUMG_EViewManagerLayer GetTopLayer();
	bool GetPendingRouteData(const struct FName& RouteName, class UObject** Data);
	struct FName GetDefaultRouteForLayer(PlatformUMG_EViewManagerLayer LayerType);
	struct FName GetCurrentTransitionRoute(PlatformUMG_EViewManagerLayer Layer);
	struct FName GetCurrentRoute(PlatformUMG_EViewManagerLayer Layer);
	bool ContainsRoute(const struct FName& RouteName);
};

// Class PlatformUMG.PUMG_VoiceChatManager
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UPUMG_VoiceChatManager : public UObject
{
public:
	bool                                               bPendingPartyVoipJoin;                                     // 0x0028(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bPendingMatchVoipJoin;                                     // 0x0029(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ASYW[0x6];                                     // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CurrentPartyVoiceChatChannel;                              // 0x0030(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CurrentPartyId;                                            // 0x0040(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TQ9N[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CurrentMatchVoiceChatChannel;                              // 0x0048(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	PlatformUMG_EPUMG_MatchStatus                      CurrentMatchStatus;                                        // 0x0058(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5B93[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSerializedMatchId                          CurrentMatchId;                                            // 0x0060(0x0010) (Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCurrentIsTokenForTaskForce;                               // 0x0070(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PIBV[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPUMG_PartyDataFactory*                      PartyDataFactory;                                          // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPUMG_QueueDataFactory*                      QueueDataFactory;                                          // 0x0080(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(238);
		return ptr;
	}



	void OnPartyDataUpdated();
	void OnMatchStatusUpdated(PlatformUMG_EPUMG_MatchStatus MatchStatus);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
