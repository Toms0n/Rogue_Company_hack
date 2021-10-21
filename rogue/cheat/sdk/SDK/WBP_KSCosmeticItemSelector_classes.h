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

// WidgetBlueprintGeneratedClass WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C
// 0x0092 (FullSize[0x05AA] - InheritedSize[0x0518])
class UWBP_KSCosmeticItemSelector_C : public UKSCosmeticItemSelectorWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_KSCosmeticItemDisplay_C*                CosmeticItemDisplay;                                       // 0x0520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlatformInventoryItem*                      PlatformItem;                                              // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnItemHovered;                                             // 0x0530(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnItemUnhovered;                                           // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnItemSelected;                                            // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UPUMG_StoreItem*                             StoreItem;                                                 // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FCosmeticSlotDetails                        CosmeticDetails;                                           // 0x0568(0x0018) (Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               IsClearSlot;                                               // 0x0580(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_1LVA[0x7];                                     // 0x0581(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnPurchaseItem;                                            // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAkAudioEvent*                               HoverCosmeticItemSelectorSFX;                              // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UAkAudioEvent*                               ClickCosmeticItemSelectorSFX;                              // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               IsGamepadHovered;                                          // 0x05A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsSelected;                                                // 0x05A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(78582);
		return ptr;
	}



	void RefreshSelectedState();
	bool NavigateConfirm();
	void OnClickSound();
	void OnHoverSound();
	void Construct();
	void InitializeWidget(class APUMG_HUD* HUD);
	void OnCosmeticHover(const struct FCosmeticSlotDetails& CosmeticDetails, bool IsGamepad, class UWBP_KSCosmeticItemDisplay_C* Widget);
	void OnCosmeticUnhover();
	void OnCosmeticClicked(class UWBP_KSCosmeticItemDisplay_C* Widget, const struct FCosmeticSlotDetails& CosmeticSlotDetails);
	void GamepadHover();
	void GamepadUnhover();
	void SetSlotActive(bool Active);
	void SetItemOwned(class UPUMG_StoreItem* StoreItem);
	void SetItemEquipped(bool IsEquipped);
	void SetItemSelected(bool IsSelected);
	void ExecuteUbergraph_WBP_KSCosmeticItemSelector(int EntryPoint);
	void OnPurchaseItem__DelegateSignature(class UPUMG_StoreItem* StoreItem);
	void OnItemSelected__DelegateSignature(class UPlatformInventoryItem* PlatformItem, class UPUMG_StoreItem* StoreItem, class UWidget* Widget, const struct FCosmeticSlotDetails& CosmeticSlot);
	void OnItemUnhovered__DelegateSignature();
	void OnItemHovered__DelegateSignature(const struct FCosmeticSlotDetails& CosmeticDetails, class UPlatformInventoryItem* PlatformItem, class UPUMG_StoreItem* StoreItem);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
