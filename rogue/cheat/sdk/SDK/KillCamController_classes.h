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

// BlueprintGeneratedClass KillCamController.KillCamController_C
// 0x0008 (FullSize[0x0F10] - InheritedSize[0x0F08])
class AKillCamController_C : public AKSKillCamController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0F08(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(47640);
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_KillCamController(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
