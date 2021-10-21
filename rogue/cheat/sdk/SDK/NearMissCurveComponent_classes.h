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

// BlueprintGeneratedClass NearMissCurveComponent.NearMissCurveComponent_C
// 0x0008 (FullSize[0x0138] - InheritedSize[0x0130])
class UNearMissCurveComponent_C : public UKSNearMissComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0130(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(25585);
		return ptr;
	}



	void UpdateScalarTrack(const struct FName& TrackName, float TrackValue);
	void ExecuteUbergraph_NearMissCurveComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
