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
//		Name   -> Function WBP_ChallengeEntry_Weekly.WBP_ChallengeEntry_Weekly_C.SetDisplayedChallenge
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSActivityInstance*                         Activity_Instance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ChallengeEntry_Weekly_C::SetDisplayedChallenge(class UKSActivityInstance* Activity_Instance)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70446);

	UWBP_ChallengeEntry_Weekly_C_SetDisplayedChallenge_Params params {};
	params.Activity_Instance = Activity_Instance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Weekly.WBP_ChallengeEntry_Weekly_C.SetVisualState
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsComplete                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ChallengeEntry_Weekly_C::SetVisualState(bool IsComplete)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70445);

	UWBP_ChallengeEntry_Weekly_C_SetVisualState_Params params {};
	params.IsComplete = IsComplete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Weekly.WBP_ChallengeEntry_Weekly_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ChallengeEntry_Weekly_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70444);

	UWBP_ChallengeEntry_Weekly_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Weekly.WBP_ChallengeEntry_Weekly_C.ExecuteUbergraph_WBP_ChallengeEntry_Weekly
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ChallengeEntry_Weekly_C::ExecuteUbergraph_WBP_ChallengeEntry_Weekly(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70443);

	UWBP_ChallengeEntry_Weekly_C_ExecuteUbergraph_WBP_ChallengeEntry_Weekly_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
