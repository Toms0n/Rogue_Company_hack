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

// WidgetBlueprintGeneratedClass WBP_Challenge_Hub.WBP_Challenge_Hub_C
// 0x0098 (FullSize[0x0630] - InheritedSize[0x0598])
class UWBP_Challenge_Hub_C : public UKSOverlayTabHubBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0598(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      BG;                                                        // 0x05A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_148;                                                 // 0x05A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  SubviewStub3;                                              // 0x05B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             SubviewSwitcher;                                           // 0x05B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ChallengeView_DailyContracts_C*         WBP_ChallengeView_DailyContracts;                          // 0x05C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ChallengeView_SeasonalContracts_C*      WBP_ChallengeView_SeasonalContracts;                       // 0x05C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SidePanel_Left_C*                       WBP_SidePanel_Left;                                        // 0x05D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VerticalTabGroup_C*                     WBP_VerticalTabGroup;                                      // 0x05D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<struct FName, class UPUMG_Widget*>            ViewWidgetMap;                                             // 0x05E0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(88399);
		return ptr;
	}



	class UPUMG_Widget* GetCurrentViewWidget();
	TArray<class UPUMG_Widget*> GetAllViews();
	void Set_Context_Bar_Prompts();
	bool NavigateBack();
	void Bind_Vertical_Tab_Group();
	void InitializeWidget(class APUMG_HUD* HUD);
	void InitializeWidgetNavigation();
	void OnShown();
	void OnBackPrompt();
	void AddView(const struct FName& ViewName, const struct FOverlayTabViewRow& ViewInfo);
	void ClearAllViews();
	void PreConstruct(bool IsDesignTime);
	void SelectViewAndShow(const struct FName& ViewName);
	void OnTabsFocused();
	void OnViewFocused();
	void ExecuteUbergraph_WBP_Challenge_Hub(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
