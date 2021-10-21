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
//		Name   -> Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.EvaluateInputStateCycle
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_Context_Menu_Prompt_C::EvaluateInputStateCycle()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58025);

	UWBP_Context_Menu_Prompt_C_EvaluateInputStateCycle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.EvaluateInputStateStandard
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Context_Menu_Prompt_C::EvaluateInputStateStandard()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58024);

	UWBP_Context_Menu_Prompt_C_EvaluateInputStateStandard_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.PopulateCycleButton
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Context_Menu_Prompt_C::PopulateCycleButton()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58023);

	UWBP_Context_Menu_Prompt_C_PopulateCycleButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.PopulateStandardButton
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Context_Menu_Prompt_C::PopulateStandardButton()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58022);

	UWBP_Context_Menu_Prompt_C_PopulateStandardButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.SetInputState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Context_Menu_Prompt_C::SetInputState(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58021);

	UWBP_Context_Menu_Prompt_C_SetInputState_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.Populate
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
void UWBP_Context_Menu_Prompt_C::Populate()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58020);

	UWBP_Context_Menu_Prompt_C_Populate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Context_Menu_Prompt_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58019);

	UWBP_Context_Menu_Prompt_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Context_Menu_Prompt_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58018);

	UWBP_Context_Menu_Prompt_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__WBP_StandardButton_02_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Context_Menu_Prompt_C::BndEvt__WBP_StandardButton_02_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58017);

	UWBP_Context_Menu_Prompt_C_BndEvt__WBP_StandardButton_02_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__WBP_StandardButton_02_C_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Context_Menu_Prompt_C::BndEvt__WBP_StandardButton_02_C_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58016);

	UWBP_Context_Menu_Prompt_C_BndEvt__WBP_StandardButton_02_C_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__KBMWithKeyButton_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Context_Menu_Prompt_C::BndEvt__KBMWithKeyButton_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58015);

	UWBP_Context_Menu_Prompt_C_BndEvt__KBMWithKeyButton_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__KBMWithKeyButton_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Context_Menu_Prompt_C::BndEvt__KBMWithKeyButton_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58014);

	UWBP_Context_Menu_Prompt_C_BndEvt__KBMWithKeyButton_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__KBMButton_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Context_Menu_Prompt_C::BndEvt__KBMButton_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58013);

	UWBP_Context_Menu_Prompt_C_BndEvt__KBMButton_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__KBMButton_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Context_Menu_Prompt_C::BndEvt__KBMButton_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58012);

	UWBP_Context_Menu_Prompt_C_BndEvt__KBMButton_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__CycleNext_K2Node_ComponentBoundEvent_6_OnBtnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_Context_Menu_Prompt_C::BndEvt__CycleNext_K2Node_ComponentBoundEvent_6_OnBtnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58011);

	UWBP_Context_Menu_Prompt_C_BndEvt__CycleNext_K2Node_ComponentBoundEvent_6_OnBtnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__CyclePrevious_K2Node_ComponentBoundEvent_7_OnBtnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_Context_Menu_Prompt_C::BndEvt__CyclePrevious_K2Node_ComponentBoundEvent_7_OnBtnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58010);

	UWBP_Context_Menu_Prompt_C_BndEvt__CyclePrevious_K2Node_ComponentBoundEvent_7_OnBtnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.ExecuteUbergraph_WBP_Context_Menu_Prompt
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Context_Menu_Prompt_C::ExecuteUbergraph_WBP_Context_Menu_Prompt(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58009);

	UWBP_Context_Menu_Prompt_C_ExecuteUbergraph_WBP_Context_Menu_Prompt_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.OnPromptClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_Context_Menu_Prompt_C::OnPromptClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(58008);

	UWBP_Context_Menu_Prompt_C_OnPromptClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
