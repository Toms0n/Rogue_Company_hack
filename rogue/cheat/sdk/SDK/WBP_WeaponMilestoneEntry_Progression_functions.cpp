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
//		Name   -> Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.SequenceEvent__ENTRYPOINTWBP_WeaponMilestoneEntry_Progression_2
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMilestoneEntry_Progression_C::SequenceEvent__ENTRYPOINTWBP_WeaponMilestoneEntry_Progression_2()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75614);

	UWBP_WeaponMilestoneEntry_Progression_C_SequenceEvent__ENTRYPOINTWBP_WeaponMilestoneEntry_Progression_2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.SequenceEvent__ENTRYPOINTWBP_WeaponMilestoneEntry_Progression_1
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMilestoneEntry_Progression_C::SequenceEvent__ENTRYPOINTWBP_WeaponMilestoneEntry_Progression_1()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75613);

	UWBP_WeaponMilestoneEntry_Progression_C_SequenceEvent__ENTRYPOINTWBP_WeaponMilestoneEntry_Progression_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.SetRewardQuantityTextFromTier
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FActivityTier                               ActivityTier                                               (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_WeaponMilestoneEntry_Progression_C::SetRewardQuantityTextFromTier(const struct FActivityTier& ActivityTier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75612);

	UWBP_WeaponMilestoneEntry_Progression_C_SetRewardQuantityTextFromTier_Params params {};
	params.ActivityTier = ActivityTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.GetNextDeltaStartCount
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMilestoneEntry_Progression_C::GetNextDeltaStartCount(int* Count)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75611);

	UWBP_WeaponMilestoneEntry_Progression_C_GetNextDeltaStartCount_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.IsCountInLastAnimTier
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                InCount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_WeaponMilestoneEntry_Progression_C::IsCountInLastAnimTier(int InCount)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75610);

	UWBP_WeaponMilestoneEntry_Progression_C_IsCountInLastAnimTier_Params params {};
	params.InCount = InCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.DisplayFullTier
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CountInTier                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMilestoneEntry_Progression_C::DisplayFullTier(int CountInTier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75609);

	UWBP_WeaponMilestoneEntry_Progression_C_DisplayFullTier_Params params {};
	params.CountInTier = CountInTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.DisplayAnimatedProgressCount
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMilestoneEntry_Progression_C::DisplayAnimatedProgressCount(float Count)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75608);

	UWBP_WeaponMilestoneEntry_Progression_C_DisplayAnimatedProgressCount_Params params {};
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.StartAnimSequence
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMilestoneEntry_Progression_C::StartAnimSequence()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75607);

	UWBP_WeaponMilestoneEntry_Progression_C_StartAnimSequence_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.Initialize Animation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKSMilestoneCompletedSummaryEntry           ProgressSummary                                            (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_WeaponMilestoneEntry_Progression_C::Initialize_Animation(const struct FKSMilestoneCompletedSummaryEntry& ProgressSummary)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75606);

	UWBP_WeaponMilestoneEntry_Progression_C_Initialize_Animation_Params params {};
	params.ProgressSummary = ProgressSummary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.FindWeaponXpReward
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FActivityTier                               ActivityTier                                               (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FTierRewardItemData                         WeaponXpRewardItem                                         (Parm, OutParm, NoDestructor)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_WeaponMilestoneEntry_Progression_C::FindWeaponXpReward(const struct FActivityTier& ActivityTier, struct FTierRewardItemData* WeaponXpRewardItem, bool* Success)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75605);

	UWBP_WeaponMilestoneEntry_Progression_C_FindWeaponXpReward_Params params {};
	params.ActivityTier = ActivityTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WeaponXpRewardItem != nullptr)
		*WeaponXpRewardItem = params.WeaponXpRewardItem;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.SetVisualState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EChallengeEntry_Card_State_EChallengeEntry_Card_State> Card_State                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMilestoneEntry_Progression_C::SetVisualState(TEnumAsByte<EChallengeEntry_Card_State_EChallengeEntry_Card_State> Card_State)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75604);

	UWBP_WeaponMilestoneEntry_Progression_C_SetVisualState_Params params {};
	params.Card_State = Card_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.SetBaseMilestoneDisplay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSActivityInstance*                         ActivityInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMilestoneEntry_Progression_C::SetBaseMilestoneDisplay(class UKSActivityInstance* ActivityInstance)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75603);

	UWBP_WeaponMilestoneEntry_Progression_C_SetBaseMilestoneDisplay_Params params {};
	params.ActivityInstance = ActivityInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.InitializeTickAnimations
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_WeaponMilestoneEntry_Progression_C::InitializeTickAnimations()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75602);

	UWBP_WeaponMilestoneEntry_Progression_C_InitializeTickAnimations_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.ProgressLerp_Update
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ElapsedTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ElapsedAlpha                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMilestoneEntry_Progression_C::ProgressLerp_Update(float ElapsedTime, float ElapsedAlpha)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75601);

	UWBP_WeaponMilestoneEntry_Progression_C_ProgressLerp_Update_Params params {};
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.ProgressLerp_Finished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMilestoneEntry_Progression_C::ProgressLerp_Finished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75600);

	UWBP_WeaponMilestoneEntry_Progression_C_ProgressLerp_Finished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.DisplayNextMilestone
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMilestoneEntry_Progression_C::DisplayNextMilestone()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75599);

	UWBP_WeaponMilestoneEntry_Progression_C_DisplayNextMilestone_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.SequenceEvent_TierRefreshSwap
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMilestoneEntry_Progression_C::SequenceEvent_TierRefreshSwap()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75598);

	UWBP_WeaponMilestoneEntry_Progression_C_SequenceEvent_TierRefreshSwap_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_WeaponMilestoneEntry_Progression_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75597);

	UWBP_WeaponMilestoneEntry_Progression_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.DisplayMilestoneActivity
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UKSActivityInstance*                         MilestoneInstance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMilestoneEntry_Progression_C::DisplayMilestoneActivity(class UKSActivityInstance* MilestoneInstance)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75596);

	UWBP_WeaponMilestoneEntry_Progression_C_DisplayMilestoneActivity_Params params {};
	params.MilestoneInstance = MilestoneInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.DisplayEmpty
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMilestoneEntry_Progression_C::DisplayEmpty()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75595);

	UWBP_WeaponMilestoneEntry_Progression_C_DisplayEmpty_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMilestoneEntry_Progression_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75594);

	UWBP_WeaponMilestoneEntry_Progression_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.OnAnimMilestoneCompleteFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMilestoneEntry_Progression_C::OnAnimMilestoneCompleteFinished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75593);

	UWBP_WeaponMilestoneEntry_Progression_C_OnAnimMilestoneCompleteFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.OnAnimTierRefreshFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMilestoneEntry_Progression_C::OnAnimTierRefreshFinished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75592);

	UWBP_WeaponMilestoneEntry_Progression_C_OnAnimTierRefreshFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.OnAnimSlideUpFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMilestoneEntry_Progression_C::OnAnimSlideUpFinished()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75591);

	UWBP_WeaponMilestoneEntry_Progression_C_OnAnimSlideUpFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.ResumeLevelUpAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMilestoneEntry_Progression_C::ResumeLevelUpAnim()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75590);

	UWBP_WeaponMilestoneEntry_Progression_C_ResumeLevelUpAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.UnblockSequence
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMilestoneEntry_Progression_C::UnblockSequence()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75589);

	UWBP_WeaponMilestoneEntry_Progression_C_UnblockSequence_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.ExecuteUbergraph_WBP_WeaponMilestoneEntry_Progression
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMilestoneEntry_Progression_C::ExecuteUbergraph_WBP_WeaponMilestoneEntry_Progression(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75588);

	UWBP_WeaponMilestoneEntry_Progression_C_ExecuteUbergraph_WBP_WeaponMilestoneEntry_Progression_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.OnAnimSequenceFinished__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMilestoneEntry_Progression_C::OnAnimSequenceFinished__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75587);

	UWBP_WeaponMilestoneEntry_Progression_C_OnAnimSequenceFinished__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry_Progression.WBP_WeaponMilestoneEntry_Progression_C.OnMilestoneCompleted__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                RewardCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMilestoneEntry_Progression_C::OnMilestoneCompleted__DelegateSignature(int RewardCount)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75586);

	UWBP_WeaponMilestoneEntry_Progression_C_OnMilestoneCompleted__DelegateSignature_Params params {};
	params.RewardCount = RewardCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
