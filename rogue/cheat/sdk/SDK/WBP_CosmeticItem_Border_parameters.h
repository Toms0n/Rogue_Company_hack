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

// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.NavigateConfirm
struct UWBP_CosmeticItem_Border_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.SetBorderItemSlot
struct UWBP_CosmeticItem_Border_C_SetBorderItemSlot_Params
{
};

// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnHoverSound
struct UWBP_CosmeticItem_Border_C_OnHoverSound_Params
{
};

// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnClickSound
struct UWBP_CosmeticItem_Border_C_OnClickSound_Params
{
};

// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.Construct
struct UWBP_CosmeticItem_Border_C_Construct_Params
{
};

// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.InitializeWidget
struct UWBP_CosmeticItem_Border_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.PopulateSlot
struct UWBP_CosmeticItem_Border_C_PopulateSlot_Params
{
};

// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnBorderHover
struct UWBP_CosmeticItem_Border_C_OnBorderHover_Params
{
	bool                                               IsGamepad;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnBorderUnhover
struct UWBP_CosmeticItem_Border_C_OnBorderUnhover_Params
{
};

// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnBorderClick
struct UWBP_CosmeticItem_Border_C_OnBorderClick_Params
{
};

// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.GamepadHover
struct UWBP_CosmeticItem_Border_C_GamepadHover_Params
{
};

// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.GamepadUnhover
struct UWBP_CosmeticItem_Border_C_GamepadUnhover_Params
{
};

// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.SetBorderActive
struct UWBP_CosmeticItem_Border_C_SetBorderActive_Params
{
	bool                                               IsActive;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.ExecuteUbergraph_WBP_CosmeticItem_Border
struct UWBP_CosmeticItem_Border_C_ExecuteUbergraph_WBP_CosmeticItem_Border_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnItemClicked__DelegateSignature
struct UWBP_CosmeticItem_Border_C_OnItemClicked__DelegateSignature_Params
{
	class UPlatformInventoryItem*                      PlatformItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     Widget;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnItemUnhovered__DelegateSignature
struct UWBP_CosmeticItem_Border_C_OnItemUnhovered__DelegateSignature_Params
{
};

// Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnItemHovered__DelegateSignature
struct UWBP_CosmeticItem_Border_C_OnItemHovered__DelegateSignature_Params
{
	class UPlatformInventoryItem*                      PlatformItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
