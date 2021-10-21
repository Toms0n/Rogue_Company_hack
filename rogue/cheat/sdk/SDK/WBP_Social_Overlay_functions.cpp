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
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnFriendsScrolled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_Social_Overlay_C::OnFriendsScrolled()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88262);

	UWBP_Social_Overlay_C_OnFriendsScrolled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.Toggle Context Menu for Player Card
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWidget*                                   KSWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Overlay_C::Toggle_Context_Menu_for_Player_Card(class UKSWidget* KSWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88261);

	UWBP_Social_Overlay_C_Toggle_Context_Menu_for_Player_Card_Params params {};
	params.KSWidget = KSWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleStatusMenuHidden
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_Social_Overlay_C::HandleStatusMenuHidden()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88260);

	UWBP_Social_Overlay_C_HandleStatusMenuHidden_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleStatusMenuShown
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_PlayerStatus_ContextMenuOption_C*       FocusWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Overlay_C::HandleStatusMenuShown(class UWBP_PlayerStatus_ContextMenuOption_C* FocusWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88259);

	UWBP_Social_Overlay_C_HandleStatusMenuShown_Params params {};
	params.FocusWidget = FocusWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleStatusNavigationReady
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UWBP_PlayerStatus_ContextMenuOption_C*> StatusButtons                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_Social_Overlay_C::HandleStatusNavigationReady(TArray<class UWBP_PlayerStatus_ContextMenuOption_C*>* StatusButtons)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88258);

	UWBP_Social_Overlay_C_HandleStatusNavigationReady_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StatusButtons != nullptr)
		*StatusButtons = params.StatusButtons;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetupHeader
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Social_Overlay_C::SetupHeader()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88257);

	UWBP_Social_Overlay_C_SetupHeader_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetTabIndex
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Overlay_C::SetTabIndex(int Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88256);

	UWBP_Social_Overlay_C_SetTabIndex_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnTabChange
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_subscreen_nav_tab_C*                    ActiveTabButton                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Overlay_C::OnTabChange(class UWBP_subscreen_nav_tab_C* ActiveTabButton)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88255);

	UWBP_Social_Overlay_C_OnTabChange_Params params {};
	params.ActiveTabButton = ActiveTabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetActiveTabByWidget
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Overlay_C::SetActiveTabByWidget(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88254);

	UWBP_Social_Overlay_C_SetActiveTabByWidget_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnMouseButtonUp
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Social_Overlay_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88253);

	UWBP_Social_Overlay_C_OnMouseButtonUp_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.MoveTabBy
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Overlay_C::MoveTabBy(int Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88252);

	UWBP_Social_Overlay_C_MoveTabBy_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetupNavTabs
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Overlay_C::SetupNavTabs(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88251);

	UWBP_Social_Overlay_C_SetupNavTabs_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_Social_Overlay_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88250);

	UWBP_Social_Overlay_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.ClosePanel
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_Social_Overlay_C::ClosePanel()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88249);

	UWBP_Social_Overlay_C_ClosePanel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_Social_Overlay_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88248);

	UWBP_Social_Overlay_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__Blocker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_Social_Overlay_C::BndEvt__Blocker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88247);

	UWBP_Social_Overlay_C_BndEvt__Blocker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.StartShowSequence
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FName                                       FromRoute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       ToRoute                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Overlay_C::StartShowSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88246);

	UWBP_Social_Overlay_C_StartShowSequence_Params params {};
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.StartHideSequence
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FName                                       FromRoute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       ToRoute                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Overlay_C::StartHideSequence(const struct FName& FromRoute, const struct FName& ToRoute)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88245);

	UWBP_Social_Overlay_C_StartHideSequence_Params params {};
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Overlay_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88244);

	UWBP_Social_Overlay_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.UninitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UWBP_Social_Overlay_C::UninitializeWidget()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88243);

	UWBP_Social_Overlay_C_UninitializeWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnPlayerCardClick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWidget*                                   PlayerCard                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Overlay_C::OnPlayerCardClick(class UKSWidget* PlayerCard)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88242);

	UWBP_Social_Overlay_C_OnPlayerCardClick_Params params {};
	params.PlayerCard = PlayerCard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnInputStateChange
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Overlay_C::OnInputStateChange(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88241);

	UWBP_Social_Overlay_C_OnInputStateChange_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_Social_Overlay_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88240);

	UWBP_Social_Overlay_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnHide
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_Social_Overlay_C::OnHide()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88239);

	UWBP_Social_Overlay_C_OnHide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnTabLeft
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Social_Overlay_C::OnTabLeft()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88238);

	UWBP_Social_Overlay_C_OnTabLeft_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnTabRight
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Social_Overlay_C::OnTabRight()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88237);

	UWBP_Social_Overlay_C_OnTabRight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnToggleSocial
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Social_Overlay_C::OnToggleSocial()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88236);

	UWBP_Social_Overlay_C_OnToggleSocial_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnViewStateChange
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       CurrentRoute                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       PreviousRoute                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		PlatformUMG_EViewManagerLayer                      Layer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Overlay_C::OnViewStateChange(const struct FName& CurrentRoute, const struct FName& PreviousRoute, PlatformUMG_EViewManagerLayer Layer)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88235);

	UWBP_Social_Overlay_C_OnViewStateChange_Params params {};
	params.CurrentRoute = CurrentRoute;
	params.PreviousRoute = PreviousRoute;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnToggleStatusMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Social_Overlay_C::OnToggleStatusMenu()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88234);

	UWBP_Social_Overlay_C_OnToggleStatusMenu_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandlePlayerInvitesChanged
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSDataSocialCategory*                       Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class UKSDataSocialPlayer*>                 Players                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UWBP_Social_Overlay_C::HandlePlayerInvitesChanged(class UKSDataSocialCategory* Category, TArray<class UKSDataSocialPlayer*> Players)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88233);

	UWBP_Social_Overlay_C_HandlePlayerInvitesChanged_Params params {};
	params.Category = Category;
	params.Players = Players;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextBlocker_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_Social_Overlay_C::BndEvt__ContextBlocker_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88232);

	UWBP_Social_Overlay_C_BndEvt__ContextBlocker_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_5_OnReadyForNavigation__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		TArray<class UWidget*>                             NavWidgets                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
//		class UWidget*                                     Default_Widget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Overlay_C::BndEvt__ContextMenu_K2Node_ComponentBoundEvent_5_OnReadyForNavigation__DelegateSignature(TArray<class UWidget*>* NavWidgets, class UWidget* Default_Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88231);

	UWBP_Social_Overlay_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_5_OnReadyForNavigation__DelegateSignature_Params params {};
	params.Default_Widget = Default_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NavWidgets != nullptr)
		*NavWidgets = params.NavWidgets;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_6_OnMenuStart__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     FocusWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Overlay_C::BndEvt__ContextMenu_K2Node_ComponentBoundEvent_6_OnMenuStart__DelegateSignature(class UWidget* FocusWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88230);

	UWBP_Social_Overlay_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_6_OnMenuStart__DelegateSignature_Params params {};
	params.FocusWidget = FocusWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_7_OnMenuHidden__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_Social_Overlay_C::BndEvt__ContextMenu_K2Node_ComponentBoundEvent_7_OnMenuHidden__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88229);

	UWBP_Social_Overlay_C_BndEvt__ContextMenu_K2Node_ComponentBoundEvent_7_OnMenuHidden__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleNavTabSelected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSNavTabWidget*                             NavTab                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Overlay_C::HandleNavTabSelected(class UKSNavTabWidget* NavTab)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88228);

	UWBP_Social_Overlay_C_HandleNavTabSelected_Params params {};
	params.NavTab = NavTab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnHeaderClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWidget*                                   Header                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Overlay_C::OnHeaderClicked(class UKSWidget* Header)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88227);

	UWBP_Social_Overlay_C_OnHeaderClicked_Params params {};
	params.Header = Header;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Social_Overlay.WBP_Social_Overlay_C.ExecuteUbergraph_WBP_Social_Overlay
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Social_Overlay_C::ExecuteUbergraph_WBP_Social_Overlay(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88226);

	UWBP_Social_Overlay_C_ExecuteUbergraph_WBP_Social_Overlay_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
