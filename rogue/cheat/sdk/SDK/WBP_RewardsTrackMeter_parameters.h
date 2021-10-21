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

// Function WBP_RewardsTrackMeter.WBP_RewardsTrackMeter_C.Create Segments
struct UWBP_RewardsTrackMeter_C_Create_Segments_Params
{
};

// Function WBP_RewardsTrackMeter.WBP_RewardsTrackMeter_C.Set From Activity Instance
struct UWBP_RewardsTrackMeter_C_Set_From_Activity_Instance_Params
{
	class UKSActivityInstance*                         Progression;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Starting_Tier;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RewardsTrackMeter.WBP_RewardsTrackMeter_C.PreConstruct
struct UWBP_RewardsTrackMeter_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RewardsTrackMeter.WBP_RewardsTrackMeter_C.ExecuteUbergraph_WBP_RewardsTrackMeter
struct UWBP_RewardsTrackMeter_C_ExecuteUbergraph_WBP_RewardsTrackMeter_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RewardsTrackMeter.WBP_RewardsTrackMeter_C.OnLerpUpdate__DelegateSignature
struct UWBP_RewardsTrackMeter_C_OnLerpUpdate__DelegateSignature_Params
{
	float                                              CurrentLerpPercantage;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RewardsTrackMeter.WBP_RewardsTrackMeter_C.OnLevelDownEvent__DelegateSignature
struct UWBP_RewardsTrackMeter_C_OnLevelDownEvent__DelegateSignature_Params
{
	int                                                NewLevel;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RewardsTrackMeter.WBP_RewardsTrackMeter_C.OnLevelUpEvent__DelegateSignature
struct UWBP_RewardsTrackMeter_C_OnLevelUpEvent__DelegateSignature_Params
{
	int                                                NewLevel;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
