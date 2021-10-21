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

// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.OnKeyUp
struct UWBP_EventBuyThroughScreen_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.PreviewBundleItemAtIndex
struct UWBP_EventBuyThroughScreen_C_PreviewBundleItemAtIndex_Params
{
	int                                                PreviewIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ForceUpdate;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.DisplayMissionSelect
struct UWBP_EventBuyThroughScreen_C_DisplayMissionSelect_Params
{
};

// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.DisplayRulesWindow
struct UWBP_EventBuyThroughScreen_C_DisplayRulesWindow_Params
{
};

// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.GetNavigationWidgets
struct UWBP_EventBuyThroughScreen_C_GetNavigationWidgets_Params
{
	TArray<class UPUMG_Widget*>                        Widgets;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.PurchaseBundle
struct UWBP_EventBuyThroughScreen_C_PurchaseBundle_Params
{
	class UPUMG_StoreItem*                             BundleItem;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.PopulateBundlePreviewItems
struct UWBP_EventBuyThroughScreen_C_PopulateBundlePreviewItems_Params
{
	class UPUMG_StoreItem*                             BundleItem;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.NavigateConfirm
struct UWBP_EventBuyThroughScreen_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.OnInputStateChanged
struct UWBP_EventBuyThroughScreen_C_OnInputStateChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.OnBundleItemHovered
struct UWBP_EventBuyThroughScreen_C_OnBundleItemHovered_Params
{
	struct FCosmeticSlotDetails                        CosmeticSlotDetails;                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                               IsGamepad;                                                 // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWBP_KSCosmeticItemDisplay_C*                Widget;                                                    // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.OnBundleItemClicked
struct UWBP_EventBuyThroughScreen_C_OnBundleItemClicked_Params
{
	class UWBP_KSCosmeticItemDisplay_C*                Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCosmeticSlotDetails                        CosmeticSlotDetails;                                       // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.Select Bundle Widget
struct UWBP_EventBuyThroughScreen_C_Select_Bundle_Widget_Params
{
	class UWBP_EventBundleItem_C*                      Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.OnGrandPrizeClicked
struct UWBP_EventBuyThroughScreen_C_OnGrandPrizeClicked_Params
{
	class UWBP_EventGrandPrizeItem_C*                  Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.RefreshScene
struct UWBP_EventBuyThroughScreen_C_RefreshScene_Params
{
};

// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.NavigateBack
struct UWBP_EventBuyThroughScreen_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.InitializeWidget
struct UWBP_EventBuyThroughScreen_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.OnBackPrompt
struct UWBP_EventBuyThroughScreen_C_OnBackPrompt_Params
{
};

// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.OnShown
struct UWBP_EventBuyThroughScreen_C_OnShown_Params
{
};

// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.OnBundleUnlockButtonClicked
struct UWBP_EventBuyThroughScreen_C_OnBundleUnlockButtonClicked_Params
{
	class UWBP_EventBundleItem_C*                      Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.InitializeWidgetNavigation
struct UWBP_EventBuyThroughScreen_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.OnRulesPrompt
struct UWBP_EventBuyThroughScreen_C_OnRulesPrompt_Params
{
};

// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.FocusGroupNavigateRightFailure
struct UWBP_EventBuyThroughScreen_C_FocusGroupNavigateRightFailure_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.FocusGroupNavigateLeftFailure
struct UWBP_EventBuyThroughScreen_C_FocusGroupNavigateLeftFailure_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EventBuyThroughScreen.WBP_EventBuyThroughScreen_C.ExecuteUbergraph_WBP_EventBuyThroughScreen
struct UWBP_EventBuyThroughScreen_C_ExecuteUbergraph_WBP_EventBuyThroughScreen_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
