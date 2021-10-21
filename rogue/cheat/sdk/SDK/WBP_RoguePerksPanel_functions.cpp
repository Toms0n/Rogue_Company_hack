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
//		Name   -> Function WBP_RoguePerksPanel.WBP_RoguePerksPanel_C.SetRogueDetailsWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSRogueDetailsWidget*                       DetailsWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RoguePerksPanel_C::SetRogueDetailsWidget(class UKSRogueDetailsWidget* DetailsWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78898);

	UWBP_RoguePerksPanel_C_SetRogueDetailsWidget_Params params {};
	params.DetailsWidget = DetailsWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RoguePerksPanel.WBP_RoguePerksPanel_C.GetPerkEntries
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<class UWBP_PerkDescSlot_C*>                 PerkEntries                                                (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_RoguePerksPanel_C::GetPerkEntries(TArray<class UWBP_PerkDescSlot_C*>* PerkEntries)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78897);

	UWBP_RoguePerksPanel_C_GetPerkEntries_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PerkEntries != nullptr)
		*PerkEntries = params.PerkEntries;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RoguePerksPanel.WBP_RoguePerksPanel_C.SetJob
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSJobItem*                                  JobItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RoguePerksPanel_C::SetJob(class UKSJobItem* JobItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78896);

	UWBP_RoguePerksPanel_C_SetJob_Params params {};
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RoguePerksPanel.WBP_RoguePerksPanel_C.BndEvt__ButtonUnlock_K2Node_ComponentBoundEvent_0_OnBtnStackedClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RoguePerksPanel_C::BndEvt__ButtonUnlock_K2Node_ComponentBoundEvent_0_OnBtnStackedClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78895);

	UWBP_RoguePerksPanel_C_BndEvt__ButtonUnlock_K2Node_ComponentBoundEvent_0_OnBtnStackedClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RoguePerksPanel.WBP_RoguePerksPanel_C.ExecuteUbergraph_WBP_RoguePerksPanel
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RoguePerksPanel_C::ExecuteUbergraph_WBP_RoguePerksPanel(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78894);

	UWBP_RoguePerksPanel_C_ExecuteUbergraph_WBP_RoguePerksPanel_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
