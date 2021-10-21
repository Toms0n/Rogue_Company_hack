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
//		Name   -> Function WBP_BoosterInventoryItem.WBP_BoosterInventoryItem_C.NavigateConfirm
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_BoosterInventoryItem_C::NavigateConfirm()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81604);

	UWBP_BoosterInventoryItem_C_NavigateConfirm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BoosterInventoryItem.WBP_BoosterInventoryItem_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_BoosterInventoryItem_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81603);

	UWBP_BoosterInventoryItem_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BoosterInventoryItem.WBP_BoosterInventoryItem_C.GamepadHover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_BoosterInventoryItem_C::GamepadHover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81602);

	UWBP_BoosterInventoryItem_C_GamepadHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BoosterInventoryItem.WBP_BoosterInventoryItem_C.GamepadUnhover
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_BoosterInventoryItem_C::GamepadUnhover()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81601);

	UWBP_BoosterInventoryItem_C_GamepadUnhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BoosterInventoryItem.WBP_BoosterInventoryItem_C.BndEvt__WBP_ButtonSlot_Cosmetic_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_BoosterInventoryItem_C::BndEvt__WBP_ButtonSlot_Cosmetic_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81600);

	UWBP_BoosterInventoryItem_C_BndEvt__WBP_ButtonSlot_Cosmetic_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BoosterInventoryItem.WBP_BoosterInventoryItem_C.View_SetFromItem
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		struct FAccountConsumableDetails                   ItemDetails                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_BoosterInventoryItem_C::View_SetFromItem(const struct FAccountConsumableDetails& ItemDetails)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81599);

	UWBP_BoosterInventoryItem_C_View_SetFromItem_Params params {};
	params.ItemDetails = ItemDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BoosterInventoryItem.WBP_BoosterInventoryItem_C.PlayBoostConfirmationSound
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_BoosterInventoryItem_C::PlayBoostConfirmationSound()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81598);

	UWBP_BoosterInventoryItem_C_PlayBoostConfirmationSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BoosterInventoryItem.WBP_BoosterInventoryItem_C.ExecuteUbergraph_WBP_BoosterInventoryItem
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BoosterInventoryItem_C::ExecuteUbergraph_WBP_BoosterInventoryItem(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81597);

	UWBP_BoosterInventoryItem_C_ExecuteUbergraph_WBP_BoosterInventoryItem_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
