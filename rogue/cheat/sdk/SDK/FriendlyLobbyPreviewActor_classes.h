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

// BlueprintGeneratedClass FriendlyLobbyPreviewActor.FriendlyLobbyPreviewActor_C
// 0x0008 (FullSize[0x0518] - InheritedSize[0x0510])
class AFriendlyLobbyPreviewActor_C : public AKSJobSelectPreviewActor_Lobby
{
public:
	class UPlayerInfoPrevwLoadoutComponent*            PlayerInfoLoadoutComponent;                                // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(245226);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
