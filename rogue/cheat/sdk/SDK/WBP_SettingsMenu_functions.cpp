// Name: roguecompany, Version: 425

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.ResetPreviewWidgets
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_SettingsMenu_C::ResetPreviewWidgets()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60514);

	UWBP_SettingsMenu_C_ResetPreviewWidgets_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.HandlePreviewHovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWidget*                                   PreviewWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsMenu_C::HandlePreviewHovered(class UKSWidget* PreviewWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60513);

	UWBP_SettingsMenu_C_HandlePreviewHovered_Params params {};
	params.PreviewWidget = PreviewWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.AddPreviewToSettingMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWidget*                                   PreviewWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsMenu_C::AddPreviewToSettingMenu(class UKSWidget* PreviewWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60512);

	UWBP_SettingsMenu_C_AddPreviewToSettingMenu_Params params {};
	params.PreviewWidget = PreviewWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.SetupPreviewWidgets
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_SettingsMenu_C::SetupPreviewWidgets()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60511);

	UWBP_SettingsMenu_C_SetupPreviewWidgets_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Tab Clicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSNavTabWidget*                             Tab_Selected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsMenu_C::On_Tab_Clicked(class UKSNavTabWidget* Tab_Selected)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60510);

	UWBP_SettingsMenu_C_On_Tab_Clicked_Params params {};
	params.Tab_Selected = Tab_Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.ResetPageState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_SettingsMenu_C::ResetPageState()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60509);

	UWBP_SettingsMenu_C_ResetPageState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetContainerWidgetForPUMGWidgetOnPage
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UKSSettingsPage*                             Page                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPUMG_Widget*                                PUMG_Widget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSSettingsContainer*                        KSSettingsContainerWidget                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsMenu_C::GetContainerWidgetForPUMGWidgetOnPage(class UKSSettingsPage* Page, class UPUMG_Widget* PUMG_Widget, class UKSSettingsContainer** KSSettingsContainerWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60508);

	UWBP_SettingsMenu_C_GetContainerWidgetForPUMGWidgetOnPage_Params params {};
	params.Page = Page;
	params.PUMG_Widget = PUMG_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (KSSettingsContainerWidget != nullptr)
		*KSSettingsContainerWidget = params.KSSettingsContainerWidget;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Widget Mouse Entered
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_Widget*                                PUMG_Widget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bEntered                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingsMenu_C::On_Widget_Mouse_Entered(class UPUMG_Widget* PUMG_Widget, bool bEntered)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60507);

	UWBP_SettingsMenu_C_On_Widget_Mouse_Entered_Params params {};
	params.PUMG_Widget = PUMG_Widget;
	params.bEntered = bEntered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.Setup Hover Handling
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_SettingsMenu_C::Setup_Hover_Handling()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60506);

	UWBP_SettingsMenu_C_Setup_Hover_Handling_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetSettingsContainersForPage
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UKSSettingsPage*                             SettingsPage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class UKSSettingsContainer*>                SettingsContainers                                         (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
//		TArray<class UPUMG_Widget*>                        SettingsContainersAsPUMG                                   (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_SettingsMenu_C::GetSettingsContainersForPage(class UKSSettingsPage* SettingsPage, TArray<class UKSSettingsContainer*>* SettingsContainers, TArray<class UPUMG_Widget*>* SettingsContainersAsPUMG)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60505);

	UWBP_SettingsMenu_C_GetSettingsContainersForPage_Params params {};
	params.SettingsPage = SettingsPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SettingsContainers != nullptr)
		*SettingsContainers = params.SettingsContainers;
	if (SettingsContainersAsPUMG != nullptr)
		*SettingsContainersAsPUMG = params.SettingsContainersAsPUMG;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetSettingsWidgetForPUMGWidgetOnPage
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UKSSettingsPage*                             Page                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPUMG_Widget*                                PUMG_Widget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSSettingsWidget*                           KSSettingsWidget                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsMenu_C::GetSettingsWidgetForPUMGWidgetOnPage(class UKSSettingsPage* Page, class UPUMG_Widget* PUMG_Widget, class UKSSettingsWidget** KSSettingsWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60504);

	UWBP_SettingsMenu_C_GetSettingsWidgetForPUMGWidgetOnPage_Params params {};
	params.Page = Page;
	params.PUMG_Widget = PUMG_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (KSSettingsWidget != nullptr)
		*KSSettingsWidget = params.KSSettingsWidget;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.Get Current Page
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UKSSettingsPage*                             KSSettingsPage                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsMenu_C::Get_Current_Page(class UKSSettingsPage** KSSettingsPage)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60503);

	UWBP_SettingsMenu_C_Get_Current_Page_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (KSSettingsPage != nullptr)
		*KSSettingsPage = params.KSSettingsPage;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Input State Changed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> Input_State                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsMenu_C::On_Input_State_Changed(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> Input_State)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60502);

	UWBP_SettingsMenu_C_On_Input_State_Changed_Params params {};
	params.Input_State = Input_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.Setup Input State Handling
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_SettingsMenu_C::Setup_Input_State_Handling()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60501);

	UWBP_SettingsMenu_C_Setup_Input_State_Handling_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.Setup Login Handling
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_SettingsMenu_C::Setup_Login_Handling()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60500);

	UWBP_SettingsMenu_C_Setup_Login_Handling_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.Handle Login State
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		PlatformUMG_EPUMG_LoginState                       Login_State                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsMenu_C::Handle_Login_State(PlatformUMG_EPUMG_LoginState Login_State)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60499);

	UWBP_SettingsMenu_C_Handle_Login_State_Params params {};
	params.Login_State = Login_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.Tab Right
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_SettingsMenu_C::Tab_Right()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60498);

	UWBP_SettingsMenu_C_Tab_Right_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.Tab Left
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_SettingsMenu_C::Tab_Left()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60497);

	UWBP_SettingsMenu_C_Tab_Left_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.Go To Active Tab
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bInstantSwitch                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingsMenu_C::Go_To_Active_Tab(bool bInstantSwitch)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60496);

	UWBP_SettingsMenu_C_Go_To_Active_Tab_Params params {};
	params.bInstantSwitch = bInstantSwitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.Recover From Navigate Failure
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_Widget*                                PUMG_Widget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Index_Offset                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsMenu_C::Recover_From_Navigate_Failure(class UPUMG_Widget* PUMG_Widget, int Index_Offset)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60495);

	UWBP_SettingsMenu_C_Recover_From_Navigate_Failure_Params params {};
	params.PUMG_Widget = PUMG_Widget;
	params.Index_Offset = Index_Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.Widget Navigate Down Failure
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Focus_Group                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPUMG_Widget*                                PUMG_Widget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsMenu_C::Widget_Navigate_Down_Failure(int Focus_Group, class UPUMG_Widget* PUMG_Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60494);

	UWBP_SettingsMenu_C_Widget_Navigate_Down_Failure_Params params {};
	params.Focus_Group = Focus_Group;
	params.PUMG_Widget = PUMG_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.Widget Navigate Up Failure
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Focus_Group                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPUMG_Widget*                                PUMG_Widget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsMenu_C::Widget_Navigate_Up_Failure(int Focus_Group, class UPUMG_Widget* PUMG_Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60493);

	UWBP_SettingsMenu_C_Widget_Navigate_Up_Failure_Params params {};
	params.Focus_Group = Focus_Group;
	params.PUMG_Widget = PUMG_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Widget Gamepad Hovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_Widget*                                PUMG_Widget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bHovered                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingsMenu_C::On_Widget_Gamepad_Hovered(class UPUMG_Widget* PUMG_Widget, bool bHovered)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60492);

	UWBP_SettingsMenu_C_On_Widget_Gamepad_Hovered_Params params {};
	params.PUMG_Widget = PUMG_Widget;
	params.bHovered = bHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.Scroll Widget Into View
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_Widget*                                PUMG_Widget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsMenu_C::Scroll_Widget_Into_View(class UPUMG_Widget* PUMG_Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60491);

	UWBP_SettingsMenu_C_Scroll_Widget_Into_View_Params params {};
	params.PUMG_Widget = PUMG_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.Scroll To Start
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_SettingsMenu_C::Scroll_To_Start()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60490);

	UWBP_SettingsMenu_C_Scroll_To_Start_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.Scroll To End
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_SettingsMenu_C::Scroll_To_End()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60489);

	UWBP_SettingsMenu_C_Scroll_To_End_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.GoBack
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_SettingsMenu_C::GoBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60488);

	UWBP_SettingsMenu_C_GoBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.ConfirmExit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShouldSaveSettings                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingsMenu_C::ConfirmExit(bool ShouldSaveSettings)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60487);

	UWBP_SettingsMenu_C_ConfirmExit_Params params {};
	params.ShouldSaveSettings = ShouldSaveSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.Restore Settings
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_SettingsMenu_C::Restore_Settings()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60486);

	UWBP_SettingsMenu_C_Restore_Settings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.ExitSettingsPage
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_SettingsMenu_C::ExitSettingsPage()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60485);

	UWBP_SettingsMenu_C_ExitSettingsPage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.HasAnyUnsavedSetting
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               AnyUnsaved                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingsMenu_C::HasAnyUnsavedSetting(bool* AnyUnsaved)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60484);

	UWBP_SettingsMenu_C_HasAnyUnsavedSetting_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnyUnsaved != nullptr)
		*AnyUnsaved = params.AnyUnsaved;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.Save Settings
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_SettingsMenu_C::Save_Settings()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60483);

	UWBP_SettingsMenu_C_Save_Settings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.NavigateBackPressed
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_SettingsMenu_C::NavigateBackPressed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60482);

	UWBP_SettingsMenu_C_NavigateBackPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_SettingsMenu_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60481);

	UWBP_SettingsMenu_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetSettingsWidgetsForPage
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UKSSettingsPage*                             SettingsPage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class UKSSettingsWidget*>                   SettingsWidgets                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
//		TArray<class UPUMG_Widget*>                        SettingsWidgetsAsPUMG                                      (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_SettingsMenu_C::GetSettingsWidgetsForPage(class UKSSettingsPage* SettingsPage, TArray<class UKSSettingsWidget*>* SettingsWidgets, TArray<class UPUMG_Widget*>* SettingsWidgetsAsPUMG)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60480);

	UWBP_SettingsMenu_C_GetSettingsWidgetsForPage_Params params {};
	params.SettingsPage = SettingsPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SettingsWidgets != nullptr)
		*SettingsWidgets = params.SettingsWidgets;
	if (SettingsWidgetsAsPUMG != nullptr)
		*SettingsWidgetsAsPUMG = params.SettingsWidgetsAsPUMG;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.SetupNavigationForPage
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSSettingsPage*                             Page                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsMenu_C::SetupNavigationForPage(class UKSSettingsPage* Page, int Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60479);

	UWBP_SettingsMenu_C_SetupNavigationForPage_Params params {};
	params.Page = Page;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Tab Selected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSNavTabWidget*                             Tab_Selected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bInstantSwitch                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingsMenu_C::On_Tab_Selected(class UKSNavTabWidget* Tab_Selected, bool bInstantSwitch)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60478);

	UWBP_SettingsMenu_C_On_Tab_Selected_Params params {};
	params.Tab_Selected = Tab_Selected;
	params.bInstantSwitch = bInstantSwitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.Add Tab For Settings Page
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSSettingsPage*                             Settings_Page_Widget                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsMenu_C::Add_Tab_For_Settings_Page(class UKSSettingsPage* Settings_Page_Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60477);

	UWBP_SettingsMenu_C_Add_Tab_For_Settings_Page_Params params {};
	params.Settings_Page_Widget = Settings_Page_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.Add Settings Page Widget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSSettingsPage*                             Settings_Page                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsMenu_C::Add_Settings_Page_Widget(class UKSSettingsPage* Settings_Page)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60476);

	UWBP_SettingsMenu_C_Add_Settings_Page_Widget_Params params {};
	params.Settings_Page = Settings_Page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.SettingsMenuApplyClickSFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SettingsMenu_C::SettingsMenuApplyClickSFX()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60475);

	UWBP_SettingsMenu_C_SettingsMenuApplyClickSFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.SettingsMenuBackClickSFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SettingsMenu_C::SettingsMenuBackClickSFX()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60474);

	UWBP_SettingsMenu_C_SettingsMenuBackClickSFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.SettingsMenuRevertButtonClickSFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SettingsMenu_C::SettingsMenuRevertButtonClickSFX()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60473);

	UWBP_SettingsMenu_C_SettingsMenuRevertButtonClickSFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.AddSettingsPageWidget
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UKSSettingsPage*                             SettingsPage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsMenu_C::AddSettingsPageWidget(class UKSSettingsPage* SettingsPage)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60472);

	UWBP_SettingsMenu_C_AddSettingsPageWidget_Params params {};
	params.SettingsPage = SettingsPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_SettingsMenu_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60471);

	UWBP_SettingsMenu_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnHide
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_SettingsMenu_C::OnHide()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60470);

	UWBP_SettingsMenu_C_OnHide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnMenuConfigSet
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_SettingsMenu_C::OnMenuConfigSet()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60469);

	UWBP_SettingsMenu_C_OnMenuConfigSet_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsMenu_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60468);

	UWBP_SettingsMenu_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_SettingsMenu_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60467);

	UWBP_SettingsMenu_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.RebuildNavigation
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
void UWBP_SettingsMenu_C::RebuildNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60466);

	UWBP_SettingsMenu_C_RebuildNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnBackButton
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SettingsMenu_C::OnBackButton()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60465);

	UWBP_SettingsMenu_C_OnBackButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnApplyButton
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SettingsMenu_C::OnApplyButton()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60464);

	UWBP_SettingsMenu_C_OnApplyButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnRevertButton
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SettingsMenu_C::OnRevertButton()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60463);

	UWBP_SettingsMenu_C_OnRevertButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnConfirmExit
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               ShouldSaveSettings                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingsMenu_C::OnConfirmExit(bool ShouldSaveSettings)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60462);

	UWBP_SettingsMenu_C_OnConfirmExit_Params params {};
	params.ShouldSaveSettings = ShouldSaveSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingsMenu_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60461);

	UWBP_SettingsMenu_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.RevertSettings
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
void UWBP_SettingsMenu_C::RevertSettings()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60460);

	UWBP_SettingsMenu_C_RevertSettings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnCycleBumpers
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bNext                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingsMenu_C::OnCycleBumpers(bool bNext)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60459);

	UWBP_SettingsMenu_C_OnCycleBumpers_Params params {};
	params.bNext = bNext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_SettingsMenu.WBP_SettingsMenu_C.ExecuteUbergraph_WBP_SettingsMenu
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsMenu_C::ExecuteUbergraph_WBP_SettingsMenu(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60458);

	UWBP_SettingsMenu_C_ExecuteUbergraph_WBP_SettingsMenu_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
