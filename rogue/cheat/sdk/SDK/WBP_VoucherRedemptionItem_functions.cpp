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
//		Name   -> Function WBP_VoucherRedemptionItem.WBP_VoucherRedemptionItem_C.SetPanelDisplay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_VoucherRedemptionItem_C::SetPanelDisplay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80458);

	UWBP_VoucherRedemptionItem_C_SetPanelDisplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VoucherRedemptionItem.WBP_VoucherRedemptionItem_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_VoucherRedemptionItem_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80457);

	UWBP_VoucherRedemptionItem_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_VoucherRedemptionItem.WBP_VoucherRedemptionItem_C.ExecuteUbergraph_WBP_VoucherRedemptionItem
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_VoucherRedemptionItem_C::ExecuteUbergraph_WBP_VoucherRedemptionItem(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80456);

	UWBP_VoucherRedemptionItem_C_ExecuteUbergraph_WBP_VoucherRedemptionItem_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
