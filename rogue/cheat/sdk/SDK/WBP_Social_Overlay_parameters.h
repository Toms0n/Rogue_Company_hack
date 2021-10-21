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

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnFriendsScrolled
struct UWBP_Social_Overlay_C_OnFriendsScrolled_Params
{
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.Toggle Context Menu for Player Card
struct UWBP_Social_Overlay_C_Toggle_Context_Menu_for_Player_Card_Params
{
	class UKSWidget*                                   KSWidget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleStatusMenuHidden
struct UWBP_Social_Overlay_C_HandleStatusMenuHidden_Params
{
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleStatusMenuShown
struct UWBP_Social_Overlay_C_HandleStatusMenuShown_Params
{
	class UWBP_PlayerStatus_ContextMenuOption_C*       FocusWidget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleStatusNavigationReady
struct UWBP_Social_Overlay_C_HandleStatusNavigationReady_Params
{
	TArray<class UWBP_PlayerStatus_ContextMenuOption_C*> StatusButtons;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetupHeader
struct UWBP_Social_Overlay_C_SetupHeader_Params
{
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetTabIndex
struct UWBP_Social_Overlay_C_SetTabIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnTabChange
struct UWBP_Social_Overlay_C_OnTabChange_Params
{
	class UWBP_subscreen_nav_tab_C*                    ActiveTabButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetActiveTabByWidget
struct UWBP_Social_Overlay_C_SetActiveTabByWidget_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnMouseButtonUp
struct UWBP_Social_Overlay_C_OnMouseButtonUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0058(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00C8(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.MoveTabBy
struct UWBP_Social_Overlay_C_MoveTabBy_Params
{
	int                                                Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetupNavTabs
struct UWBP_Social_Overlay_C_SetupNavTabs_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.NavigateBack
struct UWBP_Social_Overlay_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.ClosePanel
struct UWBP_Social_Overlay_C_ClosePanel_Params
{
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnShown
struct UWBP_Social_Overlay_C_OnShown_Params
{
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__Blocker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_Social_Overlay_C_BndEvt__Blocker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.StartShowSequence
struct UWBP_Social_Overlay_C_StartShowSequence_Params
{
	struct FName                                       FromRoute;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ToRoute;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.StartHideSequence
struct UWBP_Social_Overlay_C_StartHideSequence_Params
{
	struct FName                                       FromRoute;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ToRoute;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.InitializeWidget
struct UWBP_Social_Overlay_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.UninitializeWidget
struct UWBP_Social_Overlay_C_UninitializeWidget_Params
{
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnPlayerCardClick
struct UWBP_Social_Overlay_C_OnPlayerCardClick_Params
{
	class UKSWidget*                                   PlayerCard;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnInputStateChange
struct UWBP_Social_Overlay_C_OnInputStateChange_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.InitializeWidgetNavigation
struct UWBP_Social_Overlay_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnHide
struct UWBP_Social_Overlay_C_OnHide_Params
{
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnTabLeft
struct UWBP_Social_Overlay_C_OnTabLeft_Params
{
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnTabRight
struct UWBP_Social_Overlay_C_OnTabRight_Params
{
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnToggleSocial
struct UWBP_Social_Overlay_C_OnToggleSocial_Params
{
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnViewStateChange
struct UWBP_Social_Overlay_C_OnViewStateChange_Params
{
	struct FName                                       CurrentRoute;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       PreviousRoute;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	PlatformUMG_EViewManagerLayer                      Layer;                                                     // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnToggleStatusMenu
struct UWBP_Social_Overlay_C_OnToggleStatusMenu_Params
{
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandlePlayerInvitesChanged
struct UWBP_Social_Overlay_C_HandlePlayerInvitesChanged_Params
{
	class UKSDataSocialCategory*                       Category;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UKSDataSocialPlayer*>                 Players;                                                   // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextBlocker_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UWBP_Social_Overlay_C_BndEvt__ContextBlocker_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_5_OnReadyForNavigation__DelegateSignature
struct UWBP_Social_Overlay_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_5_OnReadyForNavigation__DelegateSignature_Params
{
	TArray<class UWidget*>                             NavWidgets;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	class UWidget*                                     Default_Widget;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_6_OnMenuStart__DelegateSignature
struct UWBP_Social_Overlay_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_6_OnMenuStart__DelegateSignature_Params
{
	class UWidget*                                     FocusWidget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_7_OnMenuHidden__DelegateSignature
struct UWBP_Social_Overlay_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_7_OnMenuHidden__DelegateSignature_Params
{
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleNavTabSelected
struct UWBP_Social_Overlay_C_HandleNavTabSelected_Params
{
	class UKSNavTabWidget*                             NavTab;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnHeaderClicked
struct UWBP_Social_Overlay_C_OnHeaderClicked_Params
{
	class UKSWidget*                                   Header;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Social_Overlay.WBP_Social_Overlay_C.ExecuteUbergraph_WBP_Social_Overlay
struct UWBP_Social_Overlay_C_ExecuteUbergraph_WBP_Social_Overlay_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
