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
//		Name   -> Function WBP_RoundRecap_Entry.WBP_RoundRecap_Entry_C.SetVisualState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RoundRecap_Entry_C::SetVisualState()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71138);

	UWBP_RoundRecap_Entry_C_SetVisualState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RoundRecap_Entry.WBP_RoundRecap_Entry_C.RoundDataSet
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RoundRecap_Entry_C::RoundDataSet()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71137);

	UWBP_RoundRecap_Entry_C_RoundDataSet_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RoundRecap_Entry.WBP_RoundRecap_Entry_C.ExecuteUbergraph_WBP_RoundRecap_Entry
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RoundRecap_Entry_C::ExecuteUbergraph_WBP_RoundRecap_Entry(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(71136);

	UWBP_RoundRecap_Entry_C_ExecuteUbergraph_WBP_RoundRecap_Entry_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
