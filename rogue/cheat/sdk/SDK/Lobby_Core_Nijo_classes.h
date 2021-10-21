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

// BlueprintGeneratedClass Lobby_Core_Nijo.Lobby_Core_Nijo_C
// 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
class ALobby_Core_Nijo_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(245313);
		return ptr;
	}



	void BndEvt__MainLobbyCamera_K2Node_ActorBoundEvent_0_TakeRadialDamageSignature__DelegateSignature(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
	void ExecuteUbergraph_Lobby_Core_Nijo(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
