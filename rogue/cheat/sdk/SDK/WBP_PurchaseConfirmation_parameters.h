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

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.ShowItem
struct UWBP_PurchaseConfirmation_C_ShowItem_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.UpdateUpsellBundleDisplay
struct UWBP_PurchaseConfirmation_C_UpdateUpsellBundleDisplay_Params
{
	class UPlatformInventoryItem*                      PurchaseItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UKSWidget*>                           NavWidgets;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.UpdateCurrencySummary
struct UWBP_PurchaseConfirmation_C_UpdateCurrencySummary_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.UpdateBundleScrollIndicators
struct UWBP_PurchaseConfirmation_C_UpdateBundleScrollIndicators_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.DisablePurchaseButtons
struct UWBP_PurchaseConfirmation_C_DisablePurchaseButtons_Params
{
	bool                                               IsDisabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.CanNavigateToNextBundleItem
struct UWBP_PurchaseConfirmation_C_CanNavigateToNextBundleItem_Params
{
	int                                                Direction;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanNavigate;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.LayoutBattlePassPurchase
struct UWBP_PurchaseConfirmation_C_LayoutBattlePassPurchase_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.LayoutPurchaseItem
struct UWBP_PurchaseConfirmation_C_LayoutPurchaseItem_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.DisplayBasicItem
struct UWBP_PurchaseConfirmation_C_DisplayBasicItem_Params
{
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.DisplaySlowPurchaseWarning
struct UWBP_PurchaseConfirmation_C_DisplaySlowPurchaseWarning_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.GetFullScreenSplashImage
struct UWBP_PurchaseConfirmation_C_GetFullScreenSplashImage_Params
{
	bool                                               SplashFound;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSoftObjectPath                             FullSplashSoftImagePath;                                   // 0x0008(0x0018)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnAcquisitionFailed
struct UWBP_PurchaseConfirmation_C_OnAcquisitionFailed_Params
{
	struct FText                                       ErrorMsg;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.TryHandleRightStickKeyDown
struct UWBP_PurchaseConfirmation_C_TryHandleRightStickKeyDown_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	struct FEventReply                                 ReturnValue;                                               // 0x0018(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnBundleItemHoveredGamepad
struct UWBP_PurchaseConfirmation_C_OnBundleItemHoveredGamepad_Params
{
	struct FCosmeticSlotDetails                        CosmeticSlotDetails;                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                               IsGamepad;                                                 // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWBP_KSCosmeticItemDisplay_C*                Widget;                                                    // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnToggleViewMode
struct UWBP_PurchaseConfirmation_C_OnToggleViewMode_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnInputModeChanged
struct UWBP_PurchaseConfirmation_C_OnInputModeChanged_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetSubDetails
struct UWBP_PurchaseConfirmation_C_SetSubDetails_Params
{
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnBundleItemClicked
struct UWBP_PurchaseConfirmation_C_OnBundleItemClicked_Params
{
	class UWBP_KSCosmeticItemDisplay_C*                Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCosmeticSlotDetails                        CosmeticSlotDetails;                                       // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PopulateBundleContentsPanel
struct UWBP_PurchaseConfirmation_C_PopulateBundleContentsPanel_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnNextBundlePage
struct UWBP_PurchaseConfirmation_C_OnNextBundlePage_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnPreviousBundlePage
struct UWBP_PurchaseConfirmation_C_OnPreviousBundlePage_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.GoBackToItemDisplay
struct UWBP_PurchaseConfirmation_C_GoBackToItemDisplay_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnViewBundleContents
struct UWBP_PurchaseConfirmation_C_OnViewBundleContents_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnKeyDown
struct UWBP_PurchaseConfirmation_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnKeyUp
struct UWBP_PurchaseConfirmation_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0058(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0090(0x00C0)  (Parm, OutParm, ReturnParm)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnNextItem
struct UWBP_PurchaseConfirmation_C_OnNextItem_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnPreviousItem
struct UWBP_PurchaseConfirmation_C_OnPreviousItem_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PopulateItemData
struct UWBP_PurchaseConfirmation_C_PopulateItemData_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnAcquisition
struct UWBP_PurchaseConfirmation_C_OnAcquisition_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PurchaseItemWithAdditionalCurrency
struct UWBP_PurchaseConfirmation_C_PurchaseItemWithAdditionalCurrency_Params
{
	class UPUMG_StoreItemPrice*                        Price;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PurchaseItemWithPortalOffer
struct UWBP_PurchaseConfirmation_C_PurchaseItemWithPortalOffer_Params
{
	class UPUMG_PortalOffer*                           PortalOffer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PurchaseItemWithPrice
struct UWBP_PurchaseConfirmation_C_PurchaseItemWithPrice_Params
{
	class UPUMG_StoreItemPrice*                        Price;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.DisplaySingleItem
struct UWBP_PurchaseConfirmation_C_DisplaySingleItem_Params
{
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.NavigateBack
struct UWBP_PurchaseConfirmation_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PreConstruct
struct UWBP_PurchaseConfirmation_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.Tick
struct UWBP_PurchaseConfirmation_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0058(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.InitializeWidget
struct UWBP_PurchaseConfirmation_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnBackPrompt
struct UWBP_PurchaseConfirmation_C_OnBackPrompt_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.InitializeWidgetNavigation
struct UWBP_PurchaseConfirmation_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnShown
struct UWBP_PurchaseConfirmation_C_OnShown_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnHide
struct UWBP_PurchaseConfirmation_C_OnHide_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetScrollValueUp
struct UWBP_PurchaseConfirmation_C_SetScrollValueUp_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetScrollValueDown
struct UWBP_PurchaseConfirmation_C_SetScrollValueDown_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.ClearScrollValue
struct UWBP_PurchaseConfirmation_C_ClearScrollValue_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.FocusGroupNavigateRightFailure
struct UWBP_PurchaseConfirmation_C_FocusGroupNavigateRightFailure_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.FocusGroupNavigateLeftFailure
struct UWBP_PurchaseConfirmation_C_FocusGroupNavigateLeftFailure_Params
{
	int                                                FocusGroup;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.UpdateScrollPromptVisibility
struct UWBP_PurchaseConfirmation_C_UpdateScrollPromptVisibility_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWBP_PurchaseConfirmation_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.Handle View State Changed
struct UWBP_PurchaseConfirmation_C_Handle_View_State_Changed_Params
{
	struct FName                                       CurrentRoute;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       PreviousRoute;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	PlatformUMG_EViewManagerLayer                      Layer;                                                     // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.BndEvt__ScrollRightButton_1_K2Node_ComponentBoundEvent_1_OnBtnClicked__DelegateSignature
struct UWBP_PurchaseConfirmation_C_BndEvt__ScrollRightButton_1_K2Node_ComponentBoundEvent_1_OnBtnClicked__DelegateSignature_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.BndEvt__ScrollLeftButton_1_K2Node_ComponentBoundEvent_2_OnBtnClicked__DelegateSignature
struct UWBP_PurchaseConfirmation_C_BndEvt__ScrollLeftButton_1_K2Node_ComponentBoundEvent_2_OnBtnClicked__DelegateSignature_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.BndEvt__WBP_BundleUpsellButton_K2Node_ComponentBoundEvent_3_OnRawClick__DelegateSignature
struct UWBP_PurchaseConfirmation_C_BndEvt__WBP_BundleUpsellButton_K2Node_ComponentBoundEvent_3_OnRawClick__DelegateSignature_Params
{
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.ExecuteUbergraph_WBP_PurchaseConfirmation
struct UWBP_PurchaseConfirmation_C_ExecuteUbergraph_WBP_PurchaseConfirmation_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
