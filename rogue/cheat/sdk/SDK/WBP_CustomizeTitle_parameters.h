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

// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnSortRarityDescTextAsc
struct UWBP_CustomizeTitle_C_OnSortRarityDescTextAsc_Params
{
	class UWidget*                                     LHS;                                                       // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     RHS;                                                       // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.AddEmptySlots
struct UWBP_CustomizeTitle_C_AddEmptySlots_Params
{
};

// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnKeyDown
struct UWBP_CustomizeTitle_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.SetActiveStates
struct UWBP_CustomizeTitle_C_SetActiveStates_Params
{
	class UWBP_CosmeticItem_Title_C*                   ActiveWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.RegisterNavigation
struct UWBP_CustomizeTitle_C_RegisterNavigation_Params
{
};

// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.IsTitleItemEquipped
struct UWBP_CustomizeTitle_C_IsTitleItemEquipped_Params
{
	class UKSItem*                                     KSItem;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsEquipped;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.ResetTitleSelection
struct UWBP_CustomizeTitle_C_ResetTitleSelection_Params
{
};

// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.SetContextBar
struct UWBP_CustomizeTitle_C_SetContextBar_Params
{
};

// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.NavigateBack
struct UWBP_CustomizeTitle_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.SetTitleSelection
struct UWBP_CustomizeTitle_C_SetTitleSelection_Params
{
};

// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.InitializeWidget
struct UWBP_CustomizeTitle_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.InitializeWidgetNavigation
struct UWBP_CustomizeTitle_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnShown
struct UWBP_CustomizeTitle_C_OnShown_Params
{
};

// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnHide
struct UWBP_CustomizeTitle_C_OnHide_Params
{
};

// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnBackPrompt
struct UWBP_CustomizeTitle_C_OnBackPrompt_Params
{
};

// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnTitleHover
struct UWBP_CustomizeTitle_C_OnTitleHover_Params
{
	class UPlatformInventoryItem*                      PlatformItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnTitleUnhover
struct UWBP_CustomizeTitle_C_OnTitleUnhover_Params
{
};

// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnTitleSelected
struct UWBP_CustomizeTitle_C_OnTitleSelected_Params
{
	class UPlatformInventoryItem*                      PlatformItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     Widget;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnTitleGamepadHover
struct UWBP_CustomizeTitle_C_OnTitleGamepadHover_Params
{
	class UPUMG_Widget*                                Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Hovered;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.ExecuteUbergraph_WBP_CustomizeTitle
struct UWBP_CustomizeTitle_C_ExecuteUbergraph_WBP_CustomizeTitle_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
