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

// Function WBP_RogueArmoryPanel.WBP_RogueArmoryPanel_C.ShowSwapCTA
struct UWBP_RogueArmoryPanel_C_ShowSwapCTA_Params
{
	bool                                               ShowCTA;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RogueArmoryPanel.WBP_RogueArmoryPanel_C.DisplayFavoriteWeapon
struct UWBP_RogueArmoryPanel_C_DisplayFavoriteWeapon_Params
{
};

// Function WBP_RogueArmoryPanel.WBP_RogueArmoryPanel_C.OnGotoWeapon
struct UWBP_RogueArmoryPanel_C_OnGotoWeapon_Params
{
	class UKSWeaponAsset*                              WeaponAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueArmoryPanel.WBP_RogueArmoryPanel_C.SetWeaponCategoryData
struct UWBP_RogueArmoryPanel_C_SetWeaponCategoryData_Params
{
	class UTextBlock*                                  CategoryName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_AsyncIcon_C*                            CategoryIcon;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  CategoryCount;                                             // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueArmoryPanel.WBP_RogueArmoryPanel_C.SetRogueDetailsWidget
struct UWBP_RogueArmoryPanel_C_SetRogueDetailsWidget_Params
{
	class UKSRogueDetailsWidget*                       RogueDetailsWidget;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueArmoryPanel.WBP_RogueArmoryPanel_C.SetWeaponAssetToSlot
struct UWBP_RogueArmoryPanel_C_SetWeaponAssetToSlot_Params
{
	class UKSWeaponProgressButton*                     WeaponSlot;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueArmoryPanel.WBP_RogueArmoryPanel_C.SetupInput
struct UWBP_RogueArmoryPanel_C_SetupInput_Params
{
	class UKSWidget*                                   NavigationParent;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FocusGroup;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueArmoryPanel.WBP_RogueArmoryPanel_C.SetJob
struct UWBP_RogueArmoryPanel_C_SetJob_Params
{
	class UKSJobItem*                                  JobItem;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueArmoryPanel.WBP_RogueArmoryPanel_C.BndEvt__PrimaryWeaponSwapButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWBP_RogueArmoryPanel_C_BndEvt__PrimaryWeaponSwapButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueArmoryPanel.WBP_RogueArmoryPanel_C.OnInitialized
struct UWBP_RogueArmoryPanel_C_OnInitialized_Params
{
};

// Function WBP_RogueArmoryPanel.WBP_RogueArmoryPanel_C.ExecuteUbergraph_WBP_RogueArmoryPanel
struct UWBP_RogueArmoryPanel_C_ExecuteUbergraph_WBP_RogueArmoryPanel_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueArmoryPanel.WBP_RogueArmoryPanel_C.OnSelectPrimaryWeaponSwap__DelegateSignature
struct UWBP_RogueArmoryPanel_C_OnSelectPrimaryWeaponSwap__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
