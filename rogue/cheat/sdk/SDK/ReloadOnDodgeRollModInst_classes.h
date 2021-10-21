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

// BlueprintGeneratedClass ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C
// 0x000C (FullSize[0x01CC] - InheritedSize[0x01C0])
class UReloadOnDodgeRollModInst_C : public UKSModInst_OnDodgeRoll
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                Previous_ammo_in_clip;                                     // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(27320);
		return ptr;
	}



	void MagDropForDodgeReload(class UKSWeaponComponent* Master_Weapon_Ref);
	bool StopAnimationFromEvent(const struct FName& AnimEventName, class UKSCharacterAnimInst* CharAnimInstance);
	bool ReactsToAnimationEvent(const struct FName& AnimEventName, int* Priority);
	void OnDodgeRoll(float RollDuration);
	void RemotePlayerAudio();
	void Dodge_Reload_Mod_Notified();
	void ExecuteUbergraph_ReloadOnDodgeRollModInst(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
