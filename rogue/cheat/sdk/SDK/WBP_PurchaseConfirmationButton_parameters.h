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

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.UpdateHoldDurationDisplay
struct UWBP_PurchaseConfirmationButton_C_UpdateHoldDurationDisplay_Params
{
	float                                              fPercentage;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.ClearPurchaseHoldBinding
struct UWBP_PurchaseConfirmationButton_C_ClearPurchaseHoldBinding_Params
{
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.On Purchase Hold Event
struct UWBP_PurchaseConfirmationButton_C_On_Purchase_Hold_Event_Params
{
	KillstreakUINew_EContextPromptHoldReleaseState     Event;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.Can Prompt Store Redirect
struct UWBP_PurchaseConfirmationButton_C_Can_Prompt_Store_Redirect_Params
{
	bool                                               Return_Value;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.Store Redirect
struct UWBP_PurchaseConfirmationButton_C_Store_Redirect_Params
{
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.DisableButton
struct UWBP_PurchaseConfirmationButton_C_DisableButton_Params
{
	bool                                               IsDisabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.StartConfirmHold
struct UWBP_PurchaseConfirmationButton_C_StartConfirmHold_Params
{
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.ClearConfirmHold
struct UWBP_PurchaseConfirmationButton_C_ClearConfirmHold_Params
{
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.UpdateGamepadPromptDisplay
struct UWBP_PurchaseConfirmationButton_C_UpdateGamepadPromptDisplay_Params
{
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputMode;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnButtonUnhovered
struct UWBP_PurchaseConfirmationButton_C_OnButtonUnhovered_Params
{
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnButtonHovered
struct UWBP_PurchaseConfirmationButton_C_OnButtonHovered_Params
{
	bool                                               IsGamepad;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnButtonClicked
struct UWBP_PurchaseConfirmationButton_C_OnButtonClicked_Params
{
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.SetPortalOffer
struct UWBP_PurchaseConfirmationButton_C_SetPortalOffer_Params
{
	class UPUMG_PortalOffer*                           PortalOffer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.SetRawText
struct UWBP_PurchaseConfirmationButton_C_SetRawText_Params
{
	struct FText                                       ButtonText;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.SetAdditionalCurrencyPurchasePrice
struct UWBP_PurchaseConfirmationButton_C_SetAdditionalCurrencyPurchasePrice_Params
{
	class UKSStoreItemWithPurchaseData*                AdditionalCurrencyPurchaseInfo;                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.SetStorePrice
struct UWBP_PurchaseConfirmationButton_C_SetStorePrice_Params
{
	class UPUMG_StoreItemPrice*                        ItemPrice;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ItemPurchaseQuantity;                                      // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.PreConstruct
struct UWBP_PurchaseConfirmationButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.Construct
struct UWBP_PurchaseConfirmationButton_C_Construct_Params
{
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.InitializeWidget
struct UWBP_PurchaseConfirmationButton_C_InitializeWidget_Params
{
	class APUMG_HUD*                                   HUD;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.ExecuteUbergraph_WBP_PurchaseConfirmationButton
struct UWBP_PurchaseConfirmationButton_C_ExecuteUbergraph_WBP_PurchaseConfirmationButton_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnRawClick__DelegateSignature
struct UWBP_PurchaseConfirmationButton_C_OnRawClick__DelegateSignature_Params
{
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.PurcaseItemWithPortalOffer__DelegateSignature
struct UWBP_PurchaseConfirmationButton_C_PurcaseItemWithPortalOffer__DelegateSignature_Params
{
	class UPUMG_PortalOffer*                           PortalOffer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.PurcaseItemWithPrice__DelegateSignature
struct UWBP_PurchaseConfirmationButton_C_PurcaseItemWithPrice__DelegateSignature_Params
{
	class UPUMG_StoreItemPrice*                        Price;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
