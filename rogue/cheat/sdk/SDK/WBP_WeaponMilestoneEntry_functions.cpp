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
//		Name   -> Function WBP_WeaponMilestoneEntry.WBP_WeaponMilestoneEntry_C.FindWeaponXpReward
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FActivityTier                               ActivityTier                                               (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FTierRewardItemData                         WeaponXpRewardItem                                         (Parm, OutParm, NoDestructor)
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_WeaponMilestoneEntry_C::FindWeaponXpReward(const struct FActivityTier& ActivityTier, struct FTierRewardItemData* WeaponXpRewardItem, bool* Success)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(208562);

	UWBP_WeaponMilestoneEntry_C_FindWeaponXpReward_Params params {};
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
//		Name   -> Function WBP_WeaponMilestoneEntry.WBP_WeaponMilestoneEntry_C.SetVisualState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EChallengeEntry_Card_State_EChallengeEntry_Card_State> Card_State                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMilestoneEntry_C::SetVisualState(TEnumAsByte<EChallengeEntry_Card_State_EChallengeEntry_Card_State> Card_State)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(208561);

	UWBP_WeaponMilestoneEntry_C_SetVisualState_Params params {};
	params.Card_State = Card_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry.WBP_WeaponMilestoneEntry_C.SetDisplayedChallenge
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSActivityInstance*                         ActivityInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMilestoneEntry_C::SetDisplayedChallenge(class UKSActivityInstance* ActivityInstance)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(208560);

	UWBP_WeaponMilestoneEntry_C_SetDisplayedChallenge_Params params {};
	params.ActivityInstance = ActivityInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry.WBP_WeaponMilestoneEntry_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_WeaponMilestoneEntry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(208559);

	UWBP_WeaponMilestoneEntry_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry.WBP_WeaponMilestoneEntry_C.DisplayMilestoneActivity
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UKSActivityInstance*                         MilestoneInstance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMilestoneEntry_C::DisplayMilestoneActivity(class UKSActivityInstance* MilestoneInstance)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(208558);

	UWBP_WeaponMilestoneEntry_C_DisplayMilestoneActivity_Params params {};
	params.MilestoneInstance = MilestoneInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry.WBP_WeaponMilestoneEntry_C.DisplayEmpty
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UWBP_WeaponMilestoneEntry_C::DisplayEmpty()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(208557);

	UWBP_WeaponMilestoneEntry_C_DisplayEmpty_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry.WBP_WeaponMilestoneEntry_C.ExecuteUbergraph_WBP_WeaponMilestoneEntry
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMilestoneEntry_C::ExecuteUbergraph_WBP_WeaponMilestoneEntry(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75289);

	UWBP_WeaponMilestoneEntry_C_ExecuteUbergraph_WBP_WeaponMilestoneEntry_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_WeaponMilestoneEntry.WBP_WeaponMilestoneEntry_C.OnMilestoneSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSActivityInstance*                         MilestoneInstance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponMilestoneEntry_C::OnMilestoneSelected__DelegateSignature(class UKSActivityInstance* MilestoneInstance)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75288);

	UWBP_WeaponMilestoneEntry_C_OnMilestoneSelected__DelegateSignature_Params params {};
	params.MilestoneInstance = MilestoneInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
