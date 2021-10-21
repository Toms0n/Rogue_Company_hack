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

// WidgetBlueprintGeneratedClass WBP_Social_Search_Tab.WBP_Social_Search_Tab_C
// 0x0028 (FullSize[0x05E8] - InheritedSize[0x05C0])
class UWBP_Social_Search_Tab_C : public UKSSocialSearchPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UKSTreeView*                                 Results;                                                   // 0x05C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Social_Search_bar_C*                    SearchBar;                                                 // 0x05D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                                     LastSelectedItem;                                          // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                               ClickSocialSearchTabSFX;                                   // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(78609);
		return ptr;
	}



	void ClearListFocus();
	void TryRecoverLastKnownListFocus();
	void GetFirstVisibleItem(class UKSTreeView* List, class UObject** Item);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void GetFocusTargets(TArray<class UWidget*>* Target);
	void ClearSearch();
	void HandlePlayerCardClicked(class UObject* Object);
	void InitializeWidget(class APUMG_HUD* HUD);
	void UninitializeWidget();
	void OnHide();
	void BndEvt__Results_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
	void BndEvt__Results_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
	void OnInputStateChange(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> InputState);
	void InitializeWidgetNavigation();
	void BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature();
	void BndEvt__SearchBar_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature();
	void BndEvt__SearchBar_K2Node_ComponentBoundEvent_4_OnSearchTermChange__DelegateSignature(const struct FText& SearchTerm);
	void ExecuteUbergraph_WBP_Social_Search_Tab(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
