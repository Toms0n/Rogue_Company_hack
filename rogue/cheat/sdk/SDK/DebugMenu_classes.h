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

// WidgetBlueprintGeneratedClass DebugMenu.DebugMenu_C
// 0x0038 (FullSize[0x0560] - InheritedSize[0x0528])
class UDebugMenu_C : public UKSDebugMenu
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0528(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      BackImage;                                                 // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                BaseCommandBox;                                            // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  CommandScroll;                                             // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ConfirmImage;                                              // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FDebugMenuCommandInfo>               CommandStack;                                              // 0x0550(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(63676);
		return ptr;
	}



	void CloseDebugMenu();
	KillstreakUINew_EConsoleCommandParamType GetParamTypeForSubCommand(const struct FString& BaseCommandString);
	void AddBaseCommandHeader(const struct FString& BaseCommand);
	bool NavigateBack();
	void CommandSelected(const struct FDebugMenuCommandInfo& Command);
	void MakeBoolSubmenu(TArray<struct FDebugMenuCommandInfo>* Array);
	void InternalPopulate(TArray<struct FDebugMenuCommandInfo>* Commands);
	void PopulateList(int Depth);
	void Construct();
	void OnShown();
	void OnHide();
	void InitializeWidgetNavigation();
	void ExecuteUbergraph_DebugMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
