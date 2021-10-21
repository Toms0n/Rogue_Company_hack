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

// WidgetBlueprintGeneratedClass WBP_WeaponMilestones.WBP_WeaponMilestones_C
// 0x0030 (FullSize[0x0550] - InheritedSize[0x0520])
class UWBP_WeaponMilestones_C : public UKSWeaponMilestoneDisplay
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0520(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UUniformGridPanel*                           EntryContainer;                                            // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WeaponMilestoneEntry_C*                 Milestone01;                                               // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WeaponMilestoneEntry_C*                 Milestone02;                                               // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WeaponMilestoneEntry_C*                 Milestone03;                                               // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WeaponMilestoneEntry_C*                 Milestone04;                                               // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(78727);
		return ptr;
	}



	int GetNumLockedEntries();
	void GetMilestoneEntries(TArray<class UKSWeaponMilestoneEntry*>* Entries);
	void InitializeWidget(class APUMG_HUD* HUD);
	void ExecuteUbergraph_WBP_WeaponMilestones(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
