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
//		Name   -> Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_NewsRotatorWidget_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61640);

	UWBP_NewsRotatorWidget_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.UpdatePrompts
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		unsigned char                                      InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               HasFocus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_NewsRotatorWidget_C::UpdatePrompts(unsigned char InputState, bool HasFocus)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61639);

	UWBP_NewsRotatorWidget_C_UpdatePrompts_Params params {};
	params.InputState = InputState;
	params.HasFocus = HasFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.GetNavigationWidgets
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UPUMG_Widget*>                        Widgets                                                    (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_NewsRotatorWidget_C::GetNavigationWidgets(TArray<class UPUMG_Widget*>* Widgets)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61638);

	UWBP_NewsRotatorWidget_C_GetNavigationWidgets_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Widgets != nullptr)
		*Widgets = params.Widgets;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ShowPanel
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewPanelIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_NewsRotatorWidget_C::ShowPanel(int NewPanelIndex)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61637);

	UWBP_NewsRotatorWidget_C_ShowPanel_Params params {};
	params.NewPanelIndex = NewPanelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.UpdateRotatorButtons
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_NewsRotatorWidget_C::UpdateRotatorButtons()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61636);

	UWBP_NewsRotatorWidget_C_UpdateRotatorButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ShowPrevPanel
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_NewsRotatorWidget_C::ShowPrevPanel()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61635);

	UWBP_NewsRotatorWidget_C_ShowPrevPanel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ShowNextPanel
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_NewsRotatorWidget_C::ShowNextPanel()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61634);

	UWBP_NewsRotatorWidget_C_ShowNextPanel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.PopulateData
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_NewsRotatorWidget_C::PopulateData()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61633);

	UWBP_NewsRotatorWidget_C_PopulateData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_NewsRotatorWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61632);

	UWBP_NewsRotatorWidget_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_NewsRotatorWidget_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61631);

	UWBP_NewsRotatorWidget_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnJsonChanged
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_NewsRotatorWidget_C::OnJsonChanged()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61630);

	UWBP_NewsRotatorWidget_C_OnJsonChanged_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnAnimationFinished
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_NewsRotatorWidget_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61629);

	UWBP_NewsRotatorWidget_C_OnAnimationFinished_Params params {};
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnItemClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ButtonIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_NewsRotatorWidget_C::OnItemClicked(int ButtonIndex)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61628);

	UWBP_NewsRotatorWidget_C_OnItemClicked_Params params {};
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnActionClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_NewsRotatorWidget_C::OnActionClicked(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61627);

	UWBP_NewsRotatorWidget_C_OnActionClicked_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnActionButtonHovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_Widget*                                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bHovered                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_NewsRotatorWidget_C::OnActionButtonHovered(class UPUMG_Widget* Widget, bool bHovered)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61626);

	UWBP_NewsRotatorWidget_C_OnActionButtonHovered_Params params {};
	params.Widget = Widget;
	params.bHovered = bHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnInputModeChange
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		unsigned char                                      CurrentState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_NewsRotatorWidget_C::OnInputModeChange(unsigned char CurrentState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61625);

	UWBP_NewsRotatorWidget_C_OnInputModeChange_Params params {};
	params.CurrentState = CurrentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_NewsRotatorWidget_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61624);

	UWBP_NewsRotatorWidget_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.BindInputActions
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_NewsRotatorWidget_C::BindInputActions()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61623);

	UWBP_NewsRotatorWidget_C_BindInputActions_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.UnbindInputActions
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_NewsRotatorWidget_C::UnbindInputActions()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61622);

	UWBP_NewsRotatorWidget_C_UnbindInputActions_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.HandleGamepadHovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_Widget*                                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bHovered                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_NewsRotatorWidget_C::HandleGamepadHovered(class UPUMG_Widget* Widget, bool bHovered)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61621);

	UWBP_NewsRotatorWidget_C_HandleGamepadHovered_Params params {};
	params.Widget = Widget;
	params.bHovered = bHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_NewsRotatorWidget_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61620);

	UWBP_NewsRotatorWidget_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_NewsRotatorWidget_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61619);

	UWBP_NewsRotatorWidget_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.Event On Action Button Hovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_NewsRotatorWidget_C::Event_On_Action_Button_Hovered(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61618);

	UWBP_NewsRotatorWidget_C_Event_On_Action_Button_Hovered_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.Event On Action Button Unhovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_NewsRotatorWidget_C::Event_On_Action_Button_Unhovered(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61617);

	UWBP_NewsRotatorWidget_C_Event_On_Action_Button_Unhovered_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.TriggerPanelTransition
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_NewsRotatorWidget_C::TriggerPanelTransition()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61616);

	UWBP_NewsRotatorWidget_C_TriggerPanelTransition_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnCycleAction
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bNext                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_NewsRotatorWidget_C::OnCycleAction(bool bNext)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61615);

	UWBP_NewsRotatorWidget_C_OnCycleAction_Params params {};
	params.bNext = bNext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ExecuteUbergraph_WBP_NewsRotatorWidget
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_NewsRotatorWidget_C::ExecuteUbergraph_WBP_NewsRotatorWidget(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61614);

	UWBP_NewsRotatorWidget_C_ExecuteUbergraph_WBP_NewsRotatorWidget_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.NewsVisibilityUpdated__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_NewsRotatorWidget_C::NewsVisibilityUpdated__DelegateSignature(bool Visibility)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61613);

	UWBP_NewsRotatorWidget_C_NewsVisibilityUpdated__DelegateSignature_Params params {};
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
