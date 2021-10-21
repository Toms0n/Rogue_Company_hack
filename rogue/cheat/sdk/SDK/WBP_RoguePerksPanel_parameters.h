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

// Function WBP_RoguePerksPanel.WBP_RoguePerksPanel_C.SetRogueDetailsWidget
struct UWBP_RoguePerksPanel_C_SetRogueDetailsWidget_Params
{
	class UKSRogueDetailsWidget*                       DetailsWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RoguePerksPanel.WBP_RoguePerksPanel_C.GetPerkEntries
struct UWBP_RoguePerksPanel_C_GetPerkEntries_Params
{
	TArray<class UWBP_PerkDescSlot_C*>                 PerkEntries;                                               // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_RoguePerksPanel.WBP_RoguePerksPanel_C.SetJob
struct UWBP_RoguePerksPanel_C_SetJob_Params
{
	class UKSJobItem*                                  JobItem;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RoguePerksPanel.WBP_RoguePerksPanel_C.BndEvt__ButtonUnlock_K2Node_ComponentBoundEvent_0_OnBtnStackedClicked__DelegateSignature
struct UWBP_RoguePerksPanel_C_BndEvt__ButtonUnlock_K2Node_ComponentBoundEvent_0_OnBtnStackedClicked__DelegateSignature_Params
{
};

// Function WBP_RoguePerksPanel.WBP_RoguePerksPanel_C.ExecuteUbergraph_WBP_RoguePerksPanel
struct UWBP_RoguePerksPanel_C_ExecuteUbergraph_WBP_RoguePerksPanel_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
