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

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.OnBumperTab
struct UWBP_RogueCustomizationSelector_C_OnBumperTab_Params
{
	bool                                               bNext;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.SelectTabBasedOnCosmeticSlot
struct UWBP_RogueCustomizationSelector_C_SelectTabBasedOnCosmeticSlot_Params
{
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.SetUpNavFromNews
struct UWBP_RogueCustomizationSelector_C_SetUpNavFromNews_Params
{
	class UKSCosmeticSlotDetails*                      Details;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.SetCosmeticSelectionFromClass
struct UWBP_RogueCustomizationSelector_C_SetCosmeticSelectionFromClass_Params
{
	class UKSCosmeticSlotDetails*                      SlotDetails;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.GetSelectedStoreItem
struct UWBP_RogueCustomizationSelector_C_GetSelectedStoreItem_Params
{
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.GetPrimaryItem
struct UWBP_RogueCustomizationSelector_C_GetPrimaryItem_Params
{
	class UKSItem*                                     KSItem;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.Create Cosmetic Item Selector
struct UWBP_RogueCustomizationSelector_C_Create_Cosmetic_Item_Selector_Params
{
	class UKSItem*                                     KSItem;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.SoundPlayCosmeticEquip
struct UWBP_RogueCustomizationSelector_C_SoundPlayCosmeticEquip_Params
{
	Killstreak_EMercCosmeticSlot                       CosmeticType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.GetActiveTabFocusGroup
struct UWBP_RogueCustomizationSelector_C_GetActiveTabFocusGroup_Params
{
	int                                                ActiveTabFocusGroup;                                       // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.ReevaluateGamepadTabImageVisibility
struct UWBP_RogueCustomizationSelector_C_ReevaluateGamepadTabImageVisibility_Params
{
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.GetAdjustedCosmeticSlot
struct UWBP_RogueCustomizationSelector_C_GetAdjustedCosmeticSlot_Params
{
	class UPlatformInventoryItem*                      OriginalItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Killstreak_EMercCosmeticSlot                       OriginalCosmeticSlot;                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Killstreak_EMercCosmeticSlot                       AdjustedCosmeticSlot;                                      // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.AddActiveCosmeticSlot
struct UWBP_RogueCustomizationSelector_C_AddActiveCosmeticSlot_Params
{
	Killstreak_EMercCosmeticSlot                       NewCosmeticSlot;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.ChangeCosmeticSlotTab
struct UWBP_RogueCustomizationSelector_C_ChangeCosmeticSlotTab_Params
{
	class UKSNavTabWidget*                             Tab;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.SetupCosmeticSlots
struct UWBP_RogueCustomizationSelector_C_SetupCosmeticSlots_Params
{
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.OnSortRarityDescNameAsc
struct UWBP_RogueCustomizationSelector_C_OnSortRarityDescNameAsc_Params
{
	class UWidget*                                     LHS;                                                       // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     RHS;                                                       // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.IsEquipAllAllowed
struct UWBP_RogueCustomizationSelector_C_IsEquipAllAllowed_Params
{
	class UKSItem*                                     Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanEquipAll;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.DisplayEquipAllPrompt
struct UWBP_RogueCustomizationSelector_C_DisplayEquipAllPrompt_Params
{
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.OnEquipAll
struct UWBP_RogueCustomizationSelector_C_OnEquipAll_Params
{
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.SetEmoteModel
struct UWBP_RogueCustomizationSelector_C_SetEmoteModel_Params
{
	class UKSItem*                                     CosmeticItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.SetEquippedItem
struct UWBP_RogueCustomizationSelector_C_SetEquippedItem_Params
{
	bool                                               IsEquipped;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWBP_KSCosmeticItemSelector_C*               CosmeticItemSlot;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSItem*                                     KSItem;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.SetOwnedItem
struct UWBP_RogueCustomizationSelector_C_SetOwnedItem_Params
{
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.OnPurchaseItem
struct UWBP_RogueCustomizationSelector_C_OnPurchaseItem_Params
{
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.AddClearCosmeticSlot
struct UWBP_RogueCustomizationSelector_C_AddClearCosmeticSlot_Params
{
	class UKSSortableGridPanel*                        ItemContainer;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.IsItemEquipped
struct UWBP_RogueCustomizationSelector_C_IsItemEquipped_Params
{
	class UKSItem*                                     KSItem;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsEquipped;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.Set Active States
struct UWBP_RogueCustomizationSelector_C_Set_Active_States_Params
{
	class UWBP_KSCosmeticItemSelector_C*               ActiveWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.SetEquipBtn
struct UWBP_RogueCustomizationSelector_C_SetEquipBtn_Params
{
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.SetWingSuitModel
struct UWBP_RogueCustomizationSelector_C_SetWingSuitModel_Params
{
	class UKSItem*                                     CosmeticItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.ResetSprayIcon
struct UWBP_RogueCustomizationSelector_C_ResetSprayIcon_Params
{
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.ResetModels
struct UWBP_RogueCustomizationSelector_C_ResetModels_Params
{
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.SetEmoteImage
struct UWBP_RogueCustomizationSelector_C_SetEmoteImage_Params
{
	class UKSItem*                                     CosmeticItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.ResetCharacter
struct UWBP_RogueCustomizationSelector_C_ResetCharacter_Params
{
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.SetWeapon
struct UWBP_RogueCustomizationSelector_C_SetWeapon_Params
{
	class UKSItem*                                     CosmeticItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSJobItem*                                  JobItem;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Killstreak_EWeaponSlot                             WeaponSlot;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.Set Model Viewer
struct UWBP_RogueCustomizationSelector_C_Set_Model_Viewer_Params
{
	class UPlatformInventoryItem*                      CosmeticItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCosmeticSlotDetails                        CosmeticDetail;                                            // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.SetCharacterSkin
struct UWBP_RogueCustomizationSelector_C_SetCharacterSkin_Params
{
	class UKSItem*                                     CosmeticItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSJobItem*                                  JobItem;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.NavigateBack
struct UWBP_RogueCustomizationSelector_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.SetContextBar
struct UWBP_RogueCustomizationSelector_C_SetContextBar_Params
{
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.UpdateNavigation
struct UWBP_RogueCustomizationSelector_C_UpdateNavigation_Params
{
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.RegisterNavigation
struct UWBP_RogueCustomizationSelector_C_RegisterNavigation_Params
{
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.ResetCosmeticSelection
struct UWBP_RogueCustomizationSelector_C_ResetCosmeticSelection_Params
{
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.SetCosmeticSelection
struct UWBP_RogueCustomizationSelector_C_SetCosmeticSelection_Params
{
	struct FCosmeticSlotDetails                        CosmeticDetails;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.ClearDataOnInitialize
struct UWBP_RogueCustomizationSelector_C_ClearDataOnInitialize_Params
{
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.InitializeWidget
struct UWBP_RogueCustomizationSelector_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.OnHover
struct UWBP_RogueCustomizationSelector_C_OnHover_Params
{
	struct FCosmeticSlotDetails                        CosmeticDetails;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class UPlatformInventoryItem*                      PlatformItem;                                              // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.OnUnhover
struct UWBP_RogueCustomizationSelector_C_OnUnhover_Params
{
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.OnSelectCosmetic
struct UWBP_RogueCustomizationSelector_C_OnSelectCosmetic_Params
{
	class UPlatformInventoryItem*                      PlatformItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     Widget;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCosmeticSlotDetails                        CosmeticDetails;                                           // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.OnShown
struct UWBP_RogueCustomizationSelector_C_OnShown_Params
{
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.OnBackPrompt
struct UWBP_RogueCustomizationSelector_C_OnBackPrompt_Params
{
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.InitializeWidgetNavigation
struct UWBP_RogueCustomizationSelector_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.EquipCosmetic
struct UWBP_RogueCustomizationSelector_C_EquipCosmetic_Params
{
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.OnHide
struct UWBP_RogueCustomizationSelector_C_OnHide_Params
{
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.HandleInputStateChanged
struct UWBP_RogueCustomizationSelector_C_HandleInputStateChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.OnItemGamepadHovered
struct UWBP_RogueCustomizationSelector_C_OnItemGamepadHovered_Params
{
	class UPUMG_Widget*                                Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bHovered;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.Return To Job Preview Model
struct UWBP_RogueCustomizationSelector_C_Return_To_Job_Preview_Model_Params
{
	class UKSItem*                                     Cosmetic_Item;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.Hide Preview Character
struct UWBP_RogueCustomizationSelector_C_Hide_Preview_Character_Params
{
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.Show Preview Character
struct UWBP_RogueCustomizationSelector_C_Show_Preview_Character_Params
{
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.ChangeToNewTab
struct UWBP_RogueCustomizationSelector_C_ChangeToNewTab_Params
{
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.ExecuteUbergraph_WBP_RogueCustomizationSelector
struct UWBP_RogueCustomizationSelector_C_ExecuteUbergraph_WBP_RogueCustomizationSelector_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C.OnEquipCosmeticItem__DelegateSignature
struct UWBP_RogueCustomizationSelector_C_OnEquipCosmeticItem__DelegateSignature_Params
{
	Killstreak_EMercCosmeticSlot                       SlotType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SlotIndex;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSItem*                                     Item;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
