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
//		Name   -> Function WBP_StoreItemRotator.WBP_StoreItemRotator_C.SetPercentTimeRemaining
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              PercentRemaining                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_StoreItemRotator_C::SetPercentTimeRemaining(float PercentRemaining)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79767);

	UWBP_StoreItemRotator_C_SetPercentTimeRemaining_Params params {};
	params.PercentRemaining = PercentRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreItemRotator.WBP_StoreItemRotator_C.SetRotatorSize
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NumElements                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_StoreItemRotator_C::SetRotatorSize(int NumElements)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79766);

	UWBP_StoreItemRotator_C_SetRotatorSize_Params params {};
	params.NumElements = NumElements;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_StoreItemRotator.WBP_StoreItemRotator_C.SetActiveIndex
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_StoreItemRotator_C::SetActiveIndex(int Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(79765);

	UWBP_StoreItemRotator_C_SetActiveIndex_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
