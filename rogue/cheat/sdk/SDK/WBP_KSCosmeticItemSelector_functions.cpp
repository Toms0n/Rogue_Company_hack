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
//		Name   -> Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.RefreshSelectedState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_KSCosmeticItemSelector_C::RefreshSelectedState()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78602);

	UWBP_KSCosmeticItemSelector_C_RefreshSelectedState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_KSCosmeticItemSelector_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78601);

	UWBP_KSCosmeticItemSelector_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnClickSound
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_KSCosmeticItemSelector_C::OnClickSound()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78600);

	UWBP_KSCosmeticItemSelector_C_OnClickSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnHoverSound
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_KSCosmeticItemSelector_C::OnHoverSound()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78599);

	UWBP_KSCosmeticItemSelector_C_OnHoverSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_KSCosmeticItemSelector_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78598);

	UWBP_KSCosmeticItemSelector_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_KSCosmeticItemSelector_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78597);

	UWBP_KSCosmeticItemSelector_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnCosmeticHover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FCosmeticSlotDetails                        CosmeticDetails                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsGamepad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UWBP_KSCosmeticItemDisplay_C*                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_KSCosmeticItemSelector_C::OnCosmeticHover(const struct FCosmeticSlotDetails& CosmeticDetails, bool IsGamepad, class UWBP_KSCosmeticItemDisplay_C* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78596);

	UWBP_KSCosmeticItemSelector_C_OnCosmeticHover_Params params {};
	params.CosmeticDetails = CosmeticDetails;
	params.IsGamepad = IsGamepad;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnCosmeticUnhover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_KSCosmeticItemSelector_C::OnCosmeticUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78595);

	UWBP_KSCosmeticItemSelector_C_OnCosmeticUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnCosmeticClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_KSCosmeticItemDisplay_C*                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FCosmeticSlotDetails                        CosmeticSlotDetails                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void UWBP_KSCosmeticItemSelector_C::OnCosmeticClicked(class UWBP_KSCosmeticItemDisplay_C* Widget, const struct FCosmeticSlotDetails& CosmeticSlotDetails)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78594);

	UWBP_KSCosmeticItemSelector_C_OnCosmeticClicked_Params params {};
	params.Widget = Widget;
	params.CosmeticSlotDetails = CosmeticSlotDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_KSCosmeticItemSelector_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78593);

	UWBP_KSCosmeticItemSelector_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_KSCosmeticItemSelector_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78592);

	UWBP_KSCosmeticItemSelector_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.SetSlotActive
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_KSCosmeticItemSelector_C::SetSlotActive(bool Active)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78591);

	UWBP_KSCosmeticItemSelector_C_SetSlotActive_Params params {};
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.SetItemOwned
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_KSCosmeticItemSelector_C::SetItemOwned(class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78590);

	UWBP_KSCosmeticItemSelector_C_SetItemOwned_Params params {};
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.SetItemEquipped
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsEquipped                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_KSCosmeticItemSelector_C::SetItemEquipped(bool IsEquipped)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78589);

	UWBP_KSCosmeticItemSelector_C_SetItemEquipped_Params params {};
	params.IsEquipped = IsEquipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.SetItemSelected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_KSCosmeticItemSelector_C::SetItemSelected(bool IsSelected)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78588);

	UWBP_KSCosmeticItemSelector_C_SetItemSelected_Params params {};
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.ExecuteUbergraph_WBP_KSCosmeticItemSelector
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_KSCosmeticItemSelector_C::ExecuteUbergraph_WBP_KSCosmeticItemSelector(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78587);

	UWBP_KSCosmeticItemSelector_C_ExecuteUbergraph_WBP_KSCosmeticItemSelector_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnPurchaseItem__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_KSCosmeticItemSelector_C::OnPurchaseItem__DelegateSignature(class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78586);

	UWBP_KSCosmeticItemSelector_C_OnPurchaseItem__DelegateSignature_Params params {};
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnItemSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPlatformInventoryItem*                      PlatformItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FCosmeticSlotDetails                        CosmeticSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void UWBP_KSCosmeticItemSelector_C::OnItemSelected__DelegateSignature(class UPlatformInventoryItem* PlatformItem, class UPUMG_StoreItem* StoreItem, class UWidget* Widget, const struct FCosmeticSlotDetails& CosmeticSlot)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78585);

	UWBP_KSCosmeticItemSelector_C_OnItemSelected__DelegateSignature_Params params {};
	params.PlatformItem = PlatformItem;
	params.StoreItem = StoreItem;
	params.Widget = Widget;
	params.CosmeticSlot = CosmeticSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnItemUnhovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_KSCosmeticItemSelector_C::OnItemUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78584);

	UWBP_KSCosmeticItemSelector_C_OnItemUnhovered__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnItemHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FCosmeticSlotDetails                        CosmeticDetails                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
//		class UPlatformInventoryItem*                      PlatformItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_KSCosmeticItemSelector_C::OnItemHovered__DelegateSignature(const struct FCosmeticSlotDetails& CosmeticDetails, class UPlatformInventoryItem* PlatformItem, class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78583);

	UWBP_KSCosmeticItemSelector_C_OnItemHovered__DelegateSignature_Params params {};
	params.CosmeticDetails = CosmeticDetails;
	params.PlatformItem = PlatformItem;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
