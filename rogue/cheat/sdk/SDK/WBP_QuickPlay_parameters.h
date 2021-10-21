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

// Function WBP_QuickPlay.WBP_QuickPlay_C.UpdateTopQueueButton
struct UWBP_QuickPlay_C_UpdateTopQueueButton_Params
{
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.OpenRankedOverview
struct UWBP_QuickPlay_C_OpenRankedOverview_Params
{
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.PopulateRankedScreenData
struct UWBP_QuickPlay_C_PopulateRankedScreenData_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.SetMapList
struct UWBP_QuickPlay_C_SetMapList_Params
{
	TArray<struct FMapDetail>                          MapList;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.OnKeyDown
struct UWBP_QuickPlay_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.OnKeyUp
struct UWBP_QuickPlay_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.UpdateWarning
struct UWBP_QuickPlay_C_UpdateWarning_Params
{
	struct FClientQueueInfo                            ClientQueueInfo;                                           // 0x0000(0x00C8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.SetMapRotation
struct UWBP_QuickPlay_C_SetMapRotation_Params
{
	TArray<struct FUIMapInfo>                          MapRotations;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.SetTouchActiveState
struct UWBP_QuickPlay_C_SetTouchActiveState_Params
{
	struct FClientQueueInfo                            QueueInfo;                                                 // 0x0000(0x00C8)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.SetQueueButtonNavigation
struct UWBP_QuickPlay_C_SetQueueButtonNavigation_Params
{
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.GoToQueueScreen
struct UWBP_QuickPlay_C_GoToQueueScreen_Params
{
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.ResetDetails
struct UWBP_QuickPlay_C_ResetDetails_Params
{
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.UpdateDetails
struct UWBP_QuickPlay_C_UpdateDetails_Params
{
	struct FClientQueueInfo                            QueueButton;                                               // 0x0000(0x00C8)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.ReconcileGameModeButtonEnabling
struct UWBP_QuickPlay_C_ReconcileGameModeButtonEnabling_Params
{
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.NavigateBack
struct UWBP_QuickPlay_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.HandleInputModeChanged
struct UWBP_QuickPlay_C_HandleInputModeChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputMode;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.SetDefaultFocusForQueues
struct UWBP_QuickPlay_C_SetDefaultFocusForQueues_Params
{
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.ResetQueueSelection
struct UWBP_QuickPlay_C_ResetQueueSelection_Params
{
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.SetupQueueButtons
struct UWBP_QuickPlay_C_SetupQueueButtons_Params
{
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.StartHideAnim
struct UWBP_QuickPlay_C_StartHideAnim_Params
{
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.InitializeTickAnimations
struct UWBP_QuickPlay_C_InitializeTickAnimations_Params
{
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.InitHideAnimation
struct UWBP_QuickPlay_C_InitHideAnimation_Params
{
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.ShowQueueTitleFinished
struct UWBP_QuickPlay_C_ShowQueueTitleFinished_Params
{
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.ShowQueueTitleAnim
struct UWBP_QuickPlay_C_ShowQueueTitleAnim_Params
{
	float                                              ElapsedTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ElapsedAlpha;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.HideQueueTitleFinished
struct UWBP_QuickPlay_C_HideQueueTitleFinished_Params
{
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.HideQueueTitleAnim
struct UWBP_QuickPlay_C_HideQueueTitleAnim_Params
{
	float                                              ElapsedTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ElapsedAlpha;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.ShowQueueSelectionFinished
struct UWBP_QuickPlay_C_ShowQueueSelectionFinished_Params
{
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.ShowQueueSelectionAnim
struct UWBP_QuickPlay_C_ShowQueueSelectionAnim_Params
{
	float                                              ElapsedTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ElapsedAlpha;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.HideQueueSelectionFinished
struct UWBP_QuickPlay_C_HideQueueSelectionFinished_Params
{
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.HideQueueSelectionAnim
struct UWBP_QuickPlay_C_HideQueueSelectionAnim_Params
{
	float                                              ElapsedTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ElapsedAlpha;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.InitializeWidget
struct UWBP_QuickPlay_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.HandleGameModeSelected
struct UWBP_QuickPlay_C_HandleGameModeSelected_Params
{
	int                                                QueueId;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.HandleGameModeHovered
struct UWBP_QuickPlay_C_HandleGameModeHovered_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.HandleGameModeUnhovered
struct UWBP_QuickPlay_C_HandleGameModeUnhovered_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.InitializeWidgetNavigation
struct UWBP_QuickPlay_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.GoToLastScreen
struct UWBP_QuickPlay_C_GoToLastScreen_Params
{
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.StartShowSequence
struct UWBP_QuickPlay_C_StartShowSequence_Params
{
	struct FName                                       FromRoute;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ToRoute;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.StartHideSequence
struct UWBP_QuickPlay_C_StartHideSequence_Params
{
	struct FName                                       FromRoute;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ToRoute;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.OnControlQueuePermissionChanged
struct UWBP_QuickPlay_C_OnControlQueuePermissionChanged_Params
{
	bool                                               CanControl;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.OnQueuePermissionChanged
struct UWBP_QuickPlay_C_OnQueuePermissionChanged_Params
{
	bool                                               CanQueue;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_BackButtonClicked__DelegateSignature
struct UWBP_QuickPlay_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_BackButtonClicked__DelegateSignature_Params
{
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.OnShown
struct UWBP_QuickPlay_C_OnShown_Params
{
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.OnHide
struct UWBP_QuickPlay_C_OnHide_Params
{
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.StartShowAnim
struct UWBP_QuickPlay_C_StartShowAnim_Params
{
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.OnBackButtonClicked
struct UWBP_QuickPlay_C_OnBackButtonClicked_Params
{
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.HandleRegionSelectRequested
struct UWBP_QuickPlay_C_HandleRegionSelectRequested_Params
{
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.OnRegionSelected
struct UWBP_QuickPlay_C_OnRegionSelected_Params
{
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.OnRegionSelectEntriesCreated
struct UWBP_QuickPlay_C_OnRegionSelectEntriesCreated_Params
{
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.SwitchFocusGroupToScreen
struct UWBP_QuickPlay_C_SwitchFocusGroupToScreen_Params
{
	class UWidget*                                     ScreenToSwitch;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.HandleOnQueueSectionPopulated
struct UWBP_QuickPlay_C_HandleOnQueueSectionPopulated_Params
{
	TArray<class UWBP_QuickPlay_QueueButton_C*>        QueueButtons;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.BndEvt__MobileSelectQueueBtn_K2Node_ComponentBoundEvent_1_OnGraphicBtnClicked__DelegateSignature
struct UWBP_QuickPlay_C_BndEvt__MobileSelectQueueBtn_K2Node_ComponentBoundEvent_1_OnGraphicBtnClicked__DelegateSignature_Params
{
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.PreConstruct
struct UWBP_QuickPlay_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.Construct
struct UWBP_QuickPlay_C_Construct_Params
{
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.HandleQueueErrorStateChange
struct UWBP_QuickPlay_C_HandleQueueErrorStateChange_Params
{
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.CreateCustomMatch
struct UWBP_QuickPlay_C_CreateCustomMatch_Params
{
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.HandleOnCustomSectionPopulated
struct UWBP_QuickPlay_C_HandleOnCustomSectionPopulated_Params
{
	TArray<class UKSWidget*>                           Buttons;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.HandleMapScrollChange
struct UWBP_QuickPlay_C_HandleMapScrollChange_Params
{
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.Tick
struct UWBP_QuickPlay_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0058(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.BndEvt__RankedInfoButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UWBP_QuickPlay_C_BndEvt__RankedInfoButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_QuickPlay.WBP_QuickPlay_C.ExecuteUbergraph_WBP_QuickPlay
struct UWBP_QuickPlay_C_ExecuteUbergraph_WBP_QuickPlay_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
