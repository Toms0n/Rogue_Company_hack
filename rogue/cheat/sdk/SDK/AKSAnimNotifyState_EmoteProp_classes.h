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

// BlueprintGeneratedClass AKSAnimNotifyState_EmoteProp.AKSAnimNotifyState_EmoteProp_C
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UAKSAnimNotifyState_EmoteProp_C : public UKSAnimNotifyState_EmoteProp
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(34231);
		return ptr;
	}



	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
	void OnStaticMeshComponentInitialized(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, class UStaticMeshComponent* SpawnedStaticMeshComponent);
	void OnSkeletalMeshComponentInitialized(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, class USkeletalMeshComponent* SpawnedSkeletalMeshComponent);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
