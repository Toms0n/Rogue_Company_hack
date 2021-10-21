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

// BlueprintGeneratedClass CamMod_JumpLanding.CamMod_JumpLanding_C
// 0x0009 (FullSize[0x0071] - InheritedSize[0x0068])
class UCamMod_JumpLanding_C : public UCamMod_Master_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0068(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               WasJumping;                                                // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(42120);
		return ptr;
	}



	void ShouldModifyCamera(bool* bSuccess);
	void PlayTimeline();
	void OnCamModFinished();
	void ExecuteUbergraph_CamMod_JumpLanding(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
