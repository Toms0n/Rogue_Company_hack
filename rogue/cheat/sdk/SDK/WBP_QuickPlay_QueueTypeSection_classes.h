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

// WidgetBlueprintGeneratedClass WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C
// 0x00E8 (FullSize[0x0600] - InheritedSize[0x0518])
class UWBP_QuickPlay_QueueTypeSection_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  ButtonText;                                                // 0x0520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Graphic_Button_C*                       CustomButton;                                              // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              CustomMatchBtn;                                            // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                QueueButtonsContainer;                                     // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_QuickPlay_QueueTypeHeader_C*            QueueTypeHeader;                                           // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      WarningIcon;                                               // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_QuickPlay_QueueButton_C*                WBP_QuickPlay_QueueButton;                                 // 0x0550(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_QuickPlay_QueueButton_C*                WBP_QuickPlay_QueueButton_108;                             // 0x0558(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FQueueSection                               QueueSectionInfo;                                          // 0x0560(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FScriptMulticastDelegate                    OnQueueSelected;                                           // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnQueueHovered;                                            // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnQueueUnhovered;                                          // 0x0598(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UWBP_QuickPlay_QueueButton_C*>        QueueButtons;                                              // 0x05A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnQueuePopulated;                                          // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FClientQueueInfo>                    AssociatedQueues;                                          // 0x05C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnCustomMatchSelected;                                     // 0x05D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnCustomMatchPopulated;                                    // 0x05E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UKSQueueDataFactory*                         KSQueueDataFactory;                                        // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(71688);
		return ptr;
	}



	void ResetQueueButtons();
	void GetQueueButtons(TArray<class UWBP_QuickPlay_QueueButton_C*>* Buttons);
	void PopulateSection(const struct FQueueSection& QueueSectionInfo);
	void Construct();
	void HandleOnQueueClicked(int QueueId);
	void HandleOnQueueHovered(class UWidget* Widget);
	void HandleOnQueueUnhovered(class UWidget* Widget);
	void HandleCustomBtnHovered(bool IsGamepad);
	void HandleCustomBtnUnhovered();
	void HandleCustomBtnClicked();
	void OnInitialized();
	void ExecuteUbergraph_WBP_QuickPlay_QueueTypeSection(int EntryPoint);
	void OnCustomMatchPopulated__DelegateSignature(TArray<class UKSWidget*>* Buttons);
	void OnCustomMatchSelected__DelegateSignature();
	void OnQueuePopulated__DelegateSignature(TArray<class UWBP_QuickPlay_QueueButton_C*>* QueueButton);
	void OnQueueUnhovered__DelegateSignature(class UWidget* Widget);
	void OnQueueHovered__DelegateSignature(class UWidget* Widget);
	void OnQueueSelected__DelegateSignature(int QueueId);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
