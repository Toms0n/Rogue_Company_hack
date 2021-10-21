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

// WidgetBlueprintGeneratedClass WBP_VerticalTabGroup.WBP_VerticalTabGroup_C
// 0x0030 (FullSize[0x0548] - InheritedSize[0x0518])
class UWBP_VerticalTabGroup_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                EntryContainer;                                            // 0x0520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnSubviewFocus;                                            // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnSubviewChange;                                           // 0x0538(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(61123);
		return ptr;
	}



	void RevertGamepadSelected();
	void Display_Gamepad_Selected(const struct FName& ViewName);
	void SelectEntryByName(const struct FName& ViewName, class UWBP_VerticalTabGroupEntry_C** Selected_Entry);
	void ClearEntries();
	void AddEntry(const struct FName& ViewName, const struct FOverlayTabViewRow& ViewInfo);
	void GetEntries(TArray<class UWBP_VerticalTabGroupEntry_C*>* Return_Value);
	void Handle_Tab_Selected(const struct FName& View_Name);
	void Handle_Tab_Gamepad_Selected(const struct FName& View_Name);
	void ExecuteUbergraph_WBP_VerticalTabGroup(int EntryPoint);
	void OnSubviewChange__DelegateSignature(const struct FName& ViewName);
	void OnSubviewFocus__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
