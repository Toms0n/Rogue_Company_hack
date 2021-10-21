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
//		Name   -> Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.GetName
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UWBP_PlayerProfileScreen_AwardEntry_C::GetName()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87745);

	UWBP_PlayerProfileScreen_AwardEntry_C_GetName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.GetCompletionTime
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       CompletionTimer                                            (Parm, OutParm)
void UWBP_PlayerProfileScreen_AwardEntry_C::GetCompletionTime(struct FText* CompletionTimer)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87744);

	UWBP_PlayerProfileScreen_AwardEntry_C_GetCompletionTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CompletionTimer != nullptr)
		*CompletionTimer = params.CompletionTimer;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.UpdateTitle
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWBP_PlayerProfileScreen_AwardEntry_C::UpdateTitle()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87743);

	UWBP_PlayerProfileScreen_AwardEntry_C_UpdateTitle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.GetProgressPercentage
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Percentage                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ShowBar                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerProfileScreen_AwardEntry_C::GetProgressPercentage(float* Percentage, bool* ShowBar)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87742);

	UWBP_PlayerProfileScreen_AwardEntry_C_GetProgressPercentage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Percentage != nullptr)
		*Percentage = params.Percentage;
	if (ShowBar != nullptr)
		*ShowBar = params.ShowBar;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.GetProgressDisplayText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       Text                                                       (Parm, OutParm)
void UWBP_PlayerProfileScreen_AwardEntry_C::GetProgressDisplayText(struct FText* Text)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87741);

	UWBP_PlayerProfileScreen_AwardEntry_C_GetProgressDisplayText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.IsFinished
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               IsFinished                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerProfileScreen_AwardEntry_C::IsFinished(bool* IsFinished)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87740);

	UWBP_PlayerProfileScreen_AwardEntry_C_IsFinished_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsFinished != nullptr)
		*IsFinished = params.IsFinished;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.GetActiveTier
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FActivityTierStructure                      ActivityTier                                               (Parm, OutParm)
//		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerProfileScreen_AwardEntry_C::GetActiveTier(struct FActivityTierStructure* ActivityTier, bool* IsValid)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87739);

	UWBP_PlayerProfileScreen_AwardEntry_C_GetActiveTier_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActivityTier != nullptr)
		*ActivityTier = params.ActivityTier;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.UpdateDescription
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PlayerProfileScreen_AwardEntry_C::UpdateDescription()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87738);

	UWBP_PlayerProfileScreen_AwardEntry_C_UpdateDescription_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.GetRewardInfo
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               HasReward                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FText                                       ItemName                                                   (Parm, OutParm)
//		struct FText                                       ItemDescription                                            (Parm, OutParm)
//		class UKSItem*                                     CosmeticItem                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerProfileScreen_AwardEntry_C::GetRewardInfo(bool* HasReward, struct FText* ItemName, struct FText* ItemDescription, class UKSItem** CosmeticItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87737);

	UWBP_PlayerProfileScreen_AwardEntry_C_GetRewardInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasReward != nullptr)
		*HasReward = params.HasReward;
	if (ItemName != nullptr)
		*ItemName = params.ItemName;
	if (ItemDescription != nullptr)
		*ItemDescription = params.ItemDescription;
	if (CosmeticItem != nullptr)
		*CosmeticItem = params.CosmeticItem;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.UpdateBar
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              BarPerc                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerProfileScreen_AwardEntry_C::UpdateBar(float BarPerc, bool Visible)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87736);

	UWBP_PlayerProfileScreen_AwardEntry_C_UpdateBar_Params params {};
	params.BarPerc = BarPerc;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.ResetState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PlayerProfileScreen_AwardEntry_C::ResetState()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87735);

	UWBP_PlayerProfileScreen_AwardEntry_C_ResetState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.PlayShowAnimInternal
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
void UWBP_PlayerProfileScreen_AwardEntry_C::PlayShowAnimInternal()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87734);

	UWBP_PlayerProfileScreen_AwardEntry_C_PlayShowAnimInternal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.PlayShowAnim
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerProfileScreen_AwardEntry_C::PlayShowAnim(float Delay)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87733);

	UWBP_PlayerProfileScreen_AwardEntry_C_PlayShowAnim_Params params {};
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.UpdateValue
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PlayerProfileScreen_AwardEntry_C::UpdateValue()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87732);

	UWBP_PlayerProfileScreen_AwardEntry_C_UpdateValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.UpdateIcon
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PlayerProfileScreen_AwardEntry_C::UpdateIcon()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87731);

	UWBP_PlayerProfileScreen_AwardEntry_C_UpdateIcon_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.SetActivityInstance
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayerAwardsPanelData                      Instance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_PlayerProfileScreen_AwardEntry_C::SetActivityInstance(const struct FPlayerAwardsPanelData& Instance)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87730);

	UWBP_PlayerProfileScreen_AwardEntry_C_SetActivityInstance_Params params {};
	params.Instance = Instance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_PlayerProfileScreen_AwardEntry_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87729);

	UWBP_PlayerProfileScreen_AwardEntry_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerProfileScreen_AwardEntry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87728);

	UWBP_PlayerProfileScreen_AwardEntry_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerProfileScreen_AwardEntry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87727);

	UWBP_PlayerProfileScreen_AwardEntry_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_PlayerProfileScreen_AwardEntry_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87726);

	UWBP_PlayerProfileScreen_AwardEntry_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_PlayerProfileScreen_AwardEntry_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87725);

	UWBP_PlayerProfileScreen_AwardEntry_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.ExecuteUbergraph_WBP_PlayerProfileScreen_AwardEntry
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerProfileScreen_AwardEntry_C::ExecuteUbergraph_WBP_PlayerProfileScreen_AwardEntry(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87724);

	UWBP_PlayerProfileScreen_AwardEntry_C_ExecuteUbergraph_WBP_PlayerProfileScreen_AwardEntry_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
