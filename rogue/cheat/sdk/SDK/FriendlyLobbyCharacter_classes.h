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

// BlueprintGeneratedClass FriendlyLobbyCharacter.FriendlyLobbyCharacter_C
// 0x0025 (FullSize[0x3ED8] - InheritedSize[0x3EB3])
class AFriendlyLobbyCharacter_C : public ALobbyMainCharacter_C
{
public:
	unsigned char                                      UnknownData_0ZC7[0x5];                                     // 0x3EB3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x3EB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            WidgetNameplate;                                           // 0x3EC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               NeedsToSetNameplate;                                       // 0x3EC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_E0MZ[0x7];                                     // 0x3EC9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSPlayerInfo*                               PendingPlayerInfo;                                         // 0x3ED0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(245214);
		return ptr;
	}



	void ReceiveTick(float DeltaSeconds);
	void HideLobbyNameplate();
	void ShowLobbyNameplate();
	void SetLobbyNameplate(class UKSPlayerInfo* playerinfo);
	void ExecuteUbergraph_FriendlyLobbyCharacter(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
