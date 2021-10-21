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

// WidgetBlueprintGeneratedClass WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C
// 0x0040 (FullSize[0x0558] - InheritedSize[0x0518])
class UWBP_Player_Card_Social_Entry_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Social_Accordian_Header_C*              Header;                                                    // 0x0520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             MainSwitcher;                                              // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_player_card_module_C*                   PlayerCard;                                                // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    PlayerCardContainer;                                       // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnClicked;                                                 // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UKSDataSocialPlayer*                         CurrentData;                                               // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(78832);
		return ptr;
	}



	void SetCurrentInfoContainer(class UObject* InfoContainer);
	void UpdatePlayerCard(class UKSPlayerInfo* playerinfo);
	void SetHoverState(bool IsHovered);
	void GetDisplayItem(class UKSWidget** ActiveDisplayItem);
	void UpdateDataItem(class UObject* Data);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnEntryReleased();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void InitializeWidget(class APUMG_HUD* HUD);
	void UninitializeWidget();
	void OnHeaderClicked(class UUserWidget* Widget);
	void OnPlayerClicked(class UWBP_player_card_module_C* Selected_Player_Card);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnShown();
	void HandlePlayerContainerUpdate(class UKSPlayerInfo* playerinfo);
	void ExecuteUbergraph_WBP_Player_Card_Social_Entry(int EntryPoint);
	void OnClicked__DelegateSignature(class UUserWidget* Item);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
