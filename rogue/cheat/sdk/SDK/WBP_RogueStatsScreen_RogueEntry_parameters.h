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

// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.TickAnchorAnim
struct UWBP_RogueStatsScreen_RogueEntry_C_TickAnchorAnim_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.ResetState
struct UWBP_RogueStatsScreen_RogueEntry_C_ResetState_Params
{
};

// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.PlayShowAnimInternal
struct UWBP_RogueStatsScreen_RogueEntry_C_PlayShowAnimInternal_Params
{
};

// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.PlayShowAnim
struct UWBP_RogueStatsScreen_RogueEntry_C_PlayShowAnim_Params
{
	float                                              Delay;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.UpdateValueText
struct UWBP_RogueStatsScreen_RogueEntry_C_UpdateValueText_Params
{
	bool                                               ShouldOverwriteValue;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              OverwriteValue;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.UpdateRogueName
struct UWBP_RogueStatsScreen_RogueEntry_C_UpdateRogueName_Params
{
};

// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.UpdateRogueIcon
struct UWBP_RogueStatsScreen_RogueEntry_C_UpdateRogueIcon_Params
{
};

// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.Set Stat Data
struct UWBP_RogueStatsScreen_RogueEntry_C_Set_Stat_Data_Params
{
	float                                              MaxValue;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSStatWrapper*                              RogueStatWrapper;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64_t                                            JobId;                                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.Construct
struct UWBP_RogueStatsScreen_RogueEntry_C_Construct_Params
{
};

// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.Tick
struct UWBP_RogueStatsScreen_RogueEntry_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0058(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.ExecuteUbergraph_WBP_RogueStatsScreen_RogueEntry
struct UWBP_RogueStatsScreen_RogueEntry_C_ExecuteUbergraph_WBP_RogueStatsScreen_RogueEntry_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
