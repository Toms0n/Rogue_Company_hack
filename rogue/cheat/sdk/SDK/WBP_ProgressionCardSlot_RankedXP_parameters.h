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

// Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.SetPromotionColor
struct UWBP_ProgressionCardSlot_RankedXP_C_SetPromotionColor_Params
{
	int                                                RankedLevel;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.OnLevelDown
struct UWBP_ProgressionCardSlot_RankedXP_C_OnLevelDown_Params
{
	int                                                NewLevel;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.OnLevelUp
struct UWBP_ProgressionCardSlot_RankedXP_C_OnLevelUp_Params
{
	int                                                Completed_Level;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.ProcessPlayerProgression
struct UWBP_ProgressionCardSlot_RankedXP_C_ProcessPlayerProgression_Params
{
	struct FPlayerProgression                          PlayerProgress;                                            // 0x0000(0x0170)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.PreConstruct
struct UWBP_ProgressionCardSlot_RankedXP_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.Construct
struct UWBP_ProgressionCardSlot_RankedXP_C_Construct_Params
{
};

// Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.ExecuteUbergraph_WBP_ProgressionCardSlot_RankedXP
struct UWBP_ProgressionCardSlot_RankedXP_C_ExecuteUbergraph_WBP_ProgressionCardSlot_RankedXP_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
