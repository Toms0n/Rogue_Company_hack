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
//		Name   -> Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.SetUpRankedDisplay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_WelcomeToRankedPopup_C::SetUpRankedDisplay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63322);

	UWBP_WelcomeToRankedPopup_C_SetUpRankedDisplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_WelcomeToRankedPopup_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63321);

	UWBP_WelcomeToRankedPopup_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_WelcomeToRankedPopup_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63320);

	UWBP_WelcomeToRankedPopup_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_WelcomeToRankedPopup_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63319);

	UWBP_WelcomeToRankedPopup_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WelcomeToRankedPopup_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63318);

	UWBP_WelcomeToRankedPopup_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.BndEvt__DismissButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WelcomeToRankedPopup_C::BndEvt__DismissButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63317);

	UWBP_WelcomeToRankedPopup_C_BndEvt__DismissButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_WelcomeToRankedPopup_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63316);

	UWBP_WelcomeToRankedPopup_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.OnClose
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_WelcomeToRankedPopup_C::OnClose()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63315);

	UWBP_WelcomeToRankedPopup_C_OnClose_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.BndEvt__MoreInfoButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WelcomeToRankedPopup_C::BndEvt__MoreInfoButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63314);

	UWBP_WelcomeToRankedPopup_C_BndEvt__MoreInfoButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.ExecuteUbergraph_WBP_WelcomeToRankedPopup
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WelcomeToRankedPopup_C::ExecuteUbergraph_WBP_WelcomeToRankedPopup(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63313);

	UWBP_WelcomeToRankedPopup_C_ExecuteUbergraph_WBP_WelcomeToRankedPopup_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
