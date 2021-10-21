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

// WidgetBlueprintGeneratedClass WBP_Context_Bar.WBP_Context_Bar_C
// 0x0040 (FullSize[0x05D0] - InheritedSize[0x0590])
class UWBP_Context_Bar_C : public UKSContextBarWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0590(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            MobileLayout;                                              // 0x0598(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                              CenterPromptsContainer;                                    // 0x05A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      FooterBG;                                                  // 0x05A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              LeftPromptsContainer;                                      // 0x05B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              RightPromptsContainer;                                     // 0x05B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> CurrentInputState;                                         // 0x05C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4QT8[0x7];                                     // 0x05C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDataTable*                                  ViewTable;                                                 // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(57522);
		return ptr;
	}



	void RefreshContextButtons(TArray<class UContextActionData*>* ContextActions, bool AlwaysShow, bool ClearChildren);
	void HandleInputStateChange(TEnumAsByte<PlatformGameFramework_EPGAME_INPUT_STATE> CurrentInputState);
	bool CanCloseOnLogout();
	void InitializeWidget(class APUMG_HUD* HUD);
	void UpdateContextActions(TArray<class UContextActionData*> ContextActions, const struct FName& CurrentRoute);
	void ExecuteUbergraph_WBP_Context_Bar(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
