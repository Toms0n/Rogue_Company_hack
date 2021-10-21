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

// BlueprintGeneratedClass BP_BrightLobbyHUD.BP_BrightLobbyHUD_C
// 0x0040 (FullSize[0x06F8] - InheritedSize[0x06B8])
class ABP_BrightLobbyHUD_C : public ABP_BrightLobbyHUDMinimal_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBrightLobbyWidget_C*                        LobbyWidget;                                               // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Loadout_Slot_Edit;                                         // 0x06C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2SGT[0x7];                                     // 0x06C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    Loadout_Slot_Change;                                       // 0x06D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FName                                       MatchLoadingRouteName;                                     // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               ClearPendingRouteDataOnSwap;                               // 0x06E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(55424);
		return ptr;
	}



	bool Is_in_EOM_View_State();
	void Show_Lobby_Radial_Select();
	class UKSItem* GetDefaultPlayerAccountItem(Killstreak_EPlayerAccountSlot ItemSlot);
	void SetupQueueEvents();
	void CallRemoveTopViewRoute(bool ForceTransition, bool* ViewChanged);
	void CallAddViewRoute(const struct FName& RouteName, bool ClearRouteStack, bool ForceTransition, bool* ViewChanged);
	void SafeFrameSettingApplied();
	void BindSettingCallbacks();
	void InternalAddViewRoute(const struct FName& RouteName, bool ClearRouteStack, bool ForceTransition, class UObject* Data, bool* ViewChanged);
	void OnAcquisition(class UKSAcquisition* Acquisition);
	class UKSContextBarWidget* GetContextBarWidget();
	void SwapViewRoute(const struct FName& RouteName, const struct FName& SwapTargetRoute, bool ForceTransition);
	void Remove_Top_View_Route(bool ForceTransition, bool* ViewChanged);
	void Add_View_Route(const struct FName& RouteName, bool ClearRouteStack, bool ForceTransition, bool* ViewChanged);
	void HandeEOMResults(bool ForceTransition);
	void GetCurrentTransitionRoute(struct FName* Current_Route);
	class UKSLobbyWidget* GetLobbyWidget();
	void Focus_Home_Screen();
	void Get_Current_View_Route(struct FName* Current_Route);
	void Focus_Sticky_Loadout_Panel();
	void Get_Current_Loadout_Slot(unsigned char* Current_Loadout_Slot);
	void Cache_Current_Loadout_Slot(unsigned char Loadout_Slot_Edit);
	void TempBootstrapFunctionality();
	void FallbackLogoutCleanup();
	TArray<class UPanelWidget*> GetFocusableWidgetContainers();
	void Handle_Login_State_Change(PlatformUMG_EPUMG_LoginState Login_State);
	class UPUMG_PopupManager* GetPopupManager();
	void Handle_Party_Invite_Received(class UPUMG_PlayerInfo* Inviter);
	void ReceiveBeginPlay();
	void HandleOpenTextChat(bool BeginChatCommand);
	void OpenTextChatToPlayer(class UPUMG_PlayerInfo* Player);
	void ApplySafeFrameScale(float SafeFrameScale);
	void OnCustomQueueJoin();
	void EvaluateFocus();
	void HandleMatchStatusUpdated(PlatformUMG_EPUMG_MatchStatus MatchStatus);
	void HandleRewardsReceived(const struct FPlayerRewardsSummary& PlayerRewardsSummary, const struct FScoreboardStats& ScoreboardStats);
	void ExecuteUbergraph_BP_BrightLobbyHUD(int EntryPoint);
	void Loadout_Slot_Change__DelegateSignature(unsigned char Loadout_Slot_Edit);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
