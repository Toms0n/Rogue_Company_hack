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

// BlueprintGeneratedClass EmoteSoundManager.EmoteSoundManager_C
// 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
class AEmoteSoundManager_C : public AKSEmoteMusicManager
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(42463);
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
