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
//		Name   -> Function WBP_RankedIcon.WBP_RankedIcon_C.SetRankedTierTextByTier
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       RankedText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_RankedIcon_C::SetRankedTierTextByTier(const struct FText& RankedText)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54783);

	UWBP_RankedIcon_C_SetRankedTierTextByTier_Params params {};
	params.RankedText = RankedText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RankedIcon.WBP_RankedIcon_C.SetRankedLevel
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RankedIcon_C::SetRankedLevel(int Level)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54782);

	UWBP_RankedIcon_C_SetRankedLevel_Params params {};
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RankedIcon.WBP_RankedIcon_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RankedIcon_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54781);

	UWBP_RankedIcon_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RankedIcon.WBP_RankedIcon_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_RankedIcon_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54780);

	UWBP_RankedIcon_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RankedIcon.WBP_RankedIcon_C.ExecuteUbergraph_WBP_RankedIcon
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RankedIcon_C::ExecuteUbergraph_WBP_RankedIcon(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54779);

	UWBP_RankedIcon_C_ExecuteUbergraph_WBP_RankedIcon_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RankedIcon.WBP_RankedIcon_C.OnRankTierSet__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<E_RankedTiers_E_RankedTiers>           RankTier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RankedIcon_C::OnRankTierSet__DelegateSignature(TEnumAsByte<E_RankedTiers_E_RankedTiers> RankTier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(54778);

	UWBP_RankedIcon_C_OnRankTierSet__DelegateSignature_Params params {};
	params.RankTier = RankTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
