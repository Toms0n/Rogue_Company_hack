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
//		Name   -> Function WBP_ProgressionTally.WBP_ProgressionTally_C.SetPlayerProgression
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayerProgression                          PlayerProgression                                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_ProgressionTally_C::SetPlayerProgression(const struct FPlayerProgression& PlayerProgression)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(227414);

	UWBP_ProgressionTally_C_SetPlayerProgression_Params params {};
	params.PlayerProgression = PlayerProgression;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionTally.WBP_ProgressionTally_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ProgressionTally_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(227413);

	UWBP_ProgressionTally_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionTally.WBP_ProgressionTally_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_ProgressionTally_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84501);

	UWBP_ProgressionTally_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionTally.WBP_ProgressionTally_C.ExecuteUbergraph_WBP_ProgressionTally
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ProgressionTally_C::ExecuteUbergraph_WBP_ProgressionTally(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84500);

	UWBP_ProgressionTally_C_ExecuteUbergraph_WBP_ProgressionTally_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
