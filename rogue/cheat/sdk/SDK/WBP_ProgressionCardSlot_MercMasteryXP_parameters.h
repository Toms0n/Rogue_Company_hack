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

// Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.SetColor
struct UWBP_ProgressionCardSlot_MercMasteryXP_C_SetColor_Params
{
};

// Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.ProcessPlayerProgression
struct UWBP_ProgressionCardSlot_MercMasteryXP_C_ProcessPlayerProgression_Params
{
	struct FPlayerProgression                          PlayerProgress;                                            // 0x0000(0x0170)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.PreConstruct
struct UWBP_ProgressionCardSlot_MercMasteryXP_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.Construct
struct UWBP_ProgressionCardSlot_MercMasteryXP_C_Construct_Params
{
};

// Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.Event On Level Up
struct UWBP_ProgressionCardSlot_MercMasteryXP_C_Event_On_Level_Up_Params
{
	int                                                NewLevel;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.ExecuteUbergraph_WBP_ProgressionCardSlot_MercMasteryXP
struct UWBP_ProgressionCardSlot_MercMasteryXP_C_ExecuteUbergraph_WBP_ProgressionCardSlot_MercMasteryXP_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.OnMercLevelUp__DelegateSignature
struct UWBP_ProgressionCardSlot_MercMasteryXP_C_OnMercLevelUp__DelegateSignature_Params
{
	class UKSActivityInstance*                         ActivityInstance;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActivityTier                               NewTier;                                                   // 0x0008(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
