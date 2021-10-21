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

// WidgetBlueprintGeneratedClass WBP_RogueListing.WBP_RogueListing_C
// 0x00E8 (FullSize[0x0600] - InheritedSize[0x0518])
class UWBP_RogueListing_C : public UKSJobSelectionWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UGridPanel*                                  JobSelectionGrid;                                          // 0x0520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    JobSelectionGridOverlay;                                   // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ThrobberHorizontal_C*                   Loading;                                                   // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                LoadingWrapper;                                            // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                                Mask;                                                      // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    OuterSizeBox;                                              // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    RogueGridSizeBox;                                          // 0x0550(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              RoleFilters;                                               // 0x0558(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  ScrollBox_1;                                               // 0x0560(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RogueListingOfferPanel_C*               WBP_RogueListingOfferPanel;                                // 0x0568(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_JobGeneralButton_C*>             JobButtons;                                                // 0x0570(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnJobSelected;                                             // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnJobListReady;                                            // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AKSLobbyCharacter*                           MercSelectionCharacter;                                    // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ValidJobs;                                                 // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_W7UY[0x4];                                     // 0x05AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UKSJobRole*>                          JobRoles;                                                  // 0x05B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UKSItem*                                     CurrentlyHoveredJob;                                       // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSMercManager*                              MercManager;                                               // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bCurrentlyHoveredRogueOwned;                               // 0x05D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_032B[0x3];                                     // 0x05D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                GRID_WIDTH;                                                // 0x05D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSJobItem*                                  SelectedJob;                                               // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PreserveSelectedJobOnHide;                                 // 0x05E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_286C[0x3];                                     // 0x05E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DLC_OFFSET;                                                // 0x05E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   GRID_SIZE;                                                 // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   MASK_PADDING;                                              // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPUMG_StoreItem*                             AdStoreOffer;                                              // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(88514);
		return ptr;
	}



	void GotoAdOffer();
	void MakeFavorite();
	void OnGotoOffer(class UPUMG_StoreItem* StoreItem);
	void SetDLCDisplay(bool ShowDLC);
	void IsJobOwned(class UKSJobItem* JobItem, bool* owned);
	void SetRogueOwned(class UPUMG_StoreItem* StoreItem);
	void ResetFavoriteIcons();
	void OnJobHovered(class UKSJobItem* JobItem);
	bool NavigateBack();
	void PopulateRoleFilters();
	void GetJobButtons(TArray<class UWBP_JobGeneralButton_C*>* JobButtons);
	void SetRowAndColumn(class UGridSlot* GridSlot, int Index, int MaxRowCount);
	void ResetButtonState();
	void ResetJobList();
	void PopulateJobList();
	void InitializeTickAnimations();
	void OnShowScreenAnimUpdate(float ElapsedTime, float ElapsedAlpha);
	void OnShowScreenAnimFinished();
	void StartShowScreenAnim();
	void InitializeWidget(class APUMG_HUD* HUD);
	void HandleOnJobSelected(class UKSJobItem* SelectedJob);
	void OnShown();
	void ExternalOnShown();
	void InitializeWidgetNavigation();
	void OnBackPrompt();
	void HandleOnPurchasedItem(class UPUMG_StoreItem* Item, class UPUMG_StoreItemPrice* Price);
	void OnItemGamepadHovered(class UPUMG_Widget* Widget, bool bHovered);
	void OnHide();
	void BndEvt__WBP_RogueListingOfferPanel_K2Node_ComponentBoundEvent_0_OnOfferClicked__DelegateSignature(class UPUMG_StoreItem* StoreItem);
	void FocusGroupNavigateRightFailure(int FocusGroup);
	void FocusGroupNavigateLeftFailure(int FocusGroup);
	void ExecuteUbergraph_WBP_RogueListing(int EntryPoint);
	void OnJobListReady__DelegateSignature(TArray<class UWBP_JobGeneralButton_C*>* JobButtons);
	void OnJobSelected__DelegateSignature(class UKSJobItem* JobItem);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
