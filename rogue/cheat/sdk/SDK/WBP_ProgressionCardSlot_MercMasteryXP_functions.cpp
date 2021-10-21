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
//		Name   -> Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.SetColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_ProgressionCardSlot_MercMasteryXP_C::SetColor()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(83479);

	UWBP_ProgressionCardSlot_MercMasteryXP_C_SetColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.ProcessPlayerProgression
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayerProgression                          PlayerProgress                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_ProgressionCardSlot_MercMasteryXP_C::ProcessPlayerProgression(const struct FPlayerProgression& PlayerProgress)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(83478);

	UWBP_ProgressionCardSlot_MercMasteryXP_C_ProcessPlayerProgression_Params params {};
	params.PlayerProgress = PlayerProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ProgressionCardSlot_MercMasteryXP_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(83477);

	UWBP_ProgressionCardSlot_MercMasteryXP_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_ProgressionCardSlot_MercMasteryXP_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(83476);

	UWBP_ProgressionCardSlot_MercMasteryXP_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.Event On Level Up
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ProgressionCardSlot_MercMasteryXP_C::Event_On_Level_Up(int NewLevel)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(83475);

	UWBP_ProgressionCardSlot_MercMasteryXP_C_Event_On_Level_Up_Params params {};
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.ExecuteUbergraph_WBP_ProgressionCardSlot_MercMasteryXP
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ProgressionCardSlot_MercMasteryXP_C::ExecuteUbergraph_WBP_ProgressionCardSlot_MercMasteryXP(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(83474);

	UWBP_ProgressionCardSlot_MercMasteryXP_C_ExecuteUbergraph_WBP_ProgressionCardSlot_MercMasteryXP_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.OnMercLevelUp__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSActivityInstance*                         ActivityInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FActivityTier                               NewTier                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_ProgressionCardSlot_MercMasteryXP_C::OnMercLevelUp__DelegateSignature(class UKSActivityInstance* ActivityInstance, const struct FActivityTier& NewTier)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(83473);

	UWBP_ProgressionCardSlot_MercMasteryXP_C_OnMercLevelUp__DelegateSignature_Params params {};
	params.ActivityInstance = ActivityInstance;
	params.NewTier = NewTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
