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
//		Name   -> Function WBP_StoreDiscountTag.WBP_StoreDiscountTag_C.SetSaleMessage
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_StoreDiscountTag_C::SetSaleMessage()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72086);

	UWBP_StoreDiscountTag_C_SetSaleMessage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreDiscountTag.WBP_StoreDiscountTag_C.SetDiscountPercentage
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Percentage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_StoreDiscountTag_C::SetDiscountPercentage(int Percentage)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72085);

	UWBP_StoreDiscountTag_C_SetDiscountPercentage_Params params {};
	params.Percentage = Percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
