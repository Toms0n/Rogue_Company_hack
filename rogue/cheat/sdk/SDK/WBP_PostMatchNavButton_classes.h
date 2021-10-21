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

// WidgetBlueprintGeneratedClass WBP_PostMatchNavButton.WBP_PostMatchNavButton_C
// 0x0040 (FullSize[0x0558] - InheritedSize[0x0518])
class UWBP_PostMatchNavButton_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Hover;                                                     // 0x0520(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_subscreen_nav_tab_C*                    WBP_subscreen_nav_tab;                                     // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnClicked;                                                 // 0x0530(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FText                                       ButtonTextMsg;                                             // 0x0540(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(86173);
		return ptr;
	}



	bool NavigateConfirm();
	void GamepadConfirm();
	void SetActive(bool IsActive);
	void Construct();
	void InitializeWidget(class APUMG_HUD* HUD);
	void PreConstruct(bool IsDesignTime);
	void HandleNavTabSelected(class UKSNavTabWidget* SelectedNavTab);
	void ExecuteUbergraph_WBP_PostMatchNavButton(int EntryPoint);
	void OnClicked__DelegateSignature(class UWBP_PostMatchNavButton_C* SelectedWidget);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
