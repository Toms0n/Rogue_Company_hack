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

// WidgetBlueprintGeneratedClass WBP_StandardButton_Currency.WBP_StandardButton_Currency_C
// 0x0038 (FullSize[0x0550] - InheritedSize[0x0518])
class UWBP_StandardButton_Currency_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Anim_OnHover;                                              // 0x0520(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  ButtonText;                                                // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_65;                                                  // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SizeBox_113;                                               // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Text_Price;                                                // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StandardButtonMedium_C*                 WBP_StandardButtonMedium;                                  // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(64698);
		return ptr;
	}



	void SetPrice(int Price);
	void GetGamepadPromptKey(bool* HasValidKeyPrompt, struct FKey* GamepadKey);
	void SetKeyPrompt(const struct FKey& GamepadButton);
	void SetDefaultDisplay();
	void SetWidth(float InWidth);
	void SetButtonText(const struct FText& ButtonText);
	void BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature(class UWidget* Widget);
	void BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature(class UWidget* Widget);
	void InitializeWidget(class APUMG_HUD* HUD);
	void ExecuteUbergraph_WBP_StandardButton_Currency(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
