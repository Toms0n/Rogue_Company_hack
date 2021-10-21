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

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.UpdateHoveredPrompts
struct UWBP_CustomLobbyPlayer_C_UpdateHoveredPrompts_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.HandlePlayerContextUnhover
struct UWBP_CustomLobbyPlayer_C_HandlePlayerContextUnhover_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.HandlePlayerContextHover
struct UWBP_CustomLobbyPlayer_C_HandlePlayerContextHover_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.DoHover
struct UWBP_CustomLobbyPlayer_C_DoHover_Params
{
	bool                                               PlayControlsShow;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.DoUnhover
struct UWBP_CustomLobbyPlayer_C_DoUnhover_Params
{
	bool                                               PlayControlsHide;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.DoPlayerClicked
struct UWBP_CustomLobbyPlayer_C_DoPlayerClicked_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GetRendererIsLocalPlayer
struct UWBP_CustomLobbyPlayer_C_GetRendererIsLocalPlayer_Params
{
	bool                                               IsLocalPlayer;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GetCanLocalPlayerKick
struct UWBP_CustomLobbyPlayer_C_GetCanLocalPlayerKick_Params
{
	bool                                               CanKick;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.UserIsOverUs
struct UWBP_CustomLobbyPlayer_C_UserIsOverUs_Params
{
	bool                                               IsOver;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GetCanLocalPlayerControl
struct UWBP_CustomLobbyPlayer_C_GetCanLocalPlayerControl_Params
{
	bool                                               CanControl;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.NavigateConfirm
struct UWBP_CustomLobbyPlayer_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnKeyUp
struct UWBP_CustomLobbyPlayer_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.SetEmpty
struct UWBP_CustomLobbyPlayer_C_SetEmpty_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.SetPlayerInfo
struct UWBP_CustomLobbyPlayer_C_SetPlayerInfo_Params
{
	struct FPUMG_CustomMatchMember                     playerinfo;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.SetControlsSide
struct UWBP_CustomLobbyPlayer_C_SetControlsSide_Params
{
	TEnumAsByte<ELaterality_ELaterality>               side;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GetControlsHoverAnim
struct UWBP_CustomLobbyPlayer_C_GetControlsHoverAnim_Params
{
	class UWidgetAnimation*                            Animation;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.PreConstruct
struct UWBP_CustomLobbyPlayer_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__LobbyPlayerButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
struct UWBP_CustomLobbyPlayer_C_BndEvt__LobbyPlayerButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__LobbyPlayerButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
struct UWBP_CustomLobbyPlayer_C_BndEvt__LobbyPlayerButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GamepadHover
struct UWBP_CustomLobbyPlayer_C_GamepadHover_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GamepadUnhover
struct UWBP_CustomLobbyPlayer_C_GamepadUnhover_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnInitialized
struct UWBP_CustomLobbyPlayer_C_OnInitialized_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__SwapButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWBP_CustomLobbyPlayer_C_BndEvt__SwapButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UWBP_CustomLobbyPlayer_C_BndEvt__KickButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UWBP_CustomLobbyPlayer_C_BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.Construct
struct UWBP_CustomLobbyPlayer_C_Construct_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.HandlePlayerClicked
struct UWBP_CustomLobbyPlayer_C_HandlePlayerClicked_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UWBP_CustomLobbyPlayer_C_BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UWBP_CustomLobbyPlayer_C_BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnContextMenuOpen
struct UWBP_CustomLobbyPlayer_C_OnContextMenuOpen_Params
{
	KillstreakUINew_EViewSide                          side;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnContextMenuClose
struct UWBP_CustomLobbyPlayer_C_OnContextMenuClose_Params
{
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.SetVoiceState
struct UWBP_CustomLobbyPlayer_C_SetVoiceState_Params
{
	bool                                               ShouldShow;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsTalking;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsMuted;                                                   // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnInputStateChange
struct UWBP_CustomLobbyPlayer_C_OnInputStateChange_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.ExecuteUbergraph_WBP_CustomLobbyPlayer
struct UWBP_CustomLobbyPlayer_C_ExecuteUbergraph_WBP_CustomLobbyPlayer_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnPlayerKick__DelegateSignature
struct UWBP_CustomLobbyPlayer_C_OnPlayerKick__DelegateSignature_Params
{
	class UKSPlayerInfo*                               playerinfo;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSWidget*                                   Widget;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnPlayerSwap__DelegateSignature
struct UWBP_CustomLobbyPlayer_C_OnPlayerSwap__DelegateSignature_Params
{
	class UKSPlayerInfo*                               playerinfo;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSWidget*                                   Widget;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnEmptyClicked__DelegateSignature
struct UWBP_CustomLobbyPlayer_C_OnEmptyClicked__DelegateSignature_Params
{
	class UKSWidget*                                   Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnPlayerClicked__DelegateSignature
struct UWBP_CustomLobbyPlayer_C_OnPlayerClicked__DelegateSignature_Params
{
	class UKSPlayerInfo*                               playerinfo;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSWidget*                                   Widget;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
