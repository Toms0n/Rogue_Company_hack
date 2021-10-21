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
//		Name   -> Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.SetRankedVisualDisplay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<E_RankedTiers_E_RankedTiers>           RankTier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ProgressionCardSlot_C::SetRankedVisualDisplay(TEnumAsByte<E_RankedTiers_E_RankedTiers> RankTier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84383);

	UWBP_ProgressionCardSlot_C_SetRankedVisualDisplay_Params params {};
	params.RankTier = RankTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.SetInitialState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_ProgressionCardSlot_C::SetInitialState()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84382);

	UWBP_ProgressionCardSlot_C_SetInitialState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_ProgressionCardSlot_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84381);

	UWBP_ProgressionCardSlot_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.AnimateIn
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ProgressionCardSlot_C::AnimateIn(float Delay)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84380);

	UWBP_ProgressionCardSlot_C_AnimateIn_Params params {};
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ProgressionCardSlot_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84379);

	UWBP_ProgressionCardSlot_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.OnMercMasteryLevelUp
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSActivityInstance*                         ActivityInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FActivityTier                               NewTier                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_ProgressionCardSlot_C::OnMercMasteryLevelUp(class UKSActivityInstance* ActivityInstance, const struct FActivityTier& NewTier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84378);

	UWBP_ProgressionCardSlot_C_OnMercMasteryLevelUp_Params params {};
	params.ActivityInstance = ActivityInstance;
	params.NewTier = NewTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.OnRankTierSet
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<E_RankedTiers_E_RankedTiers>           RankTier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ProgressionCardSlot_C::OnRankTierSet(TEnumAsByte<E_RankedTiers_E_RankedTiers> RankTier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84377);

	UWBP_ProgressionCardSlot_C_OnRankTierSet_Params params {};
	params.RankTier = RankTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.StartAnimTimerComplete
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_ProgressionCardSlot_C::StartAnimTimerComplete()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84376);

	UWBP_ProgressionCardSlot_C_StartAnimTimerComplete_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.ExecuteUbergraph_WBP_ProgressionCardSlot
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ProgressionCardSlot_C::ExecuteUbergraph_WBP_ProgressionCardSlot(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84375);

	UWBP_ProgressionCardSlot_C_ExecuteUbergraph_WBP_ProgressionCardSlot_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.StartAnimation__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CurrencyEarned                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ProgressionCardSlot_C::StartAnimation__DelegateSignature(int CurrencyEarned)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84374);

	UWBP_ProgressionCardSlot_C_StartAnimation__DelegateSignature_Params params {};
	params.CurrencyEarned = CurrencyEarned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
