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
//		Name   -> Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.LaunchTutorial
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Force_Close_Screen                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UFirstTimeTutorialWidget_C::LaunchTutorial(bool Force_Close_Screen)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73928);

	UFirstTimeTutorialWidget_C_LaunchTutorial_Params params {};
	params.Force_Close_Screen = Force_Close_Screen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UFirstTimeTutorialWidget_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73927);

	UFirstTimeTutorialWidget_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UFirstTimeTutorialWidget_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73926);

	UFirstTimeTutorialWidget_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UFirstTimeTutorialWidget_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73925);

	UFirstTimeTutorialWidget_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFirstTimeTutorialWidget_C::BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73924);

	UFirstTimeTutorialWidget_C_BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFirstTimeTutorialWidget_C::BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73923);

	UFirstTimeTutorialWidget_C_BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_9_CloseButtonClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UFirstTimeTutorialWidget_C::BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_9_CloseButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73922);

	UFirstTimeTutorialWidget_C_BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_9_CloseButtonClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.OnHide
//		Flags  -> (Event, Public, BlueprintEvent)
void UFirstTimeTutorialWidget_C::OnHide()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73921);

	UFirstTimeTutorialWidget_C_OnHide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.ExecuteUbergraph_FirstTimeTutorialWidget
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFirstTimeTutorialWidget_C::ExecuteUbergraph_FirstTimeTutorialWidget(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(73920);

	UFirstTimeTutorialWidget_C_ExecuteUbergraph_FirstTimeTutorialWidget_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
