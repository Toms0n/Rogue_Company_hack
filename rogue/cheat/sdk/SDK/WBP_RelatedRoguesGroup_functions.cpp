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
//		Name   -> Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.CreateAndAddEntry
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSRelatedRogueEntry*                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UKSRelatedRogueEntry* UWBP_RelatedRoguesGroup_C::CreateAndAddEntry()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72175);

	UWBP_RelatedRoguesGroup_C_CreateAndAddEntry_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.GetEntries
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UKSRelatedRogueEntry*>                ReturnValue                                                (Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash)
TArray<class UKSRelatedRogueEntry*> UWBP_RelatedRoguesGroup_C::GetEntries()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72174);

	UWBP_RelatedRoguesGroup_C_GetEntries_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RelatedRoguesGroup_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72173);

	UWBP_RelatedRoguesGroup_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_RelatedRoguesGroup_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72172);

	UWBP_RelatedRoguesGroup_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.ClearEntries
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
void UWBP_RelatedRoguesGroup_C::ClearEntries()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72171);

	UWBP_RelatedRoguesGroup_C_ClearEntries_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.DisplayIndividualWeaponLabel
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_RelatedRoguesGroup_C::DisplayIndividualWeaponLabel()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72170);

	UWBP_RelatedRoguesGroup_C_DisplayIndividualWeaponLabel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.DisplayWeaponCategoryLabel
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_RelatedRoguesGroup_C::DisplayWeaponCategoryLabel()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72169);

	UWBP_RelatedRoguesGroup_C_DisplayWeaponCategoryLabel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.DisplayNone
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_RelatedRoguesGroup_C::DisplayNone()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72168);

	UWBP_RelatedRoguesGroup_C_DisplayNone_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RelatedRoguesGroup.WBP_RelatedRoguesGroup_C.ExecuteUbergraph_WBP_RelatedRoguesGroup
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RelatedRoguesGroup_C::ExecuteUbergraph_WBP_RelatedRoguesGroup(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(72167);

	UWBP_RelatedRoguesGroup_C_ExecuteUbergraph_WBP_RelatedRoguesGroup_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
