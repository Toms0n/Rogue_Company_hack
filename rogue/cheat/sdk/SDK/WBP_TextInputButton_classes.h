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

// WidgetBlueprintGeneratedClass WBP_TextInputButton.WBP_TextInputButton_C
// 0x0048 (FullSize[0x0560] - InheritedSize[0x0518])
class UWBP_TextInputButton_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     EmailInputButtonWrapper;                                   // 0x0520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      HoverBG;                                                   // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            InputField;                                                // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       HintText;                                                  // 0x0538(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FScriptMulticastDelegate                    OnTextChanged;                                             // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(60062);
		return ptr;
	}



	void FocusTextEntry();
	bool NavigateConfirm();
	void GetText(struct FText* Text);
	void SetHintText(const struct FText& HintText);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void InitializeWidget(class APUMG_HUD* HUD);
	void OnInputTextChanged(const struct FText& Text);
	void GamepadHover();
	void GamepadUnhover();
	void BndEvt__EmailInputButtonWrapper_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__EmailInputButtonWrapper_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_TextInputButton(int EntryPoint);
	void OnTextChanged__DelegateSignature(const struct FText& Text);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
