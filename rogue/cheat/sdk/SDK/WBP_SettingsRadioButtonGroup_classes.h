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

// WidgetBlueprintGeneratedClass WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C
// 0x0028 (FullSize[0x0598] - InheritedSize[0x0570])
class UWBP_SettingsRadioButtonGroup_C : public UKSSettingsWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0570(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                              RadioButtonBox;                                            // 0x0578(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                      Settings_Radio_Button;                                     // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_SettingsRadio_C*>                Radio_Buttons;                                             // 0x0588(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(45115);
		return ptr;
	}



	bool NavigateBack();
	void Set_Selection_To_Index(int Index);
	void Get_Dirty_Index(int* Index);
	void Set_Desired_Index(int Index, bool* Success);
	void OnWidgetSettingsInfoSet();
	void On_Radio_Button_Clicked(class UWBP_SettingsRadio_C* Radio_Button);
	void On_Setting_Value_Changed(bool bChangedExternally);
	void GamepadHover();
	void InitializeWidgetNavigation();
	void FocusGroupNavigateDownFailure(int FocusGroup);
	void FocusGroupNavigateUpFailure(int FocusGroup);
	void ExecuteUbergraph_WBP_SettingsRadioButtonGroup(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
