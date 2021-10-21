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

// WidgetBlueprintGeneratedClass WBP_SettingsGroup.WBP_SettingsGroup_C
// 0x0020 (FullSize[0x0568] - InheritedSize[0x0548])
class UWBP_SettingsGroup_C : public UKSSettingsGroup
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0548(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                MainSettingBox;                                            // 0x0550(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                SubSettingsBox;                                            // 0x0558(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              SubSettingsContainer;                                      // 0x0560(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(62576);
		return ptr;
	}



	void Add_Sub_Settings_Widget(class UKSSettingsContainer* Settings_Container);
	void Add_Main_Settings_Widget(class UKSSettingsContainer* Settings_Container);
	void AddSettingsWidget(class UKSSettingsContainer* Settings_Container, class UVerticalBox* Vertical_Box);
	void InitializeWidget(class APUMG_HUD* HUD);
	void AddSubSettingsContainerWidget(class UKSSettingsContainer* SettingsContainer);
	void AddMainSettingsContainerWidget(class UKSSettingsContainer* SettingsContainer);
	void ExecuteUbergraph_WBP_SettingsGroup(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
