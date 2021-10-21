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
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.GotoAdOffer
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_RogueListing_C::GotoAdOffer()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88548);

	UWBP_RogueListing_C_GotoAdOffer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.MakeFavorite
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueListing_C::MakeFavorite()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88547);

	UWBP_RogueListing_C_MakeFavorite_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.OnGotoOffer
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueListing_C::OnGotoOffer(class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88546);

	UWBP_RogueListing_C_OnGotoOffer_Params params {};
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.SetDLCDisplay
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShowDLC                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RogueListing_C::SetDLCDisplay(bool ShowDLC)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88545);

	UWBP_RogueListing_C_SetDLCDisplay_Params params {};
	params.ShowDLC = ShowDLC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.IsJobOwned
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UKSJobItem*                                  JobItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               owned                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RogueListing_C::IsJobOwned(class UKSJobItem* JobItem, bool* owned)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88544);

	UWBP_RogueListing_C_IsJobOwned_Params params {};
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (owned != nullptr)
		*owned = params.owned;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.SetRogueOwned
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueListing_C::SetRogueOwned(class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88543);

	UWBP_RogueListing_C_SetRogueOwned_Params params {};
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.ResetFavoriteIcons
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueListing_C::ResetFavoriteIcons()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88542);

	UWBP_RogueListing_C_ResetFavoriteIcons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.OnJobHovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSJobItem*                                  JobItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueListing_C::OnJobHovered(class UKSJobItem* JobItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88541);

	UWBP_RogueListing_C_OnJobHovered_Params params {};
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_RogueListing_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88540);

	UWBP_RogueListing_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.PopulateRoleFilters
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueListing_C::PopulateRoleFilters()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88539);

	UWBP_RogueListing_C_PopulateRoleFilters_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.GetJobButtons
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<class UWBP_JobGeneralButton_C*>             JobButtons                                                 (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_RogueListing_C::GetJobButtons(TArray<class UWBP_JobGeneralButton_C*>* JobButtons)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88538);

	UWBP_RogueListing_C_GetJobButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (JobButtons != nullptr)
		*JobButtons = params.JobButtons;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.SetRowAndColumn
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UGridSlot*                                   GridSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MaxRowCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueListing_C::SetRowAndColumn(class UGridSlot* GridSlot, int Index, int MaxRowCount)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88537);

	UWBP_RogueListing_C_SetRowAndColumn_Params params {};
	params.GridSlot = GridSlot;
	params.Index = Index;
	params.MaxRowCount = MaxRowCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.ResetButtonState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueListing_C::ResetButtonState()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88536);

	UWBP_RogueListing_C_ResetButtonState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.ResetJobList
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_RogueListing_C::ResetJobList()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88535);

	UWBP_RogueListing_C_ResetJobList_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.PopulateJobList
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueListing_C::PopulateJobList()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88534);

	UWBP_RogueListing_C_PopulateJobList_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.InitializeTickAnimations
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_RogueListing_C::InitializeTickAnimations()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88533);

	UWBP_RogueListing_C_InitializeTickAnimations_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.OnShowScreenAnimUpdate
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ElapsedAlpha                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueListing_C::OnShowScreenAnimUpdate(float ElapsedTime, float ElapsedAlpha)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88532);

	UWBP_RogueListing_C_OnShowScreenAnimUpdate_Params params {};
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.OnShowScreenAnimFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RogueListing_C::OnShowScreenAnimFinished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88531);

	UWBP_RogueListing_C_OnShowScreenAnimFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.StartShowScreenAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RogueListing_C::StartShowScreenAnim()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88530);

	UWBP_RogueListing_C_StartShowScreenAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueListing_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88529);

	UWBP_RogueListing_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.HandleOnJobSelected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSJobItem*                                  SelectedJob                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueListing_C::HandleOnJobSelected(class UKSJobItem* SelectedJob)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88528);

	UWBP_RogueListing_C_HandleOnJobSelected_Params params {};
	params.SelectedJob = SelectedJob;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_RogueListing_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88527);

	UWBP_RogueListing_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.ExternalOnShown
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RogueListing_C::ExternalOnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88526);

	UWBP_RogueListing_C_ExternalOnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_RogueListing_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88525);

	UWBP_RogueListing_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.OnBackPrompt
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RogueListing_C::OnBackPrompt()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88524);

	UWBP_RogueListing_C_OnBackPrompt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.HandleOnPurchasedItem
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_StoreItem*                             Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPUMG_StoreItemPrice*                        Price                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueListing_C::HandleOnPurchasedItem(class UPUMG_StoreItem* Item, class UPUMG_StoreItemPrice* Price)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88523);

	UWBP_RogueListing_C_HandleOnPurchasedItem_Params params {};
	params.Item = Item;
	params.Price = Price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.OnItemGamepadHovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_Widget*                                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bHovered                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RogueListing_C::OnItemGamepadHovered(class UPUMG_Widget* Widget, bool bHovered)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88522);

	UWBP_RogueListing_C_OnItemGamepadHovered_Params params {};
	params.Widget = Widget;
	params.bHovered = bHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.OnHide
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_RogueListing_C::OnHide()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88521);

	UWBP_RogueListing_C_OnHide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.BndEvt__WBP_RogueListingOfferPanel_K2Node_ComponentBoundEvent_0_OnOfferClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueListing_C::BndEvt__WBP_RogueListingOfferPanel_K2Node_ComponentBoundEvent_0_OnOfferClicked__DelegateSignature(class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88520);

	UWBP_RogueListing_C_BndEvt__WBP_RogueListingOfferPanel_K2Node_ComponentBoundEvent_0_OnOfferClicked__DelegateSignature_Params params {};
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.FocusGroupNavigateRightFailure
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueListing_C::FocusGroupNavigateRightFailure(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88519);

	UWBP_RogueListing_C_FocusGroupNavigateRightFailure_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.FocusGroupNavigateLeftFailure
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueListing_C::FocusGroupNavigateLeftFailure(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88518);

	UWBP_RogueListing_C_FocusGroupNavigateLeftFailure_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.ExecuteUbergraph_WBP_RogueListing
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueListing_C::ExecuteUbergraph_WBP_RogueListing(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88517);

	UWBP_RogueListing_C_ExecuteUbergraph_WBP_RogueListing_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.OnJobListReady__DelegateSignature
//		Flags  -> (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UWBP_JobGeneralButton_C*>             JobButtons                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_RogueListing_C::OnJobListReady__DelegateSignature(TArray<class UWBP_JobGeneralButton_C*>* JobButtons)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88516);

	UWBP_RogueListing_C_OnJobListReady__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (JobButtons != nullptr)
		*JobButtons = params.JobButtons;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueListing.WBP_RogueListing_C.OnJobSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSJobItem*                                  JobItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueListing_C::OnJobSelected__DelegateSignature(class UKSJobItem* JobItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88515);

	UWBP_RogueListing_C_OnJobSelected__DelegateSignature_Params params {};
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
