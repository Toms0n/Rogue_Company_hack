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

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Is in EOM View State
struct ABP_BrightLobbyHUD_C_Is_in_EOM_View_State_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Show Lobby Radial Select
struct ABP_BrightLobbyHUD_C_Show_Lobby_Radial_Select_Params
{
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetDefaultPlayerAccountItem
struct ABP_BrightLobbyHUD_C_GetDefaultPlayerAccountItem_Params
{
	Killstreak_EPlayerAccountSlot                      ItemSlot;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSItem*                                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SetupQueueEvents
struct ABP_BrightLobbyHUD_C_SetupQueueEvents_Params
{
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.CallRemoveTopViewRoute
struct ABP_BrightLobbyHUD_C_CallRemoveTopViewRoute_Params
{
	bool                                               ForceTransition;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ViewChanged;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.CallAddViewRoute
struct ABP_BrightLobbyHUD_C_CallAddViewRoute_Params
{
	struct FName                                       RouteName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ClearRouteStack;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ForceTransition;                                           // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ViewChanged;                                               // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SafeFrameSettingApplied
struct ABP_BrightLobbyHUD_C_SafeFrameSettingApplied_Params
{
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.BindSettingCallbacks
struct ABP_BrightLobbyHUD_C_BindSettingCallbacks_Params
{
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.InternalAddViewRoute
struct ABP_BrightLobbyHUD_C_InternalAddViewRoute_Params
{
	struct FName                                       RouteName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ClearRouteStack;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ForceTransition;                                           // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     Data;                                                      // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ViewChanged;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.OnAcquisition
struct ABP_BrightLobbyHUD_C_OnAcquisition_Params
{
	class UKSAcquisition*                              Acquisition;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetContextBarWidget
struct ABP_BrightLobbyHUD_C_GetContextBarWidget_Params
{
	class UKSContextBarWidget*                         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SwapViewRoute
struct ABP_BrightLobbyHUD_C_SwapViewRoute_Params
{
	struct FName                                       RouteName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SwapTargetRoute;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ForceTransition;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Remove Top View Route
struct ABP_BrightLobbyHUD_C_Remove_Top_View_Route_Params
{
	bool                                               ForceTransition;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ViewChanged;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Add View Route
struct ABP_BrightLobbyHUD_C_Add_View_Route_Params
{
	struct FName                                       RouteName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ClearRouteStack;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ForceTransition;                                           // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ViewChanged;                                               // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandeEOMResults
struct ABP_BrightLobbyHUD_C_HandeEOMResults_Params
{
	bool                                               ForceTransition;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetCurrentTransitionRoute
struct ABP_BrightLobbyHUD_C_GetCurrentTransitionRoute_Params
{
	struct FName                                       Current_Route;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetLobbyWidget
struct ABP_BrightLobbyHUD_C_GetLobbyWidget_Params
{
	class UKSLobbyWidget*                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Focus Home Screen
struct ABP_BrightLobbyHUD_C_Focus_Home_Screen_Params
{
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Get Current View Route
struct ABP_BrightLobbyHUD_C_Get_Current_View_Route_Params
{
	struct FName                                       Current_Route;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Focus Sticky Loadout Panel
struct ABP_BrightLobbyHUD_C_Focus_Sticky_Loadout_Panel_Params
{
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Get Current Loadout Slot
struct ABP_BrightLobbyHUD_C_Get_Current_Loadout_Slot_Params
{
	unsigned char                                      Current_Loadout_Slot;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Cache Current Loadout Slot
struct ABP_BrightLobbyHUD_C_Cache_Current_Loadout_Slot_Params
{
	unsigned char                                      Loadout_Slot_Edit;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.TempBootstrapFunctionality
struct ABP_BrightLobbyHUD_C_TempBootstrapFunctionality_Params
{
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.FallbackLogoutCleanup
struct ABP_BrightLobbyHUD_C_FallbackLogoutCleanup_Params
{
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetFocusableWidgetContainers
struct ABP_BrightLobbyHUD_C_GetFocusableWidgetContainers_Params
{
	TArray<class UPanelWidget*>                        ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Handle Login State Change
struct ABP_BrightLobbyHUD_C_Handle_Login_State_Change_Params
{
	PlatformUMG_EPUMG_LoginState                       Login_State;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetPopupManager
struct ABP_BrightLobbyHUD_C_GetPopupManager_Params
{
	class UPUMG_PopupManager*                          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Handle Party Invite Received
struct ABP_BrightLobbyHUD_C_Handle_Party_Invite_Received_Params
{
	class UPUMG_PlayerInfo*                            Inviter;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ReceiveBeginPlay
struct ABP_BrightLobbyHUD_C_ReceiveBeginPlay_Params
{
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleOpenTextChat
struct ABP_BrightLobbyHUD_C_HandleOpenTextChat_Params
{
	bool                                               BeginChatCommand;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.OpenTextChatToPlayer
struct ABP_BrightLobbyHUD_C_OpenTextChatToPlayer_Params
{
	class UPUMG_PlayerInfo*                            Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ApplySafeFrameScale
struct ABP_BrightLobbyHUD_C_ApplySafeFrameScale_Params
{
	float                                              SafeFrameScale;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.OnCustomQueueJoin
struct ABP_BrightLobbyHUD_C_OnCustomQueueJoin_Params
{
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.EvaluateFocus
struct ABP_BrightLobbyHUD_C_EvaluateFocus_Params
{
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleMatchStatusUpdated
struct ABP_BrightLobbyHUD_C_HandleMatchStatusUpdated_Params
{
	PlatformUMG_EPUMG_MatchStatus                      MatchStatus;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleRewardsReceived
struct ABP_BrightLobbyHUD_C_HandleRewardsReceived_Params
{
	struct FPlayerRewardsSummary                       PlayerRewardsSummary;                                      // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FScoreboardStats                            ScoreboardStats;                                           // 0x0060(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ExecuteUbergraph_BP_BrightLobbyHUD
struct ABP_BrightLobbyHUD_C_ExecuteUbergraph_BP_BrightLobbyHUD_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Loadout Slot Change__DelegateSignature
struct ABP_BrightLobbyHUD_C_Loadout_Slot_Change__DelegateSignature_Params
{
	unsigned char                                      Loadout_Slot_Edit;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
