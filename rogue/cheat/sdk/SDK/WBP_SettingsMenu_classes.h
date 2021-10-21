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

// WidgetBlueprintGeneratedClass WBP_SettingsMenu.WBP_SettingsMenu_C
// 0x00F9 (FullSize[0x0639] - InheritedSize[0x0540])
class UWBP_SettingsMenu_C : public UKSSettingsMenu
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0540(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            BackHovered;                                               // 0x0548(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            RevertHovered;                                             // 0x0550(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            ApplyHovered;                                              // 0x0558(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_KeyCallout_C*                           LeftTabCallout;                                            // 0x0560(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              NavTabBox;                                                 // 0x0568(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    PreviewContainer;                                          // 0x0570(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyCallout_C*                           RightTabCallout;                                           // 0x0578(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  SettingsDescription;                                       // 0x0580(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             SettingsPageWidgetSwitcher;                                // 0x0588(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  SettingsTitle;                                             // 0x0590(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_panel_bevel_C*                          WBP_panel_bevel;                                           // 0x0598(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_subscreen_nav_tab_C*>            WBP_subscreen_nav_tabs;                                    // 0x05A0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UPUMG_Widget*>                        TopWidgets;                                                // 0x05B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UPUMG_Widget*>                        BottomWidgets;                                             // 0x05C0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	PlatformUMG_EPUMG_LoginState                       Login_State;                                               // 0x05D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4VT3[0x3];                                     // 0x05D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       TAB_LEFT_NAME;                                             // 0x05D4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       TAB_RIGHT_NAME;                                            // 0x05DC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       APPLY_NAME;                                                // 0x05E4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       RESTORE_NAME;                                              // 0x05EC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GEQB[0x4];                                     // 0x05F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UKSSettingsPage*>                     WBP_SubScreens;                                            // 0x05F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FName                                       ESC_NAME;                                                  // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                               BackSettingsMenuSFX;                                       // 0x0610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UAkAudioEvent*                               RevertSettingsMenuSFX;                                     // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UAkAudioEvent*                               ApplySettingsMenuSFX;                                      // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UKSWidget*>                           PreviewWidgets;                                            // 0x0628(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               bContainsAnyKeyBindings;                                   // 0x0638(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(60457);
		return ptr;
	}



	void ResetPreviewWidgets();
	void HandlePreviewHovered(class UKSWidget* PreviewWidget);
	void AddPreviewToSettingMenu(class UKSWidget* PreviewWidget);
	void SetupPreviewWidgets();
	void On_Tab_Clicked(class UKSNavTabWidget* Tab_Selected);
	void ResetPageState();
	void GetContainerWidgetForPUMGWidgetOnPage(class UKSSettingsPage* Page, class UPUMG_Widget* PUMG_Widget, class UKSSettingsContainer** KSSettingsContainerWidget);
	void On_Widget_Mouse_Entered(class UPUMG_Widget* PUMG_Widget, bool bEntered);
	void Setup_Hover_Handling();
	void GetSettingsContainersForPage(class UKSSettingsPage* SettingsPage, TArray<class UKSSettingsContainer*>* SettingsContainers, TArray<class UPUMG_Widget*>* SettingsContainersAsPUMG);
	void GetSettingsWidgetForPUMGWidgetOnPage(class UKSSettingsPage* Page, class UPUMG_Widget* PUMG_Widget, class UKSSettingsWidget** KSSettingsWidget);
	void Get_Current_Page(class UKSSettingsPage** KSSettingsPage);
	void On_Input_State_Changed(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> Input_State);
	void Setup_Input_State_Handling();
	void Setup_Login_Handling();
	void Handle_Login_State(PlatformUMG_EPUMG_LoginState Login_State);
	void Tab_Right();
	void Tab_Left();
	void Go_To_Active_Tab(bool bInstantSwitch);
	void Recover_From_Navigate_Failure(class UPUMG_Widget* PUMG_Widget, int Index_Offset);
	void Widget_Navigate_Down_Failure(int Focus_Group, class UPUMG_Widget* PUMG_Widget);
	void Widget_Navigate_Up_Failure(int Focus_Group, class UPUMG_Widget* PUMG_Widget);
	void On_Widget_Gamepad_Hovered(class UPUMG_Widget* PUMG_Widget, bool bHovered);
	void Scroll_Widget_Into_View(class UPUMG_Widget* PUMG_Widget);
	void Scroll_To_Start();
	void Scroll_To_End();
	void GoBack();
	void ConfirmExit(bool ShouldSaveSettings);
	void Restore_Settings();
	void ExitSettingsPage();
	void HasAnyUnsavedSetting(bool* AnyUnsaved);
	void Save_Settings();
	bool NavigateBackPressed();
	bool NavigateBack();
	void GetSettingsWidgetsForPage(class UKSSettingsPage* SettingsPage, TArray<class UKSSettingsWidget*>* SettingsWidgets, TArray<class UPUMG_Widget*>* SettingsWidgetsAsPUMG);
	void SetupNavigationForPage(class UKSSettingsPage* Page, int Index);
	void On_Tab_Selected(class UKSNavTabWidget* Tab_Selected, bool bInstantSwitch);
	void Add_Tab_For_Settings_Page(class UKSSettingsPage* Settings_Page_Widget);
	void Add_Settings_Page_Widget(class UKSSettingsPage* Settings_Page);
	void SettingsMenuApplyClickSFX();
	void SettingsMenuBackClickSFX();
	void SettingsMenuRevertButtonClickSFX();
	void AddSettingsPageWidget(class UKSSettingsPage* SettingsPage);
	void OnShown();
	void OnHide();
	void OnMenuConfigSet();
	void InitializeWidget(class APUMG_HUD* HUD);
	void InitializeWidgetNavigation();
	void RebuildNavigation();
	void OnBackButton();
	void OnApplyButton();
	void OnRevertButton();
	void OnConfirmExit(bool ShouldSaveSettings);
	void PreConstruct(bool IsDesignTime);
	void RevertSettings();
	void OnCycleBumpers(bool bNext);
	void ExecuteUbergraph_WBP_SettingsMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
