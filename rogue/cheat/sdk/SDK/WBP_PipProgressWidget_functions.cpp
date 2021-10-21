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
//		Name   -> Function WBP_PipProgressWidget.WBP_PipProgressWidget_C.SetPipsState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CompletedPips                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                TotalPips                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PipProgressWidget_C::SetPipsState(int CompletedPips, int TotalPips)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61092);

	UWBP_PipProgressWidget_C_SetPipsState_Params params {};
	params.CompletedPips = CompletedPips;
	params.TotalPips = TotalPips;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PipProgressWidget.WBP_PipProgressWidget_C.GetPips
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UWBP_PipProgressEntry_C*>             PipEntries                                                 (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_PipProgressWidget_C::GetPips(TArray<class UWBP_PipProgressEntry_C*>* PipEntries)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61091);

	UWBP_PipProgressWidget_C_GetPips_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PipEntries != nullptr)
		*PipEntries = params.PipEntries;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PipProgressWidget.WBP_PipProgressWidget_C.SetPipColors
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                BaseColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                FillColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PipProgressWidget_C::SetPipColors(const struct FLinearColor& BaseColor, const struct FLinearColor& FillColor)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61090);

	UWBP_PipProgressWidget_C_SetPipColors_Params params {};
	params.BaseColor = BaseColor;
	params.FillColor = FillColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
