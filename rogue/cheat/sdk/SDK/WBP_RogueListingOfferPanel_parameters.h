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

// Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.SetItemDisplay
struct UWBP_RogueListingOfferPanel_C_SetItemDisplay_Params
{
	class UKSCurrency*                                 KSCurrency;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.PreConstruct
struct UWBP_RogueListingOfferPanel_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.Construct
struct UWBP_RogueListingOfferPanel_C_Construct_Params
{
};

// Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_0_OnBtnHovered__DelegateSignature
struct UWBP_RogueListingOfferPanel_C_BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_0_OnBtnHovered__DelegateSignature_Params
{
	bool                                               IsGamepad;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_1_OnBtnUnhovered__DelegateSignature
struct UWBP_RogueListingOfferPanel_C_BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_1_OnBtnUnhovered__DelegateSignature_Params
{
};

// Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_2_OnBtnClicked__DelegateSignature
struct UWBP_RogueListingOfferPanel_C_BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_2_OnBtnClicked__DelegateSignature_Params
{
};

// Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.InitializeWidget
struct UWBP_RogueListingOfferPanel_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.HandleInputStateChanged
struct UWBP_RogueListingOfferPanel_C_HandleInputStateChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.ExecuteUbergraph_WBP_RogueListingOfferPanel
struct UWBP_RogueListingOfferPanel_C_ExecuteUbergraph_WBP_RogueListingOfferPanel_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueListingOfferPanel.WBP_RogueListingOfferPanel_C.OnOfferClicked__DelegateSignature
struct UWBP_RogueListingOfferPanel_C_OnOfferClicked__DelegateSignature_Params
{
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
