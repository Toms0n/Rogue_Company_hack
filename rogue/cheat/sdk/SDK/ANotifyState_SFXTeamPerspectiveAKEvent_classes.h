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

// BlueprintGeneratedClass ANotifyState_SFXTeamPerspectiveAKEvent.ANotifyState_SFXTeamPerspectiveAKEvent_C
// 0x0000 (FullSize[0x005D] - InheritedSize[0x005D])
class UANotifyState_SFXTeamPerspectiveAKEvent_C : public UANotifyState_SFXAKEvent_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(26525);
		return ptr;
	}



	void SetTeamPerspective(class USkeletalMeshComponent* MeshComp);
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
