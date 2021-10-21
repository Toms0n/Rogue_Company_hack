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

// WidgetBlueprintGeneratedClass WBP_RogueCustomizationSelector.WBP_RogueCustomizationSelector_C
// 0x0200 (FullSize[0x0748] - InheritedSize[0x0548])
class UWBP_RogueCustomizationSelector_C : public UKSCustomizationSelection
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0548(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Show;                                                      // 0x0550(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  ActionBtnText;                                             // 0x0558(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSSortableGridPanel*                        CommunicationCosmeticItemContainer;                        // 0x0560(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSScrollBox*                                CommunicationScrollbox;                                    // 0x0568(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              CompleteCosmeticSlotNavBar;                                // 0x0570(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             CosmeticSwitcher;                                          // 0x0578(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSSortableGridPanel*                        EmoteCosmeticItemContainer;                                // 0x0580(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSScrollBox*                                EmoteScrollbox;                                            // 0x0588(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ButtonStacked_C*                        EquipCosmeticBtn;                                          // 0x0590(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      EquippedGamepadIcon;                                       // 0x0598(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      FakeFill;                                                  // 0x05A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSSortableGridPanel*                        OutfitCosmeticItemContainer;                               // 0x05A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSScrollBox*                                OutfitScrollbox;                                           // 0x05B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSSortableGridPanel*                        QuipCosmeticItemContainer;                                 // 0x05B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSScrollBox*                                QuipScrollbox;                                             // 0x05C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSAsyncImage*                               RogueIcon;                                                 // 0x05C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSSortableGridPanel*                        SprayCosmeticItemContainer;                                // 0x05D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AsyncIcon_C*                            SprayImage;                                                // 0x05D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SprayImageContainer;                                       // 0x05E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSScrollBox*                                SprayScrollbox;                                            // 0x05E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      TabLeftButtonImage;                                        // 0x05F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      TabRightButtonImage;                                       // 0x05F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CosmeticSlotNavTab_C*                   WBP_CommunicationsCosmeticSlotNavTab;                      // 0x0600(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CosmeticSlotNavTab_C*                   WBP_EmotesCosmeticSlotNavTab;                              // 0x0608(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemInfoContainer_Description_C*        WBP_ItemInfoContainer_Description;                         // 0x0610(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CosmeticSlotNavTab_C*                   WBP_OutfitsCosmeticSlotNavTab;                             // 0x0618(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CosmeticSlotNavTab_C*                   WBP_QuipsCosmeticSlotNavTab;                               // 0x0620(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CosmeticSlotNavTab_C*                   WBP_SpraysCosmeticSlotNavTab;                              // 0x0628(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CosmeticSlotNavTab_C*                   WBP_WingsuitsCosmeticSlotNavTab;                           // 0x0630(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CosmeticSlotNavTab_C*                   WBP_WrapsCosmeticSlotNavTab;                               // 0x0638(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSSortableGridPanel*                        WingsuitCosmeticItemContainer;                             // 0x0640(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSScrollBox*                                WingsuitScrollbox;                                         // 0x0648(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSSortableGridPanel*                        WrapCosmeticItemContainer;                                 // 0x0650(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSScrollBox*                                WrapScrollbox;                                             // 0x0658(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_KSCosmeticItemSelector_C*>       CosmeticItems;                                             // 0x0660(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnEquipCosmeticItem;                                       // 0x0670(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FCosmeticSlotDetails                        CosmeticSlotDetail;                                        // 0x0680(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UKSMercManager*                              MercManager;                                               // 0x0698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSLoadoutDataFactory*                       LoadoutDataFactory;                                        // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKSLobbyCharacter*                           MercSelectionCharacter;                                    // 0x06A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSItem*                                     SelectedCosmeticKSItem;                                    // 0x06B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSWeaponAsset*                              WingSuitAsset;                                             // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_KSCosmeticItemSelector_C*               EquippedSlot;                                              // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSItem*                                     HoveredItem;                                               // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                               ShowEquipAllRogueCustomSelectSFX;                          // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UAkAudioEvent*                               WingsuitEquipSound;                                        // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                               SprayEquipSound;                                           // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                               WrapEmoteEquipSound;                                       // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKSVoicelineEvent                           Skin_Preview_Line;                                         // 0x06F0(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UAkAudioEvent*                               SkinEquipSound;                                            // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPUMG_StoreItem*                             SelectedStoreItem;                                         // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPUMG_StoreItem*                             ReturnToItemSelection;                                     // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPUMG_StoreItem*                             HoveredStoreItem;                                          // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(88674);
		return ptr;
	}



	void OnBumperTab(bool bNext);
	void SelectTabBasedOnCosmeticSlot();
	void SetUpNavFromNews(class UKSCosmeticSlotDetails* Details);
	void SetCosmeticSelectionFromClass(class UKSCosmeticSlotDetails* SlotDetails);
	void GetSelectedStoreItem(class UPUMG_StoreItem** StoreItem);
	void GetPrimaryItem(class UKSItem** KSItem);
	void Create_Cosmetic_Item_Selector(class UKSItem* KSItem, class UPUMG_StoreItem* StoreItem);
	void SoundPlayCosmeticEquip(Killstreak_EMercCosmeticSlot CosmeticType);
	void GetActiveTabFocusGroup(int* ActiveTabFocusGroup);
	void ReevaluateGamepadTabImageVisibility();
	void GetAdjustedCosmeticSlot(class UPlatformInventoryItem* OriginalItem, Killstreak_EMercCosmeticSlot OriginalCosmeticSlot, Killstreak_EMercCosmeticSlot* AdjustedCosmeticSlot);
	void AddActiveCosmeticSlot(Killstreak_EMercCosmeticSlot NewCosmeticSlot);
	void ChangeCosmeticSlotTab(class UKSNavTabWidget* Tab);
	void SetupCosmeticSlots();
	bool OnSortRarityDescNameAsc(class UWidget* LHS, class UWidget* RHS);
	void IsEquipAllAllowed(class UKSItem* Item, bool* CanEquipAll);
	void DisplayEquipAllPrompt();
	void OnEquipAll();
	void SetEmoteModel(class UKSItem* CosmeticItem);
	void SetEquippedItem(bool IsEquipped, class UWBP_KSCosmeticItemSelector_C* CosmeticItemSlot, class UKSItem* KSItem, class UPUMG_StoreItem* StoreItem);
	void SetOwnedItem(class UPUMG_StoreItem* StoreItem);
	void OnPurchaseItem(class UPUMG_StoreItem* StoreItem);
	void AddClearCosmeticSlot(class UKSSortableGridPanel* ItemContainer);
	void IsItemEquipped(class UKSItem* KSItem, bool* IsEquipped);
	void Set_Active_States(class UWBP_KSCosmeticItemSelector_C* ActiveWidget);
	void SetEquipBtn();
	void SetWingSuitModel(class UKSItem* CosmeticItem);
	void ResetSprayIcon();
	void ResetModels();
	void SetEmoteImage(class UKSItem* CosmeticItem);
	void ResetCharacter();
	void SetWeapon(class UKSItem* CosmeticItem, class UKSJobItem* JobItem, Killstreak_EWeaponSlot WeaponSlot);
	void Set_Model_Viewer(class UPlatformInventoryItem* CosmeticItem, const struct FCosmeticSlotDetails& CosmeticDetail);
	void SetCharacterSkin(class UKSItem* CosmeticItem, class UKSJobItem* JobItem);
	bool NavigateBack();
	void SetContextBar();
	void UpdateNavigation();
	void RegisterNavigation();
	void ResetCosmeticSelection();
	void SetCosmeticSelection(const struct FCosmeticSlotDetails& CosmeticDetails);
	void ClearDataOnInitialize();
	void InitializeWidget(class APUMG_HUD* HUD);
	void OnHover(const struct FCosmeticSlotDetails& CosmeticDetails, class UPlatformInventoryItem* PlatformItem, class UPUMG_StoreItem* StoreItem);
	void OnUnhover();
	void OnSelectCosmetic(class UPlatformInventoryItem* PlatformItem, class UPUMG_StoreItem* StoreItem, class UWidget* Widget, const struct FCosmeticSlotDetails& CosmeticDetails);
	void OnShown();
	void OnBackPrompt();
	void InitializeWidgetNavigation();
	void EquipCosmetic();
	void OnHide();
	void HandleInputStateChanged(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState);
	void OnItemGamepadHovered(class UPUMG_Widget* Widget, bool bHovered);
	void Return_To_Job_Preview_Model(class UKSItem* Cosmetic_Item);
	void Hide_Preview_Character();
	void Show_Preview_Character();
	void ChangeToNewTab();
	void ExecuteUbergraph_WBP_RogueCustomizationSelector(int EntryPoint);
	void OnEquipCosmeticItem__DelegateSignature(Killstreak_EMercCosmeticSlot SlotType, int SlotIndex, class UKSItem* Item);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
