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

// BlueprintGeneratedClass BloodEffectCurveComponent.BloodEffectCurveComponent_C
// 0x0008 (FullSize[0x0140] - InheritedSize[0x0138])
class UBloodEffectCurveComponent_C : public UKSBloodSplatterComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0138(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(25221);
		return ptr;
	}



	void UpdateScalarTrack(const struct FName& TrackName, float TrackValue);
	void ExecuteUbergraph_BloodEffectCurveComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
