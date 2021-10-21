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
//		Name   -> Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ChallengeEntry_Daily_Truncated_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70919);

	UWBP_ChallengeEntry_Daily_Truncated_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.ApplyLayoutType
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		KillstreakUINew_EChallengeEntryCardState           CardState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ChallengeEntry_Daily_Truncated_C::ApplyLayoutType(KillstreakUINew_EChallengeEntryCardState CardState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70918);

	UWBP_ChallengeEntry_Daily_Truncated_C_ApplyLayoutType_Params params {};
	params.CardState = CardState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.ApplyChallengeDescription
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       DescText                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_ChallengeEntry_Daily_Truncated_C::ApplyChallengeDescription(const struct FText& DescText)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70917);

	UWBP_ChallengeEntry_Daily_Truncated_C_ApplyChallengeDescription_Params params {};
	params.DescText = DescText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.ApplyChallengeProgress
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ProgressTotal                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ChallengeEntry_Daily_Truncated_C::ApplyChallengeProgress(int Progress, int ProgressTotal)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70916);

	UWBP_ChallengeEntry_Daily_Truncated_C_ApplyChallengeProgress_Params params {};
	params.Progress = Progress;
	params.ProgressTotal = ProgressTotal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.ApplyRerollAvailable
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               CanReroll                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ChallengeEntry_Daily_Truncated_C::ApplyRerollAvailable(bool CanReroll)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70915);

	UWBP_ChallengeEntry_Daily_Truncated_C_ApplyRerollAvailable_Params params {};
	params.CanReroll = CanReroll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.DisplayRewardItems
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		TArray<struct FTierRewardItemData>                 RewardItems                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UWBP_ChallengeEntry_Daily_Truncated_C::DisplayRewardItems(TArray<struct FTierRewardItemData> RewardItems)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70914);

	UWBP_ChallengeEntry_Daily_Truncated_C_DisplayRewardItems_Params params {};
	params.RewardItems = RewardItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ChallengeEntry_Daily_Truncated_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70913);

	UWBP_ChallengeEntry_Daily_Truncated_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ChallengeEntry_Daily_Truncated_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70912);

	UWBP_ChallengeEntry_Daily_Truncated_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_ChallengeEntry_Daily_Truncated_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70911);

	UWBP_ChallengeEntry_Daily_Truncated_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.ExecuteUbergraph_WBP_ChallengeEntry_Daily_Truncated
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ChallengeEntry_Daily_Truncated_C::ExecuteUbergraph_WBP_ChallengeEntry_Daily_Truncated(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70910);

	UWBP_ChallengeEntry_Daily_Truncated_C_ExecuteUbergraph_WBP_ChallengeEntry_Daily_Truncated_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ChallengeEntry_Daily_Truncated.WBP_ChallengeEntry_Daily_Truncated_C.OnClick__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_ChallengeEntry_Daily_Truncated_C::OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(70909);

	UWBP_ChallengeEntry_Daily_Truncated_C_OnClick__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
