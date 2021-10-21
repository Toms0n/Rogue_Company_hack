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

// BlueprintGeneratedClass RogueScreenPreviewActor_WithPose.RogueScreenPreviewActor_WithPose_C
// 0x0000 (FullSize[0x0518] - InheritedSize[0x0518])
class ARogueScreenPreviewActor_WithPose_C : public ARogueScreenPreviewActor_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(245098);
		return ptr;
	}



	class UClass* GetLobbyCharacterClassToUse(class UKSJobItem* JobToUse, class UKSSkinBundle* SkinToUse);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
