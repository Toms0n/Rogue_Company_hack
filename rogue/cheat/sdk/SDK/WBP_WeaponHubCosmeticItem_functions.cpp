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
//		Name   -> Function WBP_WeaponHubCosmeticItem.WBP_WeaponHubCosmeticItem_C.Populate Default
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_WeaponHubCosmeticItem_C::Populate_Default()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78754);

	UWBP_WeaponHubCosmeticItem_C_Populate_Default_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponHubCosmeticItem.WBP_WeaponHubCosmeticItem_C.Populate From Platform Item
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPlatformInventoryItem*                      PlatformItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsEquipped                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_WeaponHubCosmeticItem_C::Populate_From_Platform_Item(class UPlatformInventoryItem* PlatformItem, bool IsEquipped)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78753);

	UWBP_WeaponHubCosmeticItem_C_Populate_From_Platform_Item_Params params {};
	params.PlatformItem = PlatformItem;
	params.IsEquipped = IsEquipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponHubCosmeticItem.WBP_WeaponHubCosmeticItem_C.BndEvt__ItemDisplay_K2Node_ComponentBoundEvent_0_OnCosmeticClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWBP_KSCosmeticItemDisplay_C*                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FCosmeticSlotDetails                        CosmeticSlotDetails                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponHubCosmeticItem_C::BndEvt__ItemDisplay_K2Node_ComponentBoundEvent_0_OnCosmeticClicked__DelegateSignature(class UWBP_KSCosmeticItemDisplay_C* Widget, const struct FCosmeticSlotDetails& CosmeticSlotDetails)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78752);

	UWBP_WeaponHubCosmeticItem_C_BndEvt__ItemDisplay_K2Node_ComponentBoundEvent_0_OnCosmeticClicked__DelegateSignature_Params params {};
	params.Widget = Widget;
	params.CosmeticSlotDetails = CosmeticSlotDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponHubCosmeticItem.WBP_WeaponHubCosmeticItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_WeaponHubCosmeticItem_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78751);

	UWBP_WeaponHubCosmeticItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponHubCosmeticItem.WBP_WeaponHubCosmeticItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_WeaponHubCosmeticItem_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78750);

	UWBP_WeaponHubCosmeticItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponHubCosmeticItem.WBP_WeaponHubCosmeticItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_WeaponHubCosmeticItem_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78749);

	UWBP_WeaponHubCosmeticItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponHubCosmeticItem.WBP_WeaponHubCosmeticItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_WeaponHubCosmeticItem_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78748);

	UWBP_WeaponHubCosmeticItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponHubCosmeticItem.WBP_WeaponHubCosmeticItem_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_WeaponHubCosmeticItem_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78747);

	UWBP_WeaponHubCosmeticItem_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponHubCosmeticItem.WBP_WeaponHubCosmeticItem_C.ExecuteUbergraph_WBP_WeaponHubCosmeticItem
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponHubCosmeticItem_C::ExecuteUbergraph_WBP_WeaponHubCosmeticItem(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78746);

	UWBP_WeaponHubCosmeticItem_C_ExecuteUbergraph_WBP_WeaponHubCosmeticItem_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponHubCosmeticItem.WBP_WeaponHubCosmeticItem_C.OnSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_WeaponHubCosmeticItem_C::OnSelected__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(78745);

	UWBP_WeaponHubCosmeticItem_C_OnSelected__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
