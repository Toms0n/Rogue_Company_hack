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

// Function TrendedKick.TrendedKick_C.GetMaximumHorizontalKick
struct UTrendedKick_C_GetMaximumHorizontalKick_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TrendedKick.TrendedKick_C.GetMaximumVerticalKick
struct UTrendedKick_C_GetMaximumVerticalKick_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TrendedKick.TrendedKick_C.GetCurrentTrendProfile
struct UTrendedKick_C_GetCurrentTrendProfile_Params
{
	int                                                ShotIndex;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKickTrendProfile                           TrendProfile;                                              // 0x0004(0x001C)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
};

// Function TrendedKick.TrendedKick_C.MakeKickbackInstance
struct UTrendedKick_C_MakeKickbackInstance_Params
{
	int                                                ShotIndex;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AbsoluteMaxDuration;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInterpCurveVector2D                        ReturnValue;                                               // 0x0008(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
