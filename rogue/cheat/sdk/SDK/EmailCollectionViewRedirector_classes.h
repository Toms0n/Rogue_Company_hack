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

// BlueprintGeneratedClass EmailCollectionViewRedirector.EmailCollectionViewRedirector_C
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UEmailCollectionViewRedirector_C : public UKSEmailCollection_ViewRedirector
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(60587);
		return ptr;
	}



	class UKSActivityManagerBase* GetRelevantActivityManager(class UKSGameInstance* GameInstance);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
