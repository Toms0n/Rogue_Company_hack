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

// WidgetBlueprintGeneratedClass WBP_SettingsDropdown.WBP_SettingsDropdown_C
// 0x0010 (FullSize[0x0580] - InheritedSize[0x0570])
class UWBP_SettingsDropdown_C : public UKSSettingsWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0570(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDropdown_C*                                 Dropdown;                                                  // 0x0578(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(45090);
		return ptr;
	}



	void SetPreviewIndex(int Index, bool* Success);
	bool NavigateBack();
	bool NavigateConfirmPressed();
	bool NavigateConfirm();
	void SetDesiredIndex(int Index, bool* Success);
	void GetDirtyIndex(int* Index);
	void Set_Text_To_Index(int Index);
	void OnWidgetSettingsInfoSet();
	void Selection_Made(const struct FText& Text, int Index);
	void InitializeWidget(class APUMG_HUD* HUD);
	void GamepadHover();
	void InitializeWidgetNavigation();
	void FocusGroupNavigateDownFailure(int FocusGroup);
	void FocusGroupNavigateUpFailure(int FocusGroup);
	void OnSettingsInfoValueChanged(bool bChangedExternally);
	void HoverPreview(int Index);
	void SelectionCanceled();
	void ExecuteUbergraph_WBP_SettingsDropdown(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
