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
//		Name   -> Function BP_GameInstance.BP_GameInstance_C.EndLoading
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_GameInstance_C::EndLoading()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(47689);

	UBP_GameInstance_C_EndLoading_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_GameInstance.BP_GameInstance_C.BeginLoading
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FString                                     mapName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_GameInstance_C::BeginLoading(const struct FString& mapName)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(47688);

	UBP_GameInstance_C_BeginLoading_Params params {};
	params.mapName = mapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GameInstance_C::ExecuteUbergraph_BP_GameInstance(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(47687);

	UBP_GameInstance_C_ExecuteUbergraph_BP_GameInstance_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
