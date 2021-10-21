﻿// Name: roguecompany, Version: 425

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
//		Name   -> Function WBP_CosmeticSlotNavTab.WBP_CosmeticSlotNavTab_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_CosmeticSlotNavTab_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60791);

	UWBP_CosmeticSlotNavTab_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticSlotNavTab.WBP_CosmeticSlotNavTab_C.ExecuteUbergraph_WBP_CosmeticSlotNavTab
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CosmeticSlotNavTab_C::ExecuteUbergraph_WBP_CosmeticSlotNavTab(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(60790);

	UWBP_CosmeticSlotNavTab_C_ExecuteUbergraph_WBP_CosmeticSlotNavTab_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
