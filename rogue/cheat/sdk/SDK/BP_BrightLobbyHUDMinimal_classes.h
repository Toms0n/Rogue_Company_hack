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

// BlueprintGeneratedClass BP_BrightLobbyHUDMinimal.BP_BrightLobbyHUDMinimal_C
// 0x0008 (FullSize[0x06B8] - InheritedSize[0x06B0])
class ABP_BrightLobbyHUDMinimal_C : public AKSLobbyHUDNew
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(55208);
		return ptr;
	}



	void CallRemoveTopViewRoute(bool ForceTransition, bool* ViewChanged);
	void CallAddViewRoute(const struct FName& RouteName, bool ClearRouteStack, bool ForceTransition, bool* ViewChanged);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
