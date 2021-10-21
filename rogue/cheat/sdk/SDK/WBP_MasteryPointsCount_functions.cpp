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
//		Name   -> Function WBP_MasteryPointsCount.WBP_MasteryPointsCount_C.SetPercentageText
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MasteryPointsCount_C::SetPercentageText(float NewParam)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75823);

	UWBP_MasteryPointsCount_C_SetPercentageText_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_MasteryPointsCount.WBP_MasteryPointsCount_C.SetProgressText
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CurrentProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                RequiredProgress                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MasteryPointsCount_C::SetProgressText(int CurrentProgress, int RequiredProgress)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75822);

	UWBP_MasteryPointsCount_C_SetProgressText_Params params {};
	params.CurrentProgress = CurrentProgress;
	params.RequiredProgress = RequiredProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_MasteryPointsCount.WBP_MasteryPointsCount_C.SetVisualStyle
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_MasteryPointsCount_C::SetVisualStyle()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75821);

	UWBP_MasteryPointsCount_C_SetVisualStyle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_MasteryPointsCount.WBP_MasteryPointsCount_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_MasteryPointsCount_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75820);

	UWBP_MasteryPointsCount_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_MasteryPointsCount.WBP_MasteryPointsCount_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_MasteryPointsCount_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75819);

	UWBP_MasteryPointsCount_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_MasteryPointsCount.WBP_MasteryPointsCount_C.ExecuteUbergraph_WBP_MasteryPointsCount
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MasteryPointsCount_C::ExecuteUbergraph_WBP_MasteryPointsCount(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(75818);

	UWBP_MasteryPointsCount_C_ExecuteUbergraph_WBP_MasteryPointsCount_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
