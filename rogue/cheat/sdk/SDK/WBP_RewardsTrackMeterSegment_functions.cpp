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
//		Name   -> Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.GetStandardBackgroundColor
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UWBP_RewardsTrackMeterSegment_C::GetStandardBackgroundColor()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81355);

	UWBP_RewardsTrackMeterSegment_C_GetStandardBackgroundColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.GetPremiumBackgroundColor
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UWBP_RewardsTrackMeterSegment_C::GetPremiumBackgroundColor()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81354);

	UWBP_RewardsTrackMeterSegment_C_GetPremiumBackgroundColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.GetBattlePassPremiumColor
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UWBP_RewardsTrackMeterSegment_C::GetBattlePassPremiumColor()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81353);

	UWBP_RewardsTrackMeterSegment_C_GetBattlePassPremiumColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.GetBattlePassFreeColor
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UWBP_RewardsTrackMeterSegment_C::GetBattlePassFreeColor()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81352);

	UWBP_RewardsTrackMeterSegment_C_GetBattlePassFreeColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.ApplyMeterPercentages
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		float                                              BasePercent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              DeltaPercent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RewardsTrackMeterSegment_C::ApplyMeterPercentages(float BasePercent, float DeltaPercent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81351);

	UWBP_RewardsTrackMeterSegment_C_ApplyMeterPercentages_Params params {};
	params.BasePercent = BasePercent;
	params.DeltaPercent = DeltaPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.ApplySegmentBackgroundColor
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                BackgroundColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RewardsTrackMeterSegment_C::ApplySegmentBackgroundColor(const struct FLinearColor& BackgroundColor)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81350);

	UWBP_RewardsTrackMeterSegment_C_ApplySegmentBackgroundColor_Params params {};
	params.BackgroundColor = BackgroundColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.ApplySegmentLabel
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       LabelText                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_RewardsTrackMeterSegment_C::ApplySegmentLabel(const struct FText& LabelText)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81349);

	UWBP_RewardsTrackMeterSegment_C_ApplySegmentLabel_Params params {};
	params.LabelText = LabelText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.ApplySegmentMeterColor
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                MeterColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RewardsTrackMeterSegment_C::ApplySegmentMeterColor(const struct FLinearColor& MeterColor)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81348);

	UWBP_RewardsTrackMeterSegment_C_ApplySegmentMeterColor_Params params {};
	params.MeterColor = MeterColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.ExecuteUbergraph_WBP_RewardsTrackMeterSegment
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RewardsTrackMeterSegment_C::ExecuteUbergraph_WBP_RewardsTrackMeterSegment(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(81347);

	UWBP_RewardsTrackMeterSegment_C_ExecuteUbergraph_WBP_RewardsTrackMeterSegment_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
