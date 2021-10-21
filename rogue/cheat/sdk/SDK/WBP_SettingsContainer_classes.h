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

// WidgetBlueprintGeneratedClass WBP_SettingsContainer.WBP_SettingsContainer_C
// 0x0048 (FullSize[0x0580] - InheritedSize[0x0538])
class UWBP_SettingsContainer_C : public UKSSettingsContainer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0538(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            RowFocus;                                                  // 0x0540(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      Image_160;                                                 // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  SettingDisplayName;                                        // 0x0550(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              SettingWidgetBox;                                          // 0x0558(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAkAudioEvent*                               HoverSettingsContainerSFX;                                 // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UKSWidget*                                   PreviewWidget;                                             // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnAddToPreview;                                            // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(60455);
		return ptr;
	}



	void GetPreviewWidget(class UKSWidget** PreviewWidget);
	void Add_Setting_Widget_To_Box(class UKSSettingsWidget* Setting_Widget);
	void SettingsContainerHoverSFX();
	void OnContainerConfigSet();
	void AddSettingsWidget(class UKSSettingsWidget* SettingsWidget);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void PlayHoverAnim();
	void PlayUnhoverAnim();
	void AddPreviewWidget(class UKSSettingsPreview* PreviewWidget);
	void ExecuteUbergraph_WBP_SettingsContainer(int EntryPoint);
	void OnAddToPreview__DelegateSignature(class UKSWidget* PreviewWidget);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
