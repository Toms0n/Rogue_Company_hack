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

// Function WBP_RogueBioPanel.WBP_RogueBioPanel_C.SetupPurchaseListener
struct UWBP_RogueBioPanel_C_SetupPurchaseListener_Params
{
	bool                                               ActivateCallout;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RogueBioPanel.WBP_RogueBioPanel_C.OnPurchaseCallout
struct UWBP_RogueBioPanel_C_OnPurchaseCallout_Params
{
};

// Function WBP_RogueBioPanel.WBP_RogueBioPanel_C.OnInputStateChanged
struct UWBP_RogueBioPanel_C_OnInputStateChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueBioPanel.WBP_RogueBioPanel_C.SetRogueDetailsWidget
struct UWBP_RogueBioPanel_C_SetRogueDetailsWidget_Params
{
	class UKSRogueDetailsWidget*                       DetailsWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueBioPanel.WBP_RogueBioPanel_C.UpdatePurchaseButton
struct UWBP_RogueBioPanel_C_UpdatePurchaseButton_Params
{
};

// Function WBP_RogueBioPanel.WBP_RogueBioPanel_C.SetJob
struct UWBP_RogueBioPanel_C_SetJob_Params
{
	class UKSJobItem*                                  JobItem;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueBioPanel.WBP_RogueBioPanel_C.OnInitialized
struct UWBP_RogueBioPanel_C_OnInitialized_Params
{
};

// Function WBP_RogueBioPanel.WBP_RogueBioPanel_C.BndEvt__UnlockButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWBP_RogueBioPanel_C_BndEvt__UnlockButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueBioPanel.WBP_RogueBioPanel_C.ExecuteUbergraph_WBP_RogueBioPanel
struct UWBP_RogueBioPanel_C_ExecuteUbergraph_WBP_RogueBioPanel_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
