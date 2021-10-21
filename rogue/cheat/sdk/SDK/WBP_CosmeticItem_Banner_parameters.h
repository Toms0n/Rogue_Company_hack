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

// Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.NavigateConfirm
struct UWBP_CosmeticItem_Banner_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.SetBannerItemSlot
struct UWBP_CosmeticItem_Banner_C_SetBannerItemSlot_Params
{
};

// Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.OnHoverSound
struct UWBP_CosmeticItem_Banner_C_OnHoverSound_Params
{
};

// Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.OnClickSound
struct UWBP_CosmeticItem_Banner_C_OnClickSound_Params
{
};

// Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.Construct
struct UWBP_CosmeticItem_Banner_C_Construct_Params
{
};

// Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.PopulateSlot
struct UWBP_CosmeticItem_Banner_C_PopulateSlot_Params
{
};

// Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.OnBannerHover
struct UWBP_CosmeticItem_Banner_C_OnBannerHover_Params
{
	bool                                               IsGamepad;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.OnBannerUnhover
struct UWBP_CosmeticItem_Banner_C_OnBannerUnhover_Params
{
};

// Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.OnBannerClick
struct UWBP_CosmeticItem_Banner_C_OnBannerClick_Params
{
};

// Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.GamepadHover
struct UWBP_CosmeticItem_Banner_C_GamepadHover_Params
{
};

// Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.GamepadUnhover
struct UWBP_CosmeticItem_Banner_C_GamepadUnhover_Params
{
};

// Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.SetBannerActive
struct UWBP_CosmeticItem_Banner_C_SetBannerActive_Params
{
	bool                                               IsActive;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.InitializeWidget
struct UWBP_CosmeticItem_Banner_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.ExecuteUbergraph_WBP_CosmeticItem_Banner
struct UWBP_CosmeticItem_Banner_C_ExecuteUbergraph_WBP_CosmeticItem_Banner_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.OnItemClicked__DelegateSignature
struct UWBP_CosmeticItem_Banner_C_OnItemClicked__DelegateSignature_Params
{
	class UPlatformInventoryItem*                      PlatformItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     Widget;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.OnItemUnhovered__DelegateSignature
struct UWBP_CosmeticItem_Banner_C_OnItemUnhovered__DelegateSignature_Params
{
};

// Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.OnItemHovered__DelegateSignature
struct UWBP_CosmeticItem_Banner_C_OnItemHovered__DelegateSignature_Params
{
	class UPlatformInventoryItem*                      PlatformItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
