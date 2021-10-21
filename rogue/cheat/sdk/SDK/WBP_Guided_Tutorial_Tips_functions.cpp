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
//		Name   -> Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_Guided_Tutorial_Tips_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63468);

	UWBP_Guided_Tutorial_Tips_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.GuidedTutorialShown
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Guided_Tutorial_Tips_C::GuidedTutorialShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63467);

	UWBP_Guided_Tutorial_Tips_C_GuidedTutorialShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.SetTipMode
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UGuidedMenuCalloutData*                      CalloutData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Guided_Tutorial_Tips_C::SetTipMode(class UGuidedMenuCalloutData* CalloutData)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63466);

	UWBP_Guided_Tutorial_Tips_C_SetTipMode_Params params {};
	params.CalloutData = CalloutData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Guided_Tutorial_Tips_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63465);

	UWBP_Guided_Tutorial_Tips_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Guided_Tutorial_Tips_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63464);

	UWBP_Guided_Tutorial_Tips_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_Guided_Tutorial_Tips_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63463);

	UWBP_Guided_Tutorial_Tips_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.HandleCloseHovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Guided_Tutorial_Tips_C::HandleCloseHovered(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63462);

	UWBP_Guided_Tutorial_Tips_C_HandleCloseHovered_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.HandleCLoseUnhovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Guided_Tutorial_Tips_C::HandleCLoseUnhovered(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63461);

	UWBP_Guided_Tutorial_Tips_C_HandleCLoseUnhovered_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_Guided_Tutorial_Tips_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63460);

	UWBP_Guided_Tutorial_Tips_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_Guided_Tutorial_Tips_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63459);

	UWBP_Guided_Tutorial_Tips_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Guided_Tutorial_Tips_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63458);

	UWBP_Guided_Tutorial_Tips_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.CloseScene
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Guided_Tutorial_Tips_C::CloseScene()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63457);

	UWBP_Guided_Tutorial_Tips_C_CloseScene_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.BndEvt__GotItButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Guided_Tutorial_Tips_C::BndEvt__GotItButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63456);

	UWBP_Guided_Tutorial_Tips_C_BndEvt__GotItButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.OnBackPrompt
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Guided_Tutorial_Tips_C::OnBackPrompt()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63455);

	UWBP_Guided_Tutorial_Tips_C_OnBackPrompt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.ExecuteUbergraph_WBP_Guided_Tutorial_Tips
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Guided_Tutorial_Tips_C::ExecuteUbergraph_WBP_Guided_Tutorial_Tips(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63454);

	UWBP_Guided_Tutorial_Tips_C_ExecuteUbergraph_WBP_Guided_Tutorial_Tips_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
