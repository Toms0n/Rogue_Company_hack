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

// BlueprintGeneratedClass CamMod_Mantle.CamMod_Mantle_C
// 0x000C (FullSize[0x0074] - InheritedSize[0x0068])
class UCamMod_Mantle_C : public UCamMod_Master_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0068(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                MantleIndex;                                               // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(42112);
		return ptr;
	}



	void ShouldModifyCamera(bool* bSuccess);
	void PlayTimeline();
	void ExecuteUbergraph_CamMod_Mantle(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
