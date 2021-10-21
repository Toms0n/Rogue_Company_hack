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

// Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.OnSortRarityDescNameAsc
struct UWBP_CustomizeBanner_C_OnSortRarityDescNameAsc_Params
{
	class UWidget*                                     LHS;                                                       // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     RHS;                                                       // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.NavigateBack
struct UWBP_CustomizeBanner_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.OnKeyDown
struct UWBP_CustomizeBanner_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.AddEmptySlots
struct UWBP_CustomizeBanner_C_AddEmptySlots_Params
{
};

// Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.SetActiveStates
struct UWBP_CustomizeBanner_C_SetActiveStates_Params
{
	class UWBP_CosmeticItem_Banner_C*                  ActiveWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.RegisterNavigation
struct UWBP_CustomizeBanner_C_RegisterNavigation_Params
{
};

// Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.IsBannerItemEquipped
struct UWBP_CustomizeBanner_C_IsBannerItemEquipped_Params
{
	class UKSItem*                                     KSItem;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsEquipped;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.ResetBannerSelection
struct UWBP_CustomizeBanner_C_ResetBannerSelection_Params
{
};

// Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.SetContextBar
struct UWBP_CustomizeBanner_C_SetContextBar_Params
{
};

// Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.SetBannerSelection
struct UWBP_CustomizeBanner_C_SetBannerSelection_Params
{
};

// Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.InitializeWidget
struct UWBP_CustomizeBanner_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.OnShown
struct UWBP_CustomizeBanner_C_OnShown_Params
{
};

// Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.OnHide
struct UWBP_CustomizeBanner_C_OnHide_Params
{
};

// Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.InitializeWidgetNavigation
struct UWBP_CustomizeBanner_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.OnBackPrompt
struct UWBP_CustomizeBanner_C_OnBackPrompt_Params
{
};

// Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.OnBannerHover
struct UWBP_CustomizeBanner_C_OnBannerHover_Params
{
	class UPlatformInventoryItem*                      PlatformItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.OnBannerUnhover
struct UWBP_CustomizeBanner_C_OnBannerUnhover_Params
{
};

// Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.OnBannerSelected
struct UWBP_CustomizeBanner_C_OnBannerSelected_Params
{
	class UPlatformInventoryItem*                      PlatformItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     Widget;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.OnBannerGamepadHover
struct UWBP_CustomizeBanner_C_OnBannerGamepadHover_Params
{
	class UPUMG_Widget*                                Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Hovered;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.ExecuteUbergraph_WBP_CustomizeBanner
struct UWBP_CustomizeBanner_C_ExecuteUbergraph_WBP_CustomizeBanner_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
