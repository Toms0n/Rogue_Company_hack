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
//		Name   -> Function WBP_ChallengeView_DailyContracts.WBP_ChallengeView_DailyContracts_C.GetDisplayingChallenges
//		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UKSActivityInstance*>                 ReturnValue                                                (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
TArray<class UKSActivityInstance*> UWBP_ChallengeView_DailyContracts_C::GetDisplayingChallenges()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80379);

	UWBP_ChallengeView_DailyContracts_C_GetDisplayingChallenges_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeView_DailyContracts.WBP_ChallengeView_DailyContracts_C.Get Daily Challenge Cards
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<class UWBP_ChallengeEntry_Card_C*>          Return_Value                                               (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_ChallengeView_DailyContracts_C::Get_Daily_Challenge_Cards(TArray<class UWBP_ChallengeEntry_Card_C*>* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80378);

	UWBP_ChallengeView_DailyContracts_C_Get_Daily_Challenge_Cards_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeView_DailyContracts.WBP_ChallengeView_DailyContracts_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_ChallengeView_DailyContracts_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80377);

	UWBP_ChallengeView_DailyContracts_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeView_DailyContracts.WBP_ChallengeView_DailyContracts_C.InitializeChallengeDisplays
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_ChallengeView_DailyContracts_C::InitializeChallengeDisplays()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80376);

	UWBP_ChallengeView_DailyContracts_C_InitializeChallengeDisplays_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeView_DailyContracts.WBP_ChallengeView_DailyContracts_C.DisplayChallenge
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UKSActivityInstance*                         ActivityInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               PlayFlourish                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ChallengeView_DailyContracts_C::DisplayChallenge(int Index, class UKSActivityInstance* ActivityInstance, bool PlayFlourish)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80375);

	UWBP_ChallengeView_DailyContracts_C_DisplayChallenge_Params params {};
	params.Index = Index;
	params.ActivityInstance = ActivityInstance;
	params.PlayFlourish = PlayFlourish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeView_DailyContracts.WBP_ChallengeView_DailyContracts_C.DisplayChallengeTimeRemaining
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		int                                                TimeRemainingSeconds                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ChallengeView_DailyContracts_C::DisplayChallengeTimeRemaining(int TimeRemainingSeconds)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80374);

	UWBP_ChallengeView_DailyContracts_C_DisplayChallengeTimeRemaining_Params params {};
	params.TimeRemainingSeconds = TimeRemainingSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeView_DailyContracts.WBP_ChallengeView_DailyContracts_C.ExecuteUbergraph_WBP_ChallengeView_DailyContracts
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ChallengeView_DailyContracts_C::ExecuteUbergraph_WBP_ChallengeView_DailyContracts(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(80373);

	UWBP_ChallengeView_DailyContracts_C_ExecuteUbergraph_WBP_ChallengeView_DailyContracts_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
