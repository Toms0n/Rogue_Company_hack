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

// BlueprintGeneratedClass NeutralBombZone.NeutralBombZone_C
// 0x0028 (FullSize[0x0498] - InheritedSize[0x0470])
class ANeutralBombZone_C : public AKSNeutralBombZone
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0470(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Z_Axis;                                                    // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    ZoneMaterial;                                              // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKSCharacterBase*                            BombHolderWhenArming;                                      // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                                NewVar_1;                                                  // 0x0490(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(33484);
		return ptr;
	}



	bool DoesLocalPlayerHaveBomb();
	void ReceiveBeginPlay();
	void UpdateZoneMaterial();
	void RoundSetup(const struct FRoundInitState& RoundInitState);
	void TeamUpdated();
	void Activated(bool bActive);
	void On_Objective_State_Changed();
	void ExecuteUbergraph_NeutralBombZone(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
