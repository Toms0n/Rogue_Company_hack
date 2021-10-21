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

// WidgetBlueprintGeneratedClass WBP_CustomizeAvatar.WBP_CustomizeAvatar_C
// 0x00A0 (FullSize[0x05B8] - InheritedSize[0x0518])
class UWBP_CustomizeAvatar_C : public UKSPlayerCosmeticWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            ShowAnim;                                                  // 0x0520(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UKSSortableGridPanel*                        ItemContainer;                                             // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  ScrollBox_1;                                               // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CosmeticItem_Avatar_C*                  WBP_CosmeticItem_Avatar;                                   // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CosmeticItem_Avatar_C*                  WBP_CosmeticItem_Avatar_2;                                 // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CosmeticItem_Avatar_C*                  WBP_CosmeticItem_Avatar_3;                                 // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CosmeticItem_Avatar_C*                  WBP_CosmeticItem_Avatar_4;                                 // 0x0550(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CosmeticItem_Avatar_C*                  WBP_CosmeticItem_Avatar_5;                                 // 0x0558(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CosmeticItem_Avatar_C*                  WBP_CosmeticItem_Avatar_6;                                 // 0x0560(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CosmeticItem_Avatar_C*                  WBP_CosmeticItem_Avatar_7;                                 // 0x0568(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CosmeticItem_Avatar_C*                  WBP_CosmeticItem_Avatar_8;                                 // 0x0570(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CosmeticItem_Avatar_C*                  WBP_CosmeticItem_Avatar_9;                                 // 0x0578(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerIDCustomize_C*                    WBP_PlayerIDCustomize;                                     // 0x0580(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_CosmeticItem_Avatar_C*>          AvatarItems;                                               // 0x0588(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	class UWBP_CosmeticItem_Avatar_C*                  EquippedAvatar;                                            // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSLoadoutDataFactory*                       LoadoutDataFactory;                                        // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlatformInventoryItem*                      HoveredItem;                                               // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                VisibleGridRows;                                           // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                VisibleGridColumns;                                        // 0x05B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(89862);
		return ptr;
	}



	bool OnSortRarityDescNameAsc(class UWidget* LHS, class UWidget* RHS);
	bool NavigateBack();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void AddEmptySlots();
	void SetActiveStates(class UWBP_CosmeticItem_Avatar_C* ActiveWidget);
	void RegisterNavigation();
	void IsAvatarItemEquipped(class UKSItem* KSItem, bool* IsEquipped);
	void ResetAvatarSelection();
	void SetContextBar();
	void SetAvatarSelection();
	void OnShown();
	void OnBackPrompt();
	void InitializeWidgetNavigation();
	void InitializeWidget(class APUMG_HUD* HUD);
	void OnAvatarHover(class UPlatformInventoryItem* PlatformItem);
	void OnAvatarUnhover();
	void OnAvatarSelected(class UPlatformInventoryItem* PlatformItem, class UWidget* Widget);
	void OnAvatarGamepadHover(class UPUMG_Widget* Widget, bool bHovered);
	void OnHide();
	void ExecuteUbergraph_WBP_CustomizeAvatar(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
