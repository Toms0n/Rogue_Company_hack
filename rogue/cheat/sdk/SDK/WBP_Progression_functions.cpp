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
//		Name   -> Function WBP_Progression.WBP_Progression_C.OnPlayerLevelUp
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FActivityTier                               NewTier                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UKSActivityInstance*                         ActivityInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Progression_C::OnPlayerLevelUp(const struct FActivityTier& NewTier, class UKSActivityInstance* ActivityInstance)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84464);

	UWBP_Progression_C_OnPlayerLevelUp_Params params {};
	params.NewTier = NewTier;
	params.ActivityInstance = ActivityInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Progression.WBP_Progression_C.HandleBattlePassActivitiesReady
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Progression_C::HandleBattlePassActivitiesReady()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84463);

	UWBP_Progression_C_HandleBattlePassActivitiesReady_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Progression.WBP_Progression_C.HandleEventChallengeProgression
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayerProgression                          PlayerProgression                                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Progression_C::HandleEventChallengeProgression(const struct FPlayerProgression& PlayerProgression)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84462);

	UWBP_Progression_C_HandleEventChallengeProgression_Params params {};
	params.PlayerProgression = PlayerProgression;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Progression.WBP_Progression_C.HandleBattlePassXpProgression
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayerProgression                          Progression                                                (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Progression_C::HandleBattlePassXpProgression(const struct FPlayerProgression& Progression)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84461);

	UWBP_Progression_C_HandleBattlePassXpProgression_Params params {};
	params.Progression = Progression;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Progression.WBP_Progression_C.HandleProgressionData
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FPlayerProgression>                  PlayerProgression                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UWBP_Progression_C::HandleProgressionData(TArray<struct FPlayerProgression>* PlayerProgression)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84460);

	UWBP_Progression_C_HandleProgressionData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerProgression != nullptr)
		*PlayerProgression = params.PlayerProgression;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Progression.WBP_Progression_C.HandleMiniBattlePassProgressionRecieved
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayerProgression                          PlayerProgression                                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Progression_C::HandleMiniBattlePassProgressionRecieved(const struct FPlayerProgression& PlayerProgression)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84459);

	UWBP_Progression_C_HandleMiniBattlePassProgressionRecieved_Params params {};
	params.PlayerProgression = PlayerProgression;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Progression.WBP_Progression_C.OnMercLevelUp
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSActivityInstance*                         ActivityInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FActivityTier                               NewTier                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Progression_C::OnMercLevelUp(class UKSActivityInstance* ActivityInstance, const struct FActivityTier& NewTier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84458);

	UWBP_Progression_C_OnMercLevelUp_Params params {};
	params.ActivityInstance = ActivityInstance;
	params.NewTier = NewTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Progression.WBP_Progression_C.ResetVisualState
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Progression_C::ResetVisualState()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84457);

	UWBP_Progression_C_ResetVisualState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Progression.WBP_Progression_C.HandleRogueMasteryProgression
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayerProgression                          PlayerProgression                                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Progression_C::HandleRogueMasteryProgression(const struct FPlayerProgression& PlayerProgression)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84456);

	UWBP_Progression_C_HandleRogueMasteryProgression_Params params {};
	params.PlayerProgression = PlayerProgression;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Progression.WBP_Progression_C.HandleReputationProgression
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayerProgression                          PlayerProgression                                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Progression_C::HandleReputationProgression(const struct FPlayerProgression& PlayerProgression)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84455);

	UWBP_Progression_C_HandleReputationProgression_Params params {};
	params.PlayerProgression = PlayerProgression;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Progression.WBP_Progression_C.HandlePlayerXpProgression
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayerProgression                          Progression                                                (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Progression_C::HandlePlayerXpProgression(const struct FPlayerProgression& Progression)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84454);

	UWBP_Progression_C_HandlePlayerXpProgression_Params params {};
	params.Progression = Progression;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Progression.WBP_Progression_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Progression_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84453);

	UWBP_Progression_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Progression.WBP_Progression_C.StartAnimation
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Progression_C::StartAnimation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84452);

	UWBP_Progression_C_StartAnimation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Progression.WBP_Progression_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Progression_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84451);

	UWBP_Progression_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Progression.WBP_Progression_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Progression_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84450);

	UWBP_Progression_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Progression.WBP_Progression_C.IncrementDelay
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Progression_C::IncrementDelay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84449);

	UWBP_Progression_C_IncrementDelay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_Progression.WBP_Progression_C.ExecuteUbergraph_WBP_Progression
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Progression_C::ExecuteUbergraph_WBP_Progression(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(84448);

	UWBP_Progression_C_ExecuteUbergraph_WBP_Progression_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
