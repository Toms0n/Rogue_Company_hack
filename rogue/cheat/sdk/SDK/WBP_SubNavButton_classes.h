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

// WidgetBlueprintGeneratedClass WBP_SubNavButton.WBP_SubNavButton_C
// 0x0091 (FullSize[0x05A9] - InheritedSize[0x0518])
class UWBP_SubNavButton_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_subscreen_nav_tab_C*                    NavTab;                                                    // 0x0520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                NewIndicator;                                              // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CallToAction_C*                         WBP_CallToAction;                                          // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Message;                                                   // 0x0538(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FScriptMulticastDelegate                    OnClicked;                                                 // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnHovered;                                                 // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnUnhovered;                                               // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FName                                       TargetViewState;                                           // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FName>                               RelatedViewStates;                                         // 0x0588(0x0010) (Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnNonRouteClicked;                                         // 0x0598(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               UsesBattlePassColoring;                                    // 0x05A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(80343);
		return ptr;
	}



	void SetNewIndicator(bool Visible);
	void IsDisabled(bool* Disabled);
	void IsActive(bool* Active);
	void PreConstruct(bool IsDesignTime);
	void SetMessage(const struct FText& Message);
	void Construct();
	void DisableButton(bool IsDisabled);
	void SetActive(bool IsActive);
	void GamepadConfirm();
	void InitializeWidget(class APUMG_HUD* HUD);
	void NavTabSelected(class UKSNavTabWidget* SelectedNavTab);
	void ExecuteUbergraph_WBP_SubNavButton(int EntryPoint);
	void OnNonRouteClicked__DelegateSignature(class UKSWidget* ButtonClicked);
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnClicked__DelegateSignature(const struct FName& TargetViewState);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
