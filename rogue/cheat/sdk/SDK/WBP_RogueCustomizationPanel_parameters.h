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

// Function WBP_RogueCustomizationPanel.WBP_RogueCustomizationPanel_C.SetupInput
struct UWBP_RogueCustomizationPanel_C_SetupInput_Params
{
	class UKSWidget*                                   NavigationParent;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FocusGroup;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationPanel.WBP_RogueCustomizationPanel_C.NavigateBack
struct UWBP_RogueCustomizationPanel_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_RogueCustomizationPanel.WBP_RogueCustomizationPanel_C.BindSlots
struct UWBP_RogueCustomizationPanel_C_BindSlots_Params
{
};

// Function WBP_RogueCustomizationPanel.WBP_RogueCustomizationPanel_C.SetSlots
struct UWBP_RogueCustomizationPanel_C_SetSlots_Params
{
};

// Function WBP_RogueCustomizationPanel.WBP_RogueCustomizationPanel_C.UpdateEquippedItems
struct UWBP_RogueCustomizationPanel_C_UpdateEquippedItems_Params
{
};

// Function WBP_RogueCustomizationPanel.WBP_RogueCustomizationPanel_C.SetActiveJob
struct UWBP_RogueCustomizationPanel_C_SetActiveJob_Params
{
	class UKSJobItem*                                  JobItem;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationPanel.WBP_RogueCustomizationPanel_C.InitializeWidget
struct UWBP_RogueCustomizationPanel_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationPanel.WBP_RogueCustomizationPanel_C.OnCosmeticSelected
struct UWBP_RogueCustomizationPanel_C_OnCosmeticSelected_Params
{
	class UWBP_KSCosmeticItemDisplay_C*                CosmeticSlot;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCosmeticSlotDetails                        CosmeticSlotDetails;                                       // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationPanel.WBP_RogueCustomizationPanel_C.OnShown
struct UWBP_RogueCustomizationPanel_C_OnShown_Params
{
};

// Function WBP_RogueCustomizationPanel.WBP_RogueCustomizationPanel_C.ExecuteUbergraph_WBP_RogueCustomizationPanel
struct UWBP_RogueCustomizationPanel_C_ExecuteUbergraph_WBP_RogueCustomizationPanel_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationPanel.WBP_RogueCustomizationPanel_C.GotoCustomizationScreen__DelegateSignature
struct UWBP_RogueCustomizationPanel_C_GotoCustomizationScreen__DelegateSignature_Params
{
	class UWBP_KSCosmeticItemDisplay_C*                CosmeticSlot;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
