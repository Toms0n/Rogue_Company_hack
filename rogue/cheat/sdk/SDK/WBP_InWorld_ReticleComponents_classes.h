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

// WidgetBlueprintGeneratedClass WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C
// 0x0030 (FullSize[0x0268] - InheritedSize[0x0238])
class UWBP_InWorld_ReticleComponents_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UInvalidationBox*                            InvalidationBox_1;                                         // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AbilityDurationBar_C*                   WBP_AbilityDurationBar;                                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AmmoWrapper_C*                          WBP_AmmoWrapper;                                           // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UKSModInst_Activated*>                ModInstances;                                              // 0x0258(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(27798);
		return ptr;
	}



	void Check_For_Active_View_Mode_Mod(bool* ModsActive);
	void SetWeaponComponent(class UKSWeaponComponent* WeaponComponent);
	void SetPlayerState(class APlayerState* PlayerState);
	void SetAmmoColor(bool IsActive);
	void OnPossession(class APlayerState* PlayerState);
	void OnWeaponSet(class UKSWeaponComponent* WeaponComponent);
	void OnModActivated(bool bActive);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_InWorld_ReticleComponents(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
