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
//		Name   -> Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.GotoTermsAndConditions
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_EmailCollectionPopup_C::GotoTermsAndConditions()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63029);

	UWBP_EmailCollectionPopup_C_GotoTermsAndConditions_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.SetupNavigation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_EmailCollectionPopup_C::SetupNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63028);

	UWBP_EmailCollectionPopup_C_SetupNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.OnInputeStateChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EmailCollectionPopup_C::OnInputeStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63027);

	UWBP_EmailCollectionPopup_C_OnInputeStateChanged_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.UpdatePrompts
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_EmailCollectionPopup_C::UpdatePrompts()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63026);

	UWBP_EmailCollectionPopup_C_UpdatePrompts_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.ValidateCheckbox
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               CheckboxValid                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_EmailCollectionPopup_C::ValidateCheckbox(bool* CheckboxValid)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63025);

	UWBP_EmailCollectionPopup_C_ValidateCheckbox_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CheckboxValid != nullptr)
		*CheckboxValid = params.CheckboxValid;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_EmailCollectionPopup_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63024);

	UWBP_EmailCollectionPopup_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.CloseEmailPopup
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_EmailCollectionPopup_C::CloseEmailPopup()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63023);

	UWBP_EmailCollectionPopup_C_CloseEmailPopup_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.ValidateEmail
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               EmailValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_EmailCollectionPopup_C::ValidateEmail(bool* EmailValid)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63022);

	UWBP_EmailCollectionPopup_C_ValidateEmail_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EmailValid != nullptr)
		*EmailValid = params.EmailValid;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.QueueEmailValidation
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_EmailCollectionPopup_C::QueueEmailValidation(const struct FText& Text)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63021);

	UWBP_EmailCollectionPopup_C_QueueEmailValidation_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EmailCollectionPopup_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63020);

	UWBP_EmailCollectionPopup_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_EmailCollectionPopup_C::OnInitialized()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63019);

	UWBP_EmailCollectionPopup_C_OnInitialized_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.BndEvt__SubmitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EmailCollectionPopup_C::BndEvt__SubmitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63018);

	UWBP_EmailCollectionPopup_C_BndEvt__SubmitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.OnSubmitEmailResponse
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_EmailCollectionPopup_C::OnSubmitEmailResponse(bool Success)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63017);

	UWBP_EmailCollectionPopup_C_OnSubmitEmailResponse_Params params {};
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.BndEvt__OKButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EmailCollectionPopup_C::BndEvt__OKButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63016);

	UWBP_EmailCollectionPopup_C_BndEvt__OKButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_EmailCollectionPopup_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63015);

	UWBP_EmailCollectionPopup_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.BndEvt__CloseButtonGamepad_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EmailCollectionPopup_C::BndEvt__CloseButtonGamepad_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63014);

	UWBP_EmailCollectionPopup_C_BndEvt__CloseButtonGamepad_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EmailCollectionPopup_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63013);

	UWBP_EmailCollectionPopup_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.EventOnCheckChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Checked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_EmailCollectionPopup_C::EventOnCheckChanged(bool Checked)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63012);

	UWBP_EmailCollectionPopup_C_EventOnCheckChanged_Params params {};
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_4_CloseButtonClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_EmailCollectionPopup_C::BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_4_CloseButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63011);

	UWBP_EmailCollectionPopup_C_BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_4_CloseButtonClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_EmailCollectionPopup_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63010);

	UWBP_EmailCollectionPopup_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.TickScrolling
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              fPercentage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EmailCollectionPopup_C::TickScrolling(float fPercentage)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63009);

	UWBP_EmailCollectionPopup_C_TickScrolling_Params params {};
	params.fPercentage = fPercentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.OnScrollUp
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		KillstreakUINew_EContextPromptHoldReleaseState     Status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EmailCollectionPopup_C::OnScrollUp(KillstreakUINew_EContextPromptHoldReleaseState Status)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63008);

	UWBP_EmailCollectionPopup_C_OnScrollUp_Params params {};
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.OnScrollDown
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		KillstreakUINew_EContextPromptHoldReleaseState     Status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EmailCollectionPopup_C::OnScrollDown(KillstreakUINew_EContextPromptHoldReleaseState Status)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63007);

	UWBP_EmailCollectionPopup_C_OnScrollDown_Params params {};
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_EmailCollectionPopup.WBP_EmailCollectionPopup_C.ExecuteUbergraph_WBP_EmailCollectionPopup
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EmailCollectionPopup_C::ExecuteUbergraph_WBP_EmailCollectionPopup(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63006);

	UWBP_EmailCollectionPopup_C_ExecuteUbergraph_WBP_EmailCollectionPopup_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
