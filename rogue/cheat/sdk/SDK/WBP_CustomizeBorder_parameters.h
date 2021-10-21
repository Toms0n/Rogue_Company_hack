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

// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnSortRarityDescNameAsc
struct UWBP_CustomizeBorder_C_OnSortRarityDescNameAsc_Params
{
	class UWidget*                                     LHS;                                                       // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     RHS;                                                       // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnKeyDown
struct UWBP_CustomizeBorder_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.NavigateBack
struct UWBP_CustomizeBorder_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.AddEmptySlots
struct UWBP_CustomizeBorder_C_AddEmptySlots_Params
{
};

// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.SetActiveStates
struct UWBP_CustomizeBorder_C_SetActiveStates_Params
{
	class UWBP_CosmeticItem_Border_C*                  ActiveWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.RegisterNavigation
struct UWBP_CustomizeBorder_C_RegisterNavigation_Params
{
};

// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.IsBorderItemEquipped
struct UWBP_CustomizeBorder_C_IsBorderItemEquipped_Params
{
	class UKSItem*                                     KSItem;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsEquipped;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.ResetBorderSelection
struct UWBP_CustomizeBorder_C_ResetBorderSelection_Params
{
};

// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.SetContextBar
struct UWBP_CustomizeBorder_C_SetContextBar_Params
{
};

// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.SetBorderSelection
struct UWBP_CustomizeBorder_C_SetBorderSelection_Params
{
};

// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.InitializeWidget
struct UWBP_CustomizeBorder_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.InitializeWidgetNavigation
struct UWBP_CustomizeBorder_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnShown
struct UWBP_CustomizeBorder_C_OnShown_Params
{
};

// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnHide
struct UWBP_CustomizeBorder_C_OnHide_Params
{
};

// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnBackPrompt
struct UWBP_CustomizeBorder_C_OnBackPrompt_Params
{
};

// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnBorderHover
struct UWBP_CustomizeBorder_C_OnBorderHover_Params
{
	class UPlatformInventoryItem*                      PlatformItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnBorderUnhover
struct UWBP_CustomizeBorder_C_OnBorderUnhover_Params
{
};

// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnBorderSelected
struct UWBP_CustomizeBorder_C_OnBorderSelected_Params
{
	class UPlatformInventoryItem*                      PlatformItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     Widget;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnBorderGamepadHover
struct UWBP_CustomizeBorder_C_OnBorderGamepadHover_Params
{
	class UPUMG_Widget*                                Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bHovered;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.ExecuteUbergraph_WBP_CustomizeBorder
struct UWBP_CustomizeBorder_C_ExecuteUbergraph_WBP_CustomizeBorder_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
