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
//		Name   -> Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.SetPromotionColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                RankedLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ProgressionCardSlot_RankedXP_C::SetPromotionColor(int RankedLevel)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82989);

	UWBP_ProgressionCardSlot_RankedXP_C_SetPromotionColor_Params params {};
	params.RankedLevel = RankedLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.OnLevelDown
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ProgressionCardSlot_RankedXP_C::OnLevelDown(int NewLevel)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82988);

	UWBP_ProgressionCardSlot_RankedXP_C_OnLevelDown_Params params {};
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.OnLevelUp
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Completed_Level                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ProgressionCardSlot_RankedXP_C::OnLevelUp(int Completed_Level)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82987);

	UWBP_ProgressionCardSlot_RankedXP_C_OnLevelUp_Params params {};
	params.Completed_Level = Completed_Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.ProcessPlayerProgression
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayerProgression                          PlayerProgress                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_ProgressionCardSlot_RankedXP_C::ProcessPlayerProgression(const struct FPlayerProgression& PlayerProgress)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82986);

	UWBP_ProgressionCardSlot_RankedXP_C_ProcessPlayerProgression_Params params {};
	params.PlayerProgress = PlayerProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ProgressionCardSlot_RankedXP_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82985);

	UWBP_ProgressionCardSlot_RankedXP_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_ProgressionCardSlot_RankedXP_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82984);

	UWBP_ProgressionCardSlot_RankedXP_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.ExecuteUbergraph_WBP_ProgressionCardSlot_RankedXP
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ProgressionCardSlot_RankedXP_C::ExecuteUbergraph_WBP_ProgressionCardSlot_RankedXP(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(82983);

	UWBP_ProgressionCardSlot_RankedXP_C_ExecuteUbergraph_WBP_ProgressionCardSlot_RankedXP_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
