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

// WidgetBlueprintGeneratedClass Dropdown.Dropdown_C
// 0x00D0 (FullSize[0x05E8] - InheritedSize[0x0518])
class UDropdown_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            hoveranim;                                                 // 0x0520(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      DropArrow;                                                 // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                                 DropdownAnchor;                                            // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      DropDownBkg;                                               // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     HitTarget;                                                 // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  SelectionText;                                             // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                        // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FText>                               Options;                                                   // 0x0560(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FText                                       DefaultSelection;                                          // 0x0570(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                HoverIndex;                                                // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SelectionIndex;                                            // 0x058C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       HintText;                                                  // 0x0590(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IgnoreFirst;                                               // 0x05A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IgnoreCanceled;                                            // 0x05A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4UZQ[0x6];                                     // 0x05AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDropdownList_C*                             DropdownList;                                              // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                               ClickDropdownSFX;                                          // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UAkAudioEvent*                               HoverDropdownSFX;                                          // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnHoverPreview;                                            // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnSelectionCanceled;                                       // 0x05D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(45019);
		return ptr;
	}



	void IsSelecting(bool* IsSelecting);
	bool NavigateConfirm();
	void AppendOptions(TArray<struct FText>* OptionsToAppend);
	void ForceClose();
	void ForceToggle();
	void ForceOpen();
	class UWidget* InitializeDropdownList();
	void SetSelectedOptionByIndex(int Index, bool* Success);
	void SetSelectedOptionByText(const struct FText& Text, bool* Success);
	void RemoveOptionByIndex(int Index, bool* Success);
	void RemoveOptionByText(const struct FText& Option, bool* Success);
	void GetSelectedOption(struct FText* Selection, int* Index);
	void GetOptionCount(int* Count);
	void FindIndexForOption(const struct FText& Option, bool* Success, int* Index);
	void FindOptionByIndex(int Index, bool* Success, struct FText* Option);
	void ClearSelection();
	void ClearOptions();
	void AddOption(const struct FText& OptionText);
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void SelectionMade(int Index, const struct FText& Selection);
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void SelectionCancel();
	void BndEvt__DropdownAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void HandleSetCurrentHoverIndex(int CurrentHoverIndex);
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void GamepadHover();
	void GamepadUnhover();
	void On_Selected();
	void Hover();
	void Unhover();
	void HoverPreview(int Index);
	void ExecuteUbergraph_Dropdown(int EntryPoint);
	void OnSelectionCanceled__DelegateSignature();
	void OnHoverPreview__DelegateSignature(int Index);
	void OnSelectionChanged__DelegateSignature(const struct FText& SelectionText, int SelectionIndex);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
