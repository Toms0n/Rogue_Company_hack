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

// BlueprintGeneratedClass MusicAudioPlayer.MusicAudioPlayer_C
// 0x0000 (FullSize[0x0500] - InheritedSize[0x0500])
class AMusicAudioPlayer_C : public AKSAudioPlayer
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(55177);
		return ptr;
	}



	void Append_String_to_Event_Array(const struct FString& AppendStringIn, TArray<struct FString>* EventNameArrayIn, TArray<struct FString>* EventNameArrayOut);
	void PrependStringToEventArray(const struct FString& PrependStringIn, TArray<struct FString>* EventNameArrayIn, TArray<struct FString>* EventNameArrayOut);
	TArray<struct FString> ComposeEventNamePriorityArray(const struct FString& EventName, class UKSAudioPlayerStateParameterData* CurrentStateParameters);
	TArray<struct FString> ComposeBankNamePriorityArray(const struct FString& BankPrefix, class UKSAudioPlayerStateParameterData* CurrentStateParameters);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
