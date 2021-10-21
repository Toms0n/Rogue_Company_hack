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
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C
// 0x00B1 (FullSize[0x05C9] - InheritedSize[0x0518])
class UWBP_PurchaseConfirmationButton_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            OnGamepadHover;                                            // 0x0520(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_StoreDiscountTagPriceButton_C*          DiscountTag;                                               // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyCallout_C*                           GamepadPrompt;                                             // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    GamepadPromptHolder;                                       // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ButtonStacked_C*                        MainButton;                                                // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    PressAndHoldWrapper;                                       // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StorePriceTag_C*                        PriceTag;                                                  // 0x0550(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ProgressCircle;                                            // 0x0558(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  UnlockText;                                                // 0x0560(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               InHoverState;                                              // 0x0568(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VTC4[0x7];                                     // 0x0569(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPUMG_PortalOffer*                           PortalOffer;                                               // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPUMG_StoreItemPrice*                        StorePrice;                                                // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    PurcaseItemWithPrice;                                      // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    PurcaseItemWithPortalOffer;                                // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               IsHoldingConfirm;                                          // 0x05A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ORIU[0x7];                                     // 0x05A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRawClick;                                                // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                PurchaseQuantity;                                          // 0x05B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CQ69[0x4];                                     // 0x05BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSingleAction;                                            // 0x05C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(87914);
		return ptr;
	}



	void UpdateHoldDurationDisplay(float fPercentage);
	void ClearPurchaseHoldBinding();
	void On_Purchase_Hold_Event(KillstreakUINew_EContextPromptHoldReleaseState Event);
	void Can_Prompt_Store_Redirect(bool* Return_Value);
	void Store_Redirect();
	void DisableButton(bool IsDisabled);
	void StartConfirmHold();
	void ClearConfirmHold();
	void UpdateGamepadPromptDisplay(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputMode);
	void OnButtonUnhovered();
	void OnButtonHovered(bool IsGamepad);
	void OnButtonClicked();
	void SetPortalOffer(class UPUMG_PortalOffer* PortalOffer);
	void SetRawText(const struct FText& ButtonText);
	void SetAdditionalCurrencyPurchasePrice(class UKSStoreItemWithPurchaseData* AdditionalCurrencyPurchaseInfo);
	void SetStorePrice(class UPUMG_StoreItemPrice* ItemPrice, int ItemPurchaseQuantity, class UPUMG_StoreItem* StoreItem);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void InitializeWidget(class APUMG_HUD* HUD);
	void ExecuteUbergraph_WBP_PurchaseConfirmationButton(int EntryPoint);
	void OnRawClick__DelegateSignature();
	void PurcaseItemWithPortalOffer__DelegateSignature(class UPUMG_PortalOffer* PortalOffer);
	void PurcaseItemWithPrice__DelegateSignature(class UPUMG_StoreItemPrice* Price);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
