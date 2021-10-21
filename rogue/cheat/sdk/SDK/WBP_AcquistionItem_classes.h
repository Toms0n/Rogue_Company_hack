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

// WidgetBlueprintGeneratedClass WBP_AcquistionItem.WBP_AcquistionItem_C
// 0x0038 (FullSize[0x0550] - InheritedSize[0x0518])
class UWBP_AcquistionItem_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_KSCosmeticItemDisplay_C*                CosmeticItem;                                              // 0x0520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcquisitionItemData*                        AcquisitionItem;                                           // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnSlotSelected;                                            // 0x0530(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnSlotHover;                                               // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(80440);
		return ptr;
	}



	void OnSlotHovered(const struct FCosmeticSlotDetails& CosmeticSlotDetails, bool IsGamepad, class UWBP_KSCosmeticItemDisplay_C* Widget);
	void OnSlotClicked(class UWBP_KSCosmeticItemDisplay_C* Widget, const struct FCosmeticSlotDetails& CosmeticSlotDetails);
	void SetSlotItem(class UAcquisitionItemData* SlotItem);
	void InitializeWidget(class APUMG_HUD* HUD);
	void ExecuteUbergraph_WBP_AcquistionItem(int EntryPoint);
	void OnSlotHover__DelegateSignature(class UAcquisitionItemData* AcquisitionItem, class UKSWidget* Widget);
	void OnSlotSelected__DelegateSignature(class UAcquisitionItemData* AcquisitionItem);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
