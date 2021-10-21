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

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.ResetPreviewWidgets
struct UWBP_SettingsMenu_C_ResetPreviewWidgets_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.HandlePreviewHovered
struct UWBP_SettingsMenu_C_HandlePreviewHovered_Params
{
	class UKSWidget*                                   PreviewWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.AddPreviewToSettingMenu
struct UWBP_SettingsMenu_C_AddPreviewToSettingMenu_Params
{
	class UKSWidget*                                   PreviewWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.SetupPreviewWidgets
struct UWBP_SettingsMenu_C_SetupPreviewWidgets_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Tab Clicked
struct UWBP_SettingsMenu_C_On_Tab_Clicked_Params
{
	class UKSNavTabWidget*                             Tab_Selected;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.ResetPageState
struct UWBP_SettingsMenu_C_ResetPageState_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetContainerWidgetForPUMGWidgetOnPage
struct UWBP_SettingsMenu_C_GetContainerWidgetForPUMGWidgetOnPage_Params
{
	class UKSSettingsPage*                             Page;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPUMG_Widget*                                PUMG_Widget;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSSettingsContainer*                        KSSettingsContainerWidget;                                 // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Widget Mouse Entered
struct UWBP_SettingsMenu_C_On_Widget_Mouse_Entered_Params
{
	class UPUMG_Widget*                                PUMG_Widget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEntered;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Setup Hover Handling
struct UWBP_SettingsMenu_C_Setup_Hover_Handling_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetSettingsContainersForPage
struct UWBP_SettingsMenu_C_GetSettingsContainersForPage_Params
{
	class UKSSettingsPage*                             SettingsPage;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UKSSettingsContainer*>                SettingsContainers;                                        // 0x0008(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UPUMG_Widget*>                        SettingsContainersAsPUMG;                                  // 0x0018(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetSettingsWidgetForPUMGWidgetOnPage
struct UWBP_SettingsMenu_C_GetSettingsWidgetForPUMGWidgetOnPage_Params
{
	class UKSSettingsPage*                             Page;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPUMG_Widget*                                PUMG_Widget;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSSettingsWidget*                           KSSettingsWidget;                                          // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Get Current Page
struct UWBP_SettingsMenu_C_Get_Current_Page_Params
{
	class UKSSettingsPage*                             KSSettingsPage;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Input State Changed
struct UWBP_SettingsMenu_C_On_Input_State_Changed_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> Input_State;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Setup Input State Handling
struct UWBP_SettingsMenu_C_Setup_Input_State_Handling_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Setup Login Handling
struct UWBP_SettingsMenu_C_Setup_Login_Handling_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Handle Login State
struct UWBP_SettingsMenu_C_Handle_Login_State_Params
{
	PlatformUMG_EPUMG_LoginState                       Login_State;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Tab Right
struct UWBP_SettingsMenu_C_Tab_Right_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Tab Left
struct UWBP_SettingsMenu_C_Tab_Left_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Go To Active Tab
struct UWBP_SettingsMenu_C_Go_To_Active_Tab_Params
{
	bool                                               bInstantSwitch;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Recover From Navigate Failure
struct UWBP_SettingsMenu_C_Recover_From_Navigate_Failure_Params
{
	class UPUMG_Widget*                                PUMG_Widget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index_Offset;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Widget Navigate Down Failure
struct UWBP_SettingsMenu_C_Widget_Navigate_Down_Failure_Params
{
	int                                                Focus_Group;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPUMG_Widget*                                PUMG_Widget;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Widget Navigate Up Failure
struct UWBP_SettingsMenu_C_Widget_Navigate_Up_Failure_Params
{
	int                                                Focus_Group;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPUMG_Widget*                                PUMG_Widget;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Widget Gamepad Hovered
struct UWBP_SettingsMenu_C_On_Widget_Gamepad_Hovered_Params
{
	class UPUMG_Widget*                                PUMG_Widget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bHovered;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Scroll Widget Into View
struct UWBP_SettingsMenu_C_Scroll_Widget_Into_View_Params
{
	class UPUMG_Widget*                                PUMG_Widget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Scroll To Start
struct UWBP_SettingsMenu_C_Scroll_To_Start_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Scroll To End
struct UWBP_SettingsMenu_C_Scroll_To_End_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.GoBack
struct UWBP_SettingsMenu_C_GoBack_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.ConfirmExit
struct UWBP_SettingsMenu_C_ConfirmExit_Params
{
	bool                                               ShouldSaveSettings;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Restore Settings
struct UWBP_SettingsMenu_C_Restore_Settings_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.ExitSettingsPage
struct UWBP_SettingsMenu_C_ExitSettingsPage_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.HasAnyUnsavedSetting
struct UWBP_SettingsMenu_C_HasAnyUnsavedSetting_Params
{
	bool                                               AnyUnsaved;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Save Settings
struct UWBP_SettingsMenu_C_Save_Settings_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.NavigateBackPressed
struct UWBP_SettingsMenu_C_NavigateBackPressed_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.NavigateBack
struct UWBP_SettingsMenu_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetSettingsWidgetsForPage
struct UWBP_SettingsMenu_C_GetSettingsWidgetsForPage_Params
{
	class UKSSettingsPage*                             SettingsPage;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UKSSettingsWidget*>                   SettingsWidgets;                                           // 0x0008(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UPUMG_Widget*>                        SettingsWidgetsAsPUMG;                                     // 0x0018(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.SetupNavigationForPage
struct UWBP_SettingsMenu_C_SetupNavigationForPage_Params
{
	class UKSSettingsPage*                             Page;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Tab Selected
struct UWBP_SettingsMenu_C_On_Tab_Selected_Params
{
	class UKSNavTabWidget*                             Tab_Selected;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bInstantSwitch;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Add Tab For Settings Page
struct UWBP_SettingsMenu_C_Add_Tab_For_Settings_Page_Params
{
	class UKSSettingsPage*                             Settings_Page_Widget;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Add Settings Page Widget
struct UWBP_SettingsMenu_C_Add_Settings_Page_Widget_Params
{
	class UKSSettingsPage*                             Settings_Page;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.SettingsMenuApplyClickSFX
struct UWBP_SettingsMenu_C_SettingsMenuApplyClickSFX_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.SettingsMenuBackClickSFX
struct UWBP_SettingsMenu_C_SettingsMenuBackClickSFX_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.SettingsMenuRevertButtonClickSFX
struct UWBP_SettingsMenu_C_SettingsMenuRevertButtonClickSFX_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.AddSettingsPageWidget
struct UWBP_SettingsMenu_C_AddSettingsPageWidget_Params
{
	class UKSSettingsPage*                             SettingsPage;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnShown
struct UWBP_SettingsMenu_C_OnShown_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnHide
struct UWBP_SettingsMenu_C_OnHide_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnMenuConfigSet
struct UWBP_SettingsMenu_C_OnMenuConfigSet_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.InitializeWidget
struct UWBP_SettingsMenu_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.InitializeWidgetNavigation
struct UWBP_SettingsMenu_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.RebuildNavigation
struct UWBP_SettingsMenu_C_RebuildNavigation_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnBackButton
struct UWBP_SettingsMenu_C_OnBackButton_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnApplyButton
struct UWBP_SettingsMenu_C_OnApplyButton_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnRevertButton
struct UWBP_SettingsMenu_C_OnRevertButton_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnConfirmExit
struct UWBP_SettingsMenu_C_OnConfirmExit_Params
{
	bool                                               ShouldSaveSettings;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.PreConstruct
struct UWBP_SettingsMenu_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.RevertSettings
struct UWBP_SettingsMenu_C_RevertSettings_Params
{
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnCycleBumpers
struct UWBP_SettingsMenu_C_OnCycleBumpers_Params
{
	bool                                               bNext;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.ExecuteUbergraph_WBP_SettingsMenu
struct UWBP_SettingsMenu_C_ExecuteUbergraph_WBP_SettingsMenu_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
