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

// BlueprintGeneratedClass DamageResistModInst.DamageResistModInst_C
// 0x0008 (FullSize[0x01C0] - InheritedSize[0x01B8])
class UDamageResistModInst_C : public UKSPlayerModInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(27288);
		return ptr;
	}



	void OnNewCharacterFoundation();
	void DamageTaken(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ExecuteUbergraph_DamageResistModInst(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
