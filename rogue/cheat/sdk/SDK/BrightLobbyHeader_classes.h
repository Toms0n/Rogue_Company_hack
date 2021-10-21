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

// WidgetBlueprintGeneratedClass BrightLobbyHeader.BrightLobbyHeader_C
// 0x0020 (FullSize[0x0538] - InheritedSize[0x0518])
class UBrightLobbyHeader_C : public UKSWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<PlatformUMG_EPUMG_LoginState>               LoggedOutStates;                                           // 0x0520(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UPUMG_LoginDataFactory*                      LoginDataFactory;                                          // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(55417);
		return ptr;
	}



	void StartShowSequence(const struct FName& FromRoute, const struct FName& ToRoute);
	void HandleLobbyStartMenuInputAction();
	void StartHideSequence(const struct FName& FromRoute, const struct FName& ToRoute);
	void ExecuteUbergraph_BrightLobbyHeader(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
