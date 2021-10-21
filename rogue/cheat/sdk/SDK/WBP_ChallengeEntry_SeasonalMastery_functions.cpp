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
//		Name   -> Function WBP_ChallengeEntry_SeasonalMastery.WBP_ChallengeEntry_SeasonalMastery_C.SetDisplayedActivity
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSActivityInstance*                         ActivityInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ChallengeEntry_SeasonalMastery_C::SetDisplayedActivity(class UKSActivityInstance* ActivityInstance)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70494);

	UWBP_ChallengeEntry_SeasonalMastery_C_SetDisplayedActivity_Params params {};
	params.ActivityInstance = ActivityInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_SeasonalMastery.WBP_ChallengeEntry_SeasonalMastery_C.SetVisualState
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsComplete                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ChallengeEntry_SeasonalMastery_C::SetVisualState(bool IsComplete)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70493);

	UWBP_ChallengeEntry_SeasonalMastery_C_SetVisualState_Params params {};
	params.IsComplete = IsComplete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_SeasonalMastery.WBP_ChallengeEntry_SeasonalMastery_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ChallengeEntry_SeasonalMastery_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70492);

	UWBP_ChallengeEntry_SeasonalMastery_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_SeasonalMastery.WBP_ChallengeEntry_SeasonalMastery_C.RefreshFromMasteryActivity
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_ChallengeEntry_SeasonalMastery_C::RefreshFromMasteryActivity()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70491);

	UWBP_ChallengeEntry_SeasonalMastery_C_RefreshFromMasteryActivity_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_SeasonalMastery.WBP_ChallengeEntry_SeasonalMastery_C.ExecuteUbergraph_WBP_ChallengeEntry_SeasonalMastery
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ChallengeEntry_SeasonalMastery_C::ExecuteUbergraph_WBP_ChallengeEntry_SeasonalMastery(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70490);

	UWBP_ChallengeEntry_SeasonalMastery_C_ExecuteUbergraph_WBP_ChallengeEntry_SeasonalMastery_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
