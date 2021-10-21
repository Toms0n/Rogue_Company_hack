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

// Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.StartNextWaitingMilestoneEntry
struct UWBP_WeaponMasteryMilestoneProgress_C_StartNextWaitingMilestoneEntry_Params
{
};

// Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.GetMilestoneEntryByActivity
struct UWBP_WeaponMasteryMilestoneProgress_C_GetMilestoneEntryByActivity_Params
{
	class UKSActivityInstance*                         Activity_Instance;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_WeaponMilestoneEntry_Progression_C*     Milestone_Entry;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.GetMilestoneEntryByTier
struct UWBP_WeaponMasteryMilestoneProgress_C_GetMilestoneEntryByTier_Params
{
	int                                                Milestone_Number;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_WeaponMilestoneEntry_Progression_C*     Return_Value;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.GetMilestoneEntries
struct UWBP_WeaponMasteryMilestoneProgress_C_GetMilestoneEntries_Params
{
	TArray<class UWBP_WeaponMilestoneEntry_Progression_C*> Return_Value;                                              // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.InitializeWidgetNavigation
struct UWBP_WeaponMasteryMilestoneProgress_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWBP_WeaponMasteryMilestoneProgress_C_BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.InitializeWidget
struct UWBP_WeaponMasteryMilestoneProgress_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.ConfigureViewModel
struct UWBP_WeaponMasteryMilestoneProgress_C_ConfigureViewModel_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSWeaponAttachment*                         WeaponWrap;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.DisplayWeaponAsset
struct UWBP_WeaponMasteryMilestoneProgress_C_DisplayWeaponAsset_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.OnShown
struct UWBP_WeaponMasteryMilestoneProgress_C_OnShown_Params
{
};

// Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.PopulateMilestoneData
struct UWBP_WeaponMasteryMilestoneProgress_C_PopulateMilestoneData_Params
{
	TArray<struct FKSMilestoneCompletedSummaryEntry>   MilestonesForWeapon;                                       // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.HandleMilestoneCompletedDuringAnim
struct UWBP_WeaponMasteryMilestoneProgress_C_HandleMilestoneCompletedDuringAnim_Params
{
	int                                                RewardCount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.Handle Model Set
struct UWBP_WeaponMasteryMilestoneProgress_C_Handle_Model_Set_Params
{
};

// Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.StartAnimSequence
struct UWBP_WeaponMasteryMilestoneProgress_C_StartAnimSequence_Params
{
};

// Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.Handle Meter Level Up Complete
struct UWBP_WeaponMasteryMilestoneProgress_C_Handle_Meter_Level_Up_Complete_Params
{
};

// Function WBP_WeaponMasteryMilestoneProgress.WBP_WeaponMasteryMilestoneProgress_C.ExecuteUbergraph_WBP_WeaponMasteryMilestoneProgress
struct UWBP_WeaponMasteryMilestoneProgress_C_ExecuteUbergraph_WBP_WeaponMasteryMilestoneProgress_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
