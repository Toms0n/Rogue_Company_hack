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
//		Name   -> Function WBP_ActiveBoosterEntry.WBP_ActiveBoosterEntry_C.SetDisplayType
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_ActiveBoosterEntry_C::SetDisplayType()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56979);

	UWBP_ActiveBoosterEntry_C_SetDisplayType_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ActiveBoosterEntry.WBP_ActiveBoosterEntry_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ActiveBoosterEntry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56978);

	UWBP_ActiveBoosterEntry_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ActiveBoosterEntry.WBP_ActiveBoosterEntry_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_ActiveBoosterEntry_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56977);

	UWBP_ActiveBoosterEntry_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ActiveBoosterEntry.WBP_ActiveBoosterEntry_C.Set Item Properties
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FAccountConsumableDetails                   Item_Details                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_ActiveBoosterEntry_C::Set_Item_Properties(const struct FAccountConsumableDetails& Item_Details)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56976);

	UWBP_ActiveBoosterEntry_C_Set_Item_Properties_Params params {};
	params.Item_Details = Item_Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ActiveBoosterEntry.WBP_ActiveBoosterEntry_C.ExecuteUbergraph_WBP_ActiveBoosterEntry
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ActiveBoosterEntry_C::ExecuteUbergraph_WBP_ActiveBoosterEntry(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(56975);

	UWBP_ActiveBoosterEntry_C_ExecuteUbergraph_WBP_ActiveBoosterEntry_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
