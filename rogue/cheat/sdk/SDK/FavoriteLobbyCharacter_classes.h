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

// BlueprintGeneratedClass FavoriteLobbyCharacter.FavoriteLobbyCharacter_C
// 0x0025 (FullSize[0x3ED8] - InheritedSize[0x3EB3])
class AFavoriteLobbyCharacter_C : public ALobbyMainCharacter_C
{
public:
	unsigned char                                      UnknownData_FW2E[0x5];                                     // 0x3EB3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x3EB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            WidgetNameplate;                                           // 0x3EC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               NeedsToSetNameplate;                                       // 0x3EC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_K6F8[0x7];                                     // 0x3EC9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UKSPlayerInfo*                               PendingPlayerInfo;                                         // 0x3ED0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::GetObjectCasted<UClass>(245202);
		return ptr;
	}



	void SetLobbyNameplate(class UKSPlayerInfo* playerinfo);
	void HideLobbyNameplate();
	void ShowLobbyNameplate();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_FavoriteLobbyCharacter(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
