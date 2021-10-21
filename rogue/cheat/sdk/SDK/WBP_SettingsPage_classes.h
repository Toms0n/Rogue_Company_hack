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

// WidgetBlueprintGeneratedClass WBP_SettingsPage.WBP_SettingsPage_C
// 0x0024 (FullSize[0x055C] - InheritedSize[0x0538])
class UWBP_SettingsPage_C : public UKSSettingsPage
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0538(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                                  PageScrollBox;                                             // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                SettingsGroupBox;                                          // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                              StartTranslationXAnim;                                     // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartOpacityAnim;                                          // 0x0554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AnimPlayTime;                                              // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(60133);
		return ptr;
	}



	class UScrollBox* GetScrollBox();
	void Add_Settings_Section_Widget(class UKSSettingsSection* Selection_Widget);
	void InitializeTickAnimations();
	void HandleShowPageAnimFinished();
	void HandleShowPageAnimUpdated(float ElapsedTime, float ElapsedAlpha);
	void HandleHidePageAnimFinished();
	void HandleHidePageAnimUpdated(float ElapsedTime, float ElapsedAlpha);
	void PlayShowPageAnim();
	void PlayHidePageAnim();
	void SetInitPageState();
	void Construct();
	void AddSettingsSectionWidget(class UKSSettingsSection* SettingsSection);
	void ExecuteUbergraph_WBP_SettingsPage(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
