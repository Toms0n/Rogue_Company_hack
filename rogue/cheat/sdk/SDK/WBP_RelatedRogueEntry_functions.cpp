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
//		Name   -> Function WBP_RelatedRogueEntry.WBP_RelatedRogueEntry_C.DisplayJob
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UKSJobItem*                                  JobItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RelatedRogueEntry_C::DisplayJob(class UKSJobItem* JobItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72199);

	UWBP_RelatedRogueEntry_C_DisplayJob_Params params {};
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RelatedRogueEntry.WBP_RelatedRogueEntry_C.DisplayLocked
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bLocked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RelatedRogueEntry_C::DisplayLocked(bool bLocked)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72198);

	UWBP_RelatedRogueEntry_C_DisplayLocked_Params params {};
	params.bLocked = bLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RelatedRogueEntry.WBP_RelatedRogueEntry_C.ExecuteUbergraph_WBP_RelatedRogueEntry
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RelatedRogueEntry_C::ExecuteUbergraph_WBP_RelatedRogueEntry(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72197);

	UWBP_RelatedRogueEntry_C_ExecuteUbergraph_WBP_RelatedRogueEntry_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
