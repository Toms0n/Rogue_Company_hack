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
//		Name   -> Function WBP_BonusTypeEntry.WBP_BonusTypeEntry_C.DisplayEventDetails
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_BonusTypeEntry_C::DisplayEventDetails()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84505);

	UWBP_BonusTypeEntry_C_DisplayEventDetails_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BonusTypeEntry.WBP_BonusTypeEntry_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_BonusTypeEntry_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84504);

	UWBP_BonusTypeEntry_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BonusTypeEntry.WBP_BonusTypeEntry_C.ExecuteUbergraph_WBP_BonusTypeEntry
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BonusTypeEntry_C::ExecuteUbergraph_WBP_BonusTypeEntry(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84503);

	UWBP_BonusTypeEntry_C_ExecuteUbergraph_WBP_BonusTypeEntry_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
