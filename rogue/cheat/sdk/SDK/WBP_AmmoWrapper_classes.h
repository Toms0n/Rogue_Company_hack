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

// WidgetBlueprintGeneratedClass WBP_AmmoWrapper.WBP_AmmoWrapper_C
// 0x0028 (FullSize[0x0260] - InheritedSize[0x0238])
class UWBP_AmmoWrapper_C : public UUserWidget
{
public:
	class UHorizontalBox*                              AmmoWrapper;                                               // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AmmoCount_C*                            WBP_AmmoCount;                                             // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AmmoCount_C*                            WBP_AmmoCount_95;                                          // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_AmmoCount_C*>                    AmmoWidgets;                                               // 0x0250(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(27410);
		return ptr;
	}



	void GetAmmoWidgets(TArray<class UWBP_AmmoCount_C*>* AmmoWidgtes);
	void OnAmmoChanged(class UKSWeaponComponent* Weapon, unsigned char AmmoChange, bool BonusAmmo);
	void SetInitialAmmoCount(class UKSWeaponComponent* Weapon);
	void AddAmmoCount();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
