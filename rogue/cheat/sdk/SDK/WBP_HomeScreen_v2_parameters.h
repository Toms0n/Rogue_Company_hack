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

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.GetChallengePanel
struct UWBP_HomeScreen_v2_C_GetChallengePanel_Params
{
	class UKSWidget*                                   Return_Value;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnMouseButtonDown
struct UWBP_HomeScreen_v2_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0058(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00C8(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnKeyUp
struct UWBP_HomeScreen_v2_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.CanFocus
struct UWBP_HomeScreen_v2_C_CanFocus_Params
{
	bool                                               bAllowFous;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UpdateContextPrompts
struct UWBP_HomeScreen_v2_C_UpdateContextPrompts_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StopConflictingAnimation
struct UWBP_HomeScreen_v2_C_StopConflictingAnimation_Params
{
	struct FName                                       AnimName;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.NavigateBack
struct UWBP_HomeScreen_v2_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleQueueStatusChange
struct UWBP_HomeScreen_v2_C_HandleQueueStatusChange_Params
{
	PlatformUMG_EPUMG_MatchStatus                      NewStatus;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UnbindLobbyAnimationHandling
struct UWBP_HomeScreen_v2_C_UnbindLobbyAnimationHandling_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.BindLobbyAnimationHandling
struct UWBP_HomeScreen_v2_C_BindLobbyAnimationHandling_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeContentWidgets
struct UWBP_HomeScreen_v2_C_InitializeContentWidgets_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartShowAnim
struct UWBP_HomeScreen_v2_C_StartShowAnim_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeTickAnimations
struct UWBP_HomeScreen_v2_C_InitializeTickAnimations_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.ShowQuickPlayFinished
struct UWBP_HomeScreen_v2_C_ShowQuickPlayFinished_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.ShowQuickPlayAnim
struct UWBP_HomeScreen_v2_C_ShowQuickPlayAnim_Params
{
	float                                              ElapsedTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ElapsedAlpha;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitHideAnimation
struct UWBP_HomeScreen_v2_C_InitHideAnimation_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HideQuickPlayFinished
struct UWBP_HomeScreen_v2_C_HideQuickPlayFinished_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HideQuickPlayAnim
struct UWBP_HomeScreen_v2_C_HideQuickPlayAnim_Params
{
	float                                              ElapsedTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ElapsedAlpha;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartHideAnim
struct UWBP_HomeScreen_v2_C_StartHideAnim_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeWidget
struct UWBP_HomeScreen_v2_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnShown
struct UWBP_HomeScreen_v2_C_OnShown_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UninitializeWidget
struct UWBP_HomeScreen_v2_C_UninitializeWidget_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartShowSequence
struct UWBP_HomeScreen_v2_C_StartShowSequence_Params
{
	struct FName                                       FromRoute;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ToRoute;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartHideSequence
struct UWBP_HomeScreen_v2_C_StartHideSequence_Params
{
	struct FName                                       FromRoute;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ToRoute;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeWidgetNavigation
struct UWBP_HomeScreen_v2_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Construct
struct UWBP_HomeScreen_v2_C_Construct_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnCrossplayChanged
struct UWBP_HomeScreen_v2_C_OnCrossplayChanged_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UpdateCrossplay
struct UWBP_HomeScreen_v2_C_UpdateCrossplay_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.LoginState
struct UWBP_HomeScreen_v2_C_LoginState_Params
{
	PlatformUMG_EPUMG_LoginState                       LoginState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Update Region
struct UWBP_HomeScreen_v2_C_Update_Region_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Party Player Card Selected
struct UWBP_HomeScreen_v2_C_Handle_Party_Player_Card_Selected_Params
{
	class UWBP_player_card_module_C*                   Selected_Player_Card;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Context Menu Navigation
struct UWBP_HomeScreen_v2_C_Handle_Context_Menu_Navigation_Params
{
	TArray<class UWidget*>                             NavWidgets;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	class UWidget*                                     Default_Widget;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Context Menu Hidden
struct UWBP_HomeScreen_v2_C_Handle_Context_Menu_Hidden_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleContextMenuShown
struct UWBP_HomeScreen_v2_C_HandleContextMenuShown_Params
{
	class UWidget*                                     FocusWidget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateRightFailure
struct UWBP_HomeScreen_v2_C_FocusGroupNavigateRightFailure_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateLeftFailure
struct UWBP_HomeScreen_v2_C_FocusGroupNavigateLeftFailure_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.NewsPanelVisibilityChanged
struct UWBP_HomeScreen_v2_C_NewsPanelVisibilityChanged_Params
{
	bool                                               IsVisible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnEOMButton
struct UWBP_HomeScreen_v2_C_OnEOMButton_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleViewSocial
struct UWBP_HomeScreen_v2_C_HandleViewSocial_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateDownFailure
struct UWBP_HomeScreen_v2_C_FocusGroupNavigateDownFailure_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateUpFailure
struct UWBP_HomeScreen_v2_C_FocusGroupNavigateUpFailure_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Player Card Back Button
struct UWBP_HomeScreen_v2_C_Handle_Player_Card_Back_Button_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.PreConstruct
struct UWBP_HomeScreen_v2_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnSetQueueInputState
struct UWBP_HomeScreen_v2_C_OnSetQueueInputState_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnpartyLeaveVisibilityChange
struct UWBP_HomeScreen_v2_C_OnpartyLeaveVisibilityChange_Params
{
	bool                                               Visible;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.On Boosts Context Button
struct UWBP_HomeScreen_v2_C_On_Boosts_Context_Button_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.On Emote Context Button
struct UWBP_HomeScreen_v2_C_On_Emote_Context_Button_Params
{
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleOnPartyMemberLeft
struct UWBP_HomeScreen_v2_C_HandleOnPartyMemberLeft_Params
{
	struct FPUMG_PartyMemberData                       PartyMember;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.ExecuteUbergraph_WBP_HomeScreen_v2
struct UWBP_HomeScreen_v2_C_ExecuteUbergraph_WBP_HomeScreen_v2_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
