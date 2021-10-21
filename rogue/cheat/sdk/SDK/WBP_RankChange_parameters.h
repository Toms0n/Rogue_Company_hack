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

// Function WBP_RankChange.WBP_RankChange_C.SequenceEvent__ENTRYPOINTWBP_RankChange_8
struct UWBP_RankChange_C_SequenceEvent__ENTRYPOINTWBP_RankChange_8_Params
{
};

// Function WBP_RankChange.WBP_RankChange_C.SequenceEvent__ENTRYPOINTWBP_RankChange_7
struct UWBP_RankChange_C_SequenceEvent__ENTRYPOINTWBP_RankChange_7_Params
{
};

// Function WBP_RankChange.WBP_RankChange_C.SequenceEvent__ENTRYPOINTWBP_RankChange_6
struct UWBP_RankChange_C_SequenceEvent__ENTRYPOINTWBP_RankChange_6_Params
{
};

// Function WBP_RankChange.WBP_RankChange_C.SequenceEvent__ENTRYPOINTWBP_RankChange_5
struct UWBP_RankChange_C_SequenceEvent__ENTRYPOINTWBP_RankChange_5_Params
{
};

// Function WBP_RankChange.WBP_RankChange_C.SequenceEvent__ENTRYPOINTWBP_RankChange_4
struct UWBP_RankChange_C_SequenceEvent__ENTRYPOINTWBP_RankChange_4_Params
{
};

// Function WBP_RankChange.WBP_RankChange_C.SequenceEvent__ENTRYPOINTWBP_RankChange_3
struct UWBP_RankChange_C_SequenceEvent__ENTRYPOINTWBP_RankChange_3_Params
{
};

// Function WBP_RankChange.WBP_RankChange_C.SequenceEvent__ENTRYPOINTWBP_RankChange_2
struct UWBP_RankChange_C_SequenceEvent__ENTRYPOINTWBP_RankChange_2_Params
{
};

// Function WBP_RankChange.WBP_RankChange_C.SequenceEvent__ENTRYPOINTWBP_RankChange_1
struct UWBP_RankChange_C_SequenceEvent__ENTRYPOINTWBP_RankChange_1_Params
{
};

// Function WBP_RankChange.WBP_RankChange_C.SetRankBadgeMaterialMask
struct UWBP_RankChange_C_SetRankBadgeMaterialMask_Params
{
	int                                                Level;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RankChange.WBP_RankChange_C.OnCompleteRogueLevelLerp
struct UWBP_RankChange_C_OnCompleteRogueLevelLerp_Params
{
};

// Function WBP_RankChange.WBP_RankChange_C.ResetVisualState
struct UWBP_RankChange_C_ResetVisualState_Params
{
};

// Function WBP_RankChange.WBP_RankChange_C.GetMaxRankedLevel
struct UWBP_RankChange_C_GetMaxRankedLevel_Params
{
	int                                                Level;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RankChange.WBP_RankChange_C.SetRankedElementsDisplay
struct UWBP_RankChange_C_SetRankedElementsDisplay_Params
{
	int                                                CurrentRank;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RankChange.WBP_RankChange_C.CloseRankedChangePopup
struct UWBP_RankChange_C_CloseRankedChangePopup_Params
{
};

// Function WBP_RankChange.WBP_RankChange_C.OnLevelUp
struct UWBP_RankChange_C_OnLevelUp_Params
{
	int                                                NewLevel;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RankChange.WBP_RankChange_C.OnLevelDown
struct UWBP_RankChange_C_OnLevelDown_Params
{
	int                                                NewLevel;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RankChange.WBP_RankChange_C.SetVictoryDefeat
struct UWBP_RankChange_C_SetVictoryDefeat_Params
{
	bool                                               IsWinner;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RankChange.WBP_RankChange_C.SetProgressionData
struct UWBP_RankChange_C_SetProgressionData_Params
{
	struct FPlayerProgression                          RankedProgression;                                         // 0x0000(0x0170)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_RankChange.WBP_RankChange_C.HandleProgressionData
struct UWBP_RankChange_C_HandleProgressionData_Params
{
	TArray<struct FPlayerProgression>                  PlayerProgression;                                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function WBP_RankChange.WBP_RankChange_C.OnPlayerRankChange
struct UWBP_RankChange_C_OnPlayerRankChange_Params
{
};

// Function WBP_RankChange.WBP_RankChange_C.SetPromotionColor
struct UWBP_RankChange_C_SetPromotionColor_Params
{
	int                                                NewLevel;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RankChange.WBP_RankChange_C.PreConstruct
struct UWBP_RankChange_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RankChange.WBP_RankChange_C.Construct
struct UWBP_RankChange_C_Construct_Params
{
};

// Function WBP_RankChange.WBP_RankChange_C.InitializeWidget
struct UWBP_RankChange_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RankChange.WBP_RankChange_C.BndEvt__WBP_StandardButtonLarge_C_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWBP_RankChange_C_BndEvt__WBP_StandardButtonLarge_C_0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RankChange.WBP_RankChange_C.OnShown
struct UWBP_RankChange_C_OnShown_Params
{
};

// Function WBP_RankChange.WBP_RankChange_C.EventTriggerProgressFill
struct UWBP_RankChange_C_EventTriggerProgressFill_Params
{
};

// Function WBP_RankChange.WBP_RankChange_C.ExecuteUbergraph_WBP_RankChange
struct UWBP_RankChange_C_ExecuteUbergraph_WBP_RankChange_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RankChange.WBP_RankChange_C.OnRankedPopupClosed__DelegateSignature
struct UWBP_RankChange_C_OnRankedPopupClosed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
