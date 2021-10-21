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

// BlueprintGeneratedClass BP_LobbyState.BP_LobbyState_C
// 0x0018 (FullSize[0x02A8] - InheritedSize[0x0290])
class ABP_LobbyState_C : public AGameState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AKSEmoteMusicManager*                        EmoteMusicManager;                                         // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(55191);
		return ptr;
	}



	class AKSEmoteMusicManager* GetEmoteMusicManager();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LobbyState(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
