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
//		Name   -> Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotHovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FCosmeticSlotDetails                        CosmeticSlotDetails                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsGamepad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UWBP_KSCosmeticItemDisplay_C*                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_AcquistionItem_C::OnSlotHovered(const struct FCosmeticSlotDetails& CosmeticSlotDetails, bool IsGamepad, class UWBP_KSCosmeticItemDisplay_C* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80447);

	UWBP_AcquistionItem_C_OnSlotHovered_Params params {};
	params.CosmeticSlotDetails = CosmeticSlotDetails;
	params.IsGamepad = IsGamepad;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_KSCosmeticItemDisplay_C*                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FCosmeticSlotDetails                        CosmeticSlotDetails                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void UWBP_AcquistionItem_C::OnSlotClicked(class UWBP_KSCosmeticItemDisplay_C* Widget, const struct FCosmeticSlotDetails& CosmeticSlotDetails)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80446);

	UWBP_AcquistionItem_C_OnSlotClicked_Params params {};
	params.Widget = Widget;
	params.CosmeticSlotDetails = CosmeticSlotDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AcquistionItem.WBP_AcquistionItem_C.SetSlotItem
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAcquisitionItemData*                        SlotItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_AcquistionItem_C::SetSlotItem(class UAcquisitionItemData* SlotItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80445);

	UWBP_AcquistionItem_C_SetSlotItem_Params params {};
	params.SlotItem = SlotItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AcquistionItem.WBP_AcquistionItem_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_AcquistionItem_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80444);

	UWBP_AcquistionItem_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AcquistionItem.WBP_AcquistionItem_C.ExecuteUbergraph_WBP_AcquistionItem
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_AcquistionItem_C::ExecuteUbergraph_WBP_AcquistionItem(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80443);

	UWBP_AcquistionItem_C_ExecuteUbergraph_WBP_AcquistionItem_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotHover__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAcquisitionItemData*                        AcquisitionItem                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSWidget*                                   Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_AcquistionItem_C::OnSlotHover__DelegateSignature(class UAcquisitionItemData* AcquisitionItem, class UKSWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80442);

	UWBP_AcquistionItem_C_OnSlotHover__DelegateSignature_Params params {};
	params.AcquisitionItem = AcquisitionItem;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAcquisitionItemData*                        AcquisitionItem                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_AcquistionItem_C::OnSlotSelected__DelegateSignature(class UAcquisitionItemData* AcquisitionItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80441);

	UWBP_AcquistionItem_C_OnSlotSelected__DelegateSignature_Params params {};
	params.AcquisitionItem = AcquisitionItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
