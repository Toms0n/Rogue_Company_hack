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

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetOptionWidgets
struct UWBP_PlayerContextMenu_C_GetOptionWidgets_Params
{
	TArray<class UWBP_PlayerContextMenuOption_C*>      Option_Widgets;                                            // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnUpdateContextButtons
struct UWBP_PlayerContextMenu_C_OnUpdateContextButtons_Params
{
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.HandleOptionSelected
struct UWBP_PlayerContextMenu_C_HandleOptionSelected_Params
{
	KillstreakUINew_EPlayerContextOptions              ContextOption;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.IsShowingPlayer
struct UWBP_PlayerContextMenu_C_IsShowingPlayer_Params
{
	class UKSPlayerInfo*                               playerinfo;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Showing;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.IsContextMenuOpen
struct UWBP_PlayerContextMenu_C_IsContextMenuOpen_Params
{
	bool                                               IsOpen;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.ShowForPlayerCard
struct UWBP_PlayerContextMenu_C_ShowForPlayerCard_Params
{
	class UWBP_player_card_module_C*                   PlayerCard;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.MoveToWidgetSide
struct UWBP_PlayerContextMenu_C_MoveToWidgetSide_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	KillstreakUINew_EViewSide                          side;                                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                     Padding;                                                   // 0x000C(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.UpdatePlayerAliases
struct UWBP_PlayerContextMenu_C_UpdatePlayerAliases_Params
{
	TArray<struct FPlayerAlias>                        Aliases;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.MoveToWidget
struct UWBP_PlayerContextMenu_C_MoveToWidget_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.IsCurrentAccountId
struct UWBP_PlayerContextMenu_C_IsCurrentAccountId_Params
{
	struct FString                                     AccountId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               IsAccountId;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.RefreshOptionsPadding
struct UWBP_PlayerContextMenu_C_RefreshOptionsPadding_Params
{
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.HideContextMenu
struct UWBP_PlayerContextMenu_C_HideContextMenu_Params
{
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Move To Player Card And Show
struct UWBP_PlayerContextMenu_C_Move_To_Player_Card_And_Show_Params
{
	class UWBP_player_card_module_C*                   Selected_Player_Card;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Is Any Option Visible
struct UWBP_PlayerContextMenu_C_Is_Any_Option_Visible_Params
{
	bool                                               Return_Value;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnKeyUp
struct UWBP_PlayerContextMenu_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnKeyDown
struct UWBP_PlayerContextMenu_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetAllActiveButtons
struct UWBP_PlayerContextMenu_C_GetAllActiveButtons_Params
{
	TArray<class UWidget*>                             Buttons;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetFirstActiveButton
struct UWBP_PlayerContextMenu_C_GetFirstActiveButton_Params
{
	class UWidget*                                     FocusWidget;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.ShowForPlayer
struct UWBP_PlayerContextMenu_C_ShowForPlayer_Params
{
	class UKSPlayerInfo*                               Friend_Info;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.PreConstruct
struct UWBP_PlayerContextMenu_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Handle Input State Changed
struct UWBP_PlayerContextMenu_C_Handle_Input_State_Changed_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Handle View State Changed
struct UWBP_PlayerContextMenu_C_Handle_View_State_Changed_Params
{
	struct FName                                       CurrentRoute;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       PreviousRoute;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	PlatformUMG_EViewManagerLayer                      Layer;                                                     // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnInitialized
struct UWBP_PlayerContextMenu_C_OnInitialized_Params
{
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_0_OnVoiceParticipantUpdated__DelegateSignature
struct UWBP_PlayerContextMenu_C_BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_0_OnVoiceParticipantUpdated__DelegateSignature_Params
{
	struct FString                                     AccountId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               bIsTalking;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsMuted;                                                  // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_1_OnVoiceAudioStateChange__DelegateSignature
struct UWBP_PlayerContextMenu_C_BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_1_OnVoiceAudioStateChange__DelegateSignature_Params
{
	KillstreakUINew_EKSVoiceActivityAudioState         AudioState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.DelayMoveMenu
struct UWBP_PlayerContextMenu_C_DelayMoveMenu_Params
{
	class UKSWidget*                                   Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                     Padding;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	KillstreakUINew_EViewSide                          side;                                                      // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.On Player Card Update
struct UWBP_PlayerContextMenu_C_On_Player_Card_Update_Params
{
	class UWBP_player_card_module_C*                   Player_Card;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.ExecuteUbergraph_WBP_PlayerContextMenu
struct UWBP_PlayerContextMenu_C_ExecuteUbergraph_WBP_PlayerContextMenu_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnReportPlayer_0__DelegateSignature
struct UWBP_PlayerContextMenu_C_OnReportPlayer_0__DelegateSignature_Params
{
	class UKSPlayerInfo*                               playerinfo;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnMenuStart__DelegateSignature
struct UWBP_PlayerContextMenu_C_OnMenuStart__DelegateSignature_Params
{
	class UWidget*                                     FocusWidget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnMenuHidden__DelegateSignature
struct UWBP_PlayerContextMenu_C_OnMenuHidden__DelegateSignature_Params
{
};

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnReadyForNavigation__DelegateSignature
struct UWBP_PlayerContextMenu_C_OnReadyForNavigation__DelegateSignature_Params
{
	TArray<class UWidget*>                             NavWidgets;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	class UWidget*                                     Default_Widget;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
