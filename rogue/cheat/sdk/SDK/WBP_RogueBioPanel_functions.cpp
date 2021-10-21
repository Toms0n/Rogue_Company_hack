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
//		Name   -> Function WBP_RogueBioPanel.WBP_RogueBioPanel_C.SetupPurchaseListener
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ActivateCallout                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RogueBioPanel_C::SetupPurchaseListener(bool ActivateCallout)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79047);

	UWBP_RogueBioPanel_C_SetupPurchaseListener_Params params {};
	params.ActivateCallout = ActivateCallout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueBioPanel.WBP_RogueBioPanel_C.OnPurchaseCallout
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_RogueBioPanel_C::OnPurchaseCallout()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79046);

	UWBP_RogueBioPanel_C_OnPurchaseCallout_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueBioPanel.WBP_RogueBioPanel_C.OnInputStateChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueBioPanel_C::OnInputStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79045);

	UWBP_RogueBioPanel_C_OnInputStateChanged_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueBioPanel.WBP_RogueBioPanel_C.SetRogueDetailsWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSRogueDetailsWidget*                       DetailsWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueBioPanel_C::SetRogueDetailsWidget(class UKSRogueDetailsWidget* DetailsWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79044);

	UWBP_RogueBioPanel_C_SetRogueDetailsWidget_Params params {};
	params.DetailsWidget = DetailsWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueBioPanel.WBP_RogueBioPanel_C.UpdatePurchaseButton
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueBioPanel_C::UpdatePurchaseButton()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79043);

	UWBP_RogueBioPanel_C_UpdatePurchaseButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueBioPanel.WBP_RogueBioPanel_C.SetJob
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSJobItem*                                  JobItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueBioPanel_C::SetJob(class UKSJobItem* JobItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79042);

	UWBP_RogueBioPanel_C_SetJob_Params params {};
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueBioPanel.WBP_RogueBioPanel_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_RogueBioPanel_C::OnInitialized()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79041);

	UWBP_RogueBioPanel_C_OnInitialized_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueBioPanel.WBP_RogueBioPanel_C.BndEvt__UnlockButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueBioPanel_C::BndEvt__UnlockButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79040);

	UWBP_RogueBioPanel_C_BndEvt__UnlockButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueBioPanel.WBP_RogueBioPanel_C.ExecuteUbergraph_WBP_RogueBioPanel
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueBioPanel_C::ExecuteUbergraph_WBP_RogueBioPanel(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79039);

	UWBP_RogueBioPanel_C_ExecuteUbergraph_WBP_RogueBioPanel_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
