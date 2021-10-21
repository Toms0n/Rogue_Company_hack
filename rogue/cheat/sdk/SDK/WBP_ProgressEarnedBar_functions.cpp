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
//		Name   -> Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.GetProgressionFinalTier
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Final_Tier_Index                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ProgressEarnedBar_C::GetProgressionFinalTier(int* Final_Tier_Index)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54917);

	UWBP_ProgressEarnedBar_C_GetProgressionFinalTier_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Final_Tier_Index != nullptr)
		*Final_Tier_Index = params.Final_Tier_Index;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.IsProgressionIncreasing
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ProgressEarnedBar_C::IsProgressionIncreasing(bool* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54916);

	UWBP_ProgressEarnedBar_C_IsProgressionIncreasing_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.IsOnFirstTier
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               FinalTier                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ProgressEarnedBar_C::IsOnFirstTier(bool* FinalTier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54915);

	UWBP_ProgressEarnedBar_C_IsOnFirstTier_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FinalTier != nullptr)
		*FinalTier = params.FinalTier;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnLevelDownAnimCompleted
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_ProgressEarnedBar_C::OnLevelDownAnimCompleted()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54914);

	UWBP_ProgressEarnedBar_C_OnLevelDownAnimCompleted_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.IsOnFinalTier
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               FinalTier                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ProgressEarnedBar_C::IsOnFinalTier(bool* FinalTier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54913);

	UWBP_ProgressEarnedBar_C_IsOnFinalTier_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FinalTier != nullptr)
		*FinalTier = params.FinalTier;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.Set Fill Colors
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_ProgressEarnedBar_C::Set_Fill_Colors()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54912);

	UWBP_ProgressEarnedBar_C_Set_Fill_Colors_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnLevelUpAnimCompleted
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_ProgressEarnedBar_C::OnLevelUpAnimCompleted()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54911);

	UWBP_ProgressEarnedBar_C_OnLevelUpAnimCompleted_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.InitializeAnimForTier
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Tier_Index                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ProgressEarnedBar_C::InitializeAnimForTier(int Tier_Index, bool* IsValid)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54910);

	UWBP_ProgressEarnedBar_C_InitializeAnimForTier_Params params {};
	params.Tier_Index = Tier_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.SetProgressionData
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayerProgression                          Progression                                                (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_ProgressEarnedBar_C::SetProgressionData(const struct FPlayerProgression& Progression)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54909);

	UWBP_ProgressEarnedBar_C_SetProgressionData_Params params {};
	params.Progression = Progression;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.ApplyMeterPercentages
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		float                                              BasePercent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              DeltaPercent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ProgressEarnedBar_C::ApplyMeterPercentages(float BasePercent, float DeltaPercent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54908);

	UWBP_ProgressEarnedBar_C_ApplyMeterPercentages_Params params {};
	params.BasePercent = BasePercent;
	params.DeltaPercent = DeltaPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnDeltaAnimationStarted
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_ProgressEarnedBar_C::OnDeltaAnimationStarted()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54907);

	UWBP_ProgressEarnedBar_C_OnDeltaAnimationStarted_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnDeltaAnimationTicked
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_ProgressEarnedBar_C::OnDeltaAnimationTicked()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54906);

	UWBP_ProgressEarnedBar_C_OnDeltaAnimationTicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnDeltaAnimationFinished
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               bLevelChange                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ProgressEarnedBar_C::OnDeltaAnimationFinished(bool bLevelChange)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54905);

	UWBP_ProgressEarnedBar_C_OnDeltaAnimationFinished_Params params {};
	params.bLevelChange = bLevelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_ProgressEarnedBar_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54904);

	UWBP_ProgressEarnedBar_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ProgressEarnedBar_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54903);

	UWBP_ProgressEarnedBar_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.ExecuteUbergraph_WBP_ProgressEarnedBar
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ProgressEarnedBar_C::ExecuteUbergraph_WBP_ProgressEarnedBar(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54902);

	UWBP_ProgressEarnedBar_C_ExecuteUbergraph_WBP_ProgressEarnedBar_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnLerpUpdate__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              CurrentLerpPercantage                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ProgressEarnedBar_C::OnLerpUpdate__DelegateSignature(float CurrentLerpPercantage)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54901);

	UWBP_ProgressEarnedBar_C_OnLerpUpdate__DelegateSignature_Params params {};
	params.CurrentLerpPercantage = CurrentLerpPercantage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnLevelDownEvent__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ProgressEarnedBar_C::OnLevelDownEvent__DelegateSignature(int NewLevel)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54900);

	UWBP_ProgressEarnedBar_C_OnLevelDownEvent__DelegateSignature_Params params {};
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnLevelUpEvent__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ProgressEarnedBar_C::OnLevelUpEvent__DelegateSignature(int NewLevel)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54899);

	UWBP_ProgressEarnedBar_C_OnLevelUpEvent__DelegateSignature_Params params {};
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
