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
//		Name   -> Function WBP_CosmeticItemTags.WBP_CosmeticItemTags_C.SetJustification
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_CosmeticItemTags_C::SetJustification()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59811);

	UWBP_CosmeticItemTags_C_SetJustification_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItemTags.WBP_CosmeticItemTags_C.ClearTags
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_CosmeticItemTags_C::ClearTags()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59810);

	UWBP_CosmeticItemTags_C_ClearTags_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItemTags.WBP_CosmeticItemTags_C.AddCosmeticTags
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGameplayTagContainer                       InTags                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               TagsFound                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CosmeticItemTags_C::AddCosmeticTags(const struct FGameplayTagContainer& InTags, bool* TagsFound)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59809);

	UWBP_CosmeticItemTags_C_AddCosmeticTags_Params params {};
	params.InTags = InTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TagsFound != nullptr)
		*TagsFound = params.TagsFound;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItemTags.WBP_CosmeticItemTags_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CosmeticItemTags_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59808);

	UWBP_CosmeticItemTags_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItemTags.WBP_CosmeticItemTags_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_CosmeticItemTags_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59807);

	UWBP_CosmeticItemTags_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_CosmeticItemTags.WBP_CosmeticItemTags_C.ExecuteUbergraph_WBP_CosmeticItemTags
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CosmeticItemTags_C::ExecuteUbergraph_WBP_CosmeticItemTags(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(59806);

	UWBP_CosmeticItemTags_C_ExecuteUbergraph_WBP_CosmeticItemTags_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
