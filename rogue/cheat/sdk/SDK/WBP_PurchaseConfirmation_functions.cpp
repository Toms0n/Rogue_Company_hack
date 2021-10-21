// Name: roguecompany, Version: 425

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.ShowItem
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PurchaseConfirmation_C::ShowItem()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89377);

	UWBP_PurchaseConfirmation_C_ShowItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.UpdateUpsellBundleDisplay
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPlatformInventoryItem*                      PurchaseItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class UKSWidget*>                           NavWidgets                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
void UWBP_PurchaseConfirmation_C::UpdateUpsellBundleDisplay(class UPlatformInventoryItem* PurchaseItem, TArray<class UKSWidget*>* NavWidgets)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89376);

	UWBP_PurchaseConfirmation_C_UpdateUpsellBundleDisplay_Params params {};
	params.PurchaseItem = PurchaseItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NavWidgets != nullptr)
		*NavWidgets = params.NavWidgets;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.UpdateCurrencySummary
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PurchaseConfirmation_C::UpdateCurrencySummary()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89375);

	UWBP_PurchaseConfirmation_C_UpdateCurrencySummary_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.UpdateBundleScrollIndicators
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PurchaseConfirmation_C::UpdateBundleScrollIndicators()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89374);

	UWBP_PurchaseConfirmation_C_UpdateBundleScrollIndicators_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.DisablePurchaseButtons
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsDisabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PurchaseConfirmation_C::DisablePurchaseButtons(bool IsDisabled)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89373);

	UWBP_PurchaseConfirmation_C_DisablePurchaseButtons_Params params {};
	params.IsDisabled = IsDisabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.CanNavigateToNextBundleItem
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               CanNavigate                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PurchaseConfirmation_C::CanNavigateToNextBundleItem(int Direction, bool* CanNavigate)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89372);

	UWBP_PurchaseConfirmation_C_CanNavigateToNextBundleItem_Params params {};
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanNavigate != nullptr)
		*CanNavigate = params.CanNavigate;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.LayoutBattlePassPurchase
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PurchaseConfirmation_C::LayoutBattlePassPurchase()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89371);

	UWBP_PurchaseConfirmation_C_LayoutBattlePassPurchase_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.LayoutPurchaseItem
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PurchaseConfirmation_C::LayoutPurchaseItem()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89370);

	UWBP_PurchaseConfirmation_C_LayoutPurchaseItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.DisplayBasicItem
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PurchaseConfirmation_C::DisplayBasicItem(class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89369);

	UWBP_PurchaseConfirmation_C_DisplayBasicItem_Params params {};
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.DisplaySlowPurchaseWarning
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PurchaseConfirmation_C::DisplaySlowPurchaseWarning()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89368);

	UWBP_PurchaseConfirmation_C_DisplaySlowPurchaseWarning_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.GetFullScreenSplashImage
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               SplashFound                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FSoftObjectPath                             FullSplashSoftImagePath                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UWBP_PurchaseConfirmation_C::GetFullScreenSplashImage(bool* SplashFound, struct FSoftObjectPath* FullSplashSoftImagePath)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89367);

	UWBP_PurchaseConfirmation_C_GetFullScreenSplashImage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SplashFound != nullptr)
		*SplashFound = params.SplashFound;
	if (FullSplashSoftImagePath != nullptr)
		*FullSplashSoftImagePath = params.FullSplashSoftImagePath;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnAcquisitionFailed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       ErrorMsg                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_PurchaseConfirmation_C::OnAcquisitionFailed(const struct FText& ErrorMsg)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89366);

	UWBP_PurchaseConfirmation_C_OnAcquisitionFailed_Params params {};
	params.ErrorMsg = ErrorMsg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.TryHandleRightStickKeyDown
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_PurchaseConfirmation_C::TryHandleRightStickKeyDown(struct FKey* Key)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89365);

	UWBP_PurchaseConfirmation_C_TryHandleRightStickKeyDown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnBundleItemHoveredGamepad
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FCosmeticSlotDetails                        CosmeticSlotDetails                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsGamepad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UWBP_KSCosmeticItemDisplay_C*                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PurchaseConfirmation_C::OnBundleItemHoveredGamepad(const struct FCosmeticSlotDetails& CosmeticSlotDetails, bool IsGamepad, class UWBP_KSCosmeticItemDisplay_C* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89364);

	UWBP_PurchaseConfirmation_C_OnBundleItemHoveredGamepad_Params params {};
	params.CosmeticSlotDetails = CosmeticSlotDetails;
	params.IsGamepad = IsGamepad;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnToggleViewMode
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PurchaseConfirmation_C::OnToggleViewMode()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89363);

	UWBP_PurchaseConfirmation_C_OnToggleViewMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnInputModeChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PurchaseConfirmation_C::OnInputModeChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89362);

	UWBP_PurchaseConfirmation_C_OnInputModeChanged_Params params {};
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetSubDetails
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PurchaseConfirmation_C::SetSubDetails(class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89361);

	UWBP_PurchaseConfirmation_C_SetSubDetails_Params params {};
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnBundleItemClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_KSCosmeticItemDisplay_C*                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FCosmeticSlotDetails                        CosmeticSlotDetails                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void UWBP_PurchaseConfirmation_C::OnBundleItemClicked(class UWBP_KSCosmeticItemDisplay_C* Widget, const struct FCosmeticSlotDetails& CosmeticSlotDetails)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89360);

	UWBP_PurchaseConfirmation_C_OnBundleItemClicked_Params params {};
	params.Widget = Widget;
	params.CosmeticSlotDetails = CosmeticSlotDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PopulateBundleContentsPanel
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PurchaseConfirmation_C::PopulateBundleContentsPanel()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89359);

	UWBP_PurchaseConfirmation_C_PopulateBundleContentsPanel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnNextBundlePage
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PurchaseConfirmation_C::OnNextBundlePage()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89358);

	UWBP_PurchaseConfirmation_C_OnNextBundlePage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnPreviousBundlePage
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PurchaseConfirmation_C::OnPreviousBundlePage()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89357);

	UWBP_PurchaseConfirmation_C_OnPreviousBundlePage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.GoBackToItemDisplay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PurchaseConfirmation_C::GoBackToItemDisplay()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89356);

	UWBP_PurchaseConfirmation_C_GoBackToItemDisplay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnViewBundleContents
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PurchaseConfirmation_C::OnViewBundleContents()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89355);

	UWBP_PurchaseConfirmation_C_OnViewBundleContents_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_PurchaseConfirmation_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89354);

	UWBP_PurchaseConfirmation_C_OnKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnKeyUp
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_PurchaseConfirmation_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89353);

	UWBP_PurchaseConfirmation_C_OnKeyUp_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnNextItem
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PurchaseConfirmation_C::OnNextItem()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89352);

	UWBP_PurchaseConfirmation_C_OnNextItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnPreviousItem
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PurchaseConfirmation_C::OnPreviousItem()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89351);

	UWBP_PurchaseConfirmation_C_OnPreviousItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PopulateItemData
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PurchaseConfirmation_C::PopulateItemData()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89350);

	UWBP_PurchaseConfirmation_C_PopulateItemData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnAcquisition
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PurchaseConfirmation_C::OnAcquisition()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89349);

	UWBP_PurchaseConfirmation_C_OnAcquisition_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PurchaseItemWithAdditionalCurrency
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_StoreItemPrice*                        Price                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PurchaseConfirmation_C::PurchaseItemWithAdditionalCurrency(class UPUMG_StoreItemPrice* Price)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89348);

	UWBP_PurchaseConfirmation_C_PurchaseItemWithAdditionalCurrency_Params params {};
	params.Price = Price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PurchaseItemWithPortalOffer
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_PortalOffer*                           PortalOffer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PurchaseConfirmation_C::PurchaseItemWithPortalOffer(class UPUMG_PortalOffer* PortalOffer)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89347);

	UWBP_PurchaseConfirmation_C_PurchaseItemWithPortalOffer_Params params {};
	params.PortalOffer = PortalOffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PurchaseItemWithPrice
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_StoreItemPrice*                        Price                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PurchaseConfirmation_C::PurchaseItemWithPrice(class UPUMG_StoreItemPrice* Price)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89346);

	UWBP_PurchaseConfirmation_C_PurchaseItemWithPrice_Params params {};
	params.Price = Price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.DisplaySingleItem
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PurchaseConfirmation_C::DisplaySingleItem(class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89345);

	UWBP_PurchaseConfirmation_C_DisplaySingleItem_Params params {};
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.NavigateBack
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_PurchaseConfirmation_C::NavigateBack()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89344);

	UWBP_PurchaseConfirmation_C_NavigateBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PurchaseConfirmation_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89343);

	UWBP_PurchaseConfirmation_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PurchaseConfirmation_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89342);

	UWBP_PurchaseConfirmation_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PurchaseConfirmation_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89341);

	UWBP_PurchaseConfirmation_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnBackPrompt
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PurchaseConfirmation_C::OnBackPrompt()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89340);

	UWBP_PurchaseConfirmation_C_OnBackPrompt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.InitializeWidgetNavigation
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_PurchaseConfirmation_C::InitializeWidgetNavigation()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89339);

	UWBP_PurchaseConfirmation_C_InitializeWidgetNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnShown
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_PurchaseConfirmation_C::OnShown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89338);

	UWBP_PurchaseConfirmation_C_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnHide
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_PurchaseConfirmation_C::OnHide()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89337);

	UWBP_PurchaseConfirmation_C_OnHide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetScrollValueUp
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PurchaseConfirmation_C::SetScrollValueUp()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89336);

	UWBP_PurchaseConfirmation_C_SetScrollValueUp_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetScrollValueDown
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PurchaseConfirmation_C::SetScrollValueDown()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89335);

	UWBP_PurchaseConfirmation_C_SetScrollValueDown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.ClearScrollValue
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PurchaseConfirmation_C::ClearScrollValue()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89334);

	UWBP_PurchaseConfirmation_C_ClearScrollValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.FocusGroupNavigateRightFailure
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PurchaseConfirmation_C::FocusGroupNavigateRightFailure(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89333);

	UWBP_PurchaseConfirmation_C_FocusGroupNavigateRightFailure_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.FocusGroupNavigateLeftFailure
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                FocusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PurchaseConfirmation_C::FocusGroupNavigateLeftFailure(int FocusGroup)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89332);

	UWBP_PurchaseConfirmation_C_FocusGroupNavigateLeftFailure_Params params {};
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.UpdateScrollPromptVisibility
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PurchaseConfirmation_C::UpdateScrollPromptVisibility()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89331);

	UWBP_PurchaseConfirmation_C_UpdateScrollPromptVisibility_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PurchaseConfirmation_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89330);

	UWBP_PurchaseConfirmation_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.Handle View State Changed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       CurrentRoute                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       PreviousRoute                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		PlatformUMG_EViewManagerLayer                      Layer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PurchaseConfirmation_C::Handle_View_State_Changed(const struct FName& CurrentRoute, const struct FName& PreviousRoute, PlatformUMG_EViewManagerLayer Layer)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89329);

	UWBP_PurchaseConfirmation_C_Handle_View_State_Changed_Params params {};
	params.CurrentRoute = CurrentRoute;
	params.PreviousRoute = PreviousRoute;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.BndEvt__ScrollRightButton_1_K2Node_ComponentBoundEvent_1_OnBtnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_PurchaseConfirmation_C::BndEvt__ScrollRightButton_1_K2Node_ComponentBoundEvent_1_OnBtnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89328);

	UWBP_PurchaseConfirmation_C_BndEvt__ScrollRightButton_1_K2Node_ComponentBoundEvent_1_OnBtnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.BndEvt__ScrollLeftButton_1_K2Node_ComponentBoundEvent_2_OnBtnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_PurchaseConfirmation_C::BndEvt__ScrollLeftButton_1_K2Node_ComponentBoundEvent_2_OnBtnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89327);

	UWBP_PurchaseConfirmation_C_BndEvt__ScrollLeftButton_1_K2Node_ComponentBoundEvent_2_OnBtnClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.BndEvt__WBP_BundleUpsellButton_K2Node_ComponentBoundEvent_3_OnRawClick__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PurchaseConfirmation_C::BndEvt__WBP_BundleUpsellButton_K2Node_ComponentBoundEvent_3_OnRawClick__DelegateSignature(class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89326);

	UWBP_PurchaseConfirmation_C_BndEvt__WBP_BundleUpsellButton_K2Node_ComponentBoundEvent_3_OnRawClick__DelegateSignature_Params params {};
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.ExecuteUbergraph_WBP_PurchaseConfirmation
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PurchaseConfirmation_C::ExecuteUbergraph_WBP_PurchaseConfirmation(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(89325);

	UWBP_PurchaseConfirmation_C_ExecuteUbergraph_WBP_PurchaseConfirmation_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
