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
//		Name   -> Function WBP_RogueDetailsPanelButton.WBP_RogueDetailsPanelButton_C.ShowCTA
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShowCTA                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RogueDetailsPanelButton_C::ShowCTA(bool ShowCTA)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79615);

	UWBP_RogueDetailsPanelButton_C_ShowCTA_Params params {};
	params.ShowCTA = ShowCTA;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsPanelButton.WBP_RogueDetailsPanelButton_C.ClearSelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_RogueDetailsPanelButton_C::ClearSelected()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79614);

	UWBP_RogueDetailsPanelButton_C_ClearSelected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsPanelButton.WBP_RogueDetailsPanelButton_C.SetViewState
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EVerticalTabState_EVerticalTabState>   TabState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RogueDetailsPanelButton_C::SetViewState(TEnumAsByte<EVerticalTabState_EVerticalTabState> TabState, bool Force)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79613);

	UWBP_RogueDetailsPanelButton_C_SetViewState_Params params {};
	params.TabState = TabState;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsPanelButton.WBP_RogueDetailsPanelButton_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_RogueDetailsPanelButton_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79612);

	UWBP_RogueDetailsPanelButton_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsPanelButton.WBP_RogueDetailsPanelButton_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RogueDetailsPanelButton_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79611);

	UWBP_RogueDetailsPanelButton_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsPanelButton.WBP_RogueDetailsPanelButton_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_RogueDetailsPanelButton_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79610);

	UWBP_RogueDetailsPanelButton_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsPanelButton.WBP_RogueDetailsPanelButton_C.BndEvt__DetailsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RogueDetailsPanelButton_C::BndEvt__DetailsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79609);

	UWBP_RogueDetailsPanelButton_C_BndEvt__DetailsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsPanelButton.WBP_RogueDetailsPanelButton_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_RogueDetailsPanelButton_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79608);

	UWBP_RogueDetailsPanelButton_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsPanelButton.WBP_RogueDetailsPanelButton_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_RogueDetailsPanelButton_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79607);

	UWBP_RogueDetailsPanelButton_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsPanelButton.WBP_RogueDetailsPanelButton_C.BndEvt__DetailsButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RogueDetailsPanelButton_C::BndEvt__DetailsButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79606);

	UWBP_RogueDetailsPanelButton_C_BndEvt__DetailsButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsPanelButton.WBP_RogueDetailsPanelButton_C.BndEvt__DetailsButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RogueDetailsPanelButton_C::BndEvt__DetailsButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79605);

	UWBP_RogueDetailsPanelButton_C_BndEvt__DetailsButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsPanelButton.WBP_RogueDetailsPanelButton_C.ExecuteUbergraph_WBP_RogueDetailsPanelButton
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueDetailsPanelButton_C::ExecuteUbergraph_WBP_RogueDetailsPanelButton(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79604);

	UWBP_RogueDetailsPanelButton_C_ExecuteUbergraph_WBP_RogueDetailsPanelButton_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueDetailsPanelButton.WBP_RogueDetailsPanelButton_C.OnClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_RogueDetailsPanelButton_C::OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79603);

	UWBP_RogueDetailsPanelButton_C_OnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
