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
//		Name   -> Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.SequenceEvent__ENTRYPOINTWBP_BattlePassLevelTracker_2
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_BattlePassLevelTracker_C::SequenceEvent__ENTRYPOINTWBP_BattlePassLevelTracker_2()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84555);

	UWBP_BattlePassLevelTracker_C_SequenceEvent__ENTRYPOINTWBP_BattlePassLevelTracker_2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.SequenceEvent__ENTRYPOINTWBP_BattlePassLevelTracker_1
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_BattlePassLevelTracker_C::SequenceEvent__ENTRYPOINTWBP_BattlePassLevelTracker_1()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84554);

	UWBP_BattlePassLevelTracker_C_SequenceEvent__ENTRYPOINTWBP_BattlePassLevelTracker_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.Update XP Bar
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_BattlePassLevelTracker_C::Update_XP_Bar()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84553);

	UWBP_BattlePassLevelTracker_C_Update_XP_Bar_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.Update Cosmetic Item Display
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_BattlePassLevelTracker_C::Update_Cosmetic_Item_Display()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84552);

	UWBP_BattlePassLevelTracker_C_Update_Cosmetic_Item_Display_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.Update Battle Pass Emblem
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_BattlePassLevelTracker_C::Update_Battle_Pass_Emblem()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84551);

	UWBP_BattlePassLevelTracker_C_Update_Battle_Pass_Emblem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.Get Has Premium Battle Pass
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_BattlePassLevelTracker_C::Get_Has_Premium_Battle_Pass(bool* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84550);

	UWBP_BattlePassLevelTracker_C_Get_Has_Premium_Battle_Pass_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.Get Reward Item At Tier
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                TierIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                RewardIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTierRewardItemData                         RewardStoreItemData                                        (Parm, OutParm, NoDestructor)
void UWBP_BattlePassLevelTracker_C::Get_Reward_Item_At_Tier(int TierIndex, int RewardIndex, struct FTierRewardItemData* RewardStoreItemData)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84549);

	UWBP_BattlePassLevelTracker_C_Get_Reward_Item_At_Tier_Params params {};
	params.TierIndex = TierIndex;
	params.RewardIndex = RewardIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RewardStoreItemData != nullptr)
		*RewardStoreItemData = params.RewardStoreItemData;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.DisplayFinishedState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_BattlePassLevelTracker_C::DisplayFinishedState()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84548);

	UWBP_BattlePassLevelTracker_C_DisplayFinishedState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.SetConstantTextElements
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_BattlePassLevelTracker_C::SetConstantTextElements()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84547);

	UWBP_BattlePassLevelTracker_C_SetConstantTextElements_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.TriggerLevelUpEvent
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_BattlePassLevelTracker_C::TriggerLevelUpEvent()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84546);

	UWBP_BattlePassLevelTracker_C_TriggerLevelUpEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.GetXpProgressPercentageInLevel
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              PercentProgress                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                XpNumber                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassLevelTracker_C::GetXpProgressPercentageInLevel(float* PercentProgress, int* XpNumber)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84545);

	UWBP_BattlePassLevelTracker_C_GetXpProgressPercentageInLevel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PercentProgress != nullptr)
		*PercentProgress = params.PercentProgress;
	if (XpNumber != nullptr)
		*XpNumber = params.XpNumber;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.SetNewLerpTimeframe
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_BattlePassLevelTracker_C::SetNewLerpTimeframe()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84544);

	UWBP_BattlePassLevelTracker_C_SetNewLerpTimeframe_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.GetXPRequiredForLevel
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UWBP_BattlePassLevelTracker_C::GetXPRequiredForLevel()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84543);

	UWBP_BattlePassLevelTracker_C_GetXPRequiredForLevel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.GetNextLevel
//		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UWBP_BattlePassLevelTracker_C::GetNextLevel()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84542);

	UWBP_BattlePassLevelTracker_C_GetNextLevel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.GetCurrentLevel
//		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UWBP_BattlePassLevelTracker_C::GetCurrentLevel()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84541);

	UWBP_BattlePassLevelTracker_C_GetCurrentLevel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.DisplayXPAnimationState
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_BattlePassLevelTracker_C::DisplayXPAnimationState()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84540);

	UWBP_BattlePassLevelTracker_C_DisplayXPAnimationState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.OnLevelUpAnimCompleted
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_BattlePassLevelTracker_C::OnLevelUpAnimCompleted()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84539);

	UWBP_BattlePassLevelTracker_C_OnLevelUpAnimCompleted_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.SetPalette
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_BattlePassLevelTracker_C::SetPalette()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84538);

	UWBP_BattlePassLevelTracker_C_SetPalette_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.ProcessPlayerProgression
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayerProgression                          PlayerProgression                                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_BattlePassLevelTracker_C::ProcessPlayerProgression(const struct FPlayerProgression& PlayerProgression)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84537);

	UWBP_BattlePassLevelTracker_C_ProcessPlayerProgression_Params params {};
	params.PlayerProgression = PlayerProgression;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassLevelTracker_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84536);

	UWBP_BattlePassLevelTracker_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassLevelTracker_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84535);

	UWBP_BattlePassLevelTracker_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.PlayProgressionAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassLevelTracker_C::PlayProgressionAnim(float Delay)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84534);

	UWBP_BattlePassLevelTracker_C_PlayProgressionAnim_Params params {};
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_BattlePassLevelTracker_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84533);

	UWBP_BattlePassLevelTracker_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_BattlePassLevelTracker_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84532);

	UWBP_BattlePassLevelTracker_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.OnAnimUpdateEmblem
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_BattlePassLevelTracker_C::OnAnimUpdateEmblem()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84531);

	UWBP_BattlePassLevelTracker_C_OnAnimUpdateEmblem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.OnAnimUpdateCosmeticDisplay
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_BattlePassLevelTracker_C::OnAnimUpdateCosmeticDisplay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84530);

	UWBP_BattlePassLevelTracker_C_OnAnimUpdateCosmeticDisplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_BattlePassLevelTracker.WBP_BattlePassLevelTracker_C.ExecuteUbergraph_WBP_BattlePassLevelTracker
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BattlePassLevelTracker_C::ExecuteUbergraph_WBP_BattlePassLevelTracker(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84529);

	UWBP_BattlePassLevelTracker_C_ExecuteUbergraph_WBP_BattlePassLevelTracker_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
