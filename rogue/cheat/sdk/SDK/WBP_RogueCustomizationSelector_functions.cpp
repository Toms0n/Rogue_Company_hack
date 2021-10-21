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
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.OnBumperTab
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bNext                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RogueCustomizationSelector_C::OnBumperTab(bool bNext)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88732);

	UWBP_RogueCustomizationSelector_C_OnBumperTab_Params params {};
	params.bNext = bNext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.SelectTabBasedOnCosmeticSlot
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueCustomizationSelector_C::SelectTabBasedOnCosmeticSlot()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88731);

	UWBP_RogueCustomizationSelector_C_SelectTabBasedOnCosmeticSlot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.SetUpNavFromNews
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSCosmeticSlotDetails*                      Details                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationSelector_C::SetUpNavFromNews(class UKSCosmeticSlotDetails* Details)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88730);

	UWBP_RogueCustomizationSelector_C_SetUpNavFromNews_Params params {};
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.SetCosmeticSelectionFromClass
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSCosmeticSlotDetails*                      SlotDetails                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationSelector_C::SetCosmeticSelectionFromClass(class UKSCosmeticSlotDetails* SlotDetails)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88729);

	UWBP_RogueCustomizationSelector_C_SetCosmeticSelectionFromClass_Params params {};
	params.SlotDetails = SlotDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.GetSelectedStoreItem
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UPUMG_StoreItem*                             StoreItem                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationSelector_C::GetSelectedStoreItem(class UPUMG_StoreItem** StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88728);

	UWBP_RogueCustomizationSelector_C_GetSelectedStoreItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StoreItem != nullptr)
		*StoreItem = params.StoreItem;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.GetPrimaryItem
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UKSItem*                                     KSItem                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationSelector_C::GetPrimaryItem(class UKSItem** KSItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88727);

	UWBP_RogueCustomizationSelector_C_GetPrimaryItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (KSItem != nullptr)
		*KSItem = params.KSItem;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.Create Cosmetic Item Selector
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSItem*                                     KSItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationSelector_C::Create_Cosmetic_Item_Selector(class UKSItem* KSItem, class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88726);

	UWBP_RogueCustomizationSelector_C_Create_Cosmetic_Item_Selector_Params params {};
	params.KSItem = KSItem;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.SoundPlayCosmeticEquip
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Killstreak_EMercCosmeticSlot                       CosmeticType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationSelector_C::SoundPlayCosmeticEquip(Killstreak_EMercCosmeticSlot CosmeticType)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88725);

	UWBP_RogueCustomizationSelector_C_SoundPlayCosmeticEquip_Params params {};
	params.CosmeticType = CosmeticType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.GetActiveTabFocusGroup
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                ActiveTabFocusGroup                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationSelector_C::GetActiveTabFocusGroup(int* ActiveTabFocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88724);

	UWBP_RogueCustomizationSelector_C_GetActiveTabFocusGroup_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActiveTabFocusGroup != nullptr)
		*ActiveTabFocusGroup = params.ActiveTabFocusGroup;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.ReevaluateGamepadTabImageVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueCustomizationSelector_C::ReevaluateGamepadTabImageVisibility()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88723);

	UWBP_RogueCustomizationSelector_C_ReevaluateGamepadTabImageVisibility_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.GetAdjustedCosmeticSlot
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UPlatformInventoryItem*                      OriginalItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Killstreak_EMercCosmeticSlot                       OriginalCosmeticSlot                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Killstreak_EMercCosmeticSlot                       AdjustedCosmeticSlot                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationSelector_C::GetAdjustedCosmeticSlot(class UPlatformInventoryItem* OriginalItem, Killstreak_EMercCosmeticSlot OriginalCosmeticSlot, Killstreak_EMercCosmeticSlot* AdjustedCosmeticSlot)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88722);

	UWBP_RogueCustomizationSelector_C_GetAdjustedCosmeticSlot_Params params {};
	params.OriginalItem = OriginalItem;
	params.OriginalCosmeticSlot = OriginalCosmeticSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AdjustedCosmeticSlot != nullptr)
		*AdjustedCosmeticSlot = params.AdjustedCosmeticSlot;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.AddActiveCosmeticSlot
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Killstreak_EMercCosmeticSlot                       NewCosmeticSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationSelector_C::AddActiveCosmeticSlot(Killstreak_EMercCosmeticSlot NewCosmeticSlot)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88721);

	UWBP_RogueCustomizationSelector_C_AddActiveCosmeticSlot_Params params {};
	params.NewCosmeticSlot = NewCosmeticSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.ChangeCosmeticSlotTab
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSNavTabWidget*                             Tab                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationSelector_C::ChangeCosmeticSlotTab(class UKSNavTabWidget* Tab)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88720);

	UWBP_RogueCustomizationSelector_C_ChangeCosmeticSlotTab_Params params {};
	params.Tab = Tab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.SetupCosmeticSlots
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_RogueCustomizationSelector_C::SetupCosmeticSlots()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88719);

	UWBP_RogueCustomizationSelector_C_SetupCosmeticSlots_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.OnSortRarityDescNameAsc
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     LHS                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     RHS                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_RogueCustomizationSelector_C::OnSortRarityDescNameAsc(class UWidget* LHS, class UWidget* RHS)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88718);

	UWBP_RogueCustomizationSelector_C_OnSortRarityDescNameAsc_Params params {};
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.IsEquipAllAllowed
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UKSItem*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               CanEquipAll                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RogueCustomizationSelector_C::IsEquipAllAllowed(class UKSItem* Item, bool* CanEquipAll)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88717);

	UWBP_RogueCustomizationSelector_C_IsEquipAllAllowed_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanEquipAll != nullptr)
		*CanEquipAll = params.CanEquipAll;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.DisplayEquipAllPrompt
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueCustomizationSelector_C::DisplayEquipAllPrompt()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88716);

	UWBP_RogueCustomizationSelector_C_DisplayEquipAllPrompt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.OnEquipAll
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_RogueCustomizationSelector_C::OnEquipAll()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88715);

	UWBP_RogueCustomizationSelector_C_OnEquipAll_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.SetEmoteModel
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSItem*                                     CosmeticItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationSelector_C::SetEmoteModel(class UKSItem* CosmeticItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88714);

	UWBP_RogueCustomizationSelector_C_SetEmoteModel_Params params {};
	params.CosmeticItem = CosmeticItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.SetEquippedItem
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsEquipped                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UWBP_KSCosmeticItemSelector_C*               CosmeticItemSlot                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSItem*                                     KSItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationSelector_C::SetEquippedItem(bool IsEquipped, class UWBP_KSCosmeticItemSelector_C* CosmeticItemSlot, class UKSItem* KSItem, class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88713);

	UWBP_RogueCustomizationSelector_C_SetEquippedItem_Params params {};
	params.IsEquipped = IsEquipped;
	params.CosmeticItemSlot = CosmeticItemSlot;
	params.KSItem = KSItem;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.SetOwnedItem
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationSelector_C::SetOwnedItem(class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88712);

	UWBP_RogueCustomizationSelector_C_SetOwnedItem_Params params {};
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.OnPurchaseItem
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationSelector_C::OnPurchaseItem(class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88711);

	UWBP_RogueCustomizationSelector_C_OnPurchaseItem_Params params {};
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.AddClearCosmeticSlot
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSSortableGridPanel*                        ItemContainer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationSelector_C::AddClearCosmeticSlot(class UKSSortableGridPanel* ItemContainer)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88710);

	UWBP_RogueCustomizationSelector_C_AddClearCosmeticSlot_Params params {};
	params.ItemContainer = ItemContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.IsItemEquipped
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UKSItem*                                     KSItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsEquipped                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RogueCustomizationSelector_C::IsItemEquipped(class UKSItem* KSItem, bool* IsEquipped)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88709);

	UWBP_RogueCustomizationSelector_C_IsItemEquipped_Params params {};
	params.KSItem = KSItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsEquipped != nullptr)
		*IsEquipped = params.IsEquipped;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.Set Active States
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_KSCosmeticItemSelector_C*               ActiveWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationSelector_C::Set_Active_States(class UWBP_KSCosmeticItemSelector_C* ActiveWidget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88708);

	UWBP_RogueCustomizationSelector_C_Set_Active_States_Params params {};
	params.ActiveWidget = ActiveWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.SetEquipBtn
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_RogueCustomizationSelector_C::SetEquipBtn()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88707);

	UWBP_RogueCustomizationSelector_C_SetEquipBtn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.SetWingSuitModel
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSItem*                                     CosmeticItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationSelector_C::SetWingSuitModel(class UKSItem* CosmeticItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88706);

	UWBP_RogueCustomizationSelector_C_SetWingSuitModel_Params params {};
	params.CosmeticItem = CosmeticItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.ResetSprayIcon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_RogueCustomizationSelector_C::ResetSprayIcon()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88705);

	UWBP_RogueCustomizationSelector_C_ResetSprayIcon_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.ResetModels
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_RogueCustomizationSelector_C::ResetModels()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88704);

	UWBP_RogueCustomizationSelector_C_ResetModels_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.SetEmoteImage
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSItem*                                     CosmeticItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationSelector_C::SetEmoteImage(class UKSItem* CosmeticItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88703);

	UWBP_RogueCustomizationSelector_C_SetEmoteImage_Params params {};
	params.CosmeticItem = CosmeticItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.ResetCharacter
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueCustomizationSelector_C::ResetCharacter()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88702);

	UWBP_RogueCustomizationSelector_C_ResetCharacter_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.SetWeapon
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSItem*                                     CosmeticItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSJobItem*                                  JobItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Killstreak_EWeaponSlot                             WeaponSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationSelector_C::SetWeapon(class UKSItem* CosmeticItem, class UKSJobItem* JobItem, Killstreak_EWeaponSlot WeaponSlot)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88701);

	UWBP_RogueCustomizationSelector_C_SetWeapon_Params params {};
	params.CosmeticItem = CosmeticItem;
	params.JobItem = JobItem;
	params.WeaponSlot = WeaponSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.Set Model Viewer
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPlatformInventoryItem*                      CosmeticItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FCosmeticSlotDetails                        CosmeticDetail                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationSelector_C::Set_Model_Viewer(class UPlatformInventoryItem* CosmeticItem, const struct FCosmeticSlotDetails& CosmeticDetail)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88700);

	UWBP_RogueCustomizationSelector_C_Set_Model_Viewer_Params params {};
	params.CosmeticItem = CosmeticItem;
	params.CosmeticDetail = CosmeticDetail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.SetCharacterSkin
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSItem*                                     CosmeticItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSJobItem*                                  JobItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationSelector_C::SetCharacterSkin(class UKSItem* CosmeticItem, class UKSJobItem* JobItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88699);

	UWBP_RogueCustomizationSelector_C_SetCharacterSkin_Params params {};
	params.CosmeticItem = CosmeticItem;
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_RogueCustomizationSelector_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88698);

	UWBP_RogueCustomizationSelector_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.SetContextBar
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueCustomizationSelector_C::SetContextBar()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88697);

	UWBP_RogueCustomizationSelector_C_SetContextBar_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.UpdateNavigation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_RogueCustomizationSelector_C::UpdateNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88696);

	UWBP_RogueCustomizationSelector_C_UpdateNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.RegisterNavigation
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueCustomizationSelector_C::RegisterNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88695);

	UWBP_RogueCustomizationSelector_C_RegisterNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.ResetCosmeticSelection
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueCustomizationSelector_C::ResetCosmeticSelection()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88694);

	UWBP_RogueCustomizationSelector_C_ResetCosmeticSelection_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.SetCosmeticSelection
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FCosmeticSlotDetails                        CosmeticDetails                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationSelector_C::SetCosmeticSelection(const struct FCosmeticSlotDetails& CosmeticDetails)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88693);

	UWBP_RogueCustomizationSelector_C_SetCosmeticSelection_Params params {};
	params.CosmeticDetails = CosmeticDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.ClearDataOnInitialize
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RogueCustomizationSelector_C::ClearDataOnInitialize()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88692);

	UWBP_RogueCustomizationSelector_C_ClearDataOnInitialize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationSelector_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88691);

	UWBP_RogueCustomizationSelector_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.OnHover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FCosmeticSlotDetails                        CosmeticDetails                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
//		class UPlatformInventoryItem*                      PlatformItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationSelector_C::OnHover(const struct FCosmeticSlotDetails& CosmeticDetails, class UPlatformInventoryItem* PlatformItem, class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88690);

	UWBP_RogueCustomizationSelector_C_OnHover_Params params {};
	params.CosmeticDetails = CosmeticDetails;
	params.PlatformItem = PlatformItem;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.OnUnhover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RogueCustomizationSelector_C::OnUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88689);

	UWBP_RogueCustomizationSelector_C_OnUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.OnSelectCosmetic
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPlatformInventoryItem*                      PlatformItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FCosmeticSlotDetails                        CosmeticDetails                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationSelector_C::OnSelectCosmetic(class UPlatformInventoryItem* PlatformItem, class UPUMG_StoreItem* StoreItem, class UWidget* Widget, const struct FCosmeticSlotDetails& CosmeticDetails)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88688);

	UWBP_RogueCustomizationSelector_C_OnSelectCosmetic_Params params {};
	params.PlatformItem = PlatformItem;
	params.StoreItem = StoreItem;
	params.Widget = Widget;
	params.CosmeticDetails = CosmeticDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_RogueCustomizationSelector_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88687);

	UWBP_RogueCustomizationSelector_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.OnBackPrompt
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RogueCustomizationSelector_C::OnBackPrompt()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88686);

	UWBP_RogueCustomizationSelector_C_OnBackPrompt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_RogueCustomizationSelector_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88685);

	UWBP_RogueCustomizationSelector_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.EquipCosmetic
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RogueCustomizationSelector_C::EquipCosmetic()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88684);

	UWBP_RogueCustomizationSelector_C_EquipCosmetic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.OnHide
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_RogueCustomizationSelector_C::OnHide()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88683);

	UWBP_RogueCustomizationSelector_C_OnHide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.HandleInputStateChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationSelector_C::HandleInputStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88682);

	UWBP_RogueCustomizationSelector_C_HandleInputStateChanged_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.OnItemGamepadHovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_Widget*                                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bHovered                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RogueCustomizationSelector_C::OnItemGamepadHovered(class UPUMG_Widget* Widget, bool bHovered)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88681);

	UWBP_RogueCustomizationSelector_C_OnItemGamepadHovered_Params params {};
	params.Widget = Widget;
	params.bHovered = bHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.Return To Job Preview Model
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSItem*                                     Cosmetic_Item                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationSelector_C::Return_To_Job_Preview_Model(class UKSItem* Cosmetic_Item)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88680);

	UWBP_RogueCustomizationSelector_C_Return_To_Job_Preview_Model_Params params {};
	params.Cosmetic_Item = Cosmetic_Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.Hide Preview Character
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RogueCustomizationSelector_C::Hide_Preview_Character()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88679);

	UWBP_RogueCustomizationSelector_C_Hide_Preview_Character_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.Show Preview Character
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RogueCustomizationSelector_C::Show_Preview_Character()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88678);

	UWBP_RogueCustomizationSelector_C_Show_Preview_Character_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.ChangeToNewTab
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UWBP_RogueCustomizationSelector_C::ChangeToNewTab()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88677);

	UWBP_RogueCustomizationSelector_C_ChangeToNewTab_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.ExecuteUbergraph_WBP_RogueCustomizationSelector
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationSelector_C::ExecuteUbergraph_WBP_RogueCustomizationSelector(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88676);

	UWBP_RogueCustomizationSelector_C_ExecuteUbergraph_WBP_RogueCustomizationSelector_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.OnEquipCosmeticItem__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Killstreak_EMercCosmeticSlot                       SlotType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                SlotIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSItem*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RogueCustomizationSelector_C::OnEquipCosmeticItem__DelegateSignature(Killstreak_EMercCosmeticSlot SlotType, int SlotIndex, class UKSItem* Item)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(88675);

	UWBP_RogueCustomizationSelector_C_OnEquipCosmeticItem__DelegateSignature_Params params {};
	params.SlotType = SlotType;
	params.SlotIndex = SlotIndex;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
