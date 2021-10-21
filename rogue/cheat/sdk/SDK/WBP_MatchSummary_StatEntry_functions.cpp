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
//		Name   -> Function WBP_MatchSummary_StatEntry.WBP_MatchSummary_StatEntry_C.SetStatText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       StatName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       StatValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_MatchSummary_StatEntry_C::SetStatText(const struct FText& StatName, const struct FText& StatValue)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59671);

	UWBP_MatchSummary_StatEntry_C_SetStatText_Params params {};
	params.StatName = StatName;
	params.StatValue = StatValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_MatchSummary_StatEntry.WBP_MatchSummary_StatEntry_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_MatchSummary_StatEntry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59670);

	UWBP_MatchSummary_StatEntry_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_MatchSummary_StatEntry.WBP_MatchSummary_StatEntry_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_MatchSummary_StatEntry_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59669);

	UWBP_MatchSummary_StatEntry_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_MatchSummary_StatEntry.WBP_MatchSummary_StatEntry_C.ExecuteUbergraph_WBP_MatchSummary_StatEntry
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MatchSummary_StatEntry_C::ExecuteUbergraph_WBP_MatchSummary_StatEntry(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59668);

	UWBP_MatchSummary_StatEntry_C_ExecuteUbergraph_WBP_MatchSummary_StatEntry_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
