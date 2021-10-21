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

// WidgetBlueprintGeneratedClass WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C
// 0x0120 (FullSize[0x0638] - InheritedSize[0x0518])
class UWBP_QuickPlay_QueueButton_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            hoveranim;                                                 // 0x0520(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  ButtonText;                                                // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      WarningIcon;                                               // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Graphic_Button_C*                       WBP_Graphic_Button;                                        // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnQueueBtnClicked;                                         // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnQueueBtnHovered;                                         // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnQueueBtnUnhovered;                                       // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FClientQueueInfo                            QueueInfo;                                                 // 0x0570(0x00C8) (Edit, BlueprintVisible, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(71603);
		return ptr;
	}



	void UpdateStatus();
	bool NavigateConfirm();
	void BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_0_OnGraphicBtnClicked__DelegateSignature();
	void BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_1_OnGraphicBtnHovered__DelegateSignature(bool IsGamepad);
	void BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_2_OnGraphicBtnUnhovered__DelegateSignature();
	void InitializeWidget(class APUMG_HUD* HUD);
	void Construct();
	void OnButtonHovered();
	void OnButtonUnhovered();
	void GamepadHover();
	void GamepadUnhover();
	void GamepadConfirm();
	void SetButtonActive(bool bIsActive);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_QuickPlay_QueueButton(int EntryPoint);
	void OnQueueBtnUnhovered__DelegateSignature(class UWidget* UnhoverWidget);
	void OnQueueBtnHovered__DelegateSignature(class UWidget* HoveredWidget);
	void OnQueueBtnClicked__DelegateSignature(int QueueId);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
