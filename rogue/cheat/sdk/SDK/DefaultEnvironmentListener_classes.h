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

// BlueprintGeneratedClass DefaultEnvironmentListener.DefaultEnvironmentListener_C
// 0x0060 (FullSize[0x0128] - InheritedSize[0x00C8])
class UDefaultEnvironmentListener_C : public UEnvironmentListenerComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       LevelStateGroup;                                           // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FString, struct FName>                 LevelToStateGroupMap;                                      // 0x00D8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(42094);
		return ptr;
	}



	void OnEnvironmentChanged(const struct FName& OldEnvironmentTag);
	void Print_State(bool Print_to_Screen, bool Print_to_Log, const struct FLinearColor& Text_Color, float Duration);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_DefaultEnvironmentListener(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
