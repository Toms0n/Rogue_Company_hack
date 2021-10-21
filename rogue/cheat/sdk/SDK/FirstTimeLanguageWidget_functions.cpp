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
//		Name   -> Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFirstTimeLanguageWidget_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67856);

	UFirstTimeLanguageWidget_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UFirstTimeLanguageWidget_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67855);

	UFirstTimeLanguageWidget_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFirstTimeLanguageWidget_C::BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67854);

	UFirstTimeLanguageWidget_C_BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UFirstTimeLanguageWidget_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67853);

	UFirstTimeLanguageWidget_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.HandleInputState
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFirstTimeLanguageWidget_C::HandleInputState(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67852);

	UFirstTimeLanguageWidget_C_HandleInputState_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.SaveSetting
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UFirstTimeLanguageWidget_C::SaveSetting()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67851);

	UFirstTimeLanguageWidget_C_SaveSetting_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.OnHide
//		Flags  -> (Event, Public, BlueprintEvent)
void UFirstTimeLanguageWidget_C::OnHide()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67850);

	UFirstTimeLanguageWidget_C_OnHide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.OnSettingSelected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UFirstTimeLanguageWidget_C::OnSettingSelected()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67849);

	UFirstTimeLanguageWidget_C_OnSettingSelected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UFirstTimeLanguageWidget_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(67848);

	UFirstTimeLanguageWidget_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.ExecuteUbergraph_FirstTimeLanguageWidget
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFirstTimeLanguageWidget_C::ExecuteUbergraph_FirstTimeLanguageWidget(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(63647);

	UFirstTimeLanguageWidget_C_ExecuteUbergraph_FirstTimeLanguageWidget_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
