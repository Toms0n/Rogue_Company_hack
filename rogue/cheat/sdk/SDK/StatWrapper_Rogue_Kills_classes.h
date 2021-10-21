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

// BlueprintGeneratedClass StatWrapper_Rogue_Kills.StatWrapper_Rogue_Kills_C
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UStatWrapper_Rogue_Kills_C : public UKSStatWrapper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(62858);
		return ptr;
	}



	struct FText GetStatValueText(class UObject* InWorldContextObject, class AKSPlayerState* InPlayerState, int DescriptorId, const struct FString& DescriptorString, bool ShouldOverwriteValue, float OverwriteValue);
	float GetStatValue(class UObject* InWorldContextObject, class AKSPlayerState* InPlayerState, int DescriptorId, const struct FString& DescriptorString, bool ShouldOverwriteValue, float OverwriteValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
