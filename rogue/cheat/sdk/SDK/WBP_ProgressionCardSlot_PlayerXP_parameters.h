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

// Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.ShowXPBar
struct UWBP_ProgressionCardSlot_PlayerXP_C_ShowXPBar_Params
{
	bool                                               ShowXPBar;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.ProcessPlayerProgression
struct UWBP_ProgressionCardSlot_PlayerXP_C_ProcessPlayerProgression_Params
{
	struct FPlayerProgression                          PlayerProgress;                                            // 0x0000(0x0170)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.PreConstruct
struct UWBP_ProgressionCardSlot_PlayerXP_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.Construct
struct UWBP_ProgressionCardSlot_PlayerXP_C_Construct_Params
{
};

// Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.Event On Level Up
struct UWBP_ProgressionCardSlot_PlayerXP_C_Event_On_Level_Up_Params
{
	int                                                NewLevel;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.ExecuteUbergraph_WBP_ProgressionCardSlot_PlayerXP
struct UWBP_ProgressionCardSlot_PlayerXP_C_ExecuteUbergraph_WBP_ProgressionCardSlot_PlayerXP_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.OnPlayerLevelUp__DelegateSignature
struct UWBP_ProgressionCardSlot_PlayerXP_C_OnPlayerLevelUp__DelegateSignature_Params
{
	struct FActivityTier                               NewTier;                                                   // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UKSActivityInstance*                         ActivityInstance;                                          // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
