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

// BlueprintGeneratedClass SettingsInfo_GlobalQuality.SettingsInfo_GlobalQuality_C
// 0x0018 (FullSize[0x0130] - InheritedSize[0x0118])
class USettingsInfo_GlobalQuality_C : public UKSSettingsInfo_Generic
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FName>                               QualityNames;                                              // 0x0120(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(44412);
		return ptr;
	}



	void InitializeValue();
	void ExecuteUbergraph_SettingsInfo_GlobalQuality(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
