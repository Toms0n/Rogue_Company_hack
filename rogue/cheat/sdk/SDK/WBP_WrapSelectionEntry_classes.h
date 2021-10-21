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

// WidgetBlueprintGeneratedClass WBP_WrapSelectionEntry.WBP_WrapSelectionEntry_C
// 0x0019 (FullSize[0x0571] - InheritedSize[0x0558])
class UWBP_WrapSelectionEntry_C : public UKSWrapSelectionEntry
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0558(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                                    Root;                                                      // 0x0560(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KSCosmeticItemDisplay_C*                WBP_KSCosmeticItemDisplay;                                 // 0x0568(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               IsSelected;                                                // 0x0570(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(62555);
		return ptr;
	}



	bool NavigateConfirm();
	void DisplayWrap(class UKSWeaponAttachment* WeaponAttachment);
	void GamepadHover();
	void DisplaySelected(bool IsSelected);
	void DisplayEquipped(bool IsEquipped);
	void BndEvt__WBP_KSCosmeticItemDisplay_K2Node_ComponentBoundEvent_5_OnCosmeticClicked__DelegateSignature(class UWBP_KSCosmeticItemDisplay_C* Widget, const struct FCosmeticSlotDetails& CosmeticSlotDetails);
	void GamepadUnhover();
	void ExecuteUbergraph_WBP_WrapSelectionEntry(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
