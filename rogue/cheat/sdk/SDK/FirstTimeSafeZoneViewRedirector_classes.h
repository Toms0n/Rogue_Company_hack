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

// BlueprintGeneratedClass FirstTimeSafeZoneViewRedirector.FirstTimeSafeZoneViewRedirector_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UFirstTimeSafeZoneViewRedirector_C : public UKSViewRedirector_LocalSetting
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(60589);
		return ptr;
	}



	bool DoesLocalSettingApply(class APUMG_HUD* HUD);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
