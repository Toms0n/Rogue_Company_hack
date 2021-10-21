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
//		Name   -> Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.DisplayArmoryScreen
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueDetailsNew_C::DisplayArmoryScreen()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88613);

	UWBP_RogueDetailsNew_C_DisplayArmoryScreen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.SetBlur
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Blur                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RogueDetailsNew_C::SetBlur(bool Blur)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88612);

	UWBP_RogueDetailsNew_C_SetBlur_Params params {};
	params.Blur = Blur;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.SetTabIsGamepadSelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_RogueDetailsPanelButton_C*              NavButton                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueDetailsNew_C::SetTabIsGamepadSelected(class UWBP_RogueDetailsPanelButton_C* NavButton)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88611);

	UWBP_RogueDetailsNew_C_SetTabIsGamepadSelected_Params params {};
	params.NavButton = NavButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.PlayTransitionAnim
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_RogueDetailsNew_C::PlayTransitionAnim()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88610);

	UWBP_RogueDetailsNew_C_PlayTransitionAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.OnTabHovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_Widget*                                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bHovered                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RogueDetailsNew_C::OnTabHovered(class UPUMG_Widget* Widget, bool bHovered)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88609);

	UWBP_RogueDetailsNew_C_OnTabHovered_Params params {};
	params.Widget = Widget;
	params.bHovered = bHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.Set Selected Tab
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_RogueDetailsPanelButton_C*              NewSelection                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               SkipTransition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RogueDetailsNew_C::Set_Selected_Tab(class UWBP_RogueDetailsPanelButton_C* NewSelection, bool Force, bool SkipTransition)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88608);

	UWBP_RogueDetailsNew_C_Set_Selected_Tab_Params params {};
	params.NewSelection = NewSelection;
	params.Force = Force;
	params.SkipTransition = SkipTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.SetTabInput
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueDetailsNew_C::SetTabInput()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88607);

	UWBP_RogueDetailsNew_C_SetTabInput_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.SetLocalJobInfo
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSJobItem*                                  JobItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueDetailsNew_C::SetLocalJobInfo(class UKSJobItem* JobItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88606);

	UWBP_RogueDetailsNew_C_SetLocalJobInfo_Params params {};
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_RogueDetailsNew_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88605);

	UWBP_RogueDetailsNew_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_RogueDetailsNew_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88604);

	UWBP_RogueDetailsNew_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.OnCurrentJobChanged
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UKSJobItem*                                  JobItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromShowEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RogueDetailsNew_C::OnCurrentJobChanged(class UKSJobItem* JobItem, bool bFromShowEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88603);

	UWBP_RogueDetailsNew_C_OnCurrentJobChanged_Params params {};
	params.JobItem = JobItem;
	params.bFromShowEvent = bFromShowEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueDetailsNew_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88602);

	UWBP_RogueDetailsNew_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.BndEvt__BioButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RogueDetailsNew_C::BndEvt__BioButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88601);

	UWBP_RogueDetailsNew_C_BndEvt__BioButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.BndEvt__MasteryButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RogueDetailsNew_C::BndEvt__MasteryButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88600);

	UWBP_RogueDetailsNew_C_BndEvt__MasteryButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.BndEvt__PerksButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RogueDetailsNew_C::BndEvt__PerksButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88599);

	UWBP_RogueDetailsNew_C_BndEvt__PerksButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RogueDetailsNew_C::BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88598);

	UWBP_RogueDetailsNew_C_BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.BndEvt__ArmoryButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RogueDetailsNew_C::BndEvt__ArmoryButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88597);

	UWBP_RogueDetailsNew_C_BndEvt__ArmoryButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_RogueDetailsNew_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88596);

	UWBP_RogueDetailsNew_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.OnClickedSwapPrimaryButton
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RogueDetailsNew_C::OnClickedSwapPrimaryButton()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88595);

	UWBP_RogueDetailsNew_C_OnClickedSwapPrimaryButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.FocusGroupNavigateRightFailure
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueDetailsNew_C::FocusGroupNavigateRightFailure(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88594);

	UWBP_RogueDetailsNew_C_FocusGroupNavigateRightFailure_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.FocusGroupNavigateLeftFailure
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueDetailsNew_C::FocusGroupNavigateLeftFailure(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88593);

	UWBP_RogueDetailsNew_C_FocusGroupNavigateLeftFailure_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.OnMasteryNavLeftFailed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RogueDetailsNew_C::OnMasteryNavLeftFailed()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88592);

	UWBP_RogueDetailsNew_C_OnMasteryNavLeftFailed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_RogueDetailsNew_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88591);

	UWBP_RogueDetailsNew_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsNew.WBP_RogueDetailsNew_C.ExecuteUbergraph_WBP_RogueDetailsNew
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueDetailsNew_C::ExecuteUbergraph_WBP_RogueDetailsNew(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88590);

	UWBP_RogueDetailsNew_C_ExecuteUbergraph_WBP_RogueDetailsNew_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
