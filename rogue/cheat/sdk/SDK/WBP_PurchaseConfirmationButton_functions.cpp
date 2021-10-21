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
//		Name   -> Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.UpdateHoldDurationDisplay
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              fPercentage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PurchaseConfirmationButton_C::UpdateHoldDurationDisplay(float fPercentage)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87937);

	UWBP_PurchaseConfirmationButton_C_UpdateHoldDurationDisplay_Params params {};
	params.fPercentage = fPercentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.ClearPurchaseHoldBinding
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PurchaseConfirmationButton_C::ClearPurchaseHoldBinding()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87936);

	UWBP_PurchaseConfirmationButton_C_ClearPurchaseHoldBinding_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.On Purchase Hold Event
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		KillstreakUINew_EContextPromptHoldReleaseState     Event                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PurchaseConfirmationButton_C::On_Purchase_Hold_Event(KillstreakUINew_EContextPromptHoldReleaseState Event)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87935);

	UWBP_PurchaseConfirmationButton_C_On_Purchase_Hold_Event_Params params {};
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.Can Prompt Store Redirect
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PurchaseConfirmationButton_C::Can_Prompt_Store_Redirect(bool* Return_Value)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87934);

	UWBP_PurchaseConfirmationButton_C_Can_Prompt_Store_Redirect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.Store Redirect
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PurchaseConfirmationButton_C::Store_Redirect()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87933);

	UWBP_PurchaseConfirmationButton_C_Store_Redirect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.DisableButton
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsDisabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PurchaseConfirmationButton_C::DisableButton(bool IsDisabled)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87932);

	UWBP_PurchaseConfirmationButton_C_DisableButton_Params params {};
	params.IsDisabled = IsDisabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.StartConfirmHold
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PurchaseConfirmationButton_C::StartConfirmHold()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87931);

	UWBP_PurchaseConfirmationButton_C_StartConfirmHold_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.ClearConfirmHold
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PurchaseConfirmationButton_C::ClearConfirmHold()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87930);

	UWBP_PurchaseConfirmationButton_C_ClearConfirmHold_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.UpdateGamepadPromptDisplay
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PurchaseConfirmationButton_C::UpdateGamepadPromptDisplay(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputMode)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87929);

	UWBP_PurchaseConfirmationButton_C_UpdateGamepadPromptDisplay_Params params {};
	params.InputMode = InputMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnButtonUnhovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PurchaseConfirmationButton_C::OnButtonUnhovered()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87928);

	UWBP_PurchaseConfirmationButton_C_OnButtonUnhovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnButtonHovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsGamepad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PurchaseConfirmationButton_C::OnButtonHovered(bool IsGamepad)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87927);

	UWBP_PurchaseConfirmationButton_C_OnButtonHovered_Params params {};
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnButtonClicked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PurchaseConfirmationButton_C::OnButtonClicked()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87926);

	UWBP_PurchaseConfirmationButton_C_OnButtonClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.SetPortalOffer
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_PortalOffer*                           PortalOffer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PurchaseConfirmationButton_C::SetPortalOffer(class UPUMG_PortalOffer* PortalOffer)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87925);

	UWBP_PurchaseConfirmationButton_C_SetPortalOffer_Params params {};
	params.PortalOffer = PortalOffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.SetRawText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       ButtonText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_PurchaseConfirmationButton_C::SetRawText(const struct FText& ButtonText)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87924);

	UWBP_PurchaseConfirmationButton_C_SetRawText_Params params {};
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.SetAdditionalCurrencyPurchasePrice
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UKSStoreItemWithPurchaseData*                AdditionalCurrencyPurchaseInfo                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PurchaseConfirmationButton_C::SetAdditionalCurrencyPurchasePrice(class UKSStoreItemWithPurchaseData* AdditionalCurrencyPurchaseInfo)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87923);

	UWBP_PurchaseConfirmationButton_C_SetAdditionalCurrencyPurchasePrice_Params params {};
	params.AdditionalCurrencyPurchaseInfo = AdditionalCurrencyPurchaseInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.SetStorePrice
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_StoreItemPrice*                        ItemPrice                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ItemPurchaseQuantity                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPUMG_StoreItem*                             StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PurchaseConfirmationButton_C::SetStorePrice(class UPUMG_StoreItemPrice* ItemPrice, int ItemPurchaseQuantity, class UPUMG_StoreItem* StoreItem)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87922);

	UWBP_PurchaseConfirmationButton_C_SetStorePrice_Params params {};
	params.ItemPrice = ItemPrice;
	params.ItemPurchaseQuantity = ItemPurchaseQuantity;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PurchaseConfirmationButton_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87921);

	UWBP_PurchaseConfirmationButton_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_PurchaseConfirmationButton_C::Construct()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87920);

	UWBP_PurchaseConfirmationButton_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.InitializeWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APUMG_HUD*                                   HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PurchaseConfirmationButton_C::InitializeWidget(class APUMG_HUD* HUD)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87919);

	UWBP_PurchaseConfirmationButton_C_InitializeWidget_Params params {};
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.ExecuteUbergraph_WBP_PurchaseConfirmationButton
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PurchaseConfirmationButton_C::ExecuteUbergraph_WBP_PurchaseConfirmationButton(int EntryPoint)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87918);

	UWBP_PurchaseConfirmationButton_C_ExecuteUbergraph_WBP_PurchaseConfirmationButton_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnRawClick__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_PurchaseConfirmationButton_C::OnRawClick__DelegateSignature()
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87917);

	UWBP_PurchaseConfirmationButton_C_OnRawClick__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.PurcaseItemWithPortalOffer__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_PortalOffer*                           PortalOffer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PurchaseConfirmationButton_C::PurcaseItemWithPortalOffer__DelegateSignature(class UPUMG_PortalOffer* PortalOffer)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87916);

	UWBP_PurchaseConfirmationButton_C_PurcaseItemWithPortalOffer__DelegateSignature_Params params {};
	params.PortalOffer = PortalOffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x024D5B40
//		Name   -> Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.PurcaseItemWithPrice__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPUMG_StoreItemPrice*                        Price                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PurchaseConfirmationButton_C::PurcaseItemWithPrice__DelegateSignature(class UPUMG_StoreItemPrice* Price)
{
	static UFunction* fn = UObject::GetObjectCasted<UFunction>(87915);

	UWBP_PurchaseConfirmationButton_C_PurcaseItemWithPrice__DelegateSignature_Params params {};
	params.Price = Price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
