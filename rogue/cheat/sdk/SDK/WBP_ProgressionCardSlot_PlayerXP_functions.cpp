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
//		Name   -> Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.ShowXPBar
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShowXPBar                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ProgressionCardSlot_PlayerXP_C::ShowXPBar(bool ShowXPBar)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(227167);

	UWBP_ProgressionCardSlot_PlayerXP_C_ShowXPBar_Params params {};
	params.ShowXPBar = ShowXPBar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.ProcessPlayerProgression
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayerProgression                          PlayerProgress                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_ProgressionCardSlot_PlayerXP_C::ProcessPlayerProgression(const struct FPlayerProgression& PlayerProgress)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(227166);

	UWBP_ProgressionCardSlot_PlayerXP_C_ProcessPlayerProgression_Params params {};
	params.PlayerProgress = PlayerProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ProgressionCardSlot_PlayerXP_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(227165);

	UWBP_ProgressionCardSlot_PlayerXP_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_ProgressionCardSlot_PlayerXP_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(227164);

	UWBP_ProgressionCardSlot_PlayerXP_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.Event On Level Up
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ProgressionCardSlot_PlayerXP_C::Event_On_Level_Up(int NewLevel)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(227163);

	UWBP_ProgressionCardSlot_PlayerXP_C_Event_On_Level_Up_Params params {};
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.ExecuteUbergraph_WBP_ProgressionCardSlot_PlayerXP
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ProgressionCardSlot_PlayerXP_C::ExecuteUbergraph_WBP_ProgressionCardSlot_PlayerXP(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(83471);

	UWBP_ProgressionCardSlot_PlayerXP_C_ExecuteUbergraph_WBP_ProgressionCardSlot_PlayerXP_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.OnPlayerLevelUp__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FActivityTier                               NewTier                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UKSActivityInstance*                         ActivityInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ProgressionCardSlot_PlayerXP_C::OnPlayerLevelUp__DelegateSignature(const struct FActivityTier& NewTier, class UKSActivityInstance* ActivityInstance)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(83470);

	UWBP_ProgressionCardSlot_PlayerXP_C_OnPlayerLevelUp__DelegateSignature_Params params {};
	params.NewTier = NewTier;
	params.ActivityInstance = ActivityInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
