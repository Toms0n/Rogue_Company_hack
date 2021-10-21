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
//		Name   -> Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.SetProgressColorByTier
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<E_RankedTiers_E_RankedTiers>           RankedTier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ranked_level_tracker_C::SetProgressColorByTier(TEnumAsByte<E_RankedTiers_E_RankedTiers> RankedTier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61807);

	UWBP_ranked_level_tracker_C_SetProgressColorByTier_Params params {};
	params.RankedTier = RankedTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.SetCurrentLevel
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Tier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ranked_level_tracker_C::SetCurrentLevel(int Tier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61806);

	UWBP_ranked_level_tracker_C_SetCurrentLevel_Params params {};
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.OnLerpUpdate
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              CurrentLerpPercantage                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ranked_level_tracker_C::OnLerpUpdate(float CurrentLerpPercantage)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61805);

	UWBP_ranked_level_tracker_C_OnLerpUpdate_Params params {};
	params.CurrentLerpPercantage = CurrentLerpPercantage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.OnLevelDown
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ranked_level_tracker_C::OnLevelDown(int NewLevel)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61804);

	UWBP_ranked_level_tracker_C_OnLevelDown_Params params {};
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.OnLevelUp
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ranked_level_tracker_C::OnLevelUp(int NewLevel)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61803);

	UWBP_ranked_level_tracker_C_OnLevelUp_Params params {};
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.UpdateLevelDisplay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_ranked_level_tracker_C::UpdateLevelDisplay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61802);

	UWBP_ranked_level_tracker_C_UpdateLevelDisplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.GetXPRequiredForLevel
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UWBP_ranked_level_tracker_C::GetXPRequiredForLevel()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61801);

	UWBP_ranked_level_tracker_C_GetXPRequiredForLevel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.GetNextLevel
//		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UWBP_ranked_level_tracker_C::GetNextLevel()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61800);

	UWBP_ranked_level_tracker_C_GetNextLevel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.GetCurrentLevel
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UWBP_ranked_level_tracker_C::GetCurrentLevel()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61799);

	UWBP_ranked_level_tracker_C_GetCurrentLevel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.ProcessPlayerProgression
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayerProgression                          PlayerProgression                                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_ranked_level_tracker_C::ProcessPlayerProgression(const struct FPlayerProgression& PlayerProgression)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61798);

	UWBP_ranked_level_tracker_C_ProcessPlayerProgression_Params params {};
	params.PlayerProgression = PlayerProgression;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ranked_level_tracker_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61797);

	UWBP_ranked_level_tracker_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_ranked_level_tracker_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61796);

	UWBP_ranked_level_tracker_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.ExecuteUbergraph_WBP_ranked_level_tracker
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ranked_level_tracker_C::ExecuteUbergraph_WBP_ranked_level_tracker(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61795);

	UWBP_ranked_level_tracker_C_ExecuteUbergraph_WBP_ranked_level_tracker_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.OnLevelDownEvent__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ranked_level_tracker_C::OnLevelDownEvent__DelegateSignature(int NewLevel)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61794);

	UWBP_ranked_level_tracker_C_OnLevelDownEvent__DelegateSignature_Params params {};
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ranked_level_tracker.WBP_ranked_level_tracker_C.OnLevelUpEvent__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ranked_level_tracker_C::OnLevelUpEvent__DelegateSignature(int NewLevel)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(61793);

	UWBP_ranked_level_tracker_C_OnLevelUpEvent__DelegateSignature_Params params {};
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
