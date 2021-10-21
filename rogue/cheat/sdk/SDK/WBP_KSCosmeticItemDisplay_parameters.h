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

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetMaterialUnderlay
struct UWBP_KSCosmeticItemDisplay_C_SetMaterialUnderlay_Params
{
	class UPlatformInventoryItem*                      InventoryItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetFromRewardDisplayData
struct UWBP_KSCosmeticItemDisplay_C_SetFromRewardDisplayData_Params
{
	struct FWeaponMasteryRewardDisplayData             Display_Data;                                              // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetRarity
struct UWBP_KSCosmeticItemDisplay_C_SetRarity_Params
{
	struct FGameplayTagContainer                       GameplayTag;                                               // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetHeaderSlot
struct UWBP_KSCosmeticItemDisplay_C_SetHeaderSlot_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetupPriceData
struct UWBP_KSCosmeticItemDisplay_C_SetupPriceData_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetIsOwned
struct UWBP_KSCosmeticItemDisplay_C_SetIsOwned_Params
{
	bool                                               IsOwned;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetQuantityText
struct UWBP_KSCosmeticItemDisplay_C_SetQuantityText_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetFreeLabel
struct UWBP_KSCosmeticItemDisplay_C_SetFreeLabel_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.ReverseBackgroundHoverNoZoom
struct UWBP_KSCosmeticItemDisplay_C_ReverseBackgroundHoverNoZoom_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.BackgroundHoverNoZoom
struct UWBP_KSCosmeticItemDisplay_C_BackgroundHoverNoZoom_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetItemOwned
struct UWBP_KSCosmeticItemDisplay_C_SetItemOwned_Params
{
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.NavigateConfirm
struct UWBP_KSCosmeticItemDisplay_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.ResetSlot
struct UWBP_KSCosmeticItemDisplay_C_ResetSlot_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetWeaponSlot
struct UWBP_KSCosmeticItemDisplay_C_SetWeaponSlot_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetCornerIcon
struct UWBP_KSCosmeticItemDisplay_C_SetCornerIcon_Params
{
	bool                                               bShowIcon;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSoftObjectPath                             Soft_Image_Path;                                           // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetCosmeticSlot
struct UWBP_KSCosmeticItemDisplay_C_SetCosmeticSlot_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnClickSound
struct UWBP_KSCosmeticItemDisplay_C_OnClickSound_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnHoverSound
struct UWBP_KSCosmeticItemDisplay_C_OnHoverSound_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.PopulateSlot
struct UWBP_KSCosmeticItemDisplay_C_PopulateSlot_Params
{
	class UPlatformInventoryItem*                      PlatformItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSJobItem*                                  AssiocatedJobItem;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.Construct
struct UWBP_KSCosmeticItemDisplay_C_Construct_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnHovered
struct UWBP_KSCosmeticItemDisplay_C_OnHovered_Params
{
	bool                                               IsGamepad;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnButtonUnhovered
struct UWBP_KSCosmeticItemDisplay_C_OnButtonUnhovered_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.InitializeWidget
struct UWBP_KSCosmeticItemDisplay_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.PreConstruct
struct UWBP_KSCosmeticItemDisplay_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnButtonClicked
struct UWBP_KSCosmeticItemDisplay_C_OnButtonClicked_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.GamepadHover
struct UWBP_KSCosmeticItemDisplay_C_GamepadHover_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.GamepadUnhover
struct UWBP_KSCosmeticItemDisplay_C_GamepadUnhover_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.CallHovered
struct UWBP_KSCosmeticItemDisplay_C_CallHovered_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.CallUnhovered
struct UWBP_KSCosmeticItemDisplay_C_CallUnhovered_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetSlotActive
struct UWBP_KSCosmeticItemDisplay_C_SetSlotActive_Params
{
	bool                                               Active;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.Event Dsiplay Selected
struct UWBP_KSCosmeticItemDisplay_C_Event_Dsiplay_Selected_Params
{
	bool                                               IsSelected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.Event Display Equipped
struct UWBP_KSCosmeticItemDisplay_C_Event_Display_Equipped_Params
{
	bool                                               IsEquipped;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.ExecuteUbergraph_WBP_KSCosmeticItemDisplay
struct UWBP_KSCosmeticItemDisplay_C_ExecuteUbergraph_WBP_KSCosmeticItemDisplay_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnCosmeticClicked__DelegateSignature
struct UWBP_KSCosmeticItemDisplay_C_OnCosmeticClicked__DelegateSignature_Params
{
	class UWBP_KSCosmeticItemDisplay_C*                Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCosmeticSlotDetails                        CosmeticSlotDetails;                                       // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnUnhover__DelegateSignature
struct UWBP_KSCosmeticItemDisplay_C_OnUnhover__DelegateSignature_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnHover__DelegateSignature
struct UWBP_KSCosmeticItemDisplay_C_OnHover__DelegateSignature_Params
{
	struct FCosmeticSlotDetails                        CosmeticSlotDetails;                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                               IsGamepad;                                                 // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWBP_KSCosmeticItemDisplay_C*                Widget;                                                    // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
