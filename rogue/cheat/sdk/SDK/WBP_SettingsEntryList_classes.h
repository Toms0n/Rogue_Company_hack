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

// WidgetBlueprintGeneratedClass WBP_SettingsEntryList.WBP_SettingsEntryList_C
// 0x0028 (FullSize[0x0598] - InheritedSize[0x0570])
class UWBP_SettingsEntryList_C : public UKSSettingsWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0570(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                                    Overlay_56;                                                // 0x0578(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDropdownList_C*                             DropdownList;                                              // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnSelection;                                               // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(61153);
		return ptr;
	}



	void SetDesiredIndex(int Index, bool* Success);
	bool NavigateBack();
	bool NavigateConfirmPressed();
	bool NavigateConfirm();
	void GetDirtyIndex(int* Index);
	void OnWidgetSettingsInfoSet();
	void Selection_Made(int Index, const struct FText& Text);
	void ExecuteUbergraph_WBP_SettingsEntryList(int EntryPoint);
	void OnSelection__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
