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
//		Name   -> Function WBP_Challenge_Rewards_Badge.WBP_Challenge_Rewards_Badge_C.SetCompletedState
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsCompleted                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Challenge_Rewards_Badge_C::SetCompletedState(bool IsCompleted)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70996);

	UWBP_Challenge_Rewards_Badge_C_SetCompletedState_Params params {};
	params.IsCompleted = IsCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Rewards_Badge.WBP_Challenge_Rewards_Badge_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Challenge_Rewards_Badge_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70995);

	UWBP_Challenge_Rewards_Badge_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Challenge_Rewards_Badge.WBP_Challenge_Rewards_Badge_C.ExecuteUbergraph_WBP_Challenge_Rewards_Badge
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Challenge_Rewards_Badge_C::ExecuteUbergraph_WBP_Challenge_Rewards_Badge(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70994);

	UWBP_Challenge_Rewards_Badge_C_ExecuteUbergraph_WBP_Challenge_Rewards_Badge_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
