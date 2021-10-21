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
//		Name   -> Function WBP_LerpingNumberWidget.WBP_LerpingNumberWidget_C.UpdateTextDisplay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              NewTargetValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LerpingNumberWidget_C::UpdateTextDisplay(float NewTargetValue)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61782);

	UWBP_LerpingNumberWidget_C_UpdateTextDisplay_Params params {};
	params.NewTargetValue = NewTargetValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LerpingNumberWidget.WBP_LerpingNumberWidget_C.UpdateCashBalance
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CashValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LerpingNumberWidget_C::UpdateCashBalance(int CashValue)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61781);

	UWBP_LerpingNumberWidget_C_UpdateCashBalance_Params params {};
	params.CashValue = CashValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LerpingNumberWidget.WBP_LerpingNumberWidget_C.DisplayForValue
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LerpingNumberWidget_C::DisplayForValue(float Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61780);

	UWBP_LerpingNumberWidget_C_DisplayForValue_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_LerpingNumberWidget.WBP_LerpingNumberWidget_C.ExecuteUbergraph_WBP_LerpingNumberWidget
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LerpingNumberWidget_C::ExecuteUbergraph_WBP_LerpingNumberWidget(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61779);

	UWBP_LerpingNumberWidget_C_ExecuteUbergraph_WBP_LerpingNumberWidget_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
