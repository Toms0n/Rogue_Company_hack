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
//		Name   -> Function WBP_RogueCustomizationPanel.WBP_RogueCustomizationPanel_C.SetupInput
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSWidget*                                   NavigationParent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationPanel_C::SetupInput(class UKSWidget* NavigationParent, int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78931);

	UWBP_RogueCustomizationPanel_C_SetupInput_Params params {};
	params.NavigationParent = NavigationParent;
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationPanel.WBP_RogueCustomizationPanel_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_RogueCustomizationPanel_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78930);

	UWBP_RogueCustomizationPanel_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationPanel.WBP_RogueCustomizationPanel_C.BindSlots
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueCustomizationPanel_C::BindSlots()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78929);

	UWBP_RogueCustomizationPanel_C_BindSlots_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationPanel.WBP_RogueCustomizationPanel_C.SetSlots
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueCustomizationPanel_C::SetSlots()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78928);

	UWBP_RogueCustomizationPanel_C_SetSlots_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationPanel.WBP_RogueCustomizationPanel_C.UpdateEquippedItems
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueCustomizationPanel_C::UpdateEquippedItems()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78927);

	UWBP_RogueCustomizationPanel_C_UpdateEquippedItems_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationPanel.WBP_RogueCustomizationPanel_C.SetActiveJob
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSJobItem*                                  JobItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationPanel_C::SetActiveJob(class UKSJobItem* JobItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78926);

	UWBP_RogueCustomizationPanel_C_SetActiveJob_Params params {};
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationPanel.WBP_RogueCustomizationPanel_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationPanel_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78925);

	UWBP_RogueCustomizationPanel_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationPanel.WBP_RogueCustomizationPanel_C.OnCosmeticSelected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_KSCosmeticItemDisplay_C*                CosmeticSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FCosmeticSlotDetails                        CosmeticSlotDetails                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationPanel_C::OnCosmeticSelected(class UWBP_KSCosmeticItemDisplay_C* CosmeticSlot, const struct FCosmeticSlotDetails& CosmeticSlotDetails)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78924);

	UWBP_RogueCustomizationPanel_C_OnCosmeticSelected_Params params {};
	params.CosmeticSlot = CosmeticSlot;
	params.CosmeticSlotDetails = CosmeticSlotDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationPanel.WBP_RogueCustomizationPanel_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_RogueCustomizationPanel_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78923);

	UWBP_RogueCustomizationPanel_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationPanel.WBP_RogueCustomizationPanel_C.ExecuteUbergraph_WBP_RogueCustomizationPanel
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationPanel_C::ExecuteUbergraph_WBP_RogueCustomizationPanel(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78922);

	UWBP_RogueCustomizationPanel_C_ExecuteUbergraph_WBP_RogueCustomizationPanel_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationPanel.WBP_RogueCustomizationPanel_C.GotoCustomizationScreen__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_KSCosmeticItemDisplay_C*                CosmeticSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationPanel_C::GotoCustomizationScreen__DelegateSignature(class UWBP_KSCosmeticItemDisplay_C* CosmeticSlot)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78921);

	UWBP_RogueCustomizationPanel_C_GotoCustomizationScreen__DelegateSignature_Params params {};
	params.CosmeticSlot = CosmeticSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
