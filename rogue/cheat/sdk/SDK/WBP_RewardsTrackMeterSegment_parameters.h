#pragma once

// Name: roguecompany, Version: 425


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.GetStandardBackgroundColor
struct UWBP_RewardsTrackMeterSegment_C_GetStandardBackgroundColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.GetPremiumBackgroundColor
struct UWBP_RewardsTrackMeterSegment_C_GetPremiumBackgroundColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.GetBattlePassPremiumColor
struct UWBP_RewardsTrackMeterSegment_C_GetBattlePassPremiumColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.GetBattlePassFreeColor
struct UWBP_RewardsTrackMeterSegment_C_GetBattlePassFreeColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.ApplyMeterPercentages
struct UWBP_RewardsTrackMeterSegment_C_ApplyMeterPercentages_Params
{
	float                                              BasePercent;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaPercent;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.ApplySegmentBackgroundColor
struct UWBP_RewardsTrackMeterSegment_C_ApplySegmentBackgroundColor_Params
{
	struct FLinearColor                                BackgroundColor;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.ApplySegmentLabel
struct UWBP_RewardsTrackMeterSegment_C_ApplySegmentLabel_Params
{
	struct FText                                       LabelText;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.ApplySegmentMeterColor
struct UWBP_RewardsTrackMeterSegment_C_ApplySegmentMeterColor_Params
{
	struct FLinearColor                                MeterColor;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RewardsTrackMeterSegment.WBP_RewardsTrackMeterSegment_C.ExecuteUbergraph_WBP_RewardsTrackMeterSegment
struct UWBP_RewardsTrackMeterSegment_C_ExecuteUbergraph_WBP_RewardsTrackMeterSegment_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
